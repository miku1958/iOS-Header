//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBSwitcherModifier;

@interface SBDeckContinuityToFullScreenSwitcherModifier : SBTransitionSwitcherModifier
{
    SBAppLayout *_appLayout;
    SBSwitcherModifier *_fullscreenModifier;
}

- (void).cxx_destruct;
- (struct CGRect)_initialFrameForContinuityAppLayout;
- (BOOL)_isInsertingIndex:(unsigned long long)arg1;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (struct UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1;
- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 deckModifier:(id)arg3 fullscreenModifier:(id)arg4;
- (double)opacityForIndex:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)titleOpacityForIndex:(unsigned long long)arg1;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;

@end

