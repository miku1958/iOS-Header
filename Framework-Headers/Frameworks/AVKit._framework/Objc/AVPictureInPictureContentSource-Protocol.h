//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVKit/NSObject-Protocol.h>

@class AVPictureInPictureViewController, AVPlayerController, UIWindow;

@protocol AVPictureInPictureContentSource <NSObject>

@property (readonly, nonatomic) BOOL avkit_isVisible;
@property (readonly, nonatomic) struct CGRect avkit_videoRectInWindow;
@property (readonly, nonatomic) UIWindow *avkit_window;

- (void)avkit_beginReducingResourcesForPictureInPictureViewController:(AVPictureInPictureViewController *)arg1 playerController:(AVPlayerController *)arg2;
- (void)avkit_endReducingResourcesForPictureInPictureViewController:(AVPictureInPictureViewController *)arg1 playerController:(AVPlayerController *)arg2;
- (AVPlayerController *)avkit_makePlayerControllerIfNeeded:(AVPlayerController *)arg1;
- (AVPictureInPictureViewController *)avkit_pictureInPictureViewController;
- (void)avkit_startRoutingVideoToPictureInPictureViewController:(AVPictureInPictureViewController *)arg1;
- (void)avkit_stopRoutingVideoToPictureInPictureViewController:(AVPictureInPictureViewController *)arg1;
- (void)avkit_willBeginStoppingPictureInPictureForPictureInPictureViewController:(AVPictureInPictureViewController *)arg1;
@end

