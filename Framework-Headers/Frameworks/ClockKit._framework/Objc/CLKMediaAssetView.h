//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ClockKit/CLKVideoPlayerViewDelegate-Protocol.h>

@class AVSynchronizedLayer, CALayer, CLKDevice, CLKMediaAsset, CLKVideoPlayerView, NSString, UIImageView;
@protocol CLKMediaAssetViewDelegate;

@interface CLKMediaAssetView : UIView <CLKVideoPlayerViewDelegate>
{
    CLKVideoPlayerView *_videoPlayerView;
    CLKMediaAsset *_mediaAsset;
    UIImageView *_posterView;
    UIView *_curtainView;
    unsigned int _isVideoLoaded:1;
    unsigned int _isPlaying:1;
    id _timeObserver;
    AVSynchronizedLayer *_syncLayer;
    CALayer *_posterLayer;
    long long _preparedForOperation;
    long long _transitionOperation;
    CLKDevice *_device;
    id<CLKMediaAssetViewDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CLKMediaAssetViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) CLKMediaAsset *mediaAsset; // @synthesize mediaAsset=_mediaAsset;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelPlayback;
- (void)_completePlaybackWithOperation:(long long)arg1;
- (void)_createVideoPlayerViewIfNeeded;
- (CDStruct_1b6d18a9)_endTimeForOperation:(long long)arg1;
- (void)_mediaServicesWereReset:(id)arg1;
- (void)_reset;
- (CDStruct_1b6d18a9)_startTimeForOperation:(long long)arg1;
- (void)_transitionFromPosterToVideo;
- (void)changeMediaAsset:(id)arg1;
- (void)dealloc;
- (void)fadeFromCurtainViewWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fadeToCurtainViewWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideCurtainView;
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2;
- (void)interruptPlayback;
- (struct CGSize)intrinsicContentSize;
- (BOOL)isPlaying;
- (void)layoutSubviews;
- (void)pauseVideoPlayerViewIfItExists;
- (void)pauseWithOperation:(long long)arg1;
- (void)playWithOperation:(long long)arg1;
- (void)prepareToPlayWithOperation:(long long)arg1;
- (void)resumeInterruptedPlayback;
- (void)showCurtainView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)videoPlayerViewDidBeginPlaying:(id)arg1;
- (void)videoPlayerViewDidBeginPlayingQueuedVideo:(id)arg1;
- (void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)arg1;

@end

