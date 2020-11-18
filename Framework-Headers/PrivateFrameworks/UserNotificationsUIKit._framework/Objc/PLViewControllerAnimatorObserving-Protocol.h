//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class PLViewControllerAnimator;
@protocol UIViewControllerContextTransitioning;

@protocol PLViewControllerAnimatorObserving <NSObject>

@optional
- (void)viewControllerAnimator:(PLViewControllerAnimator *)arg1 willBeginDismissalAnimationWithTransitionContext:(id<UIViewControllerContextTransitioning>)arg2;
- (void)viewControllerAnimator:(PLViewControllerAnimator *)arg1 willBeginPresentationAnimationWithTransitionContext:(id<UIViewControllerContextTransitioning>)arg2;
- (void)viewControllerAnimatorDidFinishFirstResponderChanges:(PLViewControllerAnimator *)arg1;
@end

