//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVKit/NSObject-Protocol.h>

@class AVPlaybackControlsView, AVPlayerViewControllerContentView, AVTurboModePlaybackControlsPlaceholderView, NSNumber;

@protocol AVPlayerViewControllerContentViewDelegate <NSObject>
- (void)playerViewControllerContentView:(AVPlayerViewControllerContentView *)arg1 willLoadPlaybackControlsView:(AVPlaybackControlsView *)arg2;
- (void)playerViewControllerContentView:(AVPlayerViewControllerContentView *)arg1 willLoadTurboModePlaceholderView:(AVTurboModePlaybackControlsPlaceholderView *)arg2;
- (void)playerViewControllerContentViewDidChangeVideoGravity:(AVPlayerViewControllerContentView *)arg1;
- (void)playerViewControllerContentViewDidLayoutSubviews:(AVPlayerViewControllerContentView *)arg1;
- (void)playerViewControllerContentViewDidMoveToSuperviewOrWindow:(AVPlayerViewControllerContentView *)arg1;
- (void)playerViewControllerContentViewDidUpdateScrollingStatus:(AVPlayerViewControllerContentView *)arg1;
- (struct UIEdgeInsets)playerViewControllerContentViewEdgeInsetsForLetterboxedVideo:(AVPlayerViewControllerContentView *)arg1;
- (BOOL)playerViewControllerContentViewHasActiveTransition:(AVPlayerViewControllerContentView *)arg1;
- (BOOL)playerViewControllerContentViewIsBeingTransitionedFromFullScreen:(AVPlayerViewControllerContentView *)arg1;
- (BOOL)playerViewControllerContentViewIsPlayingOnSecondScreen:(AVPlayerViewControllerContentView *)arg1;
- (NSNumber *)playerViewControllerContentViewOverrideLayoutClass:(AVPlayerViewControllerContentView *)arg1;
- (void)playerViewControllerContentViewPlaybackContentContainerViewChanged:(AVPlayerViewControllerContentView *)arg1;
- (BOOL)playerViewControllerContentViewShouldApplyAutomaticVideoGravity:(AVPlayerViewControllerContentView *)arg1;
@end

