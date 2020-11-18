//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVKit/AVTransition.h>

@class UIView;

@interface AVDismissalTransition : AVTransition
{
    UIView *_backgroundView;
}

- (void).cxx_destruct;
- (void)animateAlongsideInteractiveTransitionAnimationForCancelling;
- (void)animateAlongsideInteractiveTransitionAnimationForFinishing;
- (void)animateAlongsideNonInteractiveTransitionAnimation;
- (id)backgroundView;
- (void)completeTransition:(BOOL)arg1;
- (void)transitionWillBegin;
- (void)updateWithPercentComplete:(double)arg1 translation:(struct CGPoint)arg2 rotation:(double)arg3 locationInWindow:(struct CGPoint)arg4;

@end

