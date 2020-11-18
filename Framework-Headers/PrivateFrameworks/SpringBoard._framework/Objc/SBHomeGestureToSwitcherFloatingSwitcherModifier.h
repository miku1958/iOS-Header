//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBFluidSwitcherAnimationSettings, SBSwitcherModifier;

@interface SBHomeGestureToSwitcherFloatingSwitcherModifier : SBTransitionSwitcherModifier
{
    SBSwitcherModifier *_multitaskingModifier;
    SBAppLayout *_selectedAppLayout;
    SBFluidSwitcherAnimationSettings *_animationSettings;
}

@property (strong, nonatomic) SBFluidSwitcherAnimationSettings *animationSettings; // @synthesize animationSettings=_animationSettings;
@property (strong, nonatomic) SBSwitcherModifier *multitaskingModifier; // @synthesize multitaskingModifier=_multitaskingModifier;
@property (strong, nonatomic) SBAppLayout *selectedAppLayout; // @synthesize selectedAppLayout=_selectedAppLayout;

- (void).cxx_destruct;
- (id)initWithTransitionID:(id)arg1 multitaskingModifier:(id)arg2 selectedAppLayout:(id)arg3;
- (BOOL)isIndexVisible:(unsigned long long)arg1;
- (id)layoutSettings;
- (long long)liveContentRasterizationStyle;
- (id)transitionWillBegin;
- (BOOL)wantsMinificationFilter;

@end
