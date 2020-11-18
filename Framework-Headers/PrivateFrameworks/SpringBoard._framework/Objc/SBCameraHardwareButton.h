//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoard/SBHIDButtonStateDelegate-Protocol.h>
#import <SpringBoard/SBSceneManagerObserver-Protocol.h>

@class BKSHIDEventDeliveryManager, BSMutableIntegerMap, BSTimer, CMPocketStateManager, NSMutableIndexSet, NSString, RBSProcessMonitor, SBApplicationController, SBBacklightController, SBCameraHardwareButtonDefaults, SBCameraHardwareButtonSettings, SBCoverSheetPresentationManager, SBHIDButtonStateArbiter, SBLockScreenManager, SBProximitySensorManager, SBSceneManager, _SBCameraLaunchCondition;
@protocol BSInvalidatable;

@interface SBCameraHardwareButton : NSObject <SBHIDButtonStateDelegate, PTSettingsKeyObserver, SBSceneManagerObserver>
{
    BOOL _disableDeferringToApplications;
    BOOL _shouldUsePocketStateDetection;
    int _lastCameraApplicationPID;
    id<BSInvalidatable> _dispatchingRuleAssertion;
    id<BSInvalidatable> _deferringRuleAssertion;
    NSMutableIndexSet *_allCameraShutterButtonPIDs;
    NSMutableIndexSet *_foregroundCameraShutterButtonPIDs;
    NSMutableIndexSet *_foregroundPendingRemovalCameraShutterButtonPIDs;
    BSMutableIntegerMap *_deferringTokensPerPID;
    SBHIDButtonStateArbiter *_buttonArbiter;
    RBSProcessMonitor *_processMonitor;
    CMPocketStateManager *_pocketStateManager;
    _SBCameraLaunchCondition *_shouldLaunchCameraCondition;
    _SBCameraLaunchCondition *_longPressCondition;
    _SBCameraLaunchCondition *_outOfPocketCondition;
    BSTimer *_longPressCancellationTimer;
    double _longPressCancellationTimeout;
    BKSHIDEventDeliveryManager *_deliveryManager;
    SBApplicationController *_applicationController;
    SBLockScreenManager *_lockScreenManager;
    SBCoverSheetPresentationManager *_coverSheetPresentationManager;
    SBBacklightController *_backlightController;
    SBProximitySensorManager *_proximitySensorManager;
    SBSceneManager *_mainDisplaySceneManager;
    SBCameraHardwareButtonSettings *_settings;
    SBCameraHardwareButtonDefaults *_defaults;
}

@property (strong, nonatomic) NSMutableIndexSet *allCameraShutterButtonPIDs; // @synthesize allCameraShutterButtonPIDs=_allCameraShutterButtonPIDs;
@property (strong, nonatomic) SBApplicationController *applicationController; // @synthesize applicationController=_applicationController;
@property (strong, nonatomic) SBBacklightController *backlightController; // @synthesize backlightController=_backlightController;
@property (strong, nonatomic) SBHIDButtonStateArbiter *buttonArbiter; // @synthesize buttonArbiter=_buttonArbiter;
@property (strong, nonatomic) SBCoverSheetPresentationManager *coverSheetPresentationManager; // @synthesize coverSheetPresentationManager=_coverSheetPresentationManager;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) SBCameraHardwareButtonDefaults *defaults; // @synthesize defaults=_defaults;
@property (strong, nonatomic) id<BSInvalidatable> deferringRuleAssertion; // @synthesize deferringRuleAssertion=_deferringRuleAssertion;
@property (strong, nonatomic) BSMutableIntegerMap *deferringTokensPerPID; // @synthesize deferringTokensPerPID=_deferringTokensPerPID;
@property (strong, nonatomic) BKSHIDEventDeliveryManager *deliveryManager; // @synthesize deliveryManager=_deliveryManager;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableDeferringToApplications; // @synthesize disableDeferringToApplications=_disableDeferringToApplications;
@property (strong, nonatomic) id<BSInvalidatable> dispatchingRuleAssertion; // @synthesize dispatchingRuleAssertion=_dispatchingRuleAssertion;
@property (strong, nonatomic) NSMutableIndexSet *foregroundCameraShutterButtonPIDs; // @synthesize foregroundCameraShutterButtonPIDs=_foregroundCameraShutterButtonPIDs;
@property (strong, nonatomic) NSMutableIndexSet *foregroundPendingRemovalCameraShutterButtonPIDs; // @synthesize foregroundPendingRemovalCameraShutterButtonPIDs=_foregroundPendingRemovalCameraShutterButtonPIDs;
@property (readonly) unsigned long long hash;
@property (nonatomic) int lastCameraApplicationPID; // @synthesize lastCameraApplicationPID=_lastCameraApplicationPID;
@property (strong, nonatomic) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_lockScreenManager;
@property (nonatomic) double longPressCancellationTimeout; // @synthesize longPressCancellationTimeout=_longPressCancellationTimeout;
@property (strong, nonatomic) BSTimer *longPressCancellationTimer; // @synthesize longPressCancellationTimer=_longPressCancellationTimer;
@property (strong, nonatomic) _SBCameraLaunchCondition *longPressCondition; // @synthesize longPressCondition=_longPressCondition;
@property (strong, nonatomic) SBSceneManager *mainDisplaySceneManager; // @synthesize mainDisplaySceneManager=_mainDisplaySceneManager;
@property (strong, nonatomic) _SBCameraLaunchCondition *outOfPocketCondition; // @synthesize outOfPocketCondition=_outOfPocketCondition;
@property (strong, nonatomic) CMPocketStateManager *pocketStateManager; // @synthesize pocketStateManager=_pocketStateManager;
@property (strong, nonatomic) RBSProcessMonitor *processMonitor; // @synthesize processMonitor=_processMonitor;
@property (strong, nonatomic) SBProximitySensorManager *proximitySensorManager; // @synthesize proximitySensorManager=_proximitySensorManager;
@property (strong, nonatomic) SBCameraHardwareButtonSettings *settings; // @synthesize settings=_settings;
@property (strong, nonatomic) _SBCameraLaunchCondition *shouldLaunchCameraCondition; // @synthesize shouldLaunchCameraCondition=_shouldLaunchCameraCondition;
@property (nonatomic) BOOL shouldUsePocketStateDetection; // @synthesize shouldUsePocketStateDetection=_shouldUsePocketStateDetection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_deferCameraPressesToApplication:(id)arg1;
- (void)_deferCameraPressesToCameraApplication;
- (void)_deferCameraPressesToPID:(int)arg1;
- (void)_deferCameraPressesToSpringBoard;
- (BOOL)_isCoverSheetCameraVisible;
- (void)_launchCameraIfReady;
- (void)_launchToCoverSheetCamera;
- (void)_launchToUnlockedCamera;
- (void)_longPressDidCancel;
- (void)_process:(id)arg1 stateDidUpdate:(id)arg2;
- (void)_reconfigureProcessMonitor;
- (void)_reconfigureProcessMonitorForPredicates:(id)arg1;
- (BOOL)_shouldDeferToCoverSheetCamera;
- (BOOL)_shouldDeferToNonSpringBoardProcess;
- (void)_startWaitingForLongPressCancellation;
- (void)_stopWaitingForLongPressCancellation;
- (void)_updateCameraDeferringRule;
- (void)_updateSettingsForReason:(id)arg1;
- (void)addProcessRequestingCameraButton:(int)arg1 token:(id)arg2;
- (void)dealloc;
- (void)handleButtonEvent:(struct __IOHIDEvent *)arg1;
- (id)init;
- (void)performActionsForButtonDown:(id)arg1;
- (void)performActionsForButtonLongPress:(id)arg1;
- (void)performActionsForButtonUp:(id)arg1;
- (void)removeProcessRequestingCameraButton:(int)arg1;
- (void)sceneManager:(id)arg1 didAddExternalForegroundApplicationSceneHandle:(id)arg2;
- (void)sceneManager:(id)arg1 didRemoveExternalForegroundApplicationSceneHandle:(id)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;

@end
