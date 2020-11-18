//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Sharing/SFXPCClient.h>

@class NSDate, NSObject;
@protocol OS_dispatch_source;

@interface SFChargingUICoordinator : SFXPCClient
{
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _animationSPIAdopted;
    BOOL _runningAsCarry;
    NSDate *_uiUpdateMaxDate;
    NSDate *_uiUpdateRequestDate;
    CDUnknownBlockType _uiUpdateHandler;
    BOOL _uiUpdateMinTimeElapsed;
    BOOL _uiUpdateShouldDismiss;
    NSObject<OS_dispatch_source> *_uiUpdateTimer;
    long long _defaultDuration;
}

@property (nonatomic) long long defaultDuration; // @synthesize defaultDuration=_defaultDuration;

- (void).cxx_destruct;
- (void)_activate;
- (void)_dismissUI;
- (void)_initialViewControllerDidAppear;
- (void)_initialViewControllerDidDisappear;
- (void)_invalidate;
- (void)_requestToDismissUIHandler:(CDUnknownBlockType)arg1;
- (void)_requestToStartAnimationAtDate:(id)arg1;
- (void)_sendDismissUIWithReason:(long long)arg1;
- (void)_timingInvalidateMinTimer;
- (void)_timingRestartMinTimer;
- (void)activate;
- (id)exportedInterface;
- (void)initialViewControllerDidAppear;
- (void)initialViewControllerDidDisappear;
- (void)invalidate;
- (id)machServiceName;
- (void)onqueue_connectionEstablished;
- (void)onqueue_connectionInterrupted;
- (void)onqueue_connectionInvalidated;
- (id)remoteObjectInterface;
- (void)requestAnimationDateWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestToDismissUIHandler:(CDUnknownBlockType)arg1;
- (void)requestToShowUIWithHandler:(CDUnknownBlockType)arg1;
- (void)requestToStartAnimationAtDate:(id)arg1;
- (void)sendDismissUIWithReason:(long long)arg1;
- (BOOL)shouldEscapeXpcTryCatch;

@end

