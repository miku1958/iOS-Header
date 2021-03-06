//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBUIUserAgent_Internal-Protocol.h>

@class NSMutableDictionary, NSString, SBIdleTimerPolicyAggregator;
@protocol BSInvalidatable;

@interface SBUserAgent : NSObject <SBUIUserAgent_Internal>
{
    NSMutableDictionary *_idleTimerDisableAssertions;
    SBIdleTimerPolicyAggregator *_idleTimerPolicyAggregator;
    id<BSInvalidatable> _bannerSuppressionAssertion;
}

@property (strong, nonatomic, setter=_setIdleTimerPolicyAggregator:) SBIdleTimerPolicyAggregator *_idleTimerPolicyAggregator; // @synthesize _idleTimerPolicyAggregator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long softwareUpdatePasscodePolicyType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanupFromBannerLaunch;
- (BOOL)_launchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3 allowUnlock:(BOOL)arg4 animate:(BOOL)arg5;
- (BOOL)_openApplication:(id)arg1 withURL:(id)arg2 fromSource:(int)arg3 animated:(BOOL)arg4 options:(id)arg5;
- (id)_safeValue:(id)arg1 forKey:(id)arg2 ofType:(Class)arg3;
- (void)activateModalBulletinAlert:(id)arg1;
- (void)activateRemoteAlertService:(id)arg1 options:(id)arg2;
- (long long)activeInterfaceOrientation;
- (void)addActiveInterfaceOrientationObserver:(id)arg1;
- (void)addIdleTimerHandler:(id)arg1;
- (BOOL)applicationInstalledForDisplayID:(id)arg1;
- (BOOL)canLaunchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3;
- (BOOL)deviceIsBlocked;
- (BOOL)deviceIsLocked;
- (BOOL)deviceIsPasscodeLocked;
- (BOOL)deviceIsPasscodeLockedRemotely;
- (BOOL)deviceIsTethered;
- (void)disableLockScreenBundleNamed:(id)arg1 deactivationContext:(id)arg2;
- (void)enableLockScreenBundleNamed:(id)arg1 activationContext:(id)arg2;
- (id)folderNameForDisplayID:(id)arg1;
- (id)foregroundApplicationDisplayID;
- (id)init;
- (BOOL)isApplicationForegroundObscured:(id)arg1;
- (BOOL)isApplicationRestrictedOrHidden:(id)arg1;
- (BOOL)isIdleTimerDisabledForReason:(id)arg1;
- (BOOL)isInternalInstall;
- (BOOL)isNamedRemoteAlertServiceActive:(id)arg1 controllerClassName:(id)arg2;
- (BOOL)isScreenOn;
- (BOOL)launchApplicationFromSource:(int)arg1 withDisplayID:(id)arg2 options:(id)arg3;
- (BOOL)launchApplicationFromSource:(int)arg1 withURL:(id)arg2 options:(id)arg3;
- (BOOL)launchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3 allowUnlock:(BOOL)arg4;
- (id)localizedDisplayNameForDisplayID:(id)arg1;
- (void)lockAndDimDevice;
- (void)lockAndDimDeviceDisconnectingCallIfNecessary:(BOOL)arg1;
- (void)lockAndDimDeviceDisconnectingCallIfNecessary:(BOOL)arg1 andDimScreen:(BOOL)arg2;
- (BOOL)lockScreenIsShowing;
- (int)networkUsageTypeForAppWithDisplayID:(id)arg1;
- (void)notifyOnNextUserEvent;
- (BOOL)openURL:(id)arg1 allowUnlock:(BOOL)arg2 animated:(BOOL)arg3;
- (void)removeActiveInterfaceOrientationObserver:(id)arg1;
- (void)removeIdleTimerHandler:(id)arg1;
- (void)setBadgeNumberOrString:(id)arg1 forApplicationWithID:(id)arg2;
- (void)setIdleText:(id)arg1;
- (void)setIdleTimerDisabled:(BOOL)arg1 forReason:(id)arg2;
- (void)setMinimumBacklightLevel:(float)arg1 animated:(BOOL)arg2;
- (BOOL)springBoardIsActive;
- (id)topSuspendedEventsOnlyDisplayID;
- (void)undimScreen;
- (void)updateInterfaceOrientationIfNecessary;
- (struct __CFRunLoop *)wifiRunLoopRef;

@end

