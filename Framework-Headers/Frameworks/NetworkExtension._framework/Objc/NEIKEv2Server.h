//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSObject-Protocol.h>

@class NSArray, NSMutableArray, NSString;
@protocol OS_dispatch_source;

@interface NEIKEv2Server : NSObject <NSObject>
{
    unsigned int _redirects;
    NSString *_serverAddress;
    NSMutableArray *_resolvedAddresses;
    NSString *_redirectedAddress;
    NSMutableArray *_resolvedRedirectedAddresses;
    NSString *_redirectedFromAddress;
    NSArray *_additionalIPv4ServerAddresses;
    NSArray *_additionalIPv6ServerAddresses;
    NSObject<OS_dispatch_source> *_redirectTimer;
    unsigned long long _nextCount;
}

@property (strong) NSArray *additionalIPv4ServerAddresses; // @synthesize additionalIPv4ServerAddresses=_additionalIPv4ServerAddresses;
@property (strong) NSArray *additionalIPv6ServerAddresses; // @synthesize additionalIPv6ServerAddresses=_additionalIPv6ServerAddresses;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property unsigned long long nextCount; // @synthesize nextCount=_nextCount;
@property (strong) NSObject<OS_dispatch_source> *redirectTimer; // @synthesize redirectTimer=_redirectTimer;
@property (strong) NSString *redirectedAddress; // @synthesize redirectedAddress=_redirectedAddress;
@property (strong) NSString *redirectedFromAddress; // @synthesize redirectedFromAddress=_redirectedFromAddress;
@property unsigned int redirects; // @synthesize redirects=_redirects;
@property (strong) NSMutableArray *resolvedAddresses; // @synthesize resolvedAddresses=_resolvedAddresses;
@property (strong) NSMutableArray *resolvedRedirectedAddresses; // @synthesize resolvedRedirectedAddresses=_resolvedRedirectedAddresses;
@property (strong) NSString *serverAddress; // @synthesize serverAddress=_serverAddress;
@property (readonly) Class superclass;

+ (id)getSynthesizedIPv6Address:(id)arg1 outgoingIf:(unsigned long long)arg2 nat64Prefixes:(CDStruct_c3d3b44c *)arg3 numNat64Prefixes:(int)arg4;
- (void).cxx_destruct;
- (BOOL)checkRedirectCount;
- (id)chooseNextServerOrRedirectedResolvedAddress;
- (void)dealloc;
- (id)getServerOrRedirectedAddress;
- (id)getViableServerAddressForPath:(id)arg1;
- (id)normalizeServerAddress:(id)arg1 defaultPath:(id)arg2;
- (void)setServerOrRedirectedResolvedAddress:(id)arg1 defaultPath:(id)arg2;
- (BOOL)startRedirectTimer;
- (void)stopRedirectTimer;

@end
