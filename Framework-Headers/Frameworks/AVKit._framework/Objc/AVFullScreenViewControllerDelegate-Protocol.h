//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVKit/NSObject-Protocol.h>

@class AVFullScreenViewController, UIResponder, UIView;
@protocol UIViewControllerTransitionCoordinator;

@protocol AVFullScreenViewControllerDelegate <NSObject>
- (void)fullScreenViewController:(AVFullScreenViewController *)arg1 viewWillTransitionToSize:(struct CGSize)arg2 coordinator:(id<UIViewControllerTransitionCoordinator>)arg3;
- (void)fullScreenViewControllerNeedsAppBasedStatusBarAppearanceUpdate:(AVFullScreenViewController *)arg1;
- (void)fullScreenViewControllerWillBeginFullScreenPresentation:(AVFullScreenViewController *)arg1;
- (void)fullScreenViewControllerWillEndFullScreenPresentation:(AVFullScreenViewController *)arg1;
- (UIResponder *)keyCommandResponderForFullScreenViewController:(AVFullScreenViewController *)arg1;
- (long long)preferredStatusStyleForFullScreenViewController:(AVFullScreenViewController *)arg1;
- (BOOL)prefersStatusBarHiddenForFullScreenViewController:(AVFullScreenViewController *)arg1;
- (UIView *)viewForFullScreenViewController:(AVFullScreenViewController *)arg1;
@end

