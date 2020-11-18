//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIView;

@interface SBAwayViewPluginController : NSObject
{
    UIView *_view;
    BOOL _viewCanBeDisplayed;
    BOOL _fullscreen;
    BOOL _alwaysFullscreen;
    long long _orientation;
    CDUnknownBlockType _disableTransitionBlock;
    unsigned long long _effectivePresentationStyle;
    NSString *_enablingApplicationBundleIdentifier;
}

@property (nonatomic, getter=isAlwaysFullscreen) BOOL alwaysFullscreen;
@property (nonatomic, getter=_effectivePresentationStyle, setter=_setEffectivePresentationStyle:) unsigned long long effectivePresentationStyle; // @synthesize effectivePresentationStyle=_effectivePresentationStyle;
@property (copy, nonatomic) NSString *enablingApplicationBundleIdentifier; // @synthesize enablingApplicationBundleIdentifier=_enablingApplicationBundleIdentifier;
@property (nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property (strong, nonatomic) UIView *view;
@property (nonatomic) BOOL viewCanBeDisplayed; // @synthesize viewCanBeDisplayed=_viewCanBeDisplayed;

+ (void)disableBundleNamed:(id)arg1;
+ (void)disableBundleNamed:(id)arg1 deactivationContext:(id)arg2;
+ (void)enableBundleNamed:(id)arg1;
+ (void)enableBundleNamed:(id)arg1 activationContext:(id)arg2;
- (CDUnknownBlockType)_disableTransitionBlock;
- (void)_setDisableTransitionBlock:(CDUnknownBlockType)arg1;
- (BOOL)allowsControlCenter;
- (BOOL)allowsLockScreenCamera;
- (BOOL)allowsLockScreenHint;
- (BOOL)allowsLockScreenMediaControls;
- (BOOL)allowsNotificationCenter;
- (BOOL)allowsPhotoSlideshow;
- (BOOL)allowsSiri;
- (BOOL)allowsTimer;
- (void)alwaysFullscreenValueHasChanged;
- (BOOL)animateResumingToApplicationWithIdentifier:(id)arg1;
- (id)backgroundView;
- (id)bundleIDForUnlock;
- (BOOL)canBeAlwaysFullscreen;
- (BOOL)canScreenDim;
- (id)customHeaderView;
- (id)customSubtitleColor;
- (id)customSubtitleText;
- (void)dealloc;
- (void)deviceLockViewDidHide;
- (void)deviceLockViewWillShow;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)disable;
- (void)disableWithTransitionBlock:(CDUnknownBlockType)arg1;
- (BOOL)disablesAwayItemsCompletely;
- (CDUnknownBlockType)enableTransitionBlock;
- (BOOL)handleGesture:(int)arg1 fingerCount:(unsigned long long)arg2;
- (BOOL)handleHeadsetButtonPressed:(BOOL)arg1;
- (BOOL)handleLockButtonPressed;
- (BOOL)handleMenuButtonDoubleTap;
- (BOOL)handleMenuButtonHeld;
- (BOOL)handleMenuButtonTap;
- (BOOL)handleVolumeDownButtonPressed;
- (BOOL)handleVolumeUpButtonPressed;
- (BOOL)hasCustomSubtitle;
- (id)init;
- (BOOL)isContentViewWhiteUnderSlideToUnlockText;
- (BOOL)isFullscreen;
- (id)legibilitySettings;
- (BOOL)legibilitySettingsOverridesVibrancy;
- (void)loadView;
- (void)lockScreenMediaControlsShown:(BOOL)arg1;
- (unsigned long long)notificationBehavior;
- (unsigned long long)overlayStyle;
- (long long)pluginPriority;
- (unsigned long long)presentationStyle;
- (void)purgeView;
- (BOOL)retainsPriorityWhileInactive;
- (void)setActivationContext:(id)arg1;
- (void)setDeactivationContext:(id)arg1;
- (void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFullscreen:(BOOL)arg1 duration:(double)arg2;
- (void)setNeedsLegibilityAppearanceUpdate;
- (BOOL)shouldAutoHideNotifications;
- (BOOL)shouldDisableOnRelock;
- (BOOL)shouldDisableOnUnlock;
- (BOOL)shouldShowLockStatusBarTime;
- (BOOL)showAwayItems;
- (BOOL)showBatteryChargingText;
- (BOOL)showDate;
- (BOOL)showDateView;
- (BOOL)showHeaderView;
- (BOOL)showStatusBar;
- (BOOL)showsDuringCall;
- (id)slideToUnlockText;
- (double)transitionDuration;
- (unsigned long long)unlockAnimationStyleForDestinationApp:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (double)viewFadeInDuration;
- (BOOL)viewWantsFullscreenLayout;
- (BOOL)viewWantsOverlayLayout;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)wantsAutomaticFullscreenTimer;
- (BOOL)wantsHardwareEventsWhenScreenDimmed;
- (BOOL)wantsMenuButtonHeldEvent;
- (BOOL)wantsMesaAutoUnlock;
- (BOOL)wantsSwipeGestureRecognizer;
- (BOOL)wantsToOpenURLsWhilePasscodeLocked;
- (BOOL)wantsUserWallpaper;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end

