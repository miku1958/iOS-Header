//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosExtras/NSObject-Protocol.h>

@protocol UIViewControllerContextTransitioning, UIViewImplicitlyAnimating;

@protocol UIViewControllerAnimatedTransitioning <NSObject>
- (void)animateTransition:(id<UIViewControllerContextTransitioning>)arg1;
- (double)transitionDuration:(id<UIViewControllerContextTransitioning>)arg1;

@optional
- (void)animationEnded:(BOOL)arg1;
- (id<UIViewImplicitlyAnimating>)interruptibleAnimatorForTransition:(id<UIViewControllerContextTransitioning>)arg1;
@end

