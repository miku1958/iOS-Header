//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXViewControllerEventTracker.h>

#import <PhotosUI/PUBrowsingVideoPlayerChangeObserver-Protocol.h>
#import <PhotosUI/PUBrowsingViewModelChangeObserver-Protocol.h>
#import <PhotosUI/PUOneUpEventTracker-Protocol.h>
#import <PhotosUI/PXChangeObserver-Protocol.h>

@class NSMutableDictionary, NSString, PUBrowsingVideoPlayer, PUBrowsingViewModel, PXAssetAnalyzer, PXAssetMetadataDonator;
@protocol PUDisplayAsset;

__attribute__((visibility("hidden")))
@interface PUOneUpEventTracker : PXViewControllerEventTracker <PXChangeObserver, PUBrowsingViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver, PUOneUpEventTracker>
{
    BOOL _isSessionActive;
    BOOL _currentlyStreamingVideoIsActuallyPlaying;
    BOOL _currentlyStreamingVideoIsStalled;
    BOOL _currentlyStreamingVideoDidStartActualPlayback;
    PUBrowsingViewModel *_viewModel;
    long long _presentationOrigin;
    NSString *_viewClassName;
    long long _sessionSignpost;
    id<PUDisplayAsset> _currentlyViewedAsset;
    double _currentlyViewedAssetTimestamp;
    long long _currentlyViewedAssetGeneration;
    long long _currentAssetSignpost;
    long long _currentAssetDisplayIntervalSignpost;
    PXAssetAnalyzer *_assetAnalyzer;
    PXAssetMetadataDonator *_assetMetadataDonator;
    PUBrowsingVideoPlayer *_currentVideoPlayer;
    id<PUDisplayAsset> _currentVideoAsset;
    id<PUDisplayAsset> _currentlyPlayingVideoAsset;
    double _currentlyPlayingVideoAssetTimestamp;
    id<PUDisplayAsset> _currentlyStreamingVideoAsset;
    long long _currentlyStreamingVideoStallsCount;
    long long _currentlyPlayingLivePhotoSignpost;
    long long _currentlyPlayingVideoSignpost;
    long long _currentlyPlayingStreamedVideoSignpost;
    long long _currentlyPlayingStreamedVideoStartSignpost;
}

@property (readonly, nonatomic) PXAssetAnalyzer *assetAnalyzer; // @synthesize assetAnalyzer=_assetAnalyzer;
@property (readonly, nonatomic) PXAssetMetadataDonator *assetMetadataDonator; // @synthesize assetMetadataDonator=_assetMetadataDonator;
@property (nonatomic) long long currentAssetDisplayIntervalSignpost; // @synthesize currentAssetDisplayIntervalSignpost=_currentAssetDisplayIntervalSignpost;
@property (nonatomic) long long currentAssetSignpost; // @synthesize currentAssetSignpost=_currentAssetSignpost;
@property (readonly, nonatomic) id<PUDisplayAsset> currentVideoAsset; // @synthesize currentVideoAsset=_currentVideoAsset;
@property (strong, nonatomic) PUBrowsingVideoPlayer *currentVideoPlayer; // @synthesize currentVideoPlayer=_currentVideoPlayer;
@property (nonatomic) long long currentlyPlayingLivePhotoSignpost; // @synthesize currentlyPlayingLivePhotoSignpost=_currentlyPlayingLivePhotoSignpost;
@property (nonatomic) long long currentlyPlayingStreamedVideoSignpost; // @synthesize currentlyPlayingStreamedVideoSignpost=_currentlyPlayingStreamedVideoSignpost;
@property (nonatomic) long long currentlyPlayingStreamedVideoStartSignpost; // @synthesize currentlyPlayingStreamedVideoStartSignpost=_currentlyPlayingStreamedVideoStartSignpost;
@property (strong, nonatomic) id<PUDisplayAsset> currentlyPlayingVideoAsset; // @synthesize currentlyPlayingVideoAsset=_currentlyPlayingVideoAsset;
@property (readonly, nonatomic) double currentlyPlayingVideoAssetTimestamp; // @synthesize currentlyPlayingVideoAssetTimestamp=_currentlyPlayingVideoAssetTimestamp;
@property (nonatomic) long long currentlyPlayingVideoSignpost; // @synthesize currentlyPlayingVideoSignpost=_currentlyPlayingVideoSignpost;
@property (strong, nonatomic) id<PUDisplayAsset> currentlyStreamingVideoAsset; // @synthesize currentlyStreamingVideoAsset=_currentlyStreamingVideoAsset;
@property (nonatomic) BOOL currentlyStreamingVideoDidStartActualPlayback; // @synthesize currentlyStreamingVideoDidStartActualPlayback=_currentlyStreamingVideoDidStartActualPlayback;
@property (nonatomic) BOOL currentlyStreamingVideoIsActuallyPlaying; // @synthesize currentlyStreamingVideoIsActuallyPlaying=_currentlyStreamingVideoIsActuallyPlaying;
@property (nonatomic) BOOL currentlyStreamingVideoIsStalled; // @synthesize currentlyStreamingVideoIsStalled=_currentlyStreamingVideoIsStalled;
@property (nonatomic) long long currentlyStreamingVideoStallsCount; // @synthesize currentlyStreamingVideoStallsCount=_currentlyStreamingVideoStallsCount;
@property (strong, nonatomic) id<PUDisplayAsset> currentlyViewedAsset; // @synthesize currentlyViewedAsset=_currentlyViewedAsset;
@property (readonly, nonatomic) long long currentlyViewedAssetGeneration; // @synthesize currentlyViewedAssetGeneration=_currentlyViewedAssetGeneration;
@property (readonly, nonatomic) double currentlyViewedAssetTimestamp; // @synthesize currentlyViewedAssetTimestamp=_currentlyViewedAssetTimestamp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isSessionActive; // @synthesize isSessionActive=_isSessionActive;
@property (copy, nonatomic) NSMutableDictionary *payload;
@property (readonly, nonatomic) long long presentationOrigin; // @synthesize presentationOrigin=_presentationOrigin;
@property (nonatomic) long long sessionSignpost; // @synthesize sessionSignpost=_sessionSignpost;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *viewClassName; // @synthesize viewClassName=_viewClassName;
@property (readonly, nonatomic) PUBrowsingViewModel *viewModel; // @synthesize viewModel=_viewModel;

- (void).cxx_destruct;
- (void)_handleLongEnoughViewDurationWithGeneration:(long long)arg1;
- (void)_invalidateCurrentVideoPlayer;
- (void)_invalidateCurrentVideoProperties;
- (void)_invalidateCurrentlyViewedAsset;
- (void)_invalidateIsSessionActive;
- (void)_logDidEndPlayingVideoAsset:(id)arg1 duration:(double)arg2;
- (void)_logDidEndSession;
- (void)_logDidEndViewingAsset:(id)arg1 duration:(double)arg2;
- (void)_logDidStartActualPlaybackOfStreamedVideoAsset:(id)arg1;
- (void)_logDidStartPlaybackOfStreamedVideoAsset:(id)arg1;
- (void)_logDidStartPlayingVideoAsset:(id)arg1;
- (void)_logDidStartSession;
- (void)_logDidStartViewingAsset:(id)arg1;
- (void)_logWillEndPlaybackOfStreamedVideoAsset:(id)arg1;
- (void)_updateCurrentVideoPlayer;
- (void)_updateCurrentVideoProperties;
- (void)_updateCurrentlyViewedAsset;
- (void)_updateIsSessionActive;
- (id)init;
- (id)initWithViewModel:(id)arg1 presentationOrigin:(long long)arg2;
- (void)logAppliedEffectSuggestion:(id)arg1 toLivePhoto:(id)arg2;
- (void)logUserDidPlayLivePhoto:(id)arg1;
- (void)logUserWillPlayLivePhoto:(id)arg1;
- (void)logVitalityDidEndForLivePhoto:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end

