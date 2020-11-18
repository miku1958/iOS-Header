//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBHardwareButtonGestureParametersProviderBase.h>

#import <SpringBoard/SBHardwareButtonGestureParametersObserver-Protocol.h>

@class NSString, SBAccessibilityHardwareButtonInteraction, SBApplication, SBHardwareButtonGestureParameters, SBHardwareButtonService, SBProximitySensorManager, SBSiriHardwareButtonInteraction, SBSleepWakeHardwareButtonInteraction, SBWalletPreArmController, SOSManager;
@protocol SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider;

@interface SBLockHardwareButtonActions : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonGestureParametersObserver>
{
    long long _homeButtonType;
    SBApplication *_lastLockButtonEventRecipient;
    SBProximitySensorManager *_proximitySensorManager;
    SBHardwareButtonService *_hardwareButtonService;
    SBWalletPreArmController *_walletPreArmController;
    SOSManager *_sosManager;
    SBHardwareButtonGestureParameters *_accessibilityGestureParameters;
    SBHardwareButtonGestureParameters *_siriGestureParameters;
    SBHardwareButtonGestureParameters *_proximitySensorGestureParameters;
    long long _sosTriggerMechanism;
    BOOL _isButtonDown;
    SBSiriHardwareButtonInteraction *_siriButtonInteraction;
    SBAccessibilityHardwareButtonInteraction *_accessibilityButtonInteraction;
    SBSleepWakeHardwareButtonInteraction *_sleepWakeButtonInteraction;
    id<SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider> _proximitySensorButtonInteraction;
}

@property (strong, nonatomic) SBAccessibilityHardwareButtonInteraction *accessibilityButtonInteraction; // @synthesize accessibilityButtonInteraction=_accessibilityButtonInteraction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isButtonDown; // @synthesize isButtonDown=_isButtonDown;
@property (strong, nonatomic) id<SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider> proximitySensorButtonInteraction; // @synthesize proximitySensorButtonInteraction=_proximitySensorButtonInteraction;
@property (strong, nonatomic) SBSiriHardwareButtonInteraction *siriButtonInteraction; // @synthesize siriButtonInteraction=_siriButtonInteraction;
@property (strong, nonatomic) SBSleepWakeHardwareButtonInteraction *sleepWakeButtonInteraction; // @synthesize sleepWakeButtonInteraction=_sleepWakeButtonInteraction;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_foregroundAppRegisteredForLockButtonEvents;
- (BOOL)_isSOSActive;
- (void)_performSOSDidTriggerActions;
- (void)_registeredLockButtonAppsDidChange:(id)arg1;
- (BOOL)_sendButtonDownToRegisteredApp;
- (void)_sendButtonEventToApp:(id)arg1 down:(BOOL)arg2;
- (BOOL)_sendButtonUpToRegisteredApp;
- (BOOL)_shouldWaitForDoublePress;
- (void)_showPowerDownTransientOverlayOnForceReset;
- (BOOL)disallowsDoublePressForReason:(id *)arg1;
- (BOOL)disallowsLongPressForReason:(id *)arg1;
- (BOOL)disallowsSinglePressForReason:(id *)arg1;
- (BOOL)disallowsTriplePressForReason:(id *)arg1;
- (id)hardwareButtonGestureParameters;
- (id)initWithHomeButtonType:(long long)arg1 proximitySensorManager:(id)arg2;
- (BOOL)performButtonUpPreActions;
- (void)performDoublePressActions;
- (void)performFinalButtonUpActions;
- (void)performForceResetSequenceBeganActions;
- (void)performInitialButtonDownActions;
- (void)performInitialButtonUpActions;
- (void)performLongPressActions;
- (void)performLongPressCancelledActions;
- (void)performSOSActionsWithUUID:(id)arg1 triggerMechanism:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performSOSGestureBeganActions;
- (void)performSOSGestureEndedActions;
- (void)performSecondButtonDownActions;
- (void)performSinglePressAction;
- (void)performSinglePressDidFailActions;
- (void)performTriplePressActions;
- (void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2;
- (BOOL)reverseFadeOutIfNeeded;
- (BOOL)shouldBeginDoublePressGestureWhileObjectWithinProximity;

@end
