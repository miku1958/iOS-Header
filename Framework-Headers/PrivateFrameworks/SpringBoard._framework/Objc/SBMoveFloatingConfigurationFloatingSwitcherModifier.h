//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@interface SBMoveFloatingConfigurationFloatingSwitcherModifier : SBTransitionSwitcherModifier
{
    long long _fromFloatingConfiguration;
    long long _toFloatingConfiguration;
}

- (id)_layoutSettings;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutsToResignActive;
- (id)initWithTransitionID:(id)arg1 fromFloatingConfiguration:(long long)arg2 toFloatingConfiguration:(long long)arg3;
- (id)keyboardSuppressionMode;
- (id)liveContentRasterizationAttributesForAppLayout:(id)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (BOOL)shouldPerformCrossfadeForReduceMotion;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;

@end

