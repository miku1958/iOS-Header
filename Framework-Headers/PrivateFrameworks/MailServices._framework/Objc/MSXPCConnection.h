//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSXPCConnection.h>

@class MFFuture, NSLock, NSObject, NSXPCInterface, Protocol;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MSXPCConnection : NSXPCConnection
{
    NSLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    MFFuture *_connectionFuture;
    NSXPCInterface *_remoteObjectInterface;
    NSXPCInterface *_exportedInterface;
    id _exportedObject;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    long long _resumeCount;
    unsigned int _state;
    BOOL _shouldLaunchMobileMail;
    Protocol *_protocol;
}

@property (readonly, strong, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
@property (nonatomic) BOOL shouldLaunchMobileMail; // @synthesize shouldLaunchMobileMail=_shouldLaunchMobileMail;

- (id)_connection;
- (id)_connectionForFuture:(id)arg1;
- (void)_finishFuture:(id)arg1 withConnection:(id)arg2 error:(id)arg3;
- (void)_invalidateFuture:(id)arg1;
- (void)_invokeInterruptionHandlerForFuture:(id)arg1;
- (CDUnknownBlockType)_nts_wrappedInterruptionHandler;
- (void)_queue_invokeInvalidationHandler;
- (void)_sendInvocation:(id)arg1 remoteInterface:(id)arg2 remoteProxy:(id)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (int)auditSessionIdentifier;
- (void)dealloc;
- (id)description;
- (unsigned int)effectiveGroupIdentifier;
- (unsigned int)effectiveUserIdentifier;
- (id)exportedInterface;
- (id)exportedObject;
- (id)initWithProtocol:(id)arg1;
- (CDUnknownBlockType)interruptionHandler;
- (void)invalidate;
- (CDUnknownBlockType)invalidationHandler;
- (int)processIdentifier;
- (id)remoteObjectInterface;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)resume;
- (void)setExportedInterface:(id)arg1;
- (void)setExportedObject:(id)arg1;
- (void)setInterruptionHandler:(CDUnknownBlockType)arg1;
- (void)setInvalidationHandler:(CDUnknownBlockType)arg1;
- (void)setRemoteObjectInterface:(id)arg1;
- (void)suspend;

@end

