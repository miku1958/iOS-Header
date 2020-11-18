//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/CSPowerStatusProviding-Protocol.h>
#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoard/SBHomeScreenBackdropViewBaseDelegate-Protocol.h>
#import <SpringBoard/SBReachabilityObserver-Protocol.h>
#import <SpringBoard/SBWallpaperObserver-Protocol.h>
#import <SpringBoard/SBWallpaperOrientationProvider-Protocol.h>
#import <SpringBoard/UIInteractionProgressObserver-Protocol.h>
#import <SpringBoard/UIWindowDelegate-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString, SBAppStatusBarSettingsAssertion, SBAppSwitcherSettings, SBDismissOnlyAlertItem, SBHUDController, SBHomeScreenBackdropViewBase, SBHomeScreenWindow, SBIconContentView, SBIconController, SBMainScreenActiveInterfaceOrientationWindow, SBVolumeControl, SBWallpaperEffectView, SBWindow, UIForceStageInteractionProgress, UIStatusBar, UIView;

@interface SBUIController : NSObject <SBWallpaperObserver, PTSettingsKeyObserver, UIInteractionProgressObserver, SBWallpaperOrientationProvider, SBReachabilityObserver, SBHomeScreenBackdropViewBaseDelegate, UIWindowDelegate, CSPowerStatusProviding>
{
    SBHomeScreenWindow *_window;
    SBIconContentView *_iconsView;
    UIView *_contentView;
    SBMainScreenActiveInterfaceOrientationWindow *_fakeSpringBoardStatusBarWindow;
    UIStatusBar *_fakeSpringBoardStatusBar;
    SBHomeScreenBackdropViewBase *_homeScreenBackdropView;
    SBWindow *_homeScreenDimmingWindow;
    SBWallpaperEffectView *_reachabilityWallpaperEffectView;
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;
    UIForceStageInteractionProgress *_homeButtonForceProgress;
    unsigned int _lastVolumeDownToControl:1;
    unsigned int _isBatteryCharging:1;
    unsigned int _isFullyCharged:1;
    unsigned int _isBatteryCritical:1;
    unsigned int _isOnAC:1;
    unsigned int _isConnectedToExternalChargingAccessory:1;
    unsigned int _isConnectedToUnsupportedChargingAccessory:1;
    unsigned int _isConnectedToChargeIncapablePowerSource:1;
    SBHUDController *_HUDController;
    SBVolumeControl *_volumeControl;
    float _batteryCapacity;
    BOOL _supportsDetailedBatteryCapacity;
    BOOL _disableAppSwitchForcePressDueToHomeButtonForce;
    int _powerStateUpdateToken;
    NSMutableDictionary *_powerSourceHasChimed;
    int _batteryLoggingStartCapacity;
    SBDismissOnlyAlertItem *_unsupportedChargerAlert;
    SBAppSwitcherSettings *_switcherSettings;
    NSMutableSet *_contentRequiringReasons;
    BOOL _chargingChimeEnabled;
    SBIconController *_iconController;
}

@property (nonatomic) BOOL chargingChimeEnabled; // @synthesize chargingChimeEnabled=_chargingChimeEnabled;
@property (readonly, nonatomic, getter=isConnectedToExternalChargingSource) BOOL connectedToExternalChargingSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL homeScreenAutorotatesEvenWhenIconIsDragging;
@property (readonly, nonatomic) SBIconController *iconController; // @synthesize iconController=_iconController;
@property (readonly, nonatomic, getter=isOnAC) BOOL onAC;
@property (readonly) Class superclass;

+ (id)_effectiveStatusBarSettingsForSnapshot:(id)arg1 sceneHandle:(id)arg2;
+ (struct CGAffineTransform)_transformAndFrame:(struct CGRect *)arg1 forLaunchImageHostViewWithOrientation:(long long)arg2 statusBarHeight:(double)arg3 inJailRect:(struct CGRect)arg4;
+ (struct CGAffineTransform)_transformForStatusBarWithOrientation:(long long)arg1 scaleFactor:(double)arg2;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
+ (struct CGRect)statusBarFrameForDeviceApplicationSceneHandle:(id)arg1 displayConfiguration:(id)arg2 interfaceOrientation:(long long)arg3 statusBarStyleRequest:(id)arg4 withinBounds:(struct CGRect)arg5 inReferenceSpace:(BOOL)arg6;
+ (struct CGRect)statusBarFrameForSnapshotFrame:(struct CGRect)arg1 orientation:(long long)arg2 statusBarStyleRequest:(id)arg3 hidden:(BOOL)arg4;
+ (struct CGRect)statusBarFrameForSnapshotFrame:(struct CGRect)arg1 remainderFrame:(struct CGRect *)arg2 orientation:(long long)arg3 statusBarStyleRequest:(id)arg4 hidden:(BOOL)arg5;
+ (id)zoomViewForDeviceApplicationSceneHandle:(id)arg1 displayConfiguration:(id)arg2 interfaceOrientation:(long long)arg3 snapshot:(id)arg4 snapshotSize:(struct CGSize)arg5 statusBarDescriptor:(id)arg6 decodeImage:(BOOL)arg7;
- (void).cxx_destruct;
- (void)ACPowerChanged;
- (void)_accessibilityWillBeginAppSwitcherRevealAnimation;
- (void)_activateApplicationFromAccessibility:(id)arg1;
- (void)_backgroundContrastDidChange:(id)arg1;
- (void)_closeOpenFolderIfNecessary;
- (id)_currentHomeScreenLegibilitySettings;
- (void)_deviceUILocked;
- (void)_enumeratePowerSourcesWithBlock:(CDUnknownBlockType)arg1;
- (id)_fakeSpringBoardStatusBar;
- (void)_hideKeyboard;
- (id)_legibilitySettings;
- (BOOL)_powerSourceWantsToPlayChime;
- (void)_reduceMotionStatusDidChange:(id)arg1;
- (void)_removeReachabilityEffectViewIfNecessary;
- (void)_setupHomeScreenContentBackdropView;
- (void)_setupHomeScreenDimmingWindow;
- (void)_switchToHomeScreenWallpaperAnimated:(BOOL)arg1;
- (void)_updateLegibility;
- (void)_willRevealOrHideContentView;
- (void)activateApplication:(id)arg1 fromIcon:(id)arg2 location:(id)arg3 activationSettings:(id)arg4 actions:(id)arg5;
- (id)alertItemForPreventingLaunchOfApp:(id)arg1;
- (void)animateFakeStatusBarWithParameters:(id)arg1 transition:(id)arg2;
- (float)batteryCapacity;
- (int)batteryCapacityAsPercentage;
- (void)beginRequiringBackdropViewForReason:(id)arg1;
- (void)beginRequiringContentForReason:(id)arg1;
- (void)beginRequiringContentForReason:(id)arg1 options:(unsigned long long)arg2;
- (void)beginRequiringLiveBackdropViewForReason:(id)arg1;
- (void)cancelInProcessAnimations;
- (void)cancelVolumeEvent;
- (void)configureFakeSpringBoardStatusBarWithDefaultStyleRequestForStyle:(long long)arg1;
- (void)configureFakeSpringBoardStatusBarWithStyleRequest:(id)arg1;
- (id)contentView;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)disableAnimationForNextIconRotation;
- (BOOL)disableAppSwitchForcePressDueToHomeButtonForce;
- (BOOL)dissmissAlertItemsAndSheetsIfPossible;
- (void)endRequiringBackdropViewForReason:(id)arg1;
- (void)endRequiringContentForReason:(id)arg1;
- (void)endRequiringLiveBackdropViewForReason:(id)arg1;
- (void)externalChargingAccessoriesChanged;
- (id)fakeStatusBarStyleRequestForStyle:(long long)arg1;
- (void)getRotationContentSettings:(CDStruct_e950349b *)arg1 forWindow:(id)arg2;
- (void)handleDidEndReachabilityAnimation;
- (BOOL)handleHomeButtonDoublePressDown;
- (BOOL)handleHomeButtonSinglePressUp;
- (void)handleVolumeButtonWithType:(long long)arg1 down:(BOOL)arg2;
- (void)handleWillBeginReachabilityAnimation;
- (BOOL)hasVisibleAlertItemOrSheet:(out BOOL *)arg1;
- (unsigned char)headsetBatteryCapacity;
- (void)homeScreenBackdropView:(id)arg1 opaquenessDidChange:(BOOL)arg2;
- (id)init;
- (void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (long long)interfaceOrientationForWallpaperController:(id)arg1;
- (BOOL)isBatteryCharging;
- (BOOL)isConnectedToChargeIncapablePowerSource;
- (BOOL)isConnectedToUnsupportedChargingAccessory;
- (BOOL)isFakeStatusBarStyleEffectivelyDoubleHeight:(long long)arg1;
- (BOOL)isFullyCharged;
- (BOOL)isHeadsetBatteryCharging;
- (BOOL)isHeadsetDocked;
- (BOOL)isIconListViewTornDown;
- (void)noteStatusBarHeightChanged:(id)arg1;
- (void)nudgeIconInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)playChargingChimeIfAppropriate;
- (void)possiblyWakeForPowerStatusChangeWithUnlockSource:(int)arg1;
- (void)removeFakeSpringBoardStatusBar;
- (void)restoreContent;
- (void)restoreContentAndUnscatterIconsAnimated:(BOOL)arg1;
- (void)restoreContentAndUnscatterIconsAnimated:(BOOL)arg1 afterDelay:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)restoreContentAndUnscatterIconsAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)restoreContentWithOptions:(unsigned long long)arg1;
- (id)scalingView;
- (void)setAllowIconRotation:(BOOL)arg1 forReason:(id)arg2;
- (void)setFakeSpringBoardStatusBarVisible:(BOOL)arg1;
- (void)setHomeScreenAlpha:(double)arg1 behaviorMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setHomeScreenBlurProgress:(double)arg1 behaviorMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setHomeScreenDimmingAlpha:(double)arg1 behaviorMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setHomeScreenScale:(double)arg1 behaviorMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setIsConnectedToUnsupportedChargingAccessory:(BOOL)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)statusBarOverridesDidChange:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (BOOL)supportsDetailedBatteryCapacity;
- (void)suppressChimeForConnectedPowerSources;
- (void)tearDownIconListAndBar;
- (long long)transitionSourceForIconLocation:(id)arg1;
- (void)updateBatteryState:(id)arg1;
- (void)updateStatusBarLegibility;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;
- (id)window;

@end
