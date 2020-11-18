//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MailServices/NSXPCProxyCreating-Protocol.h>

@class MSXPCConnection, NSXPCInterface;

__attribute__((visibility("hidden")))
@interface _MSXPCRemoteProxy : NSObject <NSXPCProxyCreating>
{
    struct os_unfair_lock_s _selectorLock;
    struct __CFDictionary *_knownSelectors;
    MSXPCConnection *_connection;
    NSXPCInterface *_remoteInterface;
    CDUnknownBlockType _errorHandler;
    id ____nsxpc_remoteObjectProxy;
}

@property (strong, nonatomic, setter=___setNSXPCRemoteObjectProxy:) id ___nsxpc_remoteObjectProxy; // @synthesize ___nsxpc_remoteObjectProxy=____nsxpc_remoteObjectProxy;

- (BOOL)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initWithConnection:(id)arg1 interface:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;

@end
