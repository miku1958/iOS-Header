//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSXPCConnectionDelegate-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SFXPCClient : NSObject <NSXPCConnectionDelegate>
{
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSXPCConnection *_connection;
}

@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activate;
- (void)_invalidate;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3;
- (void)connectionEstablished;
- (void)dealloc;
- (id)exportedInterface;
- (void)getRemoteObjectProxyOnQueue:(CDUnknownBlockType)arg1;
- (id)init;
- (void)interrupted;
- (void)invalidated;
- (id)machServiceName;
- (void)onqueue_activate;
- (void)onqueue_connectionEstablished;
- (void)onqueue_connectionInterrupted;
- (void)onqueue_connectionInvalidated;
- (void)onqueue_ensureConnectionEstablished;
- (void)onqueue_ensureXPCStarted;
- (void)onqueue_getRemoteObjectProxyOnQueue:(CDUnknownBlockType)arg1;
- (void)onqueue_interrupted;
- (void)onqueue_invalidate;
- (void)onqueue_invalidated;
- (id)remoteObjectInterface;
- (BOOL)shouldEscapeXpcTryCatch;

@end
