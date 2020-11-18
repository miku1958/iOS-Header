//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterPrivateUI/GKWiggleRotateAnimator.h>

@class GKBubbleFlowContainerView, _GKBubbleFlowPathTransitionInfo;

@interface GKStandaloneWiggleRotateAnimator : GKWiggleRotateAnimator
{
    GKBubbleFlowContainerView *_containerView;
    long long _rotationDirection;
    _GKBubbleFlowPathTransitionInfo *_transitionContext;
}

@property (strong, nonatomic) GKBubbleFlowContainerView *containerView; // @synthesize containerView=_containerView;
@property (nonatomic) long long rotationDirection; // @synthesize rotationDirection=_rotationDirection;
@property (strong, nonatomic) _GKBubbleFlowPathTransitionInfo *transitionContext; // @synthesize transitionContext=_transitionContext;

- (void)animate;
- (void)animateForBubbleContainer:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)dealloc;
- (void)readEndingPositions;
- (void)readStartingPositions;
- (BOOL)rotatingRightWithTransitionContext:(id)arg1;
- (id)transitionContextCreatingIfNeeded;

@end

