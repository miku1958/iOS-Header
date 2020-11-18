//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIScrollsToTopInitiatorView.h>

#import <UIKit/UIStatusBarServerClient-Protocol.h>
#import <UIKit/UIStatusBarStateObserver-Protocol.h>

@class NSMutableArray, NSMutableSet, NSNumber, NSString, UIColor, UILabel, UIStatusBarBackgroundView, UIStatusBarForegroundView, UIStatusBarServer, UIStatusBarStyleAnimationParameters, UIStatusBarStyleAttributes, UIStatusBarStyleRequest, UIStatusBarWindow, UIView;
@protocol UIStatusBarStateProvider, UIStatusBarStyleDelegate;

@interface UIStatusBar : _UIScrollsToTopInitiatorView <UIStatusBarServerClient, UIStatusBarStateObserver>
{
    UIStatusBarServer *_statusBarServer;
    id<UIStatusBarStateProvider> _inProcessProvider;
    BOOL _showsForeground;
    UIStatusBarBackgroundView *_backgroundView;
    UIStatusBarForegroundView *_foregroundView;
    UILabel *_doubleHeightLabel;
    UIView *_doubleHeightLabelContainer;
    NSString *_currentDoubleHeightText;
    CDStruct_7953f186 _currentRawData;
    NSMutableArray *_interruptedAnimationCompositeViews;
    UIStatusBarBackgroundView *_newStyleBackgroundView;
    UIStatusBarForegroundView *_newStyleForegroundView;
    UIStatusBar *_slidingStatusBar;
    long long _requestedStyle;
    int _styleOverrides;
    UIStatusBarStyleAttributes *_styleAttributes;
    long long _orientation;
    BOOL _hidden;
    BOOL _suppressesHiddenSideEffects;
    BOOL _foreground;
    BOOL _registered;
    BOOL _reservesEmptyTimeRegion;
    BOOL _waitingOnCallbackAfterChangingStyleOverridesLocally;
    BOOL _suppressGlow;
    double _translucentBackgroundAlpha;
    BOOL _showOnlyCenterItems;
    BOOL _foregroundViewShouldIgnoreStatusBarDataDuringAnimation;
    CDStruct_603bf4be *_localDataOverrides;
    UIColor *_tintColor;
    UIColor *_lastUsedBackgroundColor;
    UIStatusBarStyleAnimationParameters *_nextTintTransition;
    NSNumber *_overrideHeight;
    NSMutableSet *_disableRasterizationReasons;
    BOOL _persistentAnimationsEnabled;
    BOOL _simulatesLegacyAppearance;
    BOOL _serverUpdatesDisabled;
    BOOL _homeItemsDisabled;
    UIStatusBarWindow *_statusBarWindow;
    id<UIStatusBarStyleDelegate> _styleDelegate;
    UIColor *_foregroundColor;
    long long _legibilityStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL homeItemsDisabled; // @synthesize homeItemsDisabled=_homeItemsDisabled;
@property (nonatomic) long long legibilityStyle; // @synthesize legibilityStyle=_legibilityStyle;
@property (nonatomic) BOOL persistentAnimationsEnabled; // @synthesize persistentAnimationsEnabled=_persistentAnimationsEnabled;
@property (nonatomic) BOOL serverUpdatesDisabled; // @synthesize serverUpdatesDisabled=_serverUpdatesDisabled;
@property (nonatomic) BOOL simulatesLegacyAppearance; // @synthesize simulatesLegacyAppearance=_simulatesLegacyAppearance;
@property (weak, nonatomic) UIStatusBarWindow *statusBarWindow; // @synthesize statusBarWindow=_statusBarWindow;
@property (weak, nonatomic) id<UIStatusBarStyleDelegate> styleDelegate; // @synthesize styleDelegate=_styleDelegate;
@property (readonly, nonatomic) int styleOverrides; // @synthesize styleOverrides=_styleOverrides;
@property (copy, nonatomic) UIStatusBarStyleRequest *styleRequest;
@property (readonly) Class superclass;

+ (long long)_defaultStyleForRequestedStyle:(long long)arg1 styleOverrides:(int)arg2 simulateLegacyAppearance:(BOOL)arg3;
+ (struct CGRect)_frameInSceneReferenceSpaceForStyle:(long long)arg1 orientation:(long long)arg2 inSceneWithReferenceSize:(struct CGSize)arg3;
+ (struct CGRect)_frameInSceneReferenceSpaceForStyleAttributes:(id)arg1 orientation:(long long)arg2;
+ (struct CGRect)_frameInSceneReferenceSpaceForStyleAttributes:(id)arg1 orientation:(long long)arg2 inSceneWithReferenceSize:(struct CGSize)arg3;
+ (BOOL)_isLightContentStyle:(long long)arg1;
+ (id)_newStyleAttributesForRequest:(id)arg1;
+ (id)_styleAttributesForRequest:(id)arg1;
+ (id)_styleAttributesForStatusBarStyle:(long long)arg1 legacy:(BOOL)arg2;
+ (int)cornerStyleForRequestedStyle:(long long)arg1 effectiveStyle:(long long)arg2 alignment:(int)arg3;
+ (id)defaultBlueTintColor;
+ (long long)defaultStatusBarStyleWithTint:(BOOL)arg1;
+ (long long)defaultStyleForRequestedStyle:(long long)arg1 styleOverrides:(int)arg2;
+ (long long)deviceUserInterfaceLayoutDirection;
+ (void)enumerateStatusBarStyleOverridesWithBlock:(CDUnknownBlockType)arg1;
+ (void)getData:(CDStruct_7953f186 *)arg1 forRequestedData:(const CDStruct_7953f186 *)arg2 withOverrides:(const CDStruct_603bf4be *)arg3;
+ (double)heightForStyle:(long long)arg1 orientation:(long long)arg2;
+ (long long)lowBatteryLevel;
+ (id)navBarTintColorFromStatusBarTintColor:(id)arg1;
+ (void)setSuppressUpdateAnimations:(BOOL)arg1;
+ (void)setTintOverrideEnabled:(BOOL)arg1 withColor:(id)arg2;
+ (id)statusBarTintColorForNavBarTintColor:(id)arg1;
- (void).cxx_destruct;
- (void)_adjustDoubleHeightTextVisibility;
- (struct CGRect)_backgroundFrameForAttributes:(id)arg1;
- (id)_backgroundView;
- (void)_beginDisablingRasterizationForReason:(id)arg1;
- (void)_clearOverrideHeight;
- (void)_crossfadeToNewBackgroundView;
- (void)_crossfadeToNewForegroundViewWithAlpha:(double)arg1;
- (id)_currentComposedData;
- (id)_currentComposedDataForStyle:(id)arg1;
- (id)_currentStyleAttributes;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3;
- (void)_didEnterBackground:(id)arg1;
- (id)_doubleHeightStatusStringForStyle:(long long)arg1;
- (void)_endDisablingRasterizationForReason:(id)arg1;
- (void)_evaluateServerRegistration;
- (void)_finishedSettingStyleWithOldHeight:(double)arg1 newHeight:(double)arg2 animation:(int)arg3;
- (double)_hiddenAlphaForHideAnimationParameters:(id)arg1;
- (struct CGAffineTransform)_hiddenTransformForHideAnimationParameters:(id)arg1;
- (BOOL)_isTransparent;
- (void)_itemViewPerformButtonAction:(id)arg1;
- (void)_itemViewShouldBeginDisablingRasterization:(id)arg1;
- (void)_itemViewShouldEndDisablingRasterization:(id)arg1;
- (void)_performBlockWhileIgnoringForegroundViewChanges:(CDUnknownBlockType)arg1;
- (id)_prepareInterruptedAnimationCompositeViewIncludingForeground:(BOOL)arg1;
- (id)_prepareToSetStyle:(id)arg1 animation:(int)arg2 forced:(BOOL)arg3;
- (void)_requestStyleAttributes:(id)arg1 animationParameters:(id)arg2;
- (void)_requestStyleAttributes:(id)arg1 animationParameters:(id)arg2 forced:(BOOL)arg3;
- (long long)_requestedStyle;
- (void)_setDoubleHeightStatusString:(id)arg1;
- (void)_setFrameForStyle:(id)arg1;
- (void)_setOverrideHeight:(double)arg1;
- (void)_setStyle:(id)arg1;
- (void)_setStyle:(id)arg1 animation:(int)arg2;
- (void)_setVisualAltitude:(double)arg1;
- (void)_setVisualAltitudeBias:(struct CGSize)arg1;
- (BOOL)_shouldReverseLayoutDirection;
- (BOOL)_shouldSeekHigherPriorityTouchTarget;
- (BOOL)_shouldUseInProcessProviderDoubleHeightStatusString;
- (struct CGAffineTransform)_slideTransform;
- (double)_standardHeight;
- (void)_statusBarDidAnimateRotation;
- (void)_statusBarWillAnimateRotation;
- (id)_styleAttributesForRequest:(id)arg1;
- (void)_styleOverridesDidChange:(id)arg1;
- (void)_swapToNewBackgroundView;
- (void)_swapToNewForegroundView;
- (BOOL)_touchShouldProduceReturnEvent;
- (void)_updateBackgroundFrame;
- (void)_updatePersistentAnimationsEnabledForForegroundView:(id)arg1;
- (void)_updateShouldRasterize;
- (void)_willEnterForeground:(id)arg1;
- (id)activeTintColor;
- (void)crossfadeTime:(BOOL)arg1 duration:(double)arg2;
- (id)currentDoubleHeightLabelText;
- (struct CGRect)currentFrame;
- (double)currentHeight;
- (long long)currentStyle;
- (id)currentStyleRequestForStyle:(long long)arg1;
- (void)dealloc;
- (double)defaultDoubleHeight;
- (double)defaultHeight;
- (void)didMoveToSuperview;
- (void)forceUpdateData:(BOOL)arg1;
- (void)forceUpdateDoubleHeightStatus;
- (void)forceUpdateGlowAnimation;
- (void)forceUpdateStyleOverrides:(BOOL)arg1;
- (void)forceUpdateToData:(const CDStruct_7953f186 *)arg1 animated:(BOOL)arg2;
- (void)forgetEitherSideHistory;
- (struct CGRect)frameForOrientation:(long long)arg1;
- (double)heightForOrientation:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 showForegroundView:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1 showForegroundView:(BOOL)arg2 inProcessStateProvider:(id)arg3;
- (BOOL)isDoubleHeight;
- (BOOL)isHidden;
- (BOOL)isTranslucent;
- (void)layoutSubviews;
- (void)noteStyleOverridesChangedLocally;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)requestStyle:(long long)arg1;
- (void)requestStyle:(long long)arg1 animated:(BOOL)arg2;
- (void)requestStyle:(long long)arg1 animated:(BOOL)arg2 forced:(BOOL)arg3;
- (void)requestStyle:(long long)arg1 animation:(int)arg2 startTime:(double)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)requestStyle:(long long)arg1 animationParameters:(id)arg2;
- (void)requestStyle:(long long)arg1 animationParameters:(id)arg2 forced:(BOOL)arg3;
- (void)setBackgroundAlpha:(double)arg1;
- (void)setForegroundColor:(id)arg1 animationParameters:(id)arg2;
- (void)setHidden:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHidden:(BOOL)arg1 animationParameters:(id)arg2;
- (void)setLegibilityStyle:(long long)arg1 animationParameters:(id)arg2;
- (void)setLocalDataOverrides:(CDStruct_603bf4be *)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setShowsOnlyCenterItems:(BOOL)arg1;
- (void)setStyleRequest:(id)arg1 animationParameters:(id)arg2;
- (void)setSuppressesGlow:(BOOL)arg1;
- (void)setSuppressesHiddenSideEffects:(BOOL)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTintColor:(id)arg1 withDuration:(double)arg2;
- (BOOL)showsContentsOnScreen;
- (void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(long long)arg3;
- (void)statusBarServer:(id)arg1 didReceiveGlowAnimationState:(BOOL)arg2 forStyle:(long long)arg3;
- (void)statusBarServer:(id)arg1 didReceiveStatusBarData:(const CDStruct_7953f186 *)arg2 withActions:(int)arg3;
- (void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(int)arg2;
- (void)statusBarStateProvider:(id)arg1 didChangeDoubleHeightStatusStringForStyle:(long long)arg2;
- (void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const CDStruct_7953f186 *)arg2 withActions:(int)arg3;
- (long long)styleForRequestedStyle:(long long)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
