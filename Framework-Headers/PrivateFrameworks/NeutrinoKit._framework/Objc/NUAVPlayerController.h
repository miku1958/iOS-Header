//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVAudioMix, AVPlayer, AVVideoComposition, NSMutableArray, NUObservatory;
@protocol NUAVPlayerControllerDelegate;

@interface NUAVPlayerController : NSObject
{
    id _playerTimeObserver;
    NUObservatory *_observatory;
    struct {
        BOOL registeredPlayer;
    } _playerControllerKVOFlags;
    NSMutableArray *_playerItemObservations;
    BOOL _currentlySeeking;
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
@property (readonly, nonatomic) CDStruct_198678f7 currentTime;
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
- (void)_addTimeObserver;
- (CDStruct_198678f7)_effectiveTimeForTime:(CDStruct_198678f7)arg1;
- (id)_loopingPlayerItemWithVideoAsset:(id)arg1 videoComposition:(id)arg2 audioMix:(id)arg3;
- (void)_notifyPlaybackRateChange:(float)arg1;
- (void)_notifyPlaybackTimeChange:(CDStruct_198678f7)arg1;
- (void)_notifyPlayerStatusChange:(long long)arg1;
- (id)_playerItemWithVideoAsset:(id)arg1 videoComposition:(id)arg2 audioMix:(id)arg3;
- (id)_playerItemsWithVideoAsset:(id)arg1 videoComposition:(id)arg2 audioMix:(id)arg3 loopsVideo:(BOOL)arg4;
- (void)_removePlayerItemKVO:(id)arg1;
- (void)_removePlayerItemKVO:(id)arg1 removeFromArray:(BOOL)arg2;
- (void)_removePlayerKVO;
- (void)_removeTimeObserver;
- (void)_setRate:(float)arg1;
- (void)addPlaybackRateObserver:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)addPlaybackTimeObserver:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)addPlayerStatusObserver:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pause;
- (void)play;
- (void)playerItemDidReachEnd:(id)arg1;
- (BOOL)prepareWithAVAsset:(id)arg1 videoComposition:(id)arg2 audioMix:(id)arg3 loopsVideo:(BOOL)arg4;
- (void)removeObserver:(id)arg1;
- (void)seek:(CDStruct_198678f7)arg1 exact:(BOOL)arg2;
- (void)seekBack;
- (void)seekForward;
- (void)step:(long long)arg1;
- (void)updateAudioMix:(id)arg1;
- (void)updateVideoComposition:(id)arg1;

@end
