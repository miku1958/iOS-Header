//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayerItem, ISAsset, ISCrossfadeItem, NSError, NSHashTable;
@protocol OS_dispatch_queue;

@interface ISPlayerItem : NSObject
{
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSHashTable *_observers;
    float _videoCropFactor;
    BOOL __needsToLoadVideoPlayerItem;
    BOOL __needsToLoadCrossfadeItem;
    BOOL __loadingCancelled;
    BOOL _reversesMoreVideoFramesInMemory;
    BOOL _aggressivelyCacheVideoFrames;
    BOOL _shouldLoadCrossfadeContent;
    BOOL _preparesForVitalityOnLoad;
    ISAsset *_asset;
    long long _status;
    NSError *_error;
    long long _loadingTarget;
    AVPlayerItem *_videoPlayerItem;
    ISCrossfadeItem *_crossfadeItem;
    double _photoTime;
    struct CGImage *_photo;
    long long __crossfadeItemRequestID;
    long long __videoPlayerItemRequestID;
    struct CGSize _targetSize;
    CDStruct_e83c9415 _trimmedTimeRange;
}

@property (nonatomic, setter=_setCrossfadeItemRequestID:) long long _crossfadeItemRequestID; // @synthesize _crossfadeItemRequestID=__crossfadeItemRequestID;
@property (nonatomic, getter=_isLoadingCancelled, setter=_setLoadingCancelled:) BOOL _loadingCancelled; // @synthesize _loadingCancelled=__loadingCancelled;
@property (nonatomic, setter=_setNeedsToLoadCrossfadeItem:) BOOL _needsToLoadCrossfadeItem; // @synthesize _needsToLoadCrossfadeItem=__needsToLoadCrossfadeItem;
@property (nonatomic, setter=_setNeedsToLoadVideoPlayerItem:) BOOL _needsToLoadVideoPlayerItem; // @synthesize _needsToLoadVideoPlayerItem=__needsToLoadVideoPlayerItem;
@property (nonatomic, setter=_setVideoPlayerItemRequestID:) long long _videoPlayerItemRequestID; // @synthesize _videoPlayerItemRequestID=__videoPlayerItemRequestID;
@property (nonatomic) BOOL aggressivelyCacheVideoFrames; // @synthesize aggressivelyCacheVideoFrames=_aggressivelyCacheVideoFrames;
@property (readonly) ISAsset *asset; // @synthesize asset=_asset;
@property (strong, nonatomic, setter=_setCrossfadeItem:) ISCrossfadeItem *crossfadeItem; // @synthesize crossfadeItem=_crossfadeItem;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (nonatomic) long long loadingTarget; // @synthesize loadingTarget=_loadingTarget;
@property (readonly, nonatomic) struct CGImage *photo; // @synthesize photo=_photo;
@property (readonly, nonatomic) double photoTime; // @synthesize photoTime=_photoTime;
@property (nonatomic) BOOL preparesForVitalityOnLoad; // @synthesize preparesForVitalityOnLoad=_preparesForVitalityOnLoad;
@property (nonatomic) BOOL reversesMoreVideoFramesInMemory; // @synthesize reversesMoreVideoFramesInMemory=_reversesMoreVideoFramesInMemory;
@property (nonatomic) BOOL shouldLoadCrossfadeContent; // @synthesize shouldLoadCrossfadeContent=_shouldLoadCrossfadeContent;
@property (nonatomic) long long status; // @synthesize status=_status;
@property (readonly, nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property (readonly, nonatomic) CDStruct_e83c9415 trimmedTimeRange; // @synthesize trimmedTimeRange=_trimmedTimeRange;
@property (readonly, nonatomic) float videoCropFactor; // @synthesize videoCropFactor=_videoCropFactor;
@property (strong, nonatomic, setter=_setVideoPlayerItem:) AVPlayerItem *videoPlayerItem; // @synthesize videoPlayerItem=_videoPlayerItem;

+ (id)playerItemWithAsset:(id)arg1 targetSize:(struct CGSize)arg2;
+ (id)playerItemWithAsset:(id)arg1 targetSize:(struct CGSize)arg2 trimmedTimeRange:(CDStruct_e83c9415)arg3;
- (void).cxx_destruct;
- (void)_configureVideoPlayerItem;
- (void)_enumerateObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)_handleCrossfadeLoadingResultWithSuccess:(BOOL)arg1 crossfadeItem:(id)arg2 error:(id)arg3;
- (void)_handleVideoPlayerItemLoadResultWithSuccess:(BOOL)arg1 playerItem:(id)arg2 videoCropFactor:(float)arg3 error:(id)arg4;
- (void)_loadCrossfadeItemIfNeeded;
- (void)_loadNextResourceIfNeeded;
- (void)_loadVideoPlayerItemIfNeeded;
- (BOOL)_needsToLoadContent;
- (void)_setError:(id)arg1;
- (void)_setStatus:(long long)arg1;
- (void)_setVideoPlayerItem:(id)arg1 cropFactor:(float)arg2;
- (void)_updateStatus;
- (void)cancelLoading;
- (void)dealloc;
- (id)init;
- (id)initWithAsset:(id)arg1 targetSize:(struct CGSize)arg2;
- (id)initWithAsset:(id)arg1 targetSize:(struct CGSize)arg2 trimmedTimeRange:(CDStruct_e83c9415)arg3;
- (void)registerObserver:(id)arg1;
- (void)resetAVObjects;
- (void)unregisterObserver:(id)arg1;

@end

