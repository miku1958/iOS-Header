//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKBubblePathAnimator.h>

@interface GKScatterAnimator : GKBubblePathAnimator
{
    long long _focusBubbleType;
}

@property (nonatomic) long long focusBubbleType; // @synthesize focusBubbleType=_focusBubbleType;

+ (double)preferredDuration;
- (void)animateTransition:(id)arg1;
- (long long)animatorType;
- (double)minimumDurationForViewAnimations;
- (id)scatterAnimationsForBubble:(id)arg1 sortedBubbles:(id)arg2 contractPoint:(id)arg3 context: /* Error: Ran out of types for this method. */;
- (BOOL)scatterBubble:(id)arg1 shouldMoveLeftAmongBubbles:(id)arg2 context:(id)arg3;
- (BOOL)scatterBubble:(id)arg1 shouldMoveUpAmongBubbles:(id)arg2;
- (id)scatterBubblesSortedLeftToRightInContext:(id)arg1;

@end
