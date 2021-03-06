//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBGestureRootSwitcherModifier.h>

@class SBSwitcherModifier;

@interface SBHomeGestureRootSwitcherModifier : SBGestureRootSwitcherModifier
{
    SBSwitcherModifier *_multitaskingModifier;
}

- (void).cxx_destruct;
- (id)_newMultitaskingModifier;
- (id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2;
- (long long)gestureType;
- (id)initWithStartingEnvironmentMode:(long long)arg1 multitaskingModifier:(id)arg2;
- (id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2;
- (BOOL)wantsAsynchronousSurfaceRetentionAssertion;

@end

