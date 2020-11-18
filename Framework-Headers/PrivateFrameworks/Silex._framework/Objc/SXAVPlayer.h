//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVPlayer.h>

#import <Silex/AVPlayerItemDelegate-Protocol.h>

@class NSString, SVKeyValueObserver;

@interface SXAVPlayer : AVPlayer <AVPlayerItemDelegate>
{
    int _audioMode;
    int _playbackPosition;
    int _playbackStatus;
    CDUnknownBlockType _playbackStatusBlock;
    CDUnknownBlockType _playbackProgressBlock;
    CDUnknownBlockType _loadingProgressBlock;
    double _elapsedTime;
    double _duration;
    double _frameRate;
    id _timeObserver;
    SVKeyValueObserver *_timeControlStatusObserver;
    SVKeyValueObserver *_statusObserver;
    SVKeyValueObserver *_durationObserver;
    SVKeyValueObserver *_loadedTimeRangesObserver;
    CDStruct_1b6d18a9 _cumulativeTimePlayed;
}

@property (readonly, nonatomic) int audioMode; // @synthesize audioMode=_audioMode;
@property (nonatomic) CDStruct_1b6d18a9 cumulativeTimePlayed; // @synthesize cumulativeTimePlayed=_cumulativeTimePlayed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (strong, nonatomic) SVKeyValueObserver *durationObserver; // @synthesize durationObserver=_durationObserver;
@property (nonatomic) double elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property (nonatomic) double frameRate; // @synthesize frameRate=_frameRate;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SVKeyValueObserver *loadedTimeRangesObserver; // @synthesize loadedTimeRangesObserver=_loadedTimeRangesObserver;
@property (copy, nonatomic) CDUnknownBlockType loadingProgressBlock; // @synthesize loadingProgressBlock=_loadingProgressBlock;
@property (nonatomic) int playbackPosition; // @synthesize playbackPosition=_playbackPosition;
@property (copy, nonatomic) CDUnknownBlockType playbackProgressBlock; // @synthesize playbackProgressBlock=_playbackProgressBlock;
@property (nonatomic) int playbackStatus; // @synthesize playbackStatus=_playbackStatus;
@property (copy, nonatomic) CDUnknownBlockType playbackStatusBlock; // @synthesize playbackStatusBlock=_playbackStatusBlock;
@property (strong, nonatomic) SVKeyValueObserver *statusObserver; // @synthesize statusObserver=_statusObserver;
@property (readonly) Class superclass;
@property (strong, nonatomic) SVKeyValueObserver *timeControlStatusObserver; // @synthesize timeControlStatusObserver=_timeControlStatusObserver;
@property (strong, nonatomic) id timeObserver; // @synthesize timeObserver=_timeObserver;
@property (readonly, nonatomic) double totalTimePlayed;

- (void).cxx_destruct;
- (void)addObservers;
- (void)dealloc;
- (void)durationChanged;
- (id)initWithPlayerItem:(id)arg1 audioMode:(int)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 audioMode:(int)arg2;
- (void)loadFrameRate;
- (void)loadedTimeRangesChanged;
- (void)playedToEnd:(id)arg1;
- (void)seekToStartWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setElapsedTime:(double)arg1 duration:(double)arg2;
- (void)startTimeObserver;
- (void)statusChanged;
- (void)stopTimeObserver;
- (void)timeControlStatusChanged;
- (void)updateTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2;

@end
