//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUViewModel.h>

#import <PhotosUI/ISChangeObserver-Protocol.h>
#import <PhotosUI/PXVideoScrubberControllerTarget-Protocol.h>

@class ISLivePhotoPlayer, ISWrappedAVPlayer, NSArray, NSMutableSet, NSString, PHLivePhoto, PUMediaProvider;
@protocol PUDisplayAsset;

@interface PUBrowsingIrisPlayer : PUViewModel <ISChangeObserver, PXVideoScrubberControllerTarget>
{
    struct {
        BOOL livePhoto;
        BOOL playerContent;
        BOOL playerLoadingTarget;
        BOOL playerItemScrubbingPhotoTime;
        BOOL playing;
    } _isValid;
    id _videoPeriodicObserver;
    BOOL _hasPendingVitalityHint;
    BOOL _livePhotoLoadingAllowed;
    BOOL _isLivePhotoPlaybackAllowed;
    BOOL _activated;
    BOOL _playing;
    int __livePhotoRequestID;
    int __currentFrameCuratorRequstID;
    ISLivePhotoPlayer *_player;
    CDUnknownBlockType durationChangeHandler;
    CDUnknownBlockType statusChangeHandler;
    CDUnknownBlockType playerItemChangeHandler;
    id<PUDisplayAsset> _asset;
    PUMediaProvider *_mediaProvider;
    ISWrappedAVPlayer *_avPlayer;
    long long _loadingTarget;
    NSArray *_currentlyDisplayedTimes;
    NSMutableSet *__livePhotoLoadingDisablingReasons;
    NSMutableSet *__livePhotoPlaybackDisablingReasons;
    long long __currentUnloadRequestId;
    PHLivePhoto *__livePhoto;
    long long __livePhotoRequestState;
    CDUnknownBlockType __seekCompletionHandler;
    CDStruct_1b6d18a9 _scrubbingPhotoTime;
}

@property (nonatomic, setter=_setCurrentFrameCuratorRequestID:) int _currentFrameCuratorRequstID; // @synthesize _currentFrameCuratorRequstID=__currentFrameCuratorRequstID;
@property (nonatomic, setter=_setCurrentUnloadRequestId:) long long _currentUnloadRequestId; // @synthesize _currentUnloadRequestId=__currentUnloadRequestId;
@property (strong, nonatomic, setter=_setLivePhoto:) PHLivePhoto *_livePhoto; // @synthesize _livePhoto=__livePhoto;
@property (strong, nonatomic) NSMutableSet *_livePhotoLoadingDisablingReasons; // @synthesize _livePhotoLoadingDisablingReasons=__livePhotoLoadingDisablingReasons;
@property (strong, nonatomic) NSMutableSet *_livePhotoPlaybackDisablingReasons; // @synthesize _livePhotoPlaybackDisablingReasons=__livePhotoPlaybackDisablingReasons;
@property (nonatomic, setter=_setLivePhotoRequestID:) int _livePhotoRequestID; // @synthesize _livePhotoRequestID=__livePhotoRequestID;
@property (nonatomic, setter=_setLivePhotoRequestState:) long long _livePhotoRequestState; // @synthesize _livePhotoRequestState=__livePhotoRequestState;
@property (copy, nonatomic, setter=_setSeekCompletionHandler:) CDUnknownBlockType _seekCompletionHandler; // @synthesize _seekCompletionHandler=__seekCompletionHandler;
@property (nonatomic, getter=isActivated) BOOL activated; // @synthesize activated=_activated;
@property (strong, nonatomic) id<PUDisplayAsset> asset; // @synthesize asset=_asset;
@property (strong, nonatomic, setter=_setAvPlayer:) ISWrappedAVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property (readonly, nonatomic) CDStruct_1b6d18a9 currentPhototime;
@property (readonly, nonatomic) CDStruct_1b6d18a9 currentVideoDuration;
@property (copy, nonatomic, setter=_setCurrentlyDisplayedTimes:) NSArray *currentlyDisplayedTimes; // @synthesize currentlyDisplayedTimes=_currentlyDisplayedTimes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType durationChangeHandler; // @synthesize durationChangeHandler;
@property (readonly, nonatomic) BOOL hasPendingVitalityHint; // @synthesize hasPendingVitalityHint=_hasPendingVitalityHint;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isLivePhotoPlaybackAllowed; // @synthesize isLivePhotoPlaybackAllowed=_isLivePhotoPlaybackAllowed;
@property (nonatomic, getter=isLivePhotoLoadingAllowed, setter=_setLivePhotoLoadingAllowed:) BOOL livePhotoLoadingAllowed; // @synthesize livePhotoLoadingAllowed=_livePhotoLoadingAllowed;
@property (nonatomic) long long loadingTarget; // @synthesize loadingTarget=_loadingTarget;
@property (readonly, nonatomic) PUMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property (readonly, nonatomic) CDStruct_1b6d18a9 nonScrubbingPhotoTime;
@property (readonly, nonatomic) ISLivePhotoPlayer *player; // @synthesize player=_player;
@property (copy, nonatomic) CDUnknownBlockType playerItemChangeHandler; // @synthesize playerItemChangeHandler;
@property (nonatomic, getter=isPlaying, setter=_setPlaying:) BOOL playing; // @synthesize playing=_playing;
@property (readonly, nonatomic) CDStruct_1b6d18a9 scrubbingPhotoTime; // @synthesize scrubbingPhotoTime=_scrubbingPhotoTime;
@property (copy, nonatomic) CDUnknownBlockType statusChangeHandler; // @synthesize statusChangeHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelAllRequests;
- (long long)_contentMode;
- (void)_handleLivePhotoResult:(id)arg1 info:(id)arg2 requestID:(int)arg3;
- (void)_handlePeriodicObserverWithTime:(CDStruct_1b6d18a9)arg1;
- (void)_handlePlaybackStyleChanged;
- (void)_invalidateLivePhoto;
- (void)_invalidatePlayerContent;
- (void)_invalidatePlayerItemLoadingTarget;
- (void)_invalidatePlayerItemScrubbingPhotoTime;
- (void)_invalidatePlaying;
- (BOOL)_isContentLoadingRequestInProgress;
- (BOOL)_needsUpdate;
- (id)_playerCreateIfNeeded:(BOOL)arg1;
- (void)_setAVPlayer:(id)arg1;
- (void)_setLivePhotoPlaybackAllowed:(BOOL)arg1;
- (struct CGSize)_targetSize;
- (void)_updateIfNeeded;
- (void)_updateLivePhotoIfNeeded;
- (void)_updatePlayerContentIfNeeded;
- (void)_updatePlayerItemLoadingTargetIfNeeded;
- (void)_updatePlayerItemScrubbingPhotoTimeIfNeeded;
- (void)_updatePlayingIfNeeded;
- (id)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)avPlayerForVideoScrubberController:(id)arg1;
- (void)cancelPendingSeeks;
- (id)currentChange;
- (CDStruct_1b6d18a9)currentItemDuration;
- (void)dealloc;
- (id)debugDetailedDescription;
- (void)didPerformChanges;
- (void)didPlayVitalityHint;
- (id)init;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2;
- (id)newViewModelChange;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (float)playRate;
- (void)playVitalityHint;
- (id)playerCreateIfNeeded;
- (CDStruct_1b6d18a9)playerCurrentTime;
- (id)playerItem;
- (long long)playerStatus;
- (void)registerChangeObserver:(id)arg1;
- (void)removeTimeObserver:(id)arg1;
- (void)setLivePhotoLoadingDisabled:(BOOL)arg1 forReason:(id)arg2;
- (void)setLivePhotoPlaybackDisabled:(BOOL)arg1 forReason:(id)arg2;
- (void)setScrubbingPhotoTime:(CDStruct_1b6d18a9)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unloadLivePhoto;
- (void)unregisterChangeObserver:(id)arg1;
- (void)videoScrubberController:(id)arg1 seekToTime:(CDStruct_1b6d18a9)arg2 toleranceBefore:(CDStruct_1b6d18a9)arg3 toleranceAfter:(CDStruct_1b6d18a9)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end

