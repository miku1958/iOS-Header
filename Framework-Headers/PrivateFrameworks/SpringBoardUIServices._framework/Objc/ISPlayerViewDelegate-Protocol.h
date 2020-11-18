//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/NSObject-Protocol.h>

@class ISPlayerView, UIGestureRecognizer, UIView;
@protocol UIGestureRecognizerDelegate;

@protocol ISPlayerViewDelegate <NSObject>

@optional
- (id<UIGestureRecognizerDelegate>)irisPlayerView:(ISPlayerView *)arg1 delegateForGestureRecognizer:(UIGestureRecognizer *)arg2;
- (UIView *)irisPlayerViewViewHostingGestureRecognizers:(ISPlayerView *)arg1;
- (void)playerViewDidEndVisualPlayback:(ISPlayerView *)arg1;
- (void)playerViewDidPlaybackVideoAssetToEnd:(ISPlayerView *)arg1;
- (void)playerViewGestureRecognizerDidChange:(ISPlayerView *)arg1;
- (void)playerViewIsInteractingDidChange:(ISPlayerView *)arg1;
- (void)playerViewPlaybackStateDidChange:(ISPlayerView *)arg1;
- (void)playerViewWillBeginVisualPlayback:(ISPlayerView *)arg1;
- (void)playerViewWillPlaybackVideoAssetToEnd:(ISPlayerView *)arg1;
@end

