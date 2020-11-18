//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AVPlayer, AVPlayerItem, AVPlayerLayer;
@protocol CKVideoPreviewViewControllerDelegate;

@interface CKVideoPreviewViewController : UIViewController
{
    BOOL _redisplayStatusBar;
    BOOL _reachedEnd;
    id<CKVideoPreviewViewControllerDelegate> _videoPreviewDelegate;
    AVPlayerItem *_avPlayerItem;
    AVPlayer *_avPlayer;
    AVPlayerLayer *_avPlayerLayer;
}

@property (strong, nonatomic) AVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property (strong, nonatomic) AVPlayerItem *avPlayerItem; // @synthesize avPlayerItem=_avPlayerItem;
@property (strong, nonatomic) AVPlayerLayer *avPlayerLayer; // @synthesize avPlayerLayer=_avPlayerLayer;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing; // @dynamic playing;
@property (nonatomic) BOOL reachedEnd; // @synthesize reachedEnd=_reachedEnd;
@property (nonatomic) BOOL redisplayStatusBar; // @synthesize redisplayStatusBar=_redisplayStatusBar;
@property (nonatomic) id<CKVideoPreviewViewControllerDelegate> videoPreviewDelegate; // @synthesize videoPreviewDelegate=_videoPreviewDelegate;

- (void)dealloc;
- (id)init;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pause;
- (void)play;
- (BOOL)prefersStatusBarHidden;
- (void)setVideoFileURL:(id)arg1;
- (BOOL)togglePlayPause;
- (void)videoDidReachEnd:(id)arg1;

@end

