

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for ms-dtyp.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __ms2Ddtyp_h__
#define __ms2Ddtyp_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_ms2Ddtyp_0000_0000 */
/* [local] */ 

typedef unsigned short wchar_t;

typedef void *ADCONNECTION_HANDLE;

typedef int BOOL;

typedef int *PBOOL;

typedef int *LPBOOL;

typedef unsigned char BYTE;

typedef unsigned char *PBYTE;

typedef unsigned char *LPBYTE;

typedef BYTE BOOLEAN;

typedef BYTE *PBOOLEAN;

typedef wchar_t WCHAR;

typedef wchar_t *PWCHAR;

typedef WCHAR *BSTR;

typedef unsigned char CHAR;

typedef unsigned char *PCHAR;

typedef double DOUBLE;

typedef unsigned long DWORD;

typedef unsigned long *PDWORD;

typedef unsigned long *LPDWORD;

typedef unsigned int DWORD32;

typedef unsigned __int64 DWORD64;

typedef unsigned __int64 *PDWORD64;

typedef unsigned __int64 ULONGLONG;

typedef ULONGLONG DWORDLONG;

typedef ULONGLONG *PDWORDLONG;

typedef unsigned long error_status_t;

typedef float FLOAT;

typedef unsigned char UCHAR;

typedef unsigned char *PUCHAR;

typedef short SHORT;

typedef void *HANDLE;

typedef DWORD HCALL;

typedef int INT;

typedef int *LPINT;

typedef signed char INT8;

typedef short INT16;

typedef int INT32;

typedef __int64 INT64;

typedef void *LDAP_UDP_HANDLE;

typedef const wchar_t *LMCSTR;

typedef WCHAR *LMSTR;

typedef long LONG;

typedef long *PLONG;

typedef long *LPLONG;

typedef __int64 LONGLONG;

typedef LONG HRESULT;

typedef /* [custom] */ __int3264 LONG_PTR;

typedef /* [custom] */ unsigned __int3264 ULONG_PTR;

typedef int LONG32;

typedef __int64 LONG64;

typedef __int64 *PLONG64;

typedef const unsigned char *LPCSTR;

typedef const void *LPCVOID;

typedef const wchar_t *LPCWSTR;

typedef unsigned char *PSTR;

typedef unsigned char *LPSTR;

typedef wchar_t *LPWSTR;

typedef wchar_t *PWSTR;

typedef DWORD NET_API_STATUS;

typedef long NTSTATUS;

typedef /* [context_handle] */ void *PCONTEXT_HANDLE;

typedef /* [ref] */ PCONTEXT_HANDLE *PPCONTEXT_HANDLE;

typedef unsigned __int64 QWORD;

typedef void *RPC_BINDING_HANDLE;

typedef UCHAR *STRING;

typedef unsigned int UINT;

typedef unsigned char UINT8;

typedef unsigned short UINT16;

typedef unsigned int UINT32;

typedef unsigned __int64 UINT64;

typedef unsigned long ULONG;

typedef unsigned long *PULONG;

typedef ULONG_PTR DWORD_PTR;

typedef ULONG_PTR SIZE_T;

typedef unsigned int ULONG32;

typedef unsigned __int64 ULONG64;

typedef wchar_t UNICODE;

typedef unsigned short USHORT;

typedef void VOID;

typedef void *PVOID;

typedef void *LPVOID;

typedef unsigned short WORD;

typedef unsigned short *PWORD;

typedef unsigned short *LPWORD;

typedef struct _FILETIME
    {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
    } 	FILETIME;

typedef struct _FILETIME *PFILETIME;

typedef struct _FILETIME *LPFILETIME;

typedef struct _GUID
    {
    unsigned long Data1;
    unsigned short Data2;
    unsigned short Data3;
    byte Data4[ 8 ];
    } 	GUID;

typedef struct _GUID UUID;

typedef struct _GUID *PGUID;

typedef struct _LARGE_INTEGER
    {
    __int64 QuadPart;
    } 	LARGE_INTEGER;

typedef struct _LARGE_INTEGER *PLARGE_INTEGER;

typedef struct _EVENT_DESCRIPTOR
    {
    USHORT Id;
    UCHAR Version;
    UCHAR Channel;
    UCHAR Level;
    UCHAR Opcode;
    USHORT Task;
    ULONGLONG Keyword;
    } 	EVENT_DESCRIPTOR;

typedef struct _EVENT_DESCRIPTOR *PEVENT_DESCRIPTOR;

typedef struct _EVENT_DESCRIPTOR *PCEVENT_DESCRIPTOR;

typedef struct _EVENT_HEADER
    {
    USHORT Size;
    USHORT HeaderType;
    USHORT Flags;
    USHORT EventProperty;
    ULONG ThreadId;
    ULONG ProcessId;
    LARGE_INTEGER TimeStamp;
    GUID ProviderId;
    EVENT_DESCRIPTOR EventDescriptor;
    union 
        {
        struct 
            {
            ULONG KernelTime;
            ULONG UserTime;
            } 	;
        ULONG64 ProcessorTime;
        } 	;
    GUID ActivityId;
    } 	EVENT_HEADER;

typedef struct _EVENT_HEADER *PEVENT_HEADER;

typedef DWORD LCID;

typedef struct _LUID
    {
    DWORD LowPart;
    LONG HighPart;
    } 	LUID;

typedef struct _LUID *PLUID;

typedef struct _MULTI_SZ
    {
    wchar_t *Value;
    DWORD nChar;
    } 	MULTI_SZ;

typedef struct _RPC_UNICODE_STRING
    {
    unsigned short Length;
    unsigned short MaximumLength;
    /* [length_is][size_is] */ WCHAR *Buffer;
    } 	RPC_UNICODE_STRING;

typedef struct _RPC_UNICODE_STRING *PRPC_UNICODE_STRING;

typedef struct _SERVER_INFO_100
    {
    DWORD sv100_platform_id;
    /* [string] */ wchar_t *sv100_name;
    } 	SERVER_INFO_100;

typedef struct _SERVER_INFO_100 *PSERVER_INFO_100;

typedef struct _SERVER_INFO_100 *LPSERVER_INFO_100;

typedef struct _SERVER_INFO_101
    {
    DWORD sv101_platform_id;
    /* [string] */ wchar_t *sv101_name;
    DWORD sv101_version_major;
    DWORD sv101_version_minor;
    DWORD sv101_version_type;
    /* [string] */ wchar_t *sv101_comment;
    } 	SERVER_INFO_101;

typedef struct _SERVER_INFO_101 *PSERVER_INFO_101;

typedef struct _SERVER_INFO_101 *LPSERVER_INFO_101;

typedef struct _SYSTEMTIME
    {
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
    } 	SYSTEMTIME;

typedef struct _SYSTEMTIME *PSYSTEMTIME;

typedef struct _UINT128
    {
    UINT64 lower;
    UINT64 upper;
    } 	UINT128;

typedef struct _UINT128 *PUINT128;

typedef struct _ULARGE_INTEGER
    {
    unsigned __int64 QuadPart;
    } 	ULARGE_INTEGER;

typedef struct _ULARGE_INTEGER *PULARGE_INTEGER;

typedef struct _RPC_SID_IDENTIFIER_AUTHORITY
    {
    byte Value[ 6 ];
    } 	RPC_SID_IDENTIFIER_AUTHORITY;

typedef DWORD ACCESS_MASK;

typedef ACCESS_MASK *PACCESS_MASK;

typedef struct _OBJECT_TYPE_LIST
    {
    WORD Level;
    ACCESS_MASK Remaining;
    GUID *ObjectType;
    } 	OBJECT_TYPE_LIST;

typedef struct _OBJECT_TYPE_LIST *POBJECT_TYPE_LIST;

typedef struct _ACE_HEADER
    {
    UCHAR AceType;
    UCHAR AceFlags;
    USHORT AceSize;
    } 	ACE_HEADER;

typedef struct _ACE_HEADER *PACE_HEADER;

typedef struct _SYSTEM_MANDATORY_LABEL_ACE
    {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    DWORD SidStart;
    } 	SYSTEM_MANDATORY_LABEL_ACE;

typedef struct _SYSTEM_MANDATORY_LABEL_ACE *PSYSTEM_MANDATORY_LABEL_ACE;

typedef struct _TOKEN_MANDATORY_POLICY
    {
    DWORD Policy;
    } 	TOKEN_MANDATORY_POLICY;

typedef struct _TOKEN_MANDATORY_POLICY *PTOKEN_MANDATORY_POLICY;

typedef struct _MANDATORY_INFORMATION
    {
    ACCESS_MASK AllowedAccess;
    BOOLEAN WriteAllowed;
    BOOLEAN ReadAllowed;
    BOOLEAN ExecuteAllowed;
    TOKEN_MANDATORY_POLICY MandatoryPolicy;
    } 	MANDATORY_INFORMATION;

typedef struct _MANDATORY_INFORMATION *PMANDATORY_INFORMATION;

typedef struct _CLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_RELATIVE
    {
    DWORD Length;
    BYTE OctetString[ 1 ];
    } 	CLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_RELATIVE;

typedef struct _CLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_RELATIVE *PCLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_RELATIVE;

typedef struct _CLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1
    {
    DWORD Name;
    WORD ValueType;
    WORD Reserved;
    DWORD Flags;
    DWORD ValueCount;
    union 
        {
        PLONG64 pInt64[ 1 ];
        PDWORD64 pUint64[ 1 ];
        PWSTR ppString[ 1 ];
        PCLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_RELATIVE pOctetString[ 1 ];
        } 	Values;
    } 	CLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1;

typedef struct _CLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1 *PCLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1;

typedef DWORD SECURITY_INFORMATION;

typedef DWORD *PSECURITY_INFORMATION;

typedef struct _RPC_SID
    {
    unsigned char Revision;
    unsigned char SubAuthorityCount;
    RPC_SID_IDENTIFIER_AUTHORITY IdentifierAuthority;
    /* [size_is] */ unsigned long SubAuthority[ 1 ];
    } 	RPC_SID;

typedef struct _RPC_SID *PRPC_SID;

typedef struct _RPC_SID *PSID;

typedef struct _ACL
    {
    unsigned char AclRevision;
    unsigned char Sbz1;
    unsigned short AclSize;
    unsigned short AceCount;
    unsigned short Sbz2;
    } 	ACL;

typedef struct _ACL *PACL;

typedef struct _SECURITY_DESCRIPTOR
    {
    UCHAR Revision;
    UCHAR Sbz1;
    USHORT Control;
    PSID Owner;
    PSID Group;
    PACL Sacl;
    PACL Dacl;
    } 	SECURITY_DESCRIPTOR;

typedef struct _SECURITY_DESCRIPTOR *PSECURITY_DESCRIPTOR;



extern RPC_IF_HANDLE __MIDL_itf_ms2Ddtyp_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ms2Ddtyp_0000_0000_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


