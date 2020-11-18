//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/CCUIModularControlCenterViewControllerDelegate-Protocol.h>

@class CCUIModularControlCenterOverlayViewController;
@protocol UIViewSpringAnimationBehaviorDescribing;

@protocol CCUIModularControlCenterOverlayViewControllerDelegate <CCUIModularControlCenterViewControllerDelegate>
- (void)controlCenterViewController:(CCUIModularControlCenterOverlayViewController *)arg1 wantsHostStatusBarHidden:(BOOL)arg2;
- (double)reachabilityOffsetForControlCenterViewController:(CCUIModularControlCenterOverlayViewController *)arg1;
- (id<UIViewSpringAnimationBehaviorDescribing>)reachabilitySpringAnimationBehaviorForControlCenterViewController:(CCUIModularControlCenterOverlayViewController *)arg1;

@optional
- (void)controlCenterViewController:(CCUIModularControlCenterOverlayViewController *)arg1 didChangePresentationState:(unsigned long long)arg2;
- (void)controlCenterViewController:(CCUIModularControlCenterOverlayViewController *)arg1 significantPresentationProgressChange:(double)arg2;
@end
