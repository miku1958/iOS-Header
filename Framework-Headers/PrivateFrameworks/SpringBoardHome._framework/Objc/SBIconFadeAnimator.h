//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBIconAnimator.h>

@class UIView;

@interface SBIconFadeAnimator : SBIconAnimator
{
    UIView *_crossfadeView;
    BOOL _addedToWindow;
    BOOL _fadesReferenceView;
}

@property (nonatomic) BOOL fadesReferenceView; // @synthesize fadesReferenceView=_fadesReferenceView;

- (void).cxx_destruct;
- (void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(CDUnknownBlockType)arg3;
- (void)_applyAlphaForFraction:(double)arg1;
- (void)_cleanupAnimation;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_prepareAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (id)initWithAnimationContainer:(id)arg1 crossfadeView:(id)arg2;

@end
