//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UICollectionViewControllerLayoutToLayoutTransition.h>

@class PUZoomableGridTransition;
@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface PUGridZoomTransitionAnimationController : _UICollectionViewControllerLayoutToLayoutTransition
{
    id<UIViewControllerContextTransitioning> _transitionContext;
}

@property (readonly, nonatomic) PUZoomableGridTransition *gridTransitionInfo;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(BOOL)arg1;
- (double)transitionDuration:(id)arg1;

@end

