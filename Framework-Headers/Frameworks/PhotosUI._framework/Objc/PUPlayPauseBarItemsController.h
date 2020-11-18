//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUBrowsingVideoPlayerChangeObserver-Protocol.h>
#import <PhotosUI/PUBrowsingViewModelChangeObserver-Protocol.h>

@class AVPlayer, NSHashTable, NSString, PUBrowsingVideoPlayer, PUBrowsingViewModel, PUPlayPauseBarItemsControllerChange;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PUPlayPauseBarItemsController : NSObject <PUBrowsingViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver>
{
    BOOL __isPerformingChanges;
    BOOL __isUpdating;
    BOOL __needsUpdateVideoPlayer;
    BOOL __needsUpdatePlayPauseState;
    BOOL __needsUpdateAVPlayer;
    BOOL __needsUpdateCurrentPlaybackTimeAndDuration;
    PUPlayPauseBarItemsControllerChange *__currentChange;
    PUBrowsingViewModel *_viewModel;
    long long _playPauseState;
    NSObject<OS_dispatch_queue> *__observerQueue;
    NSHashTable *__changeObservers;
    PUBrowsingVideoPlayer *__videoPlayer;
    AVPlayer *__avPlayer;
    id __timeObservationToken;
    CDStruct_1b6d18a9 _currentPlaybackTime;
    CDStruct_1b6d18a9 _playbackDuration;
}

@property (strong, nonatomic, setter=_setAVPlayer:) AVPlayer *_avPlayer; // @synthesize _avPlayer=__avPlayer;
@property (readonly, nonatomic) NSHashTable *_changeObservers; // @synthesize _changeObservers=__changeObservers;
@property (readonly, nonatomic) PUPlayPauseBarItemsControllerChange *_currentChange; // @synthesize _currentChange=__currentChange;
@property (nonatomic, setter=_setPerformingChanges:) BOOL _isPerformingChanges; // @synthesize _isPerformingChanges=__isPerformingChanges;
@property (nonatomic, setter=_setUpdating:) BOOL _isUpdating; // @synthesize _isUpdating=__isUpdating;
@property (nonatomic, setter=_setNeedsUpdateAVPlayer:) BOOL _needsUpdateAVPlayer; // @synthesize _needsUpdateAVPlayer=__needsUpdateAVPlayer;
@property (nonatomic, setter=_setNeedsUpdateCurrentPlaybackTimeAndDuration:) BOOL _needsUpdateCurrentPlaybackTimeAndDuration; // @synthesize _needsUpdateCurrentPlaybackTimeAndDuration=__needsUpdateCurrentPlaybackTimeAndDuration;
@property (nonatomic, setter=_setNeedsUpdatePlayPauseState:) BOOL _needsUpdatePlayPauseState; // @synthesize _needsUpdatePlayPauseState=__needsUpdatePlayPauseState;
@property (nonatomic, setter=_setNeedsUpdateVideoPlayer:) BOOL _needsUpdateVideoPlayer; // @synthesize _needsUpdateVideoPlayer=__needsUpdateVideoPlayer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_observerQueue; // @synthesize _observerQueue=__observerQueue;
@property (strong, nonatomic, setter=_setTimeObservationToken:) id _timeObservationToken; // @synthesize _timeObservationToken=__timeObservationToken;
@property (strong, nonatomic, setter=_setVideoPlayer:) PUBrowsingVideoPlayer *_videoPlayer; // @synthesize _videoPlayer=__videoPlayer;
@property (nonatomic, setter=_setCurrentPlaybackTime:) CDStruct_1b6d18a9 currentPlaybackTime; // @synthesize currentPlaybackTime=_currentPlaybackTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, setter=_setPlayPauseState:) long long playPauseState; // @synthesize playPauseState=_playPauseState;
@property (nonatomic, setter=_setPlaybackDuration:) CDStruct_1b6d18a9 playbackDuration; // @synthesize playbackDuration=_playbackDuration;
@property (readonly) Class superclass;
@property (strong, nonatomic) PUBrowsingViewModel *viewModel; // @synthesize viewModel=_viewModel;

- (void).cxx_destruct;
- (void)_assertInsideChangeBlock;
- (void)_assertInsideUpdate;
- (void)_handleVideoPlayer:(id)arg1 didChange:(id)arg2;
- (void)_handleViewModel:(id)arg1 didChange:(id)arg2;
- (void)_invalidateAVPlayer;
- (void)_invalidateCurrentPlaybackTimeAndDuration;
- (void)_invalidatePlayPauseState;
- (void)_invalidateVideoPlayer;
- (BOOL)_needsUpdate;
- (void)_performChanges:(CDUnknownBlockType)arg1;
- (void)_publishChanges;
- (void)_setNeedsUpdate;
- (void)_startObservingAVPlayer;
- (void)_stopObservingAVPlayer;
- (void)_updateAVPlayerIfNeeded;
- (void)_updateCurrentPlaybackTimeAndDurationIfNeeded;
- (void)_updateIfNeeded;
- (void)_updatePlayPauseStateIfNeeded;
- (void)_updateVideoPlayerIfNeeded;
- (id)init;
- (void)registerChangeObserver:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
