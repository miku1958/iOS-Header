//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBGestureSwitcherModifier.h>

#import <SpringBoard/SBHomeGestureDockSwitcherModifierDelegate-Protocol.h>
#import <SpringBoard/SBHomeGestureFinalDestinationSwitcherModifierDelegate-Protocol.h>

@class NSString, SBAppLayout, SBCoplanarSwitcherModifier, SBHomeGestureDockSwitcherModifier, SBHomeGestureFinalDestinationSwitcherModifier;

@interface SBReduceMotionHomeGestureSwitcherModifier : SBGestureSwitcherModifier <SBHomeGestureDockSwitcherModifierDelegate, SBHomeGestureFinalDestinationSwitcherModifierDelegate>
{
    SBCoplanarSwitcherModifier *_coplanarLayoutModifier;
    SBHomeGestureDockSwitcherModifier *_dockModifier;
    SBHomeGestureFinalDestinationSwitcherModifier *_finalDestinationModifier;
    SBAppLayout *_selectedAppLayout;
    long long _startingEnvironmentMode;
    BOOL _continuingGesture;
    BOOL _lastGestureWasAnArcSwipe;
    BOOL _scrunchInitiated;
    struct CGPoint _initialTouchLocation;
    struct CGPoint _lastTouchLocation;
    struct CGPoint _translation;
    struct CGPoint _velocity;
    struct CGPoint _translationAdjustmentForStartingFromHomeScreen;
    BOOL _gestureHasBegun;
    BOOL _gestureHasEnded;
    unsigned long long _reduceMotionAxis;
    BOOL _endingGestureForAppSwitcher;
    BOOL _didWarmupReduceMotionHaptic;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_actionForActivatingFinalDestination:(long long)arg1;
- (void)_applyPrototypeSettings;
- (id)_updateForGestureDidBeginWithEvent:(id)arg1;
- (id)_updateForGestureDidChangeWithEvent:(id)arg1;
- (id)_updateForGestureDidEndWithEvent:(id)arg1;
- (void)_updateGestureTranslationAndVelocityWithEvent:(id)arg1;
- (id)_updateReduceMotionAxisIfNecessaryWithEvent:(id)arg1;
- (void)_updateTranslationAdjustmentForGestureFromHomeScreenIfNeededWithEvent:(id)arg1;
- (long long)backdropBlurType;
- (struct UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1;
- (long long)currentFinalDestination;
- (void)didMoveToParentModifier:(id)arg1;
- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (struct _NSRange)fullSizeSnapshotsRange;
- (id)handleGestureEvent:(id)arg1;
- (id)handleHomeGestureSettingsChangedEvent:(id)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)initWithGestureID:(id)arg1 selectedAppLayout:(id)arg2 startingEnvironmentMode:(long long)arg3 continuingGesture:(BOOL)arg4 lastGestureWasAnArcSwipe:(BOOL)arg5;
- (BOOL)isHomeScreenContentRequired;
- (BOOL)isIndexVisible:(unsigned long long)arg1;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isWallpaperRequiredForSwitcher;
- (long long)keyboardSuppressionMode;
- (long long)liveContentRasterizationStyle;
- (unsigned long long)numberOfAppLayoutsToCacheSnapshots;
- (double)opacityForIndex:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (long long)sceneDeactivationReason;
- (BOOL)shouldRubberbandHomeGrabberView;
- (double)unconditionalDistanceThresholdForHome;
- (long long)wallpaperStyle;
- (BOOL)wantsMinificationFilter;
- (BOOL)wantsResignActiveAssertion;

@end
