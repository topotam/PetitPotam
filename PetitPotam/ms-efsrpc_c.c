/* this ALWAYS GENERATED file contains the RPC client stubs */

 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for ms-efsrpc.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoraton level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#include <string.h>

#include "ms-efsrpc_h.h"

#define TYPE_FORMAT_STRING_SIZE   575                               
#define PROC_FORMAT_STRING_SIZE   1705                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _ms2Defsrpc_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } ms2Defsrpc_MIDL_TYPE_FORMAT_STRING;

typedef struct _ms2Defsrpc_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } ms2Defsrpc_MIDL_PROC_FORMAT_STRING;

typedef struct _ms2Defsrpc_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } ms2Defsrpc_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const ms2Defsrpc_MIDL_TYPE_FORMAT_STRING ms2Defsrpc__MIDL_TypeFormatString;
extern const ms2Defsrpc_MIDL_PROC_FORMAT_STRING ms2Defsrpc__MIDL_ProcFormatString;
extern const ms2Defsrpc_MIDL_EXPR_FORMAT_STRING ms2Defsrpc__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: efsrpc, ver. 1.0,
   GUID={0xc681d488,0xd850,0x11d0,{0x8c,0x52,0x00,0xc0,0x4f,0xd9,0x0f,0x7e}} */



static const RPC_CLIENT_INTERFACE efsrpc___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0xc681d488,0xd850,0x11d0,{0x8c,0x52,0x00,0xc0,0x4f,0xd9,0x0f,0x7e}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0x00000001
    };
RPC_IF_HANDLE efsrpc_v1_0_c_ifspec = (RPC_IF_HANDLE)& efsrpc___RpcClientInterface;

extern const MIDL_STUB_DESC efsrpc_StubDesc;

static RPC_BINDING_HANDLE efsrpc__MIDL_AutoBindHandle;


long EfsRpcOpenFileRaw( 
    /* [in] */ handle_t binding_h,
    /* [out] */ PEXIMPORT_CONTEXT_HANDLE *hContext,
    /* [string][in] */ wchar_t *FileName,
    /* [in] */ long Flags)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[0],
                  ( unsigned char * )&binding_h);
    return ( long  )_RetVal.Simple;
    
}


long EfsRpcReadFileRaw( 
    /* [in] */ PEXIMPORT_CONTEXT_HANDLE hContext,
    /* [out] */ EFS_EXIM_PIPE *EfsOutPipe)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[52],
                  ( unsigned char * )&hContext);
    return ( long  )_RetVal.Simple;
    
}


long EfsRpcWriteFileRaw( 
    /* [in] */ PEXIMPORT_CONTEXT_HANDLE hContext,
    /* [in] */ EFS_EXIM_PIPE *EfsInPipe)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[100],
                  ( unsigned char * )&hContext);
    return ( long  )_RetVal.Simple;
    
}


void EfsRpcCloseRaw( 
    /* [out][in] */ PEXIMPORT_CONTEXT_HANDLE *hContext)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[148],
                  ( unsigned char * )&hContext);
    
}


long EfsRpcEncryptFileSrv( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *FileName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[184],
                  ( unsigned char * )&binding_h);
    return ( long  )_RetVal.Simple;
    
}


long EfsRpcDecryptFileSrv( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *FileName,
    /* [in] */ unsigned long OpenFlag)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[224],
                  ( unsigned char * )&binding_h);
    return ( long  )_RetVal.Simple;
    
}


DWORD EfsRpcQueryUsersOnFile( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *FileName,
    /* [out] */ ENCRYPTION_CERTIFICATE_HASH_LIST **Users)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[270],
                  ( unsigned char * )&binding_h);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD EfsRpcQueryRecoveryAgents( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *FileName,
    /* [out] */ ENCRYPTION_CERTIFICATE_HASH_LIST **RecoveryAgents)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[316],
                  ( unsigned char * )&binding_h);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD EfsRpcRemoveUsersFromFile( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *FileName,
    /* [in] */ ENCRYPTION_CERTIFICATE_HASH_LIST *Users)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[362],
                  ( unsigned char * )&binding_h);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD EfsRpcAddUsersToFile( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *FileName,
    /* [in] */ ENCRYPTION_CERTIFICATE_LIST *EncryptionCertificates)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[408],
                  ( unsigned char * )&binding_h);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum10NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[454],
                  ( unsigned char * )&IDL_handle);
    
}


DWORD EfsRpcNotSupported( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *Reserved1,
    /* [string][in] */ wchar_t *Reserved2,
    /* [in] */ DWORD dwReserved1,
    /* [in] */ DWORD dwReserved2,
    /* [unique][in] */ EFS_RPC_BLOB *Reserved,
    /* [in] */ BOOL bReserved)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[482],
                  ( unsigned char * )&binding_h);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD EfsRpcFileKeyInfo( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *FileName,
    /* [in] */ DWORD InfoClass,
    /* [out] */ EFS_RPC_BLOB **KeyInfo)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[552],
                  ( unsigned char * )&binding_h);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD EfsRpcDuplicateEncryptionInfoFile( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *SrcFileName,
    /* [string][in] */ wchar_t *DestFileName,
    /* [in] */ DWORD dwCreationDisposition,
    /* [in] */ DWORD dwAttributes,
    /* [unique][in] */ EFS_RPC_BLOB *RelativeSD,
    /* [in] */ BOOL bInheritHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[604],
                  ( unsigned char * )&binding_h);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum14NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[674],
                  ( unsigned char * )&IDL_handle);
    
}


DWORD EfsRpcAddUsersToFileEx( 
    /* [in] */ handle_t binding_h,
    /* [in] */ DWORD dwFlags,
    /* [unique][in] */ EFS_RPC_BLOB *Reserved,
    /* [string][in] */ wchar_t *FileName,
    /* [in] */ ENCRYPTION_CERTIFICATE_LIST *EncryptionCertificates)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[702],
                  ( unsigned char * )&binding_h);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD EfsRpcFileKeyInfoEx( 
    /* [in] */ handle_t binding_h,
    /* [in] */ DWORD dwFileKeyInfoFlags,
    /* [unique][in] */ EFS_RPC_BLOB *Reserved,
    /* [string][in] */ wchar_t *FileName,
    /* [in] */ DWORD InfoClass,
    /* [out] */ EFS_RPC_BLOB **KeyInfo)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[760],
                  ( unsigned char * )&binding_h);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum17NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[824],
                  ( unsigned char * )&IDL_handle);
    
}


DWORD EfsRpcGetEncryptedFileMetadata( 
    /* [in] */ handle_t binding_h,
    /* [ref][string][in] */ wchar_t *FileName,
    /* [ref][out] */ EFS_RPC_BLOB **EfsStreamBlob)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[852],
                  ( unsigned char * )&binding_h);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD EfsRpcSetEncryptedFileMetadata( 
    /* [in] */ handle_t binding_h,
    /* [ref][string][in] */ wchar_t *FileName,
    /* [unique][in] */ EFS_RPC_BLOB *OldEfsStreamBlob,
    /* [ref][in] */ EFS_RPC_BLOB *NewEfsStreamBlob,
    /* [unique][in] */ ENCRYPTED_FILE_METADATA_SIGNATURE *NewEfsSignature)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[898],
                  ( unsigned char * )&binding_h);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD EfsRpcFlushEfsCache( 
    /* [in] */ handle_t binding_h)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[956],
                  ( unsigned char * )&binding_h);
    return ( DWORD  )_RetVal.Simple;
    
}


long EfsRpcEncryptFileExSrv( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *FileName,
    /* [unique][string][in] */ wchar_t *ProtectorDescriptor,
    /* [in] */ unsigned long Flags)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[990],
                  ( unsigned char * )&binding_h);
    return ( long  )_RetVal.Simple;
    
}


DWORD EfsRpcQueryProtectors( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *FileName,
    /* [out] */ PENCRYPTION_PROTECTOR_LIST **ppProtectorList)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[1042],
                  ( unsigned char * )&binding_h);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum23NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[1088],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum24NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[1116],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum25NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[1144],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum26NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[1172],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum27NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[1200],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum28NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[1228],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum29NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[1256],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum30NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[1284],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum31NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[1312],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum32NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[1340],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum33NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[1368],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum34NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[1396],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum35NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[1424],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum36NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[1452],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum37NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[1480],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum38NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[1508],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum39NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[1536],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum40NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[1564],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum41NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[1592],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum42NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[1620],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum43NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[1648],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum44NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsrpc__MIDL_ProcFormatString.Format[1676],
                  ( unsigned char * )&IDL_handle);
    
}


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const ms2Defsrpc_MIDL_PROC_FORMAT_STRING ms2Defsrpc__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure EfsRpcOpenFileRaw */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16 */	NdrFcShort( 0x40 ),	/* 64 */
/* 18 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 20 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hContext */

/* 28 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 30 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 32 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter FileName */

/* 34 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 36 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 38 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter Flags */

/* 40 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 42 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 44 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 46 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 48 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 50 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcReadFileRaw */

/* 52 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 54 */	NdrFcLong( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x1 ),	/* 1 */
/* 60 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 62 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 64 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 66 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 68 */	NdrFcShort( 0x24 ),	/* 36 */
/* 70 */	NdrFcShort( 0x8 ),	/* 8 */
/* 72 */	0x4c,		/* Oi2 Flags:  has return, has pipes, has ext, */
			0x3,		/* 3 */
/* 74 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 76 */	NdrFcShort( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x0 ),	/* 0 */
/* 80 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hContext */

/* 82 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 84 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 86 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter EfsOutPipe */

/* 88 */	NdrFcShort( 0x4114 ),	/* Flags:  pipe, out, simple ref, srv alloc size=16 */
/* 90 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 92 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Return value */

/* 94 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 96 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 98 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcWriteFileRaw */

/* 100 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 102 */	NdrFcLong( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0x2 ),	/* 2 */
/* 108 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 110 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 112 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 114 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 116 */	NdrFcShort( 0x24 ),	/* 36 */
/* 118 */	NdrFcShort( 0x8 ),	/* 8 */
/* 120 */	0x4c,		/* Oi2 Flags:  has return, has pipes, has ext, */
			0x3,		/* 3 */
/* 122 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hContext */

/* 130 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 132 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 134 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter EfsInPipe */

/* 136 */	NdrFcShort( 0x10c ),	/* Flags:  pipe, in, simple ref, */
/* 138 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 140 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 142 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 144 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 146 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcCloseRaw */

/* 148 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 150 */	NdrFcLong( 0x0 ),	/* 0 */
/* 154 */	NdrFcShort( 0x3 ),	/* 3 */
/* 156 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 158 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 160 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 162 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 164 */	NdrFcShort( 0x38 ),	/* 56 */
/* 166 */	NdrFcShort( 0x38 ),	/* 56 */
/* 168 */	0x40,		/* Oi2 Flags:  has ext, */
			0x1,		/* 1 */
/* 170 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hContext */

/* 178 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 180 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 182 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Procedure EfsRpcEncryptFileSrv */

/* 184 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 186 */	NdrFcLong( 0x0 ),	/* 0 */
/* 190 */	NdrFcShort( 0x4 ),	/* 4 */
/* 192 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 194 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 196 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 200 */	NdrFcShort( 0x8 ),	/* 8 */
/* 202 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 204 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 212 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 214 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 216 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 218 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 220 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcDecryptFileSrv */

/* 224 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 226 */	NdrFcLong( 0x0 ),	/* 0 */
/* 230 */	NdrFcShort( 0x5 ),	/* 5 */
/* 232 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 234 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 236 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 240 */	NdrFcShort( 0x8 ),	/* 8 */
/* 242 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 244 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 252 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 254 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 256 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter OpenFlag */

/* 258 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 260 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 264 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 266 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcQueryUsersOnFile */

/* 270 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 272 */	NdrFcLong( 0x0 ),	/* 0 */
/* 276 */	NdrFcShort( 0x6 ),	/* 6 */
/* 278 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 280 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 282 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 286 */	NdrFcShort( 0x8 ),	/* 8 */
/* 288 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 290 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 292 */	NdrFcShort( 0x1 ),	/* 1 */
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 296 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 298 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 300 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 302 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter Users */

/* 304 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 306 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 308 */	NdrFcShort( 0x36 ),	/* Type Offset=54 */

	/* Return value */

/* 310 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 312 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcQueryRecoveryAgents */

/* 316 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 318 */	NdrFcLong( 0x0 ),	/* 0 */
/* 322 */	NdrFcShort( 0x7 ),	/* 7 */
/* 324 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 326 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 328 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 332 */	NdrFcShort( 0x8 ),	/* 8 */
/* 334 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 336 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 338 */	NdrFcShort( 0x1 ),	/* 1 */
/* 340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 342 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 344 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 346 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 348 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter RecoveryAgents */

/* 350 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 352 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 354 */	NdrFcShort( 0x36 ),	/* Type Offset=54 */

	/* Return value */

/* 356 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 358 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcRemoveUsersFromFile */

/* 362 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 364 */	NdrFcLong( 0x0 ),	/* 0 */
/* 368 */	NdrFcShort( 0x8 ),	/* 8 */
/* 370 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 372 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 374 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 378 */	NdrFcShort( 0x8 ),	/* 8 */
/* 380 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 382 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 386 */	NdrFcShort( 0x1 ),	/* 1 */
/* 388 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 390 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 392 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 394 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter Users */

/* 396 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 398 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 400 */	NdrFcShort( 0xe4 ),	/* Type Offset=228 */

	/* Return value */

/* 402 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 404 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcAddUsersToFile */

/* 408 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 414 */	NdrFcShort( 0x9 ),	/* 9 */
/* 416 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 418 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 420 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 424 */	NdrFcShort( 0x8 ),	/* 8 */
/* 426 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 428 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 432 */	NdrFcShort( 0x1 ),	/* 1 */
/* 434 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 436 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 438 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 440 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter EncryptionCertificates */

/* 442 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 444 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 446 */	NdrFcShort( 0x172 ),	/* Type Offset=370 */

	/* Return value */

/* 448 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 450 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum10NotUsedOnWire */

/* 454 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 460 */	NdrFcShort( 0xa ),	/* 10 */
/* 462 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 464 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 466 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 472 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 474 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 480 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure EfsRpcNotSupported */

/* 482 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 484 */	NdrFcLong( 0x0 ),	/* 0 */
/* 488 */	NdrFcShort( 0xb ),	/* 11 */
/* 490 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 492 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 494 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 496 */	NdrFcShort( 0x18 ),	/* 24 */
/* 498 */	NdrFcShort( 0x8 ),	/* 8 */
/* 500 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 502 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 506 */	NdrFcShort( 0x1 ),	/* 1 */
/* 508 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Reserved1 */

/* 510 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 512 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 514 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter Reserved2 */

/* 516 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 518 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 520 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter dwReserved1 */

/* 522 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 524 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwReserved2 */

/* 528 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 530 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Reserved */

/* 534 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 536 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 538 */	NdrFcShort( 0x184 ),	/* Type Offset=388 */

	/* Parameter bReserved */

/* 540 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 542 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 544 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 546 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 548 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcFileKeyInfo */

/* 552 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 554 */	NdrFcLong( 0x0 ),	/* 0 */
/* 558 */	NdrFcShort( 0xc ),	/* 12 */
/* 560 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 562 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 564 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 566 */	NdrFcShort( 0x8 ),	/* 8 */
/* 568 */	NdrFcShort( 0x8 ),	/* 8 */
/* 570 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 572 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 574 */	NdrFcShort( 0x1 ),	/* 1 */
/* 576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 578 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 580 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 582 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 584 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter InfoClass */

/* 586 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 588 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter KeyInfo */

/* 592 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 594 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 596 */	NdrFcShort( 0x1a4 ),	/* Type Offset=420 */

	/* Return value */

/* 598 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 600 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcDuplicateEncryptionInfoFile */

/* 604 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 606 */	NdrFcLong( 0x0 ),	/* 0 */
/* 610 */	NdrFcShort( 0xd ),	/* 13 */
/* 612 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 614 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 616 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 618 */	NdrFcShort( 0x18 ),	/* 24 */
/* 620 */	NdrFcShort( 0x8 ),	/* 8 */
/* 622 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 624 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 628 */	NdrFcShort( 0x1 ),	/* 1 */
/* 630 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SrcFileName */

/* 632 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 634 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 636 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter DestFileName */

/* 638 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 640 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 642 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter dwCreationDisposition */

/* 644 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 646 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwAttributes */

/* 650 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 652 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 654 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter RelativeSD */

/* 656 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 658 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 660 */	NdrFcShort( 0x184 ),	/* Type Offset=388 */

	/* Parameter bInheritHandle */

/* 662 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 664 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 668 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 670 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum14NotUsedOnWire */

/* 674 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 676 */	NdrFcLong( 0x0 ),	/* 0 */
/* 680 */	NdrFcShort( 0xe ),	/* 14 */
/* 682 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 684 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 686 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 692 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 694 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 700 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure EfsRpcAddUsersToFileEx */

/* 702 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 708 */	NdrFcShort( 0xf ),	/* 15 */
/* 710 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 712 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 714 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 716 */	NdrFcShort( 0x8 ),	/* 8 */
/* 718 */	NdrFcShort( 0x8 ),	/* 8 */
/* 720 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 722 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 726 */	NdrFcShort( 0x1 ),	/* 1 */
/* 728 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwFlags */

/* 730 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 732 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 734 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Reserved */

/* 736 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 738 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 740 */	NdrFcShort( 0x184 ),	/* Type Offset=388 */

	/* Parameter FileName */

/* 742 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 744 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 746 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter EncryptionCertificates */

/* 748 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 750 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 752 */	NdrFcShort( 0x172 ),	/* Type Offset=370 */

	/* Return value */

/* 754 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 756 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 758 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcFileKeyInfoEx */

/* 760 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 762 */	NdrFcLong( 0x0 ),	/* 0 */
/* 766 */	NdrFcShort( 0x10 ),	/* 16 */
/* 768 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 770 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 772 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 774 */	NdrFcShort( 0x10 ),	/* 16 */
/* 776 */	NdrFcShort( 0x8 ),	/* 8 */
/* 778 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 780 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 782 */	NdrFcShort( 0x1 ),	/* 1 */
/* 784 */	NdrFcShort( 0x1 ),	/* 1 */
/* 786 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwFileKeyInfoFlags */

/* 788 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 790 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Reserved */

/* 794 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 796 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 798 */	NdrFcShort( 0x184 ),	/* Type Offset=388 */

	/* Parameter FileName */

/* 800 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 802 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 804 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter InfoClass */

/* 806 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 808 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter KeyInfo */

/* 812 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 814 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 816 */	NdrFcShort( 0x1a4 ),	/* Type Offset=420 */

	/* Return value */

/* 818 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 820 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 822 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum17NotUsedOnWire */

/* 824 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 826 */	NdrFcLong( 0x0 ),	/* 0 */
/* 830 */	NdrFcShort( 0x11 ),	/* 17 */
/* 832 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 834 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 836 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 842 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 844 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 850 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure EfsRpcGetEncryptedFileMetadata */

/* 852 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 854 */	NdrFcLong( 0x0 ),	/* 0 */
/* 858 */	NdrFcShort( 0x12 ),	/* 18 */
/* 860 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 862 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 864 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 868 */	NdrFcShort( 0x8 ),	/* 8 */
/* 870 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 872 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 874 */	NdrFcShort( 0x1 ),	/* 1 */
/* 876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 878 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 880 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 882 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 884 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter EfsStreamBlob */

/* 886 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 888 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 890 */	NdrFcShort( 0x1a4 ),	/* Type Offset=420 */

	/* Return value */

/* 892 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 894 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 896 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcSetEncryptedFileMetadata */

/* 898 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 900 */	NdrFcLong( 0x0 ),	/* 0 */
/* 904 */	NdrFcShort( 0x13 ),	/* 19 */
/* 906 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 908 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 910 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 914 */	NdrFcShort( 0x8 ),	/* 8 */
/* 916 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 918 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 922 */	NdrFcShort( 0x1 ),	/* 1 */
/* 924 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 926 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 928 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 930 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter OldEfsStreamBlob */

/* 932 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 934 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 936 */	NdrFcShort( 0x184 ),	/* Type Offset=388 */

	/* Parameter NewEfsStreamBlob */

/* 938 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 940 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 942 */	NdrFcShort( 0x192 ),	/* Type Offset=402 */

	/* Parameter NewEfsSignature */

/* 944 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 946 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 948 */	NdrFcShort( 0x1ac ),	/* Type Offset=428 */

	/* Return value */

/* 950 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 952 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 954 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcFlushEfsCache */

/* 956 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 958 */	NdrFcLong( 0x0 ),	/* 0 */
/* 962 */	NdrFcShort( 0x14 ),	/* 20 */
/* 964 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 966 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 968 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0x8 ),	/* 8 */
/* 974 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 976 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 982 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 984 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 986 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcEncryptFileExSrv */

/* 990 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 992 */	NdrFcLong( 0x0 ),	/* 0 */
/* 996 */	NdrFcShort( 0x15 ),	/* 21 */
/* 998 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1000 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1002 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1004 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1006 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1008 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1010 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1016 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 1018 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1020 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1022 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter ProtectorDescriptor */

/* 1024 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1026 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1028 */	NdrFcShort( 0x1da ),	/* Type Offset=474 */

	/* Parameter Flags */

/* 1030 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1032 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1034 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1036 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1038 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1040 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcQueryProtectors */

/* 1042 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1044 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1048 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1050 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1052 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1054 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1058 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1060 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1062 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1064 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1068 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 1070 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1072 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1074 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter ppProtectorList */

/* 1076 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1078 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1080 */	NdrFcShort( 0x1de ),	/* Type Offset=478 */

	/* Return value */

/* 1082 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1084 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1086 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum23NotUsedOnWire */

/* 1088 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1090 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1094 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1096 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1098 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1100 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1106 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1108 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1114 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum24NotUsedOnWire */

/* 1116 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1118 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1122 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1124 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1126 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1128 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1134 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1136 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum25NotUsedOnWire */

/* 1144 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1150 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1152 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1154 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1156 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1162 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1164 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1170 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum26NotUsedOnWire */

/* 1172 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1174 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1178 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1180 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1182 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1184 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1190 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1192 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1198 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum27NotUsedOnWire */

/* 1200 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1202 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1206 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1208 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1210 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1212 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1218 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1220 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1226 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum28NotUsedOnWire */

/* 1228 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1234 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1236 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1238 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1240 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1246 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1248 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1254 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum29NotUsedOnWire */

/* 1256 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1258 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1262 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1264 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1266 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1268 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1274 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1276 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1282 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum30NotUsedOnWire */

/* 1284 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1286 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1290 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1292 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1294 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1296 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1302 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1304 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1310 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum31NotUsedOnWire */

/* 1312 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1318 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1320 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1322 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1324 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1330 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1332 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1338 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum32NotUsedOnWire */

/* 1340 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1346 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1348 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1350 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1352 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1358 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1360 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1366 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum33NotUsedOnWire */

/* 1368 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1370 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1374 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1376 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1378 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1380 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1386 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1388 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1394 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum34NotUsedOnWire */

/* 1396 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1398 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1402 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1404 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1406 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1408 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1414 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1416 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1422 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum35NotUsedOnWire */

/* 1424 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1426 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1430 */	NdrFcShort( 0x23 ),	/* 35 */
/* 1432 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1434 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1436 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1442 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1444 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1450 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum36NotUsedOnWire */

/* 1452 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1454 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1458 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1460 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1462 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1464 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1470 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1472 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum37NotUsedOnWire */

/* 1480 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1482 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1486 */	NdrFcShort( 0x25 ),	/* 37 */
/* 1488 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1490 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1492 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1498 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1500 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1506 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum38NotUsedOnWire */

/* 1508 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1510 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1514 */	NdrFcShort( 0x26 ),	/* 38 */
/* 1516 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1518 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1520 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1526 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1528 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1534 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum39NotUsedOnWire */

/* 1536 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1538 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1542 */	NdrFcShort( 0x27 ),	/* 39 */
/* 1544 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1546 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1548 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1554 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1556 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1562 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum40NotUsedOnWire */

/* 1564 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1566 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1570 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1572 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1574 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1576 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1582 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1584 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1590 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum41NotUsedOnWire */

/* 1592 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1594 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1598 */	NdrFcShort( 0x29 ),	/* 41 */
/* 1600 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1602 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1604 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1610 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1612 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1618 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum42NotUsedOnWire */

/* 1620 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1622 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1626 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1628 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1630 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1632 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1638 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1640 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1646 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum43NotUsedOnWire */

/* 1648 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1654 */	NdrFcShort( 0x2b ),	/* 43 */
/* 1656 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1658 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1660 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1666 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1668 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1674 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum44NotUsedOnWire */

/* 1676 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1678 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1682 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1684 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1686 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1688 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1694 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1696 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1702 */	NdrFcShort( 0x0 ),	/* 0 */

			0x0
        }
    };

static const ms2Defsrpc_MIDL_TYPE_FORMAT_STRING ms2Defsrpc__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  4 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6) */
/*  6 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/*  8 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 10 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 12 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 14 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 16 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 18 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 20 */	NdrFcShort( 0x4 ),	/* Offset= 4 (24) */
/* 22 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 24 */	0xb5,		/* FC_PIPE */
			0x0,		/* 0 */
/* 26 */	NdrFcShort( 0xfffc ),	/* Offset= -4 (22) */
/* 28 */	NdrFcShort( 0x1 ),	/* 1 */
/* 30 */	NdrFcShort( 0x1 ),	/* 1 */
/* 32 */	
			0x11, 0x0,	/* FC_RP */
/* 34 */	NdrFcShort( 0x4 ),	/* Offset= 4 (38) */
/* 36 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 38 */	0xb5,		/* FC_PIPE */
			0x0,		/* 0 */
/* 40 */	NdrFcShort( 0xfffc ),	/* Offset= -4 (36) */
/* 42 */	NdrFcShort( 0x1 ),	/* 1 */
/* 44 */	NdrFcShort( 0x1 ),	/* 1 */
/* 46 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 48 */	NdrFcShort( 0x2 ),	/* Offset= 2 (50) */
/* 50 */	0x30,		/* FC_BIND_CONTEXT */
			0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
/* 52 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 54 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 56 */	NdrFcShort( 0x2 ),	/* Offset= 2 (58) */
/* 58 */	
			0x12, 0x0,	/* FC_UP */
/* 60 */	NdrFcShort( 0xa8 ),	/* Offset= 168 (228) */
/* 62 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 64 */	NdrFcLong( 0x0 ),	/* 0 */
/* 68 */	NdrFcLong( 0x1f4 ),	/* 500 */
/* 72 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 74 */	NdrFcShort( 0x6 ),	/* 6 */
/* 76 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 78 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 80 */	NdrFcShort( 0x6 ),	/* 6 */
/* 82 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 84 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (72) */
/* 86 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 88 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 90 */	NdrFcShort( 0x4 ),	/* 4 */
/* 92 */	0x4,		/* Corr desc: FC_USMALL */
			0x0,		/*  */
/* 94 */	NdrFcShort( 0xfff9 ),	/* -7 */
/* 96 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 98 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 100 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 102 */	NdrFcShort( 0x8 ),	/* 8 */
/* 104 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (88) */
/* 106 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 108 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 110 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (78) */
/* 112 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 114 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 120 */	NdrFcLong( 0x64 ),	/* 100 */
/* 124 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 126 */	NdrFcShort( 0x1 ),	/* 1 */
/* 128 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 132 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 134 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 136 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 138 */	NdrFcShort( 0x8 ),	/* 8 */
/* 140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 142 */	NdrFcShort( 0x8 ),	/* Offset= 8 (150) */
/* 144 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 146 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (114) */
/* 148 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 150 */	
			0x12, 0x0,	/* FC_UP */
/* 152 */	NdrFcShort( 0xffe4 ),	/* Offset= -28 (124) */
/* 154 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 156 */	NdrFcShort( 0x10 ),	/* 16 */
/* 158 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 160 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 162 */	NdrFcShort( 0x4 ),	/* 4 */
/* 164 */	NdrFcShort( 0x4 ),	/* 4 */
/* 166 */	0x12, 0x0,	/* FC_UP */
/* 168 */	NdrFcShort( 0xffbc ),	/* Offset= -68 (100) */
/* 170 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 172 */	NdrFcShort( 0x8 ),	/* 8 */
/* 174 */	NdrFcShort( 0x8 ),	/* 8 */
/* 176 */	0x12, 0x0,	/* FC_UP */
/* 178 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (136) */
/* 180 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 182 */	NdrFcShort( 0xc ),	/* 12 */
/* 184 */	NdrFcShort( 0xc ),	/* 12 */
/* 186 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 188 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 190 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 192 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 194 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 196 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 198 */	NdrFcShort( 0x4 ),	/* 4 */
/* 200 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 204 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 206 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 208 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 210 */	NdrFcShort( 0x4 ),	/* 4 */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 214 */	NdrFcShort( 0x1 ),	/* 1 */
/* 216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 220 */	0x12, 0x0,	/* FC_UP */
/* 222 */	NdrFcShort( 0xffbc ),	/* Offset= -68 (154) */
/* 224 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 226 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 228 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 230 */	NdrFcShort( 0x8 ),	/* 8 */
/* 232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x8 ),	/* Offset= 8 (242) */
/* 236 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 238 */	NdrFcShort( 0xff50 ),	/* Offset= -176 (62) */
/* 240 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 242 */	
			0x12, 0x0,	/* FC_UP */
/* 244 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (196) */
/* 246 */	
			0x11, 0x0,	/* FC_RP */
/* 248 */	NdrFcShort( 0xffec ),	/* Offset= -20 (228) */
/* 250 */	
			0x11, 0x0,	/* FC_RP */
/* 252 */	NdrFcShort( 0x76 ),	/* Offset= 118 (370) */
/* 254 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 256 */	NdrFcLong( 0x0 ),	/* 0 */
/* 260 */	NdrFcLong( 0x1f4 ),	/* 500 */
/* 264 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 266 */	NdrFcLong( 0x0 ),	/* 0 */
/* 270 */	NdrFcLong( 0x8000 ),	/* 32768 */
/* 274 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 276 */	NdrFcShort( 0x1 ),	/* 1 */
/* 278 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 280 */	NdrFcShort( 0x4 ),	/* 4 */
/* 282 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 284 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 286 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 288 */	NdrFcShort( 0xc ),	/* 12 */
/* 290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 292 */	NdrFcShort( 0xa ),	/* Offset= 10 (302) */
/* 294 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 296 */	0x0,		/* 0 */
			NdrFcShort( 0xffdf ),	/* Offset= -33 (264) */
			0x36,		/* FC_POINTER */
/* 300 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 302 */	
			0x12, 0x0,	/* FC_UP */
/* 304 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (274) */
/* 306 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 308 */	NdrFcShort( 0xc ),	/* 12 */
/* 310 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 312 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 314 */	NdrFcShort( 0x4 ),	/* 4 */
/* 316 */	NdrFcShort( 0x4 ),	/* 4 */
/* 318 */	0x12, 0x0,	/* FC_UP */
/* 320 */	NdrFcShort( 0xff24 ),	/* Offset= -220 (100) */
/* 322 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 324 */	NdrFcShort( 0x8 ),	/* 8 */
/* 326 */	NdrFcShort( 0x8 ),	/* 8 */
/* 328 */	0x12, 0x0,	/* FC_UP */
/* 330 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (286) */
/* 332 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 334 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 336 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 338 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 340 */	NdrFcShort( 0x4 ),	/* 4 */
/* 342 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 346 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 348 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 350 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 352 */	NdrFcShort( 0x4 ),	/* 4 */
/* 354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 356 */	NdrFcShort( 0x1 ),	/* 1 */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 362 */	0x12, 0x0,	/* FC_UP */
/* 364 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (306) */
/* 366 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 368 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 370 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 372 */	NdrFcShort( 0x8 ),	/* 8 */
/* 374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 376 */	NdrFcShort( 0x8 ),	/* Offset= 8 (384) */
/* 378 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 380 */	NdrFcShort( 0xff82 ),	/* Offset= -126 (254) */
/* 382 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 384 */	
			0x12, 0x0,	/* FC_UP */
/* 386 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (338) */
/* 388 */	
			0x12, 0x0,	/* FC_UP */
/* 390 */	NdrFcShort( 0xc ),	/* Offset= 12 (402) */
/* 392 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 394 */	NdrFcLong( 0x0 ),	/* 0 */
/* 398 */	NdrFcLong( 0x41000 ),	/* 266240 */
/* 402 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 404 */	NdrFcShort( 0x8 ),	/* 8 */
/* 406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 408 */	NdrFcShort( 0x8 ),	/* Offset= 8 (416) */
/* 410 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 412 */	NdrFcShort( 0xffec ),	/* Offset= -20 (392) */
/* 414 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 416 */	
			0x12, 0x0,	/* FC_UP */
/* 418 */	NdrFcShort( 0xfeda ),	/* Offset= -294 (124) */
/* 420 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 422 */	NdrFcShort( 0xffde ),	/* Offset= -34 (388) */
/* 424 */	
			0x11, 0x0,	/* FC_RP */
/* 426 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (402) */
/* 428 */	
			0x12, 0x0,	/* FC_UP */
/* 430 */	NdrFcShort( 0x2 ),	/* Offset= 2 (432) */
/* 432 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 434 */	NdrFcShort( 0x10 ),	/* 16 */
/* 436 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 438 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 440 */	NdrFcShort( 0x4 ),	/* 4 */
/* 442 */	NdrFcShort( 0x4 ),	/* 4 */
/* 444 */	0x12, 0x0,	/* FC_UP */
/* 446 */	NdrFcShort( 0xff26 ),	/* Offset= -218 (228) */
/* 448 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 450 */	NdrFcShort( 0x8 ),	/* 8 */
/* 452 */	NdrFcShort( 0x8 ),	/* 8 */
/* 454 */	0x12, 0x0,	/* FC_UP */
/* 456 */	NdrFcShort( 0xff6a ),	/* Offset= -150 (306) */
/* 458 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 460 */	NdrFcShort( 0xc ),	/* 12 */
/* 462 */	NdrFcShort( 0xc ),	/* 12 */
/* 464 */	0x12, 0x0,	/* FC_UP */
/* 466 */	NdrFcShort( 0xffc0 ),	/* Offset= -64 (402) */
/* 468 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 470 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 472 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 474 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 476 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 478 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 480 */	NdrFcShort( 0x2 ),	/* Offset= 2 (482) */
/* 482 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 484 */	NdrFcShort( 0x2 ),	/* Offset= 2 (486) */
/* 486 */	
			0x12, 0x0,	/* FC_UP */
/* 488 */	NdrFcShort( 0x42 ),	/* Offset= 66 (554) */
/* 490 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 492 */	NdrFcShort( 0xc ),	/* 12 */
/* 494 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 496 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 498 */	NdrFcShort( 0x4 ),	/* 4 */
/* 500 */	NdrFcShort( 0x4 ),	/* 4 */
/* 502 */	0x12, 0x0,	/* FC_UP */
/* 504 */	NdrFcShort( 0xfe6c ),	/* Offset= -404 (100) */
/* 506 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 508 */	NdrFcShort( 0x8 ),	/* 8 */
/* 510 */	NdrFcShort( 0x8 ),	/* 8 */
/* 512 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 514 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 516 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 518 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 520 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 522 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 524 */	NdrFcShort( 0x4 ),	/* 4 */
/* 526 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 530 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 532 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 534 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 536 */	NdrFcShort( 0x4 ),	/* 4 */
/* 538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 540 */	NdrFcShort( 0x1 ),	/* 1 */
/* 542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 546 */	0x12, 0x0,	/* FC_UP */
/* 548 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (490) */
/* 550 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 552 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 554 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 556 */	NdrFcShort( 0x8 ),	/* 8 */
/* 558 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 560 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 562 */	NdrFcShort( 0x4 ),	/* 4 */
/* 564 */	NdrFcShort( 0x4 ),	/* 4 */
/* 566 */	0x12, 0x0,	/* FC_UP */
/* 568 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (522) */
/* 570 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 572 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const unsigned short efsrpc_FormatStringOffsetTable[] =
    {
    0,
    52,
    100,
    148,
    184,
    224,
    270,
    316,
    362,
    408,
    454,
    482,
    552,
    604,
    674,
    702,
    760,
    824,
    852,
    898,
    956,
    990,
    1042,
    1088,
    1116,
    1144,
    1172,
    1200,
    1228,
    1256,
    1284,
    1312,
    1340,
    1368,
    1396,
    1424,
    1452,
    1480,
    1508,
    1536,
    1564,
    1592,
    1620,
    1648,
    1676
    };


static const MIDL_STUB_DESC efsrpc_StubDesc = 
    {
    (void *)& efsrpc___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &efsrpc__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    ms2Defsrpc__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

