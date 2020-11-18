//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKBackgroundImageFaceView.h>

#import <NanoTimeKitCompanion/CLKVideoPlayerViewDelegate-Protocol.h>

@class CLKVideoPlayerView, NSString, UIImageView;

@interface NTKAVFaceBaseView : NTKBackgroundImageFaceView <CLKVideoPlayerViewDelegate>
{
    UIImageView *_posterImageView;
    CLKVideoPlayerView *_videoPlayerView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIImageView *posterImageView; // @synthesize posterImageView=_posterImageView;
@property (readonly) Class superclass;
@property (strong, nonatomic) CLKVideoPlayerView *videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;

- (void).cxx_destruct;
- (void)_beginTransitionToOption;
- (void)_cleanupAfterTransitionToOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_createVideoPlayerViewIfNeeded;
- (void)_loadSnapshotContentViews;
- (void)_mediaServicesWereReset:(id)arg1;
- (id)_posterImageView;
- (void)_prepareForEditing;
- (void)_reset;
- (id)_selectedContentView;
- (void)_transitionToPosterView:(id)arg1;
- (void)_unloadSnapshotContentViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)pauseVideoPlayerViewIfItExists;
- (void)videoPlayerViewDidBeginPlaying:(id)arg1;
- (void)videoPlayerViewDidFinishPlayingVideoToEnd:(id)arg1;
- (void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)arg1;

@end
