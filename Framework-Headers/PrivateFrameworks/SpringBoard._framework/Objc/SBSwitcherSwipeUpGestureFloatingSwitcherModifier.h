//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBGestureSwitcherModifier.h>

@class SBDismissSiriSwitcherModifier, SBGridSwipeUpGestureSwitcherModifier;

@interface SBSwitcherSwipeUpGestureFloatingSwitcherModifier : SBGestureSwitcherModifier
{
    SBGridSwipeUpGestureSwitcherModifier *_gridSwipeUpGestureModifier;
    SBDismissSiriSwitcherModifier *_dismissSiriModifier;
}

- (void).cxx_destruct;
- (double)contentViewScale;
- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)initWithGestureID:(id)arg1;
- (id)responseForProposedChildResponse:(id)arg1 childModifier:(id)arg2 event:(id)arg3;
- (double)scaleForIndex:(unsigned long long)arg1;

@end
