//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBGestureSwitcherModifier.h>

#import <SpringBoard/SBHomeGestureDockSwitcherModifierDelegate-Protocol.h>
#import <SpringBoard/SBHomeGestureFinalDestinationSwitcherModifierDelegate-Protocol.h>

@class NSString, SBAppLayout, SBDismissSiriSwitcherModifier, SBHomeGestureDockSwitcherModifier, SBHomeGestureFinalDestinationSwitcherModifier, SBStackedFloatingSwitcherModifier, UIViewFloatAnimatableProperty;

@interface SBHomeGestureFloatingSwitcherModifier : SBGestureSwitcherModifier <SBHomeGestureDockSwitcherModifierDelegate, SBHomeGestureFinalDestinationSwitcherModifierDelegate>
{
    SBStackedFloatingSwitcherModifier *_stackedLayoutModifier;
    SBHomeGestureDockSwitcherModifier *_dockModifier;
    SBHomeGestureFinalDestinationSwitcherModifier *_finalDestinationModifier;
    SBDismissSiriSwitcherModifier *_dismissSiriModifier;
    SBAppLayout *_selectedAppLayout;
    BOOL _continuingGesture;
    BOOL _lastGestureWasAnArcSwipe;
    struct CGPoint _translation;
    struct CGPoint _velocity;
    double _rubberbandedYTranslation;
    double _scaleProgress;
    double _multitaskingHintProgress;
    UIViewFloatAnimatableProperty *_rampingProperty;
    BOOL _gestureHasBegun;
    BOOL _gestureHasEnded;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginAnimatingRampingPropertyWithSettings:(id)arg1;
- (id)_responseForActivatingFinalDestination:(long long)arg1;
- (id)_updateForGestureDidBeginWithEvent:(id)arg1;
- (id)_updateForGestureDidChangeWithEvent:(id)arg1;
- (id)_updateForGestureDidEndWithEvent:(id)arg1;
- (void)_updateGestureTranslationAndVelocityWithEvent:(id)arg1;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutsToCacheSnapshots;
- (id)appLayoutsToResignActive;
- (struct UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1;
- (long long)currentFinalDestination;
- (double)darkeningAlphaForIndex:(unsigned long long)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)initWithGestureID:(id)arg1 selectedAppLayout:(id)arg2 continuingGesture:(BOOL)arg3 lastGestureWasAnArcSwipe:(BOOL)arg4;
- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (id)keyboardSuppressionMode;
- (id)liveContentRasterizationAttributesForAppLayout:(id)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (double)shadowOffsetForIndex:(unsigned long long)arg1;
- (double)shadowOpacityForIndex:(unsigned long long)arg1;
- (id)topMostLayoutElements;
- (double)unconditionalDistanceThresholdForHome;
- (id)visibleAppLayouts;

@end
