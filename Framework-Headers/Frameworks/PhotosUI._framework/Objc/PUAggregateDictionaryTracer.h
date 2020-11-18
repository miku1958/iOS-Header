//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMapTable;
@protocol PUDisplayAsset;

__attribute__((visibility("hidden")))
@interface PUAggregateDictionaryTracer : NSObject
{
    BOOL __streamedVideoDidStartPlaying;
    NSMapTable *__browsingViewModelTracers;
    id<PUDisplayAsset> __lastViewedAsset;
    NSDate *__lastPlayStartDate;
    id<PUDisplayAsset> __lastPlayedAsset;
    long long __assetPlayCount;
    id<PUDisplayAsset> __streamedVideo;
    double __streamedVideoBeginTime;
    long long __streamedVideoStallCount;
}

@property (nonatomic, setter=_setAssetPlayCount:) long long _assetPlayCount; // @synthesize _assetPlayCount=__assetPlayCount;
@property (readonly, nonatomic) NSMapTable *_browsingViewModelTracers; // @synthesize _browsingViewModelTracers=__browsingViewModelTracers;
@property (strong, nonatomic, setter=_setLastPlayStartDate:) NSDate *_lastPlayStartDate; // @synthesize _lastPlayStartDate=__lastPlayStartDate;
@property (weak, nonatomic, setter=_setLastPlayedAsset:) id<PUDisplayAsset> _lastPlayedAsset; // @synthesize _lastPlayedAsset=__lastPlayedAsset;
@property (weak, nonatomic, setter=_setLastViewedAsset:) id<PUDisplayAsset> _lastViewedAsset; // @synthesize _lastViewedAsset=__lastViewedAsset;
@property (weak, nonatomic, setter=_setStreamedVideo:) id<PUDisplayAsset> _streamedVideo; // @synthesize _streamedVideo=__streamedVideo;
@property (nonatomic, setter=_setStreamedVideoBeginTime:) double _streamedVideoBeginTime; // @synthesize _streamedVideoBeginTime=__streamedVideoBeginTime;
@property (nonatomic, setter=_setStreamedVideoDidStartPlaying:) BOOL _streamedVideoDidStartPlaying; // @synthesize _streamedVideoDidStartPlaying=__streamedVideoDidStartPlaying;
@property (nonatomic, setter=_setStreamedVideoStallCount:) long long _streamedVideoStallCount; // @synthesize _streamedVideoStallCount=__streamedVideoStallCount;

+ (id)sharedTracer;
- (void).cxx_destruct;
- (long long)_assetTypeForAsset:(id)arg1;
- (id)_browsingViewModelTracerForBrowsingViewModel:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)init;
- (void)invalidateContext:(id)arg1;
- (void)streamedVideoPlaybackBegan:(id)arg1;
- (void)streamedVideoPlaybackEnded;
- (void)streamedVideoPlaybackStalled:(id)arg1;
- (void)streamedVideoPlaybackStartedActuallyPlaying:(id)arg1;
- (void)userBrowsedOneUpFor:(double)arg1;
- (void)userDidPlayAssetInOneUp:(id)arg1;
- (void)userStartedViewingCollection:(id)arg1 withListViewItemSelectionTrackerKey:(struct __CFString *)arg2;
- (void)userStartedViewingCurrentAssetOfBrowsingViewModel:(id)arg1 inContext:(id)arg2;
- (void)userStoppedViewingCurrentAssetOfBrowsingViewModel:(id)arg1 inContext:(id)arg2;
- (void)userViewedAssetInOneUp:(id)arg1;
- (void)userViewedHDRPhotoInOneUpFor:(double)arg1;
- (void)userViewedPhotoInOneUpFor:(double)arg1;
- (void)userWillPlayAssetInOneUp:(id)arg1;
- (void)vitalityPlayedForAssetInOneUp:(id)arg1;

@end

