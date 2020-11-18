//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIStatusBar_Base.h>

#import <UIKitCore/UIStatusBarServerClient-Protocol.h>
#import <UIKitCore/UIStatusBarStateObserver-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSString, UIColor, UILabel, UIStatusBarBackgroundView, UIStatusBarForegroundView, UIStatusBarStyleAnimationParameters, UIStatusBarStyleAttributes, UIStatusBarWindow, UIView;
@protocol UIStatusBarStateProvider;

@interface UIStatusBar : UIStatusBar_Base <UIStatusBarServerClient, UIStatusBarStateObserver>
{
    id<UIStatusBarStateProvider> _inProcessProvider;
    BOOL _showsForeground;
    BOOL _observingDefaults;
    UIStatusBarBackgroundView *_backgroundView;
    UIStatusBarForegroundView *_foregroundView;
    UILabel *_doubleHeightLabel;
    UIView *_doubleHeightLabelContainer;
    NSString *_currentDoubleHeightText;
    CDStruct_1916f467 _currentRawData;
    NSMutableArray *_interruptedAnimationCompositeViews;
    UIStatusBarBackgroundView *_newStyleBackgroundView;
    UIStatusBarForegroundView *_newStyleForegroundView;
    UIStatusBar *_slidingStatusBar;
    UIStatusBarStyleAttributes *_styleAttributes;
    BOOL _waitingOnCallbackAfterChangingStyleOverridesLocally;
    BOOL _suppressGlow;
    double _translucentBackgroundAlpha;
    BOOL _showOnlyCenterItems;
    BOOL _foregroundViewShouldIgnoreStatusBarDataDuringAnimation;
    UIColor *_tintColor;
    UIColor *_lastUsedBackgroundColor;
    UIStatusBarStyleAnimationParameters *_nextTintTransition;
    NSNumber *_overrideHeight;
    NSMutableSet *_disableRasterizationReasons;
    NSMutableDictionary *_actions;
    BOOL _disablesRasterization;
    BOOL _timeHidden;
    UIStatusBarWindow *_statusBarWindow;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, getter=isTimeHidden) BOOL timeHidden; // @synthesize timeHidden=_timeHidden;

+ (double)_heightForStyle:(long long)arg1 orientation:(long long)arg2 forStatusBarFrame:(BOOL)arg3;
+ (BOOL)_isLightContentStyle:(long long)arg1;
+ (id)_newStyleAttributesForRequest:(id)arg1;
+ (void)_setDeviceUserInterfaceLayoutDirection:(long long)arg1;
+ (BOOL)_shouldForwardToImplementationClassForStyle:(long long)arg1;
+ (id)_styleAttributesForRequest:(id)arg1;
+ (id)_styleAttributesForStatusBarStyle:(long long)arg1 legacy:(BOOL)arg2;
+ (double)_viewControllerAdjustmentForOrientation:(long long)arg1;
+ (int)cornerStyleForRequestedStyle:(long long)arg1 effectiveStyle:(long long)arg2 alignment:(int)arg3;
+ (id)defaultBlueTintColor;
+ (long long)defaultStatusBarStyleWithTint:(BOOL)arg1;
+ (long long)defaultStyleForRequestedStyle:(long long)arg1 styleOverrides:(int)arg2;
+ (long long)deviceUserInterfaceLayoutDirection;
+ (void)enumerateStatusBarStyleOverridesWithBlock:(CDUnknownBlockType)arg1;
+ (void)getData:(CDStruct_1916f467 *)arg1 forRequestedData:(const CDStruct_1916f467 *)arg2 withOverrides:(const CDStruct_308dc736 *)arg3;
+ (long long)lowBatteryLevel;
+ (id)navBarTintColorFromStatusBarTintColor:(id)arg1;
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
- (void)_dateTimePreferencesUpdated;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3;
- (id)_doubleHeightStatusStringForStyle:(long long)arg1;
- (void)_endDisablingRasterizationForReason:(id)arg1;
- (void)_finishedSettingStyleWithOldHeight:(double)arg1 newHeight:(double)arg2 animation:(int)arg3;
- (id)_initWithFrame:(struct CGRect)arg1 showForegroundView:(BOOL)arg2 inProcessStateProvider:(id)arg3;
- (BOOL)_isTransparent;
- (void)_itemViewPerformButtonAction:(id)arg1;
- (void)_itemViewShouldBeginDisablingRasterization:(id)arg1;
- (void)_itemViewShouldEndDisablingRasterization:(id)arg1;
- (void)_performBlockWhileIgnoringForegroundViewChanges:(CDUnknownBlockType)arg1;
- (id)_prepareInterruptedAnimationCompositeViewIncludingForeground:(BOOL)arg1;
- (id)_prepareToSetStyle:(id)arg1 animation:(int)arg2 forced:(BOOL)arg3;
- (BOOL)_rectIntersectsTimeItem:(struct CGRect)arg1;
- (void)_requestStyle:(long long)arg1 animationParameters:(id)arg2 forced:(BOOL)arg3;
- (void)_setDisablesRasterization:(BOOL)arg1;
- (void)_setDoubleHeightStatusString:(id)arg1;
- (void)_setFrameForStyle:(id)arg1;
- (void)_setHidden:(BOOL)arg1 animationParameters:(id)arg2;
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
- (void)_swapToNewBackgroundView;
- (void)_swapToNewForegroundView;
- (BOOL)_touchShouldProduceReturnEvent;
- (void)_updateBackgroundFrame;
- (void)_updatePersistentAnimationsEnabledForForegroundView:(id)arg1;
- (void)_updateShouldRasterize;
- (void)_updateUIWithStyleAttributes:(id)arg1 animationParameters:(id)arg2;
- (void)_updateUIWithStyleAttributes:(id)arg1 animationParameters:(id)arg2 forced:(BOOL)arg3;
- (id)actionForPartWithIdentifier:(id)arg1;
- (id)activeTintColor;
- (void)animateUnlock;
- (void)crossfadeTime:(BOOL)arg1 duration:(double)arg2;
- (id)currentDoubleHeightLabelText;
- (long long)currentStyle;
- (id)currentStyleRequestForStyle:(long long)arg1;
- (void)dealloc;
- (double)defaultDoubleHeight;
- (double)defaultHeight;
- (BOOL)disablesRasterization;
- (void)forceUpdate:(BOOL)arg1;
- (void)forceUpdateData:(BOOL)arg1;
- (void)forceUpdateDoubleHeightStatus;
- (void)forceUpdateGlowAnimation;
- (void)forceUpdateToData:(const CDStruct_1916f467 *)arg1 animated:(BOOL)arg2;
- (void)forgetEitherSideHistory;
- (struct CGRect)frameForOrientation:(long long)arg1;
- (struct CGRect)frameForPartWithIdentifier:(id)arg1;
- (double)heightForOrientation:(long long)arg1;
- (BOOL)isDoubleHeight;
- (BOOL)isTranslucent;
- (void)jiggleLockIcon;
- (void)layoutSubviews;
- (void)noteStyleOverridesChangedLocally;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)requestStyle:(long long)arg1 animation:(int)arg2 startTime:(double)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)setAction:(id)arg1 forPartWithIdentifier:(id)arg2;
- (void)setBackgroundAlpha:(double)arg1;
- (void)setEnabledCenterItems:(id)arg1 duration:(double)arg2;
- (void)setForegroundAlpha:(double)arg1 animationParameters:(id)arg2;
- (void)setForegroundColor:(id)arg1 animationParameters:(id)arg2;
- (void)setLegibilityStyle:(long long)arg1 animationParameters:(id)arg2;
- (void)setOrientation:(long long)arg1;
- (void)setPersistentAnimationsEnabled:(BOOL)arg1;
- (void)setRegistered:(BOOL)arg1;
- (void)setShowsOnlyCenterItems:(BOOL)arg1;
- (void)setSimulatesLegacyAppearance:(BOOL)arg1;
- (void)setStatusBarWindow:(id)arg1;
- (void)setStyleRequest:(id)arg1 animationParameters:(id)arg2;
- (void)setSuppressesGlow:(BOOL)arg1;
- (void)setSuppressesHiddenSideEffects:(BOOL)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTintColor:(id)arg1 withDuration:(double)arg2;
- (void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(long long)arg3;
- (void)statusBarServer:(id)arg1 didReceiveGlowAnimationState:(BOOL)arg2 forStyle:(long long)arg3;
- (void)statusBarServer:(id)arg1 didReceiveStatusBarData:(const CDStruct_1916f467 *)arg2 withActions:(int)arg3;
- (void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(int)arg2;
- (void)statusBarStateProvider:(id)arg1 didChangeDoubleHeightStatusStringForStyle:(long long)arg2;
- (void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const CDStruct_1916f467 *)arg2 withActions:(int)arg3;
- (id)statusBarWindow;
- (id)styleRequest;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end

