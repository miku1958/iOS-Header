//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAVItem.h>

#import <MediaPlayer/AVAssetResourceLoaderDelegate-Protocol.h>
#import <MediaPlayer/MPRTCReportingItemSessionCreating-Protocol.h>
#import <MediaPlayer/SSVSecureKeyDeliveryRequestOperationDelegate-Protocol.h>

@class AVAssetResourceLoadingRequest, MPMediaPlaybackItemMetadata, MPStorePlayWhileDownloadSession, MPStreamingDownloadSession, NSData, NSError, NSNumber, NSObject, NSOperationQueue, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface MPStoreAVItem : MPAVItem <AVAssetResourceLoaderDelegate, SSVSecureKeyDeliveryRequestOperationDelegate, MPRTCReportingItemSessionCreating>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_persistenceQueue;
    unsigned long long _assetQuality;
    BOOL _didDeferLeaseStart;
    BOOL _externalDisplay;
    BOOL _hasEverPrioritizedPlayerItem;
    BOOL _hasPrioritizedPlayWhileDownloadSession;
    BOOL _hasPrioritizedStreamingDownloadSession;
    BOOL _hasValidAssetQuality;
    BOOL _isActivePlayerItem;
    NSError *_lastResourceLoadingError;
    NSNumber *_bookmarkTime;
    NSOperationQueue *_operationQueue;
    MPStorePlayWhileDownloadSession *_playWhileDownloadSession;
    unsigned long long _preferredAssetQuality;
    id _rtcReportingParentHierarchyToken;
    NSString *_rtcReportingServiceIdentifier;
    MPStreamingDownloadSession *_streamingDownloadSession;
    double _playbackStartTime;
    AVAssetResourceLoadingRequest *_loadingRequest;
    NSData *_serverPlaybackContextDataForStoppingLease;
    AVAssetResourceLoadingRequest *_externalLoadingRequest;
    NSData *_externalServerPlaybackContextDataForStoppingLease;
    BOOL _rentalCheckoutRequired;
    BOOL _ignoreHLSOfflinePlaybackKeys;
    unsigned long long _options;
    MPMediaPlaybackItemMetadata *_playbackItemMetadata;
    NSString *_assetSourceStoreFrontID;
    NSString *_requestingBundleIdentifier;
    NSString *_requestingBundleVersion;
    long long _equivalencySourceAdamID;
    unsigned long long _rentalID;
}

@property (readonly, nonatomic) BOOL allowsStoreBagStreamingKeyURLsFallback;
@property (copy, nonatomic) NSString *assetSourceStoreFrontID; // @synthesize assetSourceStoreFrontID=_assetSourceStoreFrontID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long equivalencySourceAdamID; // @synthesize equivalencySourceAdamID=_equivalencySourceAdamID;
@property (strong, nonatomic) NSData *externalServerPlaybackContextDataForStoppingLease; // @synthesize externalServerPlaybackContextDataForStoppingLease=_externalServerPlaybackContextDataForStoppingLease;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isiTunesStoreStream) BOOL iTunesStoreStream;
@property (nonatomic, getter=isIgnoringHLSOfflinePlaybackKeys) BOOL ignoreHLSOfflinePlaybackKeys; // @synthesize ignoreHLSOfflinePlaybackKeys=_ignoreHLSOfflinePlaybackKeys;
@property (readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property (readonly, nonatomic) MPMediaPlaybackItemMetadata *playbackItemMetadata; // @synthesize playbackItemMetadata=_playbackItemMetadata;
@property (readonly, nonatomic, getter=isRentalCheckoutRequired) BOOL rentalCheckoutRequired; // @synthesize rentalCheckoutRequired=_rentalCheckoutRequired;
@property (readonly, nonatomic) unsigned long long rentalID; // @synthesize rentalID=_rentalID;
@property (copy, nonatomic) NSString *requestingBundleIdentifier; // @synthesize requestingBundleIdentifier=_requestingBundleIdentifier;
@property (copy, nonatomic) NSString *requestingBundleVersion; // @synthesize requestingBundleVersion=_requestingBundleVersion;
@property (readonly, nonatomic) long long rtcReportingAssetType;
@property (readonly, nonatomic) id rtcReportingParentHierarchyToken;
@property (readonly, copy, nonatomic) NSString *rtcReportingServiceIdentifier;
@property (strong, nonatomic) NSData *serverPlaybackContextDataForStoppingLease; // @synthesize serverPlaybackContextDataForStoppingLease=_serverPlaybackContextDataForStoppingLease;
@property (readonly, nonatomic) unsigned long long streamType;
@property (readonly, copy, nonatomic) NSURL *streamingKeyCertificateURL;
@property (readonly, copy, nonatomic) NSURL *streamingKeyServerURL;
@property (readonly) Class superclass;

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
- (void)_checkInExternalPlaybackLease;
- (void)_currentPlaybackRateDidChange:(float)arg1;
- (BOOL)_getAssetURL:(id *)arg1 playWhileDownloadSession:(id *)arg2 assetQuality:(unsigned long long *)arg3 error:(id *)arg4 usingStoreDownload:(id)arg5 assetOptions:(id)arg6 shouldStartDownload:(BOOL)arg7;
- (void)_handlePlaybackFinishedTime:(double)arg1 finishedByHittingEnd:(BOOL)arg2;
- (void)_handleUpdatedLikedState:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_handledLoadingRequestWithOfflinePersistantKey:(id)arg1;
- (BOOL)_isBackgroundPlaybackRestricted;
- (void)_loadMediaItemWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_mediaPlaybackItemMetadataDidChangeNotification:(id)arg1;
- (void)_mediaPlaybackItemMetadataLikedStateDidChangeNotification:(id)arg1;
- (id)_mediaSelectionOptionFromGroup:(id)arg1 withTrackID:(int)arg2;
- (id)_newTimeMarkersForChapterType:(long long)arg1;
- (void)_persistPlaybackStartTime:(double)arg1;
- (void)_persistURI:(id)arg1 persistentContentKey:(id)arg2;
- (long long)_persistedLikedState;
- (void)_prioritizeDownloadSessionsIfNeeded;
- (BOOL)_shouldRememberBookmarkTime;
- (void)_stopLease:(id)arg1 withContextData:(id)arg2;
- (id)_storeUbiquitousIdentifier;
- (void)_updateBookmarkTimeIfNecessary:(double)arg1 isCheckpoint:(BOOL)arg2;
- (void)_willBecomeActivePlayerItem;
- (void)_willResignActivePlayerItem;
- (id)album;
- (id)albumArtist;
- (unsigned long long)albumArtistPersistentID;
- (unsigned long long)albumPersistentID;
- (long long)albumStoreID;
- (unsigned long long)albumTrackCount;
- (unsigned long long)albumTrackNumber;
- (BOOL)allowsAirPlayFromCloud;
- (BOOL)allowsEQ;
- (BOOL)allowsExternalPlayback;
- (void)applyVolumeNormalizationWithSoundCheckEnabled:(BOOL)arg1;
- (id)artist;
- (unsigned long long)artistPersistentID;
- (long long)artistStoreID;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (id)artworkTimeMarkers;
- (BOOL)canSeedGenius;
- (id)chapterTimeMarkers;
- (id)composer;
- (unsigned long long)composerPersistentID;
- (id)copyrightText;
- (long long)customAVEQPreset;
- (void)dealloc;
- (BOOL)didDeferLeaseStart;
- (unsigned long long)discCount;
- (unsigned long long)discNumber;
- (id)displayableText;
- (double)durationFromExternalMetadata;
- (id)externalContentIdentifier;
- (id)genre;
- (unsigned long long)genrePersistentID;
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
- (id)lastResourceLoadingError;
- (void)loadAssetAndPlayerItem;
- (id)mainTitle;
- (id)mediaItem;
- (unsigned long long)mediaType;
- (id)modelGenericObject;
- (long long)mpcReporting_equivalencySourceAdamID;
- (id)mpcReporting_requestingBundleIdentifier;
- (id)mpcReporting_requestingBundleVersion;
- (void)notePlaybackFinishedByHittingEnd;
- (unsigned long long)persistentID;
- (id)playbackInfo;
- (BOOL)prefersSeekOverSkip;
- (void)prepareForRate:(float)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reevaluateType;
- (BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (BOOL)resourceLoader:(id)arg1 shouldWaitForRenewalOfRequestedResource:(id)arg2;
- (id)rtcReportingServiceIdentifierWithAssetURL:(id)arg1;
- (void)secureKeyDeliveryRequestOperationDidChangeServerPlaybackContextData:(id)arg1;
- (void)setAlternateAudioTrackID:(int)arg1;
- (void)setAlternateAudioTrackLocale:(id)arg1;
- (void)setExternalDisplay:(BOOL)arg1;
- (void)setLoudnessInfoVolumeNormalization:(float)arg1;
- (void)setPlaybackCheckpointCurrentTime:(double)arg1;
- (void)setPlaybackFinishedTime:(double)arg1;
- (void)setPlaybackStoppedTime:(double)arg1;
- (void)setRating:(float)arg1;
- (void)setupPlaybackInfo;
- (BOOL)shouldShowComposer;
- (id)storeDownload;
- (long long)storeItemInt64ID;
- (long long)storePlaybackEndpointType;
- (long long)storeSubscriptionAdamID;
- (BOOL)supportsLikedState;
- (BOOL)supportsRewindAndFastForward15Seconds;
- (long long)type;
- (id)urlTimeMarkers;
- (BOOL)useEmbeddedChapterData;
- (float)userRating;
- (BOOL)usesSubscriptionLease;

@end
