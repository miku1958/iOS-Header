//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosPlayer/ISObservable.h>

@class AVAssetImageGenerator, AVPlayerItem, AVVideoComposition, ISAsset, ISPlayerContent, NSError, NSNumber, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface ISPlayerItem : ISObservable
{
    void *_ivarQueueIdentifier;
    void *_workQueueIdentifier;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    long long _ivarQueue_loadingTarget;
    AVVideoComposition *_ivarQueue_videoComposition;
    long long _ivarQueue_videoPlayerItemRequestID;
    BOOL _ivarQueue_aggressivelyCacheVideoFrames;
    BOOL _ivarQueue_reversesMoreVideoFramesInMemory;
    BOOL _ivarQueue_decodesAllFramesDuringOrdinaryPlayback;
    BOOL _ivarQueue_contentSupportsVitality;
    CDStruct_1b6d18a9 _ivarQueue_playerItemPhotoTime;
    CDStruct_1b6d18a9 _ivarQueue_playerItemDuration;
    ISPlayerContent *_ivarQueue_playerContent;
    long long _ivarQueue_status;
    AVPlayerItem *_ivarQueue_videoPlayerItem;
    NSNumber *_ivarQueue_variationIdentifier;
    NSString *_ivarQueue_minimumClientVersion;
    NSError *_ivarQueue_error;
    struct {
        BOOL videoPlayerItem;
        BOOL status;
        BOOL content;
        BOOL minimumClientVersion;
        BOOL playbackStyleIdentifier;
        BOOL contentSupportsVitality;
    } _ivarQueue_isValid;
    AVAssetImageGenerator *_workQueue_imageGenerator;
    BOOL _workQueue_isGeneratingOffsetImage;
    BOOL __loadingCancelled;
    ISAsset *_asset;
    struct CGSize _targetSize;
}

@property (nonatomic, getter=_isLoadingCancelled, setter=_setLoadingCancelled:) BOOL _loadingCancelled; // @synthesize _loadingCancelled=__loadingCancelled;
@property (strong, nonatomic, setter=_setMinimumClientVersion:) NSString *_minimumClientVersion;
@property (strong, nonatomic, setter=_setVariationIdentifier:) NSNumber *_variationIdentifier;
@property (nonatomic, setter=_setVideoPlayerItemRequestID:) long long _videoPlayerItemRequestID;
@property (nonatomic) BOOL aggressivelyCacheVideoFrames;
@property (readonly, nonatomic) ISAsset *asset; // @synthesize asset=_asset;
@property (nonatomic) BOOL contentSupportsVitality;
@property (nonatomic) BOOL decodesAllFramesDuringOrdinaryPlayback;
@property (strong, nonatomic, setter=_setError:) NSError *error;
@property (nonatomic) long long loadingTarget;
@property (strong, nonatomic, setter=_setPlayerContent:) ISPlayerContent *playerContent;
@property (nonatomic) BOOL reversesMoreVideoFramesInMemory;
@property (nonatomic, setter=_setStatus:) long long status;
@property (readonly, nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property (copy, nonatomic) AVVideoComposition *videoComposition;

+ (long long)currentClientVersion;
+ (id)playerItemWithAsset:(id)arg1 targetSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)_assertOnIvarQueue;
- (void)_assertOnWorkQueue;
- (void)_cancelLoading;
- (void)_handleVideoPlayerItemLoadResultWithSuccess:(BOOL)arg1 playerItem:(id)arg2 videoDuration:(CDStruct_1b6d18a9)arg3 error:(id)arg4;
- (void)_invalidateContentSupportsVitality;
- (void)_invalidateMinimumClientVersion;
- (void)_invalidatePlaybackStyleIdentifier;
- (void)_invalidatePlayerContent;
- (void)_invalidateStatus;
- (void)_invalidateVideoPlayerItem;
- (BOOL)_isContentSupportsVitalityValid;
- (BOOL)_isMinimumClientVersionValid;
- (BOOL)_isOnIvarQueue;
- (BOOL)_isOnWorkQueue;
- (BOOL)_isPlaybackStyleIdentifierValid;
- (BOOL)_isPlayerContentValid;
- (BOOL)_isStatusVaild;
- (BOOL)_isVideoPlayerItemValid;
- (BOOL)_needsUpdate;
- (void)_performIvarRead:(CDUnknownBlockType)arg1;
- (void)_performIvarWrite:(CDUnknownBlockType)arg1;
- (void)_performWork:(CDUnknownBlockType)arg1;
- (void)_performWork:(CDUnknownBlockType)arg1 sync:(BOOL)arg2;
- (void)_reloadAllContent;
- (void)_setVideoPlayerItem:(id)arg1 videoDuration:(CDStruct_1b6d18a9)arg2;
- (void)_updateContentSupportsVitalityIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateMinimumClientVersionIfNeeded;
- (void)_updatePlaybackStyleIdentifierIfNeeded;
- (void)_updatePlayerContentIfNeeded;
- (void)_updateStatusIfNeeded;
- (void)_updateVideoPlayerItemIfNeeded;
- (id)_videoPlayerItem;
- (void)cancelLoading;
- (void)dealloc;
- (void)didPerformChanges;
- (void)discardContentBelowLoadingTarget;
- (id)init;
- (id)initWithAsset:(id)arg1 targetSize:(struct CGSize)arg2;
- (id)mutableChangeObject;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)resetAVObjects;

@end

