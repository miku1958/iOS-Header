//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPVideoView.h>

#import <LinkPresentation/LPYouTubePlayerDelegate-Protocol.h>

@class LPYouTubePlayerView, NSString;

__attribute__((visibility("hidden")))
@interface LPYouTubeVideoView : LPVideoView <LPYouTubePlayerDelegate>
{
    LPYouTubePlayerView *_platformYouTubeView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createVideoPlayerView;
- (void)enterCustomFullScreen;
- (id)initWithVideo:(id)arg1 style:(id)arg2 posterFrame:(id)arg3 posterFrameStyle:(id)arg4 configuration:(id)arg5;
- (BOOL)isMuted;
- (void)setAllowsUserInteractionWithVideoPlayer:(BOOL)arg1;
- (void)setMuted:(BOOL)arg1;
- (void)setPlaying:(BOOL)arg1;
- (void)setVolume:(double)arg1;
- (BOOL)shouldShowMuteButton;
- (BOOL)usesCustomFullScreenImplementation;
- (BOOL)usesSharedAudioSession;
- (double)volume;
- (void)youTubePlayer:(id)arg1 didChangeToFullScreen:(BOOL)arg2;
- (void)youTubePlayer:(id)arg1 didChangeToState:(long long)arg2;
- (void)youTubePlayer:(id)arg1 didReceiveError:(id)arg2;

@end

