//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosPlayer/ISObservable.h>

@class AVPlayer, AVPlayerItem, AVQueuePlayer, AVVideoComposition, ISWrappedAVAudioSession, NSArray, NSError, NSMutableDictionary, NSObject;
@protocol ISWrappedAVPlayerDelegate, OS_dispatch_queue;

@interface ISWrappedAVPlayer : ISObservable
{
    NSObject<OS_dispatch_queue> *_avPlayerQueue;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    AVPlayer *_playerQueue_avPlayer;
    ISWrappedAVAudioSession *_playerQueue_wrappedAudioSession;
    AVQueuePlayer *_playerQueue_avQueuePlayer;
    id _playerQueue_playerItemDidPlayToEndObserver;
    AVPlayerItem *_ivarQueue_currentItem;
    long long _ivarQueue_status;
    NSError *_ivarQueue_error;
    float _ivarQueue_rate;
    float _ivarQueue_volume;
    BOOL _ivarQueue_loopingEnabled;
    BOOL _ivarQueue_audioEnabled;
    long long _ivarQueue_itemStatus;
    NSError *_ivarQueue_itemError;
    CDStruct_1b6d18a9 _ivarQueue_itemForwardPlaybackEndTime;
    CDStruct_1b6d18a9 _ivarQueue_itemDuration;
    BOOL _ivarQueue_itemPlaybackBufferFull;
    AVVideoComposition *_ivarQueue_itemVideoComposition;
    BOOL _ivarQueue_itemIsLikelyToKeepUp;
    BOOL _ivarQueue_itemPlaybackBufferEmpty;
    NSArray *_ivarQueue_currentItemLoadedTimeRanges;
    NSMutableDictionary *_observersByID;
    void *_ivarQueueIdentifier;
    id<ISWrappedAVPlayerDelegate> _delegate;
}

@property (weak) id<ISWrappedAVPlayerDelegate> delegate; // @synthesize delegate=_delegate;

+ (id)observedAVPIKeysAndContexts;
+ (id)observedAVPKeys;
- (void).cxx_destruct;
- (void)_assertOnIvarQueue;
- (id)_initWithAVPlayer:(id)arg1;
- (BOOL)_isOnIvarQueue;
- (id)_nextObserverUID;
- (id)_nilOrValue:(id)arg1;
- (void)_performIvarRead:(CDUnknownBlockType)arg1;
- (void)_performIvarWrite:(CDUnknownBlockType)arg1;
- (void)_performPlayerTransaction:(CDUnknownBlockType)arg1;
- (void)_playerItemDidPlayToEnd:(id)arg1;
- (id)_playerQueue_avPlayer;
- (id)_playerQueue_avQueuePlayer;
- (void)_playerQueue_startObservingPlayerItem:(id)arg1;
- (void)_playerQueue_stopObservingPlayerItem:(id)arg1;
- (void)_playerQueue_updatePlayerItemAudioTracksEnabled;
- (id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)attachToPlayerLayerIfNeeded:(id)arg1;
- (void)cancelPendingPrerolls;
- (id)currentItem;
- (CDStruct_1b6d18a9)currentItemDuration;
- (id)currentItemError;
- (BOOL)currentItemIsLikelyToKeepUp;
- (id)currentItemLoadedTimeRanges;
- (BOOL)currentItemPlaybackBufferEmpty;
- (BOOL)currentItemPlaybackBufferFull;
- (long long)currentItemStatus;
- (id)currentItemVideoComposition;
- (CDStruct_1b6d18a9)currentTime;
- (void)dealloc;
- (id)error;
- (id)init;
- (BOOL)isAudioEnabled;
- (BOOL)isLoopingEnabled;
- (CDStruct_1b6d18a9)itemForwardPlaybackEndTime;
- (id)mutableChangeObject;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pause;
- (void)playToTime:(CDStruct_1b6d18a9)arg1 withInitialRate:(float)arg2 overDuration:(double)arg3 progressHandler:(CDUnknownBlockType)arg4;
- (void)prepareForReuseWithCompletion:(CDUnknownBlockType)arg1;
- (void)prerollAtRate:(float)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (float)rate;
- (void)removeTimeObserver:(id)arg1;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1 thenCall:(CDUnknownBlockType)arg2;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setActionAtItemEnd:(long long)arg1;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (void)setAudioEnabled:(BOOL)arg1;
- (void)setDimensionsOfReservedVideoMemory:(struct CGSize)arg1;
- (void)setItemBlendsVideoFrames:(BOOL)arg1;
- (void)setItemForwardEndPlaybackTime:(CDStruct_1b6d18a9)arg1;
- (void)setLoopingEnabled:(BOOL)arg1;
- (void)setLoopingEnabled:(BOOL)arg1 withTemplateItem:(id)arg2;
- (void)setRate:(float)arg1;
- (void)setRate:(float)arg1 time:(CDStruct_1b6d18a9)arg2 atHostTime:(CDStruct_1b6d18a9)arg3;
- (void)setVolume:(float)arg1;
- (void)setWrappedAudioSession:(id)arg1;
- (long long)status;
- (float)volume;

@end

