//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVKit/NSObject-Protocol.h>

@class AVPlaybackControlsVisibilityController, UIView;
@protocol UIViewImplicitlyAnimating;

@protocol AVPlaybackControlsVisibilityControllerDelegate <NSObject>
- (void)playbackControlsVisibilityController:(AVPlaybackControlsVisibilityController *)arg1 animateAlongsideVisibilityAnimations:(id<UIViewImplicitlyAnimating>)arg2;
- (void)playbackControlsVisibilityController:(AVPlaybackControlsVisibilityController *)arg1 updateStatusBarAppearanceUsingAnimator:(id<UIViewImplicitlyAnimating>)arg2;
- (void)playbackControlsVisibilityController:(AVPlaybackControlsVisibilityController *)arg1 willShowView:(UIView *)arg2;
- (void)playbackControlsVisibilityControllerDidChangeViewVisibility:(AVPlaybackControlsVisibilityController *)arg1;
- (void)playbackControlsVisibilityControllerWillExitAutoplayPhase:(AVPlaybackControlsVisibilityController *)arg1;
@end
