//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class PLViewControllerAnimator;
@protocol UIViewControllerContextTransitioning;

@protocol PLViewControllerAnimatorDelegate <NSObject>

@optional
- (void)viewControllerAnimator:(PLViewControllerAnimator *)arg1 didEndDismissalAnimation:(BOOL)arg2 withTransitionContext:(id<UIViewControllerContextTransitioning>)arg3;
- (void)viewControllerAnimator:(PLViewControllerAnimator *)arg1 didEndPresentationAnimation:(BOOL)arg2 withTransitionContext:(id<UIViewControllerContextTransitioning>)arg3;
@end
