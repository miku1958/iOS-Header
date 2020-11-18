//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSMutableSet, NSUUID;
@protocol OS_dispatch_queue, OS_os_log, OS_xpc_object, UWBSessionDelegateProxyProtocol;

__attribute__((visibility("hidden")))
@interface NIServerConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _resumed;
    BOOL _invalidated;
    NSObject<OS_xpc_object> *_conn;
    NSObject<OS_os_log> *_log;
    NSData *_tokenData;
    NSMutableSet *_peerTokens;
    NSMutableDictionary *_simulators;
    BOOL _xpcActive;
    BOOL _shouldInvalidateSessionOnXPCError;
    BOOL _isInterruptionReason_ApplicationNotVisible;
    BOOL _isDistanceUpdateRequestScheduled;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    id<UWBSessionDelegateProxyProtocol> _exportedObject;
    NSUUID *_sessionID;
}

@property (strong) id<UWBSessionDelegateProxyProtocol> exportedObject; // @synthesize exportedObject=_exportedObject;
@property (copy) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property (copy) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (readonly) NSUUID *sessionID; // @synthesize sessionID=_sessionID;

- (void).cxx_destruct;
- (void)_createAndActivateXPCConnectionToSimulatorIfNeededWithReply:(CDUnknownBlockType)arg1;
- (id)_findRequestedPeerDevicesInUpdates:(id)arg1;
- (id)_findSelfDeviceInUpdates:(id)arg1;
- (BOOL)_internalIsSupported;
- (void)_sendDistanceUpdateForRequestedPeer:(id)arg1 forPeer:(id)arg2;
- (void)_simXPCActivateIfAllowed;
- (void)_simXPCCancelAndInvalidateSessionOnError:(BOOL)arg1;
- (void)_simXPCResumeIfAllowed;
- (void)_simXPCSuspendIfAllowed;
- (void)activate:(CDUnknownBlockType)arg1;
- (id)allowTasksToFinishWhileInBackground;
- (BOOL)areContinuousUpdatesRequired;
- (CDStruct_6ad76789)auditTokenForConnection;
- (void)dealloc;
- (id)discoveryTokenFromBase64EncodedString:(id)arg1;
- (id)findUDIDForToken:(id)arg1;
- (id)generateDiscoveryTokenData;
- (void)handleAppNotification:(id)arg1;
- (void)handleCancelToken:(id)arg1;
- (void)handleDeviceShutdown:(id)arg1;
- (void)handleDistanceUpdate:(id)arg1;
- (void)handleErrorMessageFromSimulator:(id)arg1;
- (void)handleEventFromSimulatorOnQueue:(id)arg1;
- (void)handleMessageFromSimulator:(id)arg1;
- (void)handleNewDevice:(id)arg1;
- (void)handleNewToken:(id)arg1;
- (void)handleXPCConnectionError;
- (void)handleXPCConnectionInterrupted;
- (void)handleXPCConnectionInvalid;
- (void)handleXPCConnectionTermination;
- (id)initWithSessionID:(id)arg1 queue:(id)arg2 exportedObject:(id)arg3;
- (void)invalidate;
- (BOOL)isSandboxExtensionRequired;
- (id)nearbyObjectFromBase64EncodedString:(id)arg1;
- (void)pause:(CDUnknownBlockType)arg1;
- (void)queryDeviceCapabilities:(CDUnknownBlockType)arg1;
- (double)randomUnivariateGaussian:(double)arg1 sigma:(double)arg2;
- (id)remoteObjectProxy;
- (void)removeFromPeerTokensAndNotifyIfNecessary:(id)arg1;
- (void)requestDistanceUpdate;
- (void)resume;
- (void)runWithConfiguration:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)shareSandboxToken:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (double)simulateAngleError;
- (double)simulateErrorWithMaximum:(double)arg1 sigma:(double)arg2 maximum:(double)arg3;
- (double)simulateRangeError;
- (void)stopAllowingTasksToFinishWhileInBackground;
- (id)synchronousRemoteObjectProxy;

@end
