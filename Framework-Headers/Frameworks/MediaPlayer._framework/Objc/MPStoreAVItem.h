//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAVItem.h>

@class MPMediaPlaybackItemMetadata, MPStorePlayWhileDownloadSession, MPStreamingDownloadSession, NSDictionary, NSNumber, NSObject, NSString, SBCPlaybackPositionDomain, SBCPlaybackPositionEntity, SBCPlaybackPositionValueService;
@protocol OS_dispatch_queue;

@interface MPStoreAVItem : MPAVItem
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _assetQuality;
    BOOL _didDeferLeaseStart;
    BOOL _hasEverPrioritizedPlayerItem;
    BOOL _hasPrioritizedPlayWhileDownloadSession;
    BOOL _hasPrioritizedStreamingDownloadSession;
    BOOL _hasValidAssetQuality;
    BOOL _isActivePlayerItem;
    NSNumber *_bookmarkTime;
    SBCPlaybackPositionDomain *_playbackPositionDomain;
    SBCPlaybackPositionEntity *_playbackPositionEntity;
    long long _playbackPositionEntityRevision;
    SBCPlaybackPositionValueService *_playbackPositionService;
    MPStorePlayWhileDownloadSession *_playWhileDownloadSession;
    unsigned long long _preferredAssetQuality;
    MPStreamingDownloadSession *_streamingDownloadSession;
    unsigned long long _options;
    MPMediaPlaybackItemMetadata *_playbackItemMetadata;
    unsigned long long _streamType;
    NSString *_assetSourceStoreFrontID;
    NSString *_requestingBundleIdentifier;
    NSString *_requestingBundleVersion;
    long long _equivalencySourceAdamID;
    NSDictionary *_alternativeConfigurationOptions;
}

@property (readonly, copy, nonatomic) NSDictionary *alternativeConfigurationOptions; // @synthesize alternativeConfigurationOptions=_alternativeConfigurationOptions;
@property (copy, nonatomic) NSString *assetSourceStoreFrontID; // @synthesize assetSourceStoreFrontID=_assetSourceStoreFrontID;
@property (nonatomic) long long equivalencySourceAdamID; // @synthesize equivalencySourceAdamID=_equivalencySourceAdamID;
@property (readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property (readonly, nonatomic) MPMediaPlaybackItemMetadata *playbackItemMetadata; // @synthesize playbackItemMetadata=_playbackItemMetadata;
@property (copy, nonatomic) NSString *requestingBundleIdentifier; // @synthesize requestingBundleIdentifier=_requestingBundleIdentifier;
@property (copy, nonatomic) NSString *requestingBundleVersion; // @synthesize requestingBundleVersion=_requestingBundleVersion;
@property (readonly, nonatomic) unsigned long long streamType; // @synthesize streamType=_streamType;

+ (id)_assetURLForCachedLocalPlaybackAssetFilePathForPlaybackItemMetadata:(id)arg1 withMinimumAssetQuality:(unsigned long long)arg2 assetOptions:(id)arg3 returningProtectionType:(unsigned long long *)arg4 assetQuality:(unsigned long long *)arg5 usesPurchaseBundle:(BOOL *)arg6;
+ (unsigned long long)_currentPreferredAssetQualityForPlaybackItemMetadata:(id)arg1;
+ (BOOL)hasNominalAmountBeenPlayedForElapsedTime:(double)arg1 startTime:(double)arg2 stopTime:(double)arg3;
+ (BOOL)isPlaybackItemMetadataStreamingForAssetCreation:(id)arg1 returningProtectionType:(unsigned long long *)arg2;
+ (BOOL)isPlaybackItemMetadataValidForAssetCreation:(id)arg1;
+ (double)nominalHasBeenPlayedThresholdForDuration:(double)arg1;
+ (BOOL)shouldIncrementPlayCountForElapsedTime:(double)arg1 startTime:(double)arg2 stopTime:(double)arg3;
- (void).cxx_destruct;
- (void)_applyLoudnessInfo;
- (id)_bookmarkTime;
- (id)_chapterTitleForTime:(double)arg1;
- (void)_currentPlaybackRateDidChange:(float)arg1;
- (double)_expectedStartTimeWithPlaybackInfo:(id)arg1;
- (double)_expectedStopTimeWithPlaybackInfo:(id)arg1;
- (BOOL)_getAssetURL:(id *)arg1 playWhileDownloadSession:(id *)arg2 assetQuality:(unsigned long long *)arg3 error:(id *)arg4 usingStoreDownload:(id)arg5 assetOptions:(id)arg6 shouldStartDownload:(BOOL)arg7;
- (void)_handlePlaybackFinishedTime:(double)arg1 finishedByHittingEnd:(BOOL)arg2;
- (void)_handleUpdatedLikedState:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_loadMediaItemWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_mediaPlaybackItemMetadataDidChangeNotification:(id)arg1;
- (void)_mediaPlaybackItemMetadataLikedStateDidChangeNotification:(id)arg1;
- (id)_newTimeMarkersForChapterType:(long long)arg1;
- (long long)_persistedLikedState;
- (id)_playbackPositionDomain;
- (id)_playbackPositionEntity;
- (id)_playbackPositionEntityWithLoadedStoreUbiquitousIdentifier:(id)arg1;
- (id)_playbackPositionService;
- (void)_prioritizeDownloadSessionsIfNeeded;
- (BOOL)_shouldRememberBookmarkTime;
- (id)_storeUbiquitousIdentifier;
- (void)_updateBookmarkTimeIfNecessary:(double)arg1 isCheckpoint:(BOOL)arg2;
- (void)_willBecomeActivePlayerItem;
- (void)_willResignActivePlayerItem;
- (id)album;
- (id)albumArtist;
- (long long)albumStoreID;
- (unsigned long long)albumTrackCount;
- (unsigned long long)albumTrackNumber;
- (BOOL)allowsAirPlayFromCloud;
- (BOOL)allowsEQ;
- (BOOL)allowsExternalPlayback;
- (void)applyVolumeNormalizationWithSoundCheckEnabled:(BOOL)arg1;
- (id)artist;
- (long long)artistStoreID;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (id)artworkTimeMarkers;
- (BOOL)canSeedGenius;
- (id)chapterTimeMarkers;
- (id)composer;
- (id)copyrightText;
- (long long)customAVEQPreset;
- (void)dealloc;
- (id)description;
- (BOOL)didDeferLeaseStart;
- (unsigned long long)discCount;
- (unsigned long long)discNumber;
- (id)displayableText;
- (double)durationFromExternalMetadata;
- (id)genre;
- (void)handlePlaybackFinishedTime:(double)arg1 finishedByHittingEnd:(BOOL)arg2;
- (BOOL)hasAlternatesForTypes:(unsigned long long)arg1;
- (id)init;
- (id)initWithPlaybackItemMetadata:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)isAssetURLValid;
- (BOOL)isCloudItem;
- (BOOL)isExplicitTrack;
- (BOOL)isLikedStateEnabled;
- (BOOL)isStreamable;
- (BOOL)isStreamingLowQualityAsset;
- (BOOL)isSupportedDefaultPlaybackSpeed:(long long)arg1;
- (BOOL)isValidPlayerSubstituteForItem:(id)arg1;
- (void)loadAssetAndPlayerItem;
- (id)mainTitle;
- (id)mediaItem;
- (id)modelObject;
- (id)modelSong;
- (long long)mpcReporting_equivalencySourceAdamID;
- (id)mpcReporting_requestingBundleIdentifier;
- (id)mpcReporting_requestingBundleVersion;
- (void)notePlaybackFinishedByHittingEnd;
- (unsigned long long)persistentID;
- (id)playbackInfo;
- (void)prepareForRate:(float)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reevaluateType;
- (void)setAlternateAudioTrackID:(int)arg1;
- (void)setAlternateAudioTrackLocale:(id)arg1;
- (void)setLoudnessInfoVolumeNormalization:(float)arg1;
- (void)setPlaybackCheckpointCurrentTime:(double)arg1;
- (void)setPlaybackFinishedTime:(double)arg1;
- (void)setPlaybackStoppedTime:(double)arg1;
- (void)setRating:(float)arg1;
- (id)storeDownload;
- (long long)storeItemInt64ID;
- (long long)storePlaybackEndpointType;
- (long long)storeSubscriptionAdamID;
- (BOOL)supportsLikedState;
- (BOOL)supportsRewindAndFastForward15Seconds;
- (id)titlesForTime:(double)arg1;
- (long long)type;
- (id)urlTimeMarkers;
- (BOOL)useEmbeddedChapterData;
- (float)userRating;
- (BOOL)usesSubscriptionLease;

@end

