//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBPolicyAggregator.h>

@class MCProfileConnection, SBAlertItemsController, SBApplicationController, SBAssistantController, SBBannerManager, SBCommandTabController, SBConferenceManager, SBLocalDefaults, SBLockScreenManager, SBLockStateAggregator, SBMainWorkspace, SBRemoteTransientOverlaySessionManager, SBSetupManager, SBTelephonyManager;

@interface SBMainDisplayPolicyAggregator : SBPolicyAggregator
{
    MCProfileConnection *_override_profileConnection;
    SBSetupManager *_override_setupManager;
    SBAlertItemsController *_override_alertItemsController;
    SBApplicationController *_override_applicationController;
    SBAssistantController *_override_assistantController;
    SBCommandTabController *_override_commandTabController;
    SBConferenceManager *_override_conferenceManager;
    SBRemoteTransientOverlaySessionManager *_override_remoteTransientOverlaySessionManager;
    SBLockScreenManager *_override_lockScreenManager;
    SBLockStateAggregator *_override_lockStateAggregator;
    SBTelephonyManager *_override_telephonyManager;
    SBMainWorkspace *_override_mainWorkspace;
    SBBannerManager *_override_bannerManager;
    struct __CFBoolean *_hasCameraCapability;
    SBLocalDefaults *_defaults;
    BOOL _storeDemoAppLockEnabled;
}

@property (strong, nonatomic, getter=_alertItemsController, setter=_setAlertItemsController:) SBAlertItemsController *alertItemsController; // @synthesize alertItemsController=_override_alertItemsController;
@property (strong, nonatomic, getter=_applicationController, setter=_setApplicationController:) SBApplicationController *applicationController; // @synthesize applicationController=_override_applicationController;
@property (strong, nonatomic, getter=_assistantController, setter=_setAssistantController:) SBAssistantController *assistantController; // @synthesize assistantController=_override_assistantController;
@property (strong, nonatomic, getter=_bannerManager, setter=_setBannerManager:) SBBannerManager *bannerManager; // @synthesize bannerManager=_override_bannerManager;
@property (strong, nonatomic, getter=_commandTabController, setter=_setCommandTabController:) SBCommandTabController *commandTabController; // @synthesize commandTabController=_override_commandTabController;
@property (strong, nonatomic, getter=_conferenceManager, setter=_setConferenceManager:) SBConferenceManager *conferenceManager; // @synthesize conferenceManager=_override_conferenceManager;
@property (strong, nonatomic, getter=_lockScreenManager, setter=_setLockScreenManager:) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_override_lockScreenManager;
@property (strong, nonatomic, getter=_lockStateAggregator, setter=_setLockStateAggregator:) SBLockStateAggregator *lockStateAggregator; // @synthesize lockStateAggregator=_override_lockStateAggregator;
@property (strong, nonatomic, getter=_mainWorkspace, setter=_setMainWorkspace:) SBMainWorkspace *mainWorkspace; // @synthesize mainWorkspace=_override_mainWorkspace;
@property (strong, nonatomic, getter=_profileConnection, setter=_setProfileConnection:) MCProfileConnection *profileConnection; // @synthesize profileConnection=_override_profileConnection;
@property (strong, nonatomic, getter=_remoteTransientOverlaySessionManager, setter=_setRemoteTransientOverlaySessionManager:) SBRemoteTransientOverlaySessionManager *remoteTransientOverlaySessionManager; // @synthesize remoteTransientOverlaySessionManager=_override_remoteTransientOverlaySessionManager;
@property (strong, nonatomic, getter=_setupManager, setter=_setSetupManager:) SBSetupManager *setupManager; // @synthesize setupManager=_override_setupManager;
@property (strong, nonatomic, getter=_telephonyManager, setter=_setTelephonyManager:) SBTelephonyManager *telephonyManager; // @synthesize telephonyManager=_override_telephonyManager;

- (void).cxx_destruct;
- (BOOL)_allowsCapabilityAssistantEnabledWithExplanation:(id *)arg1;
- (BOOL)_allowsCapabilityAssistantWithExplanation:(id *)arg1;
- (BOOL)_allowsCapabilityCommandTabWithExplanation:(id *)arg1;
- (BOOL)_allowsCapabilityControlCenterWithExplanation:(id *)arg1;
- (BOOL)_allowsCapabilityCoverSheetWithExplanation:(id *)arg1;
- (BOOL)_allowsCapabilityDismissCoverSheetWithExplanation:(id *)arg1;
- (BOOL)_allowsCapabilityHomeScreenEditingWithExplanation:(id *)arg1;
- (BOOL)_allowsCapabilityLiftToWakeWithExplanation:(id *)arg1;
- (BOOL)_allowsCapabilityLockScreenBulletinWithExplanation:(id *)arg1;
- (BOOL)_allowsCapabilityLockScreenCameraSupportedWithExplanation:(id *)arg1;
- (BOOL)_allowsCapabilityLockScreenCameraWithExplanation:(id *)arg1;
- (BOOL)_allowsCapabilityLockScreenControlCenterWithExplanation:(id *)arg1;
- (BOOL)_allowsCapabilityLockScreenNotificationCenterWithExplanation:(id *)arg1;
- (BOOL)_allowsCapabilityLockScreenTodayViewWithExplanation:(id *)arg1;
- (BOOL)_allowsCapabilityLoginWindowWithExplanation:(id *)arg1;
- (BOOL)_allowsCapabilityLogoutWithExplanation:(id *)arg1;
- (BOOL)_allowsCapabilityQuickNoteWithExplanation:(id *)arg1;
- (BOOL)_allowsCapabilityScreenshotWithExplanation:(id *)arg1;
- (BOOL)_allowsCapabilitySendMediaCommandWithExplanation:(id *)arg1;
- (BOOL)_allowsCapabilitySpotlightWithExplanation:(id *)arg1;
- (BOOL)_allowsCapabilitySuggestedApplicationWithExplanation:(id *)arg1;
- (BOOL)_allowsCapabilitySystemGestureWithExplanation:(id *)arg1;
- (BOOL)_allowsCapabilityTodayViewWithExplanation:(id *)arg1;
- (BOOL)_allowsCapabilityUnlockToPluginSpecifiedApplicationWithExplanation:(id *)arg1;
- (BOOL)_allowsCapabilityVoiceControlWithExplanation:(id *)arg1;
- (BOOL)_allowsNotificationOrControlCenterWithExplanation:(id *)arg1;
- (BOOL)_dictationInfoOnScreen;
- (BOOL)_hasFullySetUpUserWithExplanation:(id *)arg1;
- (id)_initWithDefaults:(id)arg1;
- (BOOL)allowsCapability:(long long)arg1;
- (BOOL)allowsCapability:(long long)arg1 explanation:(id *)arg2;
- (BOOL)allowsTransitionRequest:(id)arg1;
- (id)init;
- (void)reloadDemoDefaults;

@end

