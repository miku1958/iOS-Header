//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface TSBonjourAddress : NSObject
{
    struct _DNSServiceRef_t *_resolveRef;
    struct _DNSServiceRef_t *_addressRef;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned char _ipv6Address[16];
    NSString *_name;
    NSString *_type;
    NSString *_domain;
    unsigned int _interfaceIndex;
    NSString *_hostTarget;
    unsigned short _port;
    BOOL _hasIPv4Address;
    BOOL _hasIPv6Address;
    unsigned int _ipv4Address;
    NSString *_interfaceName;
}

@property (nonatomic) BOOL hasIPv4Address; // @synthesize hasIPv4Address=_hasIPv4Address;
@property (nonatomic) BOOL hasIPv6Address; // @synthesize hasIPv6Address=_hasIPv6Address;
@property (readonly, copy, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
@property (nonatomic) unsigned int ipv4Address; // @synthesize ipv4Address=_ipv4Address;
@property (readonly, nonatomic) char *ipv6Address; // @dynamic ipv6Address;

- (void)dealloc;
- (id)init;
- (id)initWithServiceName:(id)arg1 type:(id)arg2 andDomain:(id)arg3 onInterfaceIndex:(unsigned int)arg4 andName:(id)arg5;
- (void)pokeIPv6Destination;
- (void)resolvedWithHostTarget:(const char *)arg1 port:(unsigned short)arg2;
- (BOOL)startAddressLookupWithError:(id *)arg1;
- (BOOL)startResolveWithError:(id *)arg1;
- (BOOL)stopAddressLookup;
- (BOOL)stopResolve;

@end

