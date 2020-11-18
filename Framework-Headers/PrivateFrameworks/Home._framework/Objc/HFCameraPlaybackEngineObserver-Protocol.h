//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/NSObject-Protocol.h>

@class AVPlayer, HFCameraPlaybackEngine, HFCameraPlaybackPosition, HMCameraSource, NSArray, NSError;

@protocol HFCameraPlaybackEngineObserver <NSObject>

@optional
- (void)playbackEngine:(HFCameraPlaybackEngine *)arg1 didRemoveEvents:(NSArray *)arg2;
- (void)playbackEngine:(HFCameraPlaybackEngine *)arg1 didUpdateClipPlayer:(AVPlayer *)arg2;
- (void)playbackEngine:(HFCameraPlaybackEngine *)arg1 didUpdateEvents:(NSArray *)arg2;
- (void)playbackEngine:(HFCameraPlaybackEngine *)arg1 didUpdateLiveCameraSource:(HMCameraSource *)arg2;
- (void)playbackEngine:(HFCameraPlaybackEngine *)arg1 didUpdateMicrophoneEnabled:(BOOL)arg2;
- (void)playbackEngine:(HFCameraPlaybackEngine *)arg1 didUpdatePlaybackError:(NSError *)arg2;
- (void)playbackEngine:(HFCameraPlaybackEngine *)arg1 didUpdatePlaybackPosition:(HFCameraPlaybackPosition *)arg2;
- (void)playbackEngine:(HFCameraPlaybackEngine *)arg1 didUpdateScrubbingStatus:(BOOL)arg2;
- (void)playbackEngine:(HFCameraPlaybackEngine *)arg1 didUpdateStreamAudioEnabled:(BOOL)arg2;
- (void)playbackEngine:(HFCameraPlaybackEngine *)arg1 didUpdateStreamAudioVolume:(BOOL)arg2;
- (void)playbackEngine:(HFCameraPlaybackEngine *)arg1 didUpdateTimeControlStatus:(unsigned long long)arg2;
- (void)playbackEngine:(HFCameraPlaybackEngine *)arg1 didUpdateTimelineState:(unsigned long long)arg2;
@end
