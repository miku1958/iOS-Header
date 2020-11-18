//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/EFLoggable-Protocol.h>
#import <Email/EMXPCProxyCreating-Protocol.h>

@class NSMutableArray, NSString, Protocol;
@protocol OS_dispatch_queue;

@interface EMRemoteConnection : NSObject <EFLoggable, EMXPCProxyCreating>
{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _generator;
    Protocol *_protocol;
    struct __CFDictionary *_knownSelectors;
    NSMutableArray *_resetHandlers;
    NSMutableArray *_recoveryHandlers;
    NSMutableArray *_pendingReattempts;
    id _currentProxy;
    struct os_unfair_lock_s _lock;
    struct os_unfair_lock_s _proxyLock;
    BOOL _waitingForRecovery;
    BOOL _preferImmediateRecovery;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property BOOL preferImmediateRecovery; // @synthesize preferImmediateRecovery=_preferImmediateRecovery;
@property (readonly) Protocol *protocol; // @synthesize protocol=_protocol;
@property (readonly) id reattemptingRemoteObjectProxy;
@property (readonly) id remoteObjectProxy;
@property (readonly) Class superclass;

+ (id)log;
- (void).cxx_destruct;
- (id)_methodSignatureForRemoteSelector:(SEL)arg1;
- (void)_reattemptInvocation:(id)arg1 withProxy:(id)arg2 originalError:(id)arg3;
- (BOOL)_respondsToRemoteSelector:(SEL)arg1;
- (void)_sendInvocation:(id)arg1 withProxy:(id)arg2;
- (void)addRecoveryHandler:(CDUnknownBlockType)arg1;
- (void)addResetHandler:(CDUnknownBlockType)arg1;
- (id)initWithProtocol:(id)arg1 proxyGenerator:(CDUnknownBlockType)arg2;
- (id)proxy;
- (id)proxyCreator:(id *)arg1;
- (id)reattemptingRemoteObjectProxyWithReattemptHandler:(CDUnknownBlockType)arg1;
- (void)recover;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)reset;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;

@end
