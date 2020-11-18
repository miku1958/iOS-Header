//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstallCoordination/IXClientDelegateProtocol-Protocol.h>

@class NSMutableDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface IXServerConnection : NSObject <IXClientDelegateProtocol>
{
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_coordinatorInstances;
    NSMutableDictionary *_promiseInstances;
}

@property (readonly, nonatomic) NSMutableDictionary *coordinatorInstances; // @synthesize coordinatorInstances=_coordinatorInstances;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property (readonly, nonatomic) NSMutableDictionary *promiseInstances; // @synthesize promiseInstances=_promiseInstances;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;

+ (id)retrySynchronousIPC:(CDUnknownBlockType)arg1;
+ (id)sharedConnection;
- (void).cxx_destruct;
- (oneway void)_client_coordinatorDidCompleteSuccessfullyWithUUID:(id)arg1;
- (oneway void)_client_coordinatorDidInstallPlaceholderWithUUID:(id)arg1;
- (oneway void)_client_coordinatorShouldBeginRestoringUserDataWithUUID:(id)arg1;
- (oneway void)_client_coordinatorShouldPauseWithUUID:(id)arg1;
- (oneway void)_client_coordinatorShouldPrioritizeWithUUID:(id)arg1;
- (oneway void)_client_coordinatorShouldResumeWithUUID:(id)arg1;
- (oneway void)_client_coordinatorWithUUID:(id)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2;
- (oneway void)_client_coordinatorWithUUID:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3;
- (oneway void)_client_promiseDidCompleteSuccessfullyWithUUID:(id)arg1;
- (oneway void)_client_promiseWithUUID:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3;
- (BOOL)_onQueue_createXPCConnectionIfNecessary;
- (void)_onQueue_reSetupObserversAfter:(id)arg1;
- (id)_onQueue_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_onQueue_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (void)registerAppInstallCoordinatorForUpdates:(id)arg1 notifyDaemon:(BOOL)arg2;
- (void)registerDataPromiseForUpdates:(id)arg1 notifyDaemon:(BOOL)arg2;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)unregisterAppInstallCoordinatorForUpdates:(id)arg1;
- (void)unregisterDataPromiseForUpdates:(id)arg1;

@end

