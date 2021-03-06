//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKAppGrabberView, CKBrowserTransitionCoordinator, IMBalloonPlugin, NSDate, NSString, UIImage, UIViewController;
@protocol CKBrowserViewControllerProtocol;

@protocol CKBrowserTransitionCoordinatorDelegate <NSObject>

@optional
- (CKAppGrabberView *)appGrabberForBrowserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1;
- (UIImage *)appIconOverride;
- (NSString *)appTitleOverride;
- (void)browserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1 browserWillBecomeInactive:(UIViewController<CKBrowserViewControllerProtocol> *)arg2;
- (void)browserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1 didSwitchToPlugin:(IMBalloonPlugin *)arg2;
- (void)browserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1 didTransitionFromOrientation:(long long)arg2 toOrientation:(long long)arg3;
- (void)browserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1 expandedStateDidChange:(BOOL)arg2 withReason:(long long)arg3;
- (void)browserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1 hasUpdatedLastTouchDate:(NSDate *)arg2;
- (struct CGSize)browserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1 preferredSizeForBrowser:(UIViewController<CKBrowserViewControllerProtocol> *)arg2;
- (double)browserTransitionCoordinatorCollapsedContentHeight:(CKBrowserTransitionCoordinator *)arg1;
- (void)browserTransitionCoordinatorDidCollapseOrDismiss:(CKBrowserTransitionCoordinator *)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorDidTransitionOrPresentToFullscreen:(CKBrowserTransitionCoordinator *)arg1 withReason:(long long)arg2;
- (BOOL)browserTransitionCoordinatorShouldDismissOnDragSuccess:(CKBrowserTransitionCoordinator *)arg1;
- (void)browserTransitionCoordinatorWantsPresentationOfAppManager:(CKBrowserTransitionCoordinator *)arg1;
- (void)browserTransitionCoordinatorWantsPresentationOfAppStore:(CKBrowserTransitionCoordinator *)arg1;
- (void)browserTransitionCoordinatorWillCollapseOrDismiss:(CKBrowserTransitionCoordinator *)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorWillTransitionOrPresentToFullscreen:(CKBrowserTransitionCoordinator *)arg1 withReason:(long long)arg2;
- (struct CGRect)cachedCompactFrameInWindowCoordsForBrowserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1;
- (void)reinsertAppGrabberViewForBrowserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1;
- (BOOL)shouldAlwaysShowAppTitle;
- (UIViewController *)transitionsPresentationViewController;
@end

