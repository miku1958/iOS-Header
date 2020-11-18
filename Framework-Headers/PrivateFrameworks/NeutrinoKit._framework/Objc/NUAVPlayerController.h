//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVAudioMix, AVPlayer, AVVideoComposition, NSMutableArray;
@protocol NUAVPlayerControllerDelegate;

@interface NUAVPlayerController : NSObject
{
    struct {
        BOOL registeredPlayer;
    } _playerControllerKVOFlags;
    NSMutableArray *_playerItemObservations;
    BOOL _loopsVideo;
    BOOL _muted;
    AVPlayer *_player;
    double _updateInterval;
    AVAsset *_videoAsset;
    AVVideoComposition *_videoComposition;
    AVAudioMix *_audioMix;
    id<NUAVPlayerControllerDelegate> _delegate;
}

@property (readonly, nonatomic) AVAudioMix *audioMix; // @synthesize audioMix=_audioMix;
@property (weak, nonatomic) id<NUAVPlayerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL loopsVideo; // @synthesize loopsVideo=_loopsVideo;
@property (nonatomic, getter=isMuted) BOOL muted; // @synthesize muted=_muted;
@property (strong, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property (nonatomic) double updateInterval; // @synthesize updateInterval=_updateInterval;
@property (readonly, nonatomic) AVAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
@property (readonly, nonatomic) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;

- (void).cxx_destruct;
- (void)_addPlayerItemKVO:(id)arg1;
- (void)_addPlayerKVO;
- (void)_removePlayerItemKVO:(id)arg1;
- (void)_removePlayerKVO;
- (void)_setRate:(float)arg1;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pause;
- (void)play;
- (void)playerItemDidReachEnd:(id)arg1;
- (BOOL)prepareWithAVAsset:(id)arg1 videoComposition:(id)arg2 audioMix:(id)arg3 loopsVideo:(BOOL)arg4;
- (void)seekBack;
- (void)seekForward;
- (void)seekToTime:(double)arg1;
- (void)updateAudioMix:(id)arg1;
- (void)updateVideoComposition:(id)arg1;

@end

