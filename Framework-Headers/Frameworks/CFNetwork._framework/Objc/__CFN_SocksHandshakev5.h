//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/__CFN_SocksHandshake.h>

@class NSMutableSet, NSMutableString;

@interface __CFN_SocksHandshakev5 : __CFN_SocksHandshake
{
    BOOL _done;
    unsigned long long _state;
    int _numberOfAuthVersionSupported;
    NSMutableSet *_authMethods;
    unsigned char _addressType;
    int _destinationLen;
    NSMutableString *_domainName;
    unsigned char ipaddr[16];
    int _portLen;
    unsigned short _destPort;
    int _usernameLen;
    NSMutableString *_username;
    int _passwordLen;
    NSMutableString *_password;
}

- (void).cxx_destruct;
- (id)finish:(int)arg1;
- (BOOL)parse:(const char *)arg1 len:(long long)arg2 completion:(CDUnknownBlockType)arg3;

@end

