//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/NCAlertingController-Protocol.h>

@class NCNotificationRequest, NSMutableSet, NSString, SBCommunicationPolicyManager, SBLockScreenManager, SBNCScreenController, SBNCSoundController;

@interface SBNCAlertingController : NSObject <NCAlertingController>
{
    SBNCSoundController *_soundController;
    SBNCScreenController *_screenController;
    SBLockScreenManager *_lockScreenManager;
    SBCommunicationPolicyManager *_communicationPolicyManager;
    NCNotificationRequest *_activeRequestWithRealerts;
    NSMutableSet *_realertTimers;
}

@property (strong, nonatomic) NCNotificationRequest *activeRequestWithRealerts; // @synthesize activeRequestWithRealerts=_activeRequestWithRealerts;
@property (strong, nonatomic) SBCommunicationPolicyManager *communicationPolicyManager; // @synthesize communicationPolicyManager=_communicationPolicyManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_lockScreenManager;
@property (strong, nonatomic) NSMutableSet *realertTimers; // @synthesize realertTimers=_realertTimers;
@property (strong, nonatomic) SBNCScreenController *screenController; // @synthesize screenController=_screenController;
@property (strong, nonatomic) SBNCSoundController *soundController; // @synthesize soundController=_soundController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_activeAlertDestinationsInRequestDestinations:(id)arg1;
- (void)_alertNowForNotificationRequest:(id)arg1;
- (void)_alertNowForNotificationRequest:(id)arg1 presentingDestination:(id)arg2;
- (void)_hardwareButtonPressed:(id)arg1;
- (BOOL)_isBundleIdentifierBlockedForCommunicationPolicy:(id)arg1;
- (BOOL)_isBundleIdentifierBlockedForScreenTimeExpiration:(id)arg1;
- (void)_killRealertsForNotificationRequest:(id)arg1;
- (void)_lockStateChanged;
- (void)_notificationCenterDidPresent;
- (void)_realertTimerFired:(id)arg1;
- (void)_scheduleRealertsForNotificationRequest:(id)arg1;
- (BOOL)_shouldRealert;
- (BOOL)_shouldScreenTimeSuppressNotificationRequest:(id)arg1;
- (BOOL)_shouldScreenTimeSuppressNotificationsForBundleIdentifier:(id)arg1;
- (void)alertOnPostForNotificationRequest:(id)arg1 forRequestDestinations:(id)arg2;
- (void)alertOnPresentationForNotificationRequest:(id)arg1 presentingDestination:(id)arg2;
- (id)init;
- (id)initWithSoundController:(id)arg1 screenController:(id)arg2 lockScreenManager:(id)arg3 communicationPolicyManager:(id)arg4;
- (void)killAlertsForNotificationRequest:(id)arg1;
- (void)killRealerts;
- (void)resetAutomaticLockStateForNotificationRequest:(id)arg1;

@end
