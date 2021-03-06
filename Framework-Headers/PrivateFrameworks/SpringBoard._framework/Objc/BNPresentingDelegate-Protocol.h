//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSDictionary, UIEvent, UIGestureRecognizer, UIPanGestureRecognizer, UITouch, UIView;
@protocol BNBannerTransitioningDelegate, BNPresentable, BNPresenting, UIViewControllerTransitionCoordinator;

@protocol BNPresentingDelegate <NSObject>
- (void)presenterRelinquishesVisibility:(id<BNPresenting>)arg1;
- (void)presenterRequestsVisibility:(id<BNPresenting>)arg1;

@optional
- (id<BNBannerTransitioningDelegate>)defaultTransitioningDelegateForPresenter:(id<BNPresenting>)arg1;
- (UIPanGestureRecognizer *)panGestureRecognizerForPresenter:(id<BNPresenting>)arg1;
- (struct CGPoint)presenter:(id<BNPresenting>)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2 locationForEvent:(UIEvent *)arg3 inView:(UIView *)arg4;
- (struct CGPoint)presenter:(id<BNPresenting>)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2 locationForTouch:(UITouch *)arg3 inView:(UIView *)arg4;
- (struct CGPoint)presenter:(id<BNPresenting>)arg1 gestureRecognizer:(UIPanGestureRecognizer *)arg2 translationInView:(UIView *)arg3;
- (struct CGPoint)presenter:(id<BNPresenting>)arg1 gestureRecognizer:(UIPanGestureRecognizer *)arg2 velocityInView:(UIView *)arg3;
- (void)presenter:(id<BNPresenting>)arg1 willDismissPresentable:(id<BNPresentable>)arg2 withTransitionCoordinator:(id<UIViewControllerTransitionCoordinator>)arg3 userInfo:(NSDictionary *)arg4;
- (void)presenter:(id<BNPresenting>)arg1 willPresentPresentable:(id<BNPresentable>)arg2 withTransitionCoordinator:(id<UIViewControllerTransitionCoordinator>)arg3 userInfo:(NSDictionary *)arg4;
- (void)presenter:(id<BNPresenting>)arg1 willTransitionToSize:(struct CGSize)arg2 withTransitionCoordinator:(id<UIViewControllerTransitionCoordinator>)arg3;
@end

