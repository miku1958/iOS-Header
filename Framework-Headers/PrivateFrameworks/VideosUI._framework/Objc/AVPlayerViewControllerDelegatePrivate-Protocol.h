//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/AVPlayerViewControllerDelegate-Protocol.h>

@class AVPlayerViewController, UIView;
@protocol AVPlayerViewControllerAnimationCoordinator, UIViewControllerTransitionCoordinator;

@protocol AVPlayerViewControllerDelegatePrivate <AVPlayerViewControllerDelegate>

@optional
- (void)playerViewController:(AVPlayerViewController *)arg1 contentViewWillTransitionToSize:(struct CGSize)arg2 withTransitionCoordinator:(id<UIViewControllerTransitionCoordinator>)arg3;
- (UIView *)playerViewController:(AVPlayerViewController *)arg1 targetViewForDismissalAnimationWithProposedTargetView:(UIView *)arg2;
- (void)playerViewController:(AVPlayerViewController *)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id<UIViewControllerTransitionCoordinator>)arg2;
- (void)playerViewController:(AVPlayerViewController *)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id<UIViewControllerTransitionCoordinator>)arg2;
- (void)playerViewController:(AVPlayerViewController *)arg1 willTransitionToVisibilityOfPlaybackControls:(BOOL)arg2 withAnimationCoordinator:(id<AVPlayerViewControllerAnimationCoordinator>)arg3;
@end

