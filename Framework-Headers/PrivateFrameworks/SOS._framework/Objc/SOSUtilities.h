//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SOSUtilities : NSObject
{
}

+ (long long)SOSSelectableTriggerMechanismCapability;
+ (long long)SOSTriggerClickCount;
+ (long long)SOSTriggerMechanismForClickCount:(long long)arg1;
+ (id)_SOSDomainAccessor;
+ (BOOL)_hasAccessibilityConflict;
+ (id)_userFriendsDomainAccessor;
+ (id)_userSOSDefaults;
+ (id)autoCallFooterDescription;
+ (BOOL)autoCallRequiresSIM;
+ (id)autoCallTitleDescription;
+ (id)automaticDialingSectionDescription;
+ (id)callWithSideButtonFooterDescription;
+ (id)callWithSideButtonTitleDescription;
+ (BOOL)canTriggerSOSWithSideButton;
+ (BOOL)canTriggerSOSWithVolumeLockHold;
+ (id)countdownSoundFooterDescription;
+ (id)countdownSoundTitleDescription;
+ (long long)currentSOSTriggerMechanism;
+ (long long)defaultSOSTriggerMechanism;
+ (BOOL)deviceHasHomeButton;
+ (id)emergencyContactsEditDescription;
+ (id)emergencyContactsFooterDescription;
+ (id)emergencyContactsFooterLinkTitle;
+ (id)emergencyContactsSectionDescription;
+ (id)fallDetectionFooterDescription;
+ (id)fallDetectionTitleDescription;
+ (void)getAssetViewForPhoneWithCompletion:(CDUnknownBlockType)arg1;
+ (id)getAssetViewForWatchWithCrownOrientationOnRightSide:(BOOL)arg1 layoutLeftToRight:(BOOL)arg2 tintColor:(id)arg3;
+ (BOOL)hasActiveSIMForClient:(id)arg1;
+ (BOOL)hasEmergencyContacts;
+ (id)holdSideButtonFooterDescription;
+ (id)holdSideButtonTitleDescription;
+ (BOOL)isActivePairedDeviceTinker;
+ (BOOL)isAllowedToMessageSOSContacts;
+ (BOOL)isAutomaticCallCountdownEnabled;
+ (BOOL)isDeviceD2xOrNewer;
+ (BOOL)isIndiaSKU;
+ (BOOL)isSmallScreen;
+ (BOOL)longPressTriggersEmergencySOS;
+ (long long)mostRecentlyUsedSOSTriggerMechanism;
+ (BOOL)mustAllowThreeClickTrigger;
+ (BOOL)newtonTriggersEmergencySOS;
+ (id)newtonTriggersEmergencySOSNumber;
+ (void)openEmergencyContactsFooterLinkOnViewController:(id)arg1;
+ (id)phoneAssetName;
+ (id)phoneTriggerAnimationFooterDescription;
+ (void)setAllowedToMessageSOSContacts:(BOOL)arg1;
+ (void)setAutomaticCallCountdownEnabled:(BOOL)arg1;
+ (void)setCanTriggerSOSWithSideButton:(BOOL)arg1 presentErrorAlertOnViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)setCurrentSOSTriggerMechanism:(long long)arg1;
+ (void)setLongPressTriggersEmergencySOS:(BOOL)arg1;
+ (void)setMostRecentlyUsedSOSTriggerMechanism:(long long)arg1;
+ (void)setNewtonTriggersEmergencySOS:(BOOL)arg1;
+ (void)setNewtonTriggersEmergencySOS:(BOOL)arg1 isWristDetectionEnabled:(BOOL)arg2 doesNewtonRequireConfirmation:(BOOL)arg3 presentConfirmationOnViewController:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)setNewtonTriggersEmergencySOSNumber:(id)arg1;
+ (void)setPlayAudioDuringCountdown:(BOOL)arg1;
+ (BOOL)shouldForceDisableAutoCallForClient:(id)arg1;
+ (BOOL)shouldPlayAudioDuringCountdown;
+ (BOOL)supportsSOSWithSideButtonSelectableNumberOfClicks;
+ (id)watchAssetNameWithCrownOrientationOnRightSide:(BOOL)arg1 layoutLeftToRight:(BOOL)arg2;
+ (id)watchTriggerAnimationFooterDescription;

@end
