//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSString, NSXPCConnection, NSXPCInterface, PKXPCForwarder;
@protocol NSObject, PKXPCServiceDelegate;

@interface PKXPCService : NSObject
{
    NSXPCInterface *_remoteObjectInterface;
    NSXPCInterface *_exportedObjectInterface;
    id _exportedObject;
    NSString *_className;
    NSString *_serviceResumedNotificationName;
    NSLock *_connectionLock;
    NSXPCConnection *_connection;
    PKXPCForwarder *_exportedProxy;
    BOOL _suspendCallbacks;
    id<NSObject> _foregroundListener;
    id<NSObject> _backgroundListener;
    int _serviceResumedToken;
    id<PKXPCServiceDelegate> _delegate;
    NSString *_machServiceName;
}

@property (readonly, nonatomic) BOOL connectionEstablished;
@property (weak, nonatomic) id<PKXPCServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSString *machServiceName; // @synthesize machServiceName=_machServiceName;
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;

+ (BOOL)areCallbacksSuspended;
+ (void)setCallbacksSuspendedEvaluator:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id)_connection;
- (void)_createConnectionIfPossible:(BOOL)arg1;
- (void)_establishServiceConnection;
- (void)_invalidateConnectionIfPossible;
- (CDUnknownBlockType)_newErrorHandlerWithSemaphore:(id)arg1;
- (CDUnknownBlockType)_newWrappedErrorHandlerForHandler:(CDUnknownBlockType)arg1;
- (void)_registerForApplicationLifeCycleNotifications;
- (void)_registerForServiceListenerResumedNotifications;
- (void)_sendResumed;
- (void)_sendSuspended;
- (void)_unregisterForApplicationLifeCycleNotifications;
- (void)_unregisterForServiceListenerResumedNotifications;
- (void)dealloc;
- (id)existingRemoteObjectProxy;
- (id)existingRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)existingSynchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4;
- (id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4 serviceResumedNotificationName:(id)arg5;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxyWithSemaphore:(id)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;

@end

