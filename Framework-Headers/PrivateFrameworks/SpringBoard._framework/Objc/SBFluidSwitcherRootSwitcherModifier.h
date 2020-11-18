//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

@interface SBFluidSwitcherRootSwitcherModifier : SBSwitcherModifier
{
    BOOL _hasPerformedInitialSetup;
}

- (void)_handleTransitionEvent:(id)arg1;
- (id)_reduceMotionModifier;
- (void)_setup;
- (id)_swipeToKillModifierKeyForAppLayout:(id)arg1;
- (void)_updateFloorModifierWithTransitionEvent:(id)arg1;
- (void)_updateLowEndHardwareModifier;
- (void)_updateMultitaskingModifierWithEvent:(id)arg1;
- (void)_updateReduceMotionModifierWithReduceMotionChangedEvent:(id)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (id)floorModifier;
- (id)floorModifierForTransitionEvent:(id)arg1;
- (id)gestureModifierForGestureEvent:(id)arg1;
- (id)handleEvent:(id)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)handleInlineTransitionEvent:(id)arg1;
- (id)handleInsertionEvent:(id)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)handleReduceMotionChangedEvent:(id)arg1;
- (id)handleRemovalEvent:(id)arg1;
- (id)handleScrollEvent:(id)arg1;
- (id)handleSwipeToKillEvent:(id)arg1;
- (id)insertionModifierForInsertionEvent:(id)arg1;
- (id)lowEndHardwareModifier;
- (id)multitaskingModifier;
- (id)multitaskingModifierForEvent:(id)arg1;
- (id)reduceMotionModifierForReduceMotionChangedEvent:(id)arg1;
- (id)removalModifierForRemovalEvent:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)swipeToKillModifierForSwipeToKillEvent:(id)arg1;
- (id)transitionModifierForInlineTransitionEvent:(id)arg1;
- (id)transitionModifierForMainTransitionEvent:(id)arg1;
- (id)userScrollingModifierForScrollEvent:(id)arg1;
- (void)verifyInternalIntegrityAfterHandlingEvent:(id)arg1;

@end
