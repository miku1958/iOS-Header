//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SFProximityClient : NSObject <NSSecureCoding>
{
    BOOL _activateCalled;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
    BOOL _shouldAdvertise;
    BOOL _wantsUpdates;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _deviceEnteredImmediateHandler;
    CDUnknownBlockType _deviceExitedImmediateHandler;
    CDUnknownBlockType _deviceEnteredNearbyHandler;
    CDUnknownBlockType _deviceExitedNearbyHandler;
    CDUnknownBlockType _deviceWasSelectedHandler;
    CDUnknownBlockType _deviceWillTriggerHandler;
    CDUnknownBlockType _deviceDidUntriggerHandler;
    CDUnknownBlockType _deviceWasDismissedHandlerEx;
    CDUnknownBlockType _deviceWasDismissedHandler;
    CDUnknownBlockType _deviceUpdateHandler;
}

@property (copy, nonatomic) CDUnknownBlockType deviceDidUntriggerHandler; // @synthesize deviceDidUntriggerHandler=_deviceDidUntriggerHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceEnteredImmediateHandler; // @synthesize deviceEnteredImmediateHandler=_deviceEnteredImmediateHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceEnteredNearbyHandler; // @synthesize deviceEnteredNearbyHandler=_deviceEnteredNearbyHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceExitedImmediateHandler; // @synthesize deviceExitedImmediateHandler=_deviceExitedImmediateHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceExitedNearbyHandler; // @synthesize deviceExitedNearbyHandler=_deviceExitedNearbyHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceUpdateHandler; // @synthesize deviceUpdateHandler=_deviceUpdateHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceWasDismissedHandler; // @synthesize deviceWasDismissedHandler=_deviceWasDismissedHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceWasDismissedHandlerEx; // @synthesize deviceWasDismissedHandlerEx=_deviceWasDismissedHandlerEx;
@property (copy, nonatomic) CDUnknownBlockType deviceWasSelectedHandler; // @synthesize deviceWasSelectedHandler=_deviceWasSelectedHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceWillTriggerHandler; // @synthesize deviceWillTriggerHandler=_deviceWillTriggerHandler;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (nonatomic) BOOL shouldAdvertise; // @synthesize shouldAdvertise=_shouldAdvertise;
@property (nonatomic) BOOL wantsUpdates; // @synthesize wantsUpdates=_wantsUpdates;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dismissContentForDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidate;
- (void)_invalidated;
- (void)_invokeBlockActivateSafe:(CDUnknownBlockType)arg1;
- (void)_provideContent:(id)arg1 forDevice:(id)arg2 force:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_stopSuppressingDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_suppressDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateContent:(id)arg1 forDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)dismissContentForDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (void)provideContent:(id)arg1 forDevice:(id)arg2 force:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)proximityClientDeviceDidUntriggerHandler:(id)arg1;
- (void)proximityClientDeviceEnteredImmediate:(id)arg1;
- (void)proximityClientDeviceEnteredNearby:(id)arg1;
- (void)proximityClientDeviceExitedImmediate:(id)arg1;
- (void)proximityClientDeviceExitedNearby:(id)arg1;
- (void)proximityClientDeviceUpdated:(id)arg1 rssi:(long long)arg2 state:(long long)arg3;
- (void)proximityClientDeviceWasDismissedHandler:(id)arg1 reason:(long long)arg2;
- (void)proximityClientDeviceWasSelectedHandler:(id)arg1;
- (void)proximityClientDeviceWillTriggerHandler:(id)arg1;
- (void)requestScannerTimerReset;
- (void)stopSuppressingDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)suppressDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateContent:(id)arg1 forDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

