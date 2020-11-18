//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerViewController, UIImageView;

__attribute__((visibility("hidden")))
@interface BFFOnBoardingVideoView : UIView
{
    BOOL _displayingVideo;
    BOOL _playVideo;
    UIImageView *_imageView;
    AVPlayer *_videoPlayer;
    AVPlayerViewController *_videoViewController;
}

@property BOOL displayingVideo; // @synthesize displayingVideo=_displayingVideo;
@property (strong) UIImageView *imageView; // @synthesize imageView=_imageView;
@property BOOL playVideo; // @synthesize playVideo=_playVideo;
@property (strong) AVPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property (strong) AVPlayerViewController *videoViewController; // @synthesize videoViewController=_videoViewController;

+ (id)backgroundColor;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPlaceholderImage:(id)arg1;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)showVideo:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)startPlaying;
- (void)stopPlaying;
- (void)transitionToVideo;
- (void)videoReachedEnd:(id)arg1;

@end
