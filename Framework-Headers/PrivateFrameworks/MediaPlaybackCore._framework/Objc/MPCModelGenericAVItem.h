//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAVItem.h>

#import <MediaPlaybackCore/AVAssetResourceLoaderDelegate-Protocol.h>
#import <MediaPlaybackCore/AVPlayerItemMetadataOutputPushDelegate-Protocol.h>
#import <MediaPlaybackCore/MPMusicSubscriptionLeasePlaybackParticipating-Protocol.h>
#import <MediaPlaybackCore/MPRTCReportingItemSessionCreating-Protocol.h>

@class ICMusicSubscriptionLeaseSession, ICStoreRequestContext, MPCAVItemNetworkPolicyHandler, MPCModelGenericAVItemTimedMetadataRequest, MPCModelGenericAVItemTimedMetadataResponse, MPCPlaybackRequestEnvironment, MPCSuzeLeaseSession, MPMediaLibrary, MPModelGenericObject, MPPropertySet, MPSubscriptionStatusPlaybackInformation, NSArray, NSData, NSNumber, NSObject, NSOperationQueue, NSString, NSURL;
@protocol MPCModelPlaybackAssetCacheProviding, MPCReportingIdentityPropertiesLoading, OS_dispatch_queue;

@interface MPCModelGenericAVItem : MPAVItem <AVAssetResourceLoaderDelegate, AVPlayerItemMetadataOutputPushDelegate, MPMusicSubscriptionLeasePlaybackParticipating, MPRTCReportingItemSessionCreating>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _allowsAirPlayFromCloud;
    NSNumber *_bookmarkTime;
    NSOperationQueue *_utilitySerialQueue;
    BOOL _hasLoadedSubscriptionLeaseSession;
    NSObject<OS_dispatch_queue> *_subscriptionLeaseSessionLoadQueue;
    ICMusicSubscriptionLeaseSession *_subscriptionLeaseSession;
    BOOL _hasLoadedSubscriptionPlaybackInformation;
    MPSubscriptionStatusPlaybackInformation *_subscriptionPlaybackInformation;
    NSObject<OS_dispatch_queue> *_subscriptionPlaybackInformationLoadQueue;
    BOOL _shouldAutomaticallyRefreshSubscriptionLease;
    BOOL _isAssetSubscriptionProtectionType;
    BOOL _isSubscriptionPolicyContent;
    BOOL _lastPreparedForNonZeroRate;
    MPCSuzeLeaseSession *_suzeLeaseSession;
    BOOL _isAutomaticallyRefreshingSuzeLeaseSession;
    CDUnknownBlockType _firstBecomeActivePlayerItemBlock;
    NSArray *_currentGlobalTimedMetadataGroups;
    MPModelGenericObject *_flattenedGenericObject;
    MPModelGenericObject *_flattenedMetadataGenericObject;
    MPModelGenericObject *_metadataGenericObject;
    MPPropertySet *_itemProperties;
    id<MPCReportingIdentityPropertiesLoading> _identityPropertiesLoader;
    MPCModelGenericAVItemTimedMetadataRequest *_timedMetadataRequest;
    MPCModelGenericAVItemTimedMetadataResponse *_timedMetadataResponse;
    BOOL _isHLSAsset;
    BOOL _isiTunesStoreStream;
    ICStoreRequestContext *_storeRequestContext;
    NSURL *_streamingKeyCertificateURL;
    NSURL *_streamingKeyServerURL;
    id _rtcReportingParentHierarchyToken;
    NSString *_rtcReportingServiceIdentifier;
    MPCAVItemNetworkPolicyHandler *_networkPolicyHandler;
    BOOL supportsRadioTrackActions;
    BOOL _radioPlayback;
    BOOL _radioStreamPlayback;
    long long _leasePlaybackPreventionState;
    id<MPCModelPlaybackAssetCacheProviding> _assetCacheProvider;
    NSString *_assetSourceStoreFrontID;
    long long _equivalencySourceAdamID;
    MPModelGenericObject *_genericObject;
    NSData *_jingleTimedMetadata;
    MPMediaLibrary *_mediaLibrary;
    NSNumber *_siriInitiated;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
    long long _stationItemLikedState;
}

@property (strong, nonatomic) id<MPCModelPlaybackAssetCacheProviding> assetCacheProvider; // @synthesize assetCacheProvider=_assetCacheProvider;
@property (copy, nonatomic) NSString *assetSourceStoreFrontID; // @synthesize assetSourceStoreFrontID=_assetSourceStoreFrontID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long equivalencySourceAdamID; // @synthesize equivalencySourceAdamID=_equivalencySourceAdamID;
@property (strong, nonatomic) MPModelGenericObject *genericObject; // @synthesize genericObject=_genericObject;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSData *jingleTimedMetadata; // @synthesize jingleTimedMetadata=_jingleTimedMetadata;
@property (readonly, nonatomic) long long leasePlaybackPreventionState; // @synthesize leasePlaybackPreventionState=_leasePlaybackPreventionState;
@property (strong, nonatomic) MPMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property (readonly, copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment; // @synthesize playbackRequestEnvironment=_playbackRequestEnvironment;
@property (nonatomic, getter=isRadioPlayback) BOOL radioPlayback; // @synthesize radioPlayback=_radioPlayback;
@property (nonatomic, getter=isRadioStreamPlayback) BOOL radioStreamPlayback; // @synthesize radioStreamPlayback=_radioStreamPlayback;
@property (readonly, nonatomic) long long rtcReportingAssetType;
@property (readonly, nonatomic) id rtcReportingParentHierarchyToken;
@property (readonly, copy, nonatomic) NSString *rtcReportingServiceIdentifier;
@property (readonly, nonatomic) BOOL shouldReportPlayEventsToStore;
@property (copy, nonatomic, getter=isSiriInitiated) NSNumber *siriInitiated; // @synthesize siriInitiated=_siriInitiated;
@property (nonatomic) long long stationItemLikedState; // @synthesize stationItemLikedState=_stationItemLikedState;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsRadioTrackActions; // @synthesize supportsRadioTrackActions;

- (void).cxx_destruct;
- (BOOL)_allowsStreamingPlayback;
- (void)_applyLoudnessInfo;
- (id)_bookmarkTime;
- (void)_contentTasteControllerDidChangeNotification:(id)arg1;
- (void)_currentPlaybackRateDidChange:(float)arg1;
- (void)_getSubscriptionLeasePropertiesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_getUnverifiedSubscriptionLeaseSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handlePlaybackFinishedTime:(double)arg1 didFinishByHittingEnd:(BOOL)arg2;
- (void)_handleUpdatedLikedState:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_householdID;
- (void)_invalidateContentItem;
- (id)_isPrivateListeningEnabled;
- (id)_modelPlaybackPosition;
- (long long)_persistedLikedState;
- (void)_postInvalidationNotifications;
- (id)_radioStation;
- (void)_reloadTimedMetadataRequest;
- (id)_rtcReportingServiceIdentifierWithAssetURL:(id)arg1;
- (BOOL)_shouldRememberBookmarkTime;
- (double)_startTime;
- (id)_stopTime;
- (id)_storeRequestContext;
- (id)_storeUbiquitousIdentifier;
- (void)_subscriptionLeaseStatusDidChangeNotification:(id)arg1;
- (void)_suzeLeaseSessionRenewDidFailNotification:(id)arg1;
- (void)_timedMetadataResponseDidInvalidateNotification:(id)arg1;
- (void)_updateAutomaticSubscriptionLeaseRefresh;
- (void)_updateBookmarkTime:(double)arg1 isCheckpoint:(BOOL)arg2;
- (void)_updateHasBeenPlayedWithElapsedTime:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateJingleTimedMetadata;
- (void)_updatePreventionStatusWithLeaseSession:(id)arg1;
- (id)_utilitySerialQueue;
- (void)_willBecomeActivePlayerItem;
- (void)_willResignActivePlayerItem;
- (id)album;
- (id)albumArtist;
- (unsigned long long)albumArtistPersistentID;
- (unsigned long long)albumPersistentID;
- (long long)albumStoreID;
- (BOOL)allowsAirPlayFromCloud;
- (BOOL)allowsEQ;
- (BOOL)allowsExternalPlayback;
- (void)applyVolumeNormalizationWithSoundCheckEnabled:(BOOL)arg1;
- (id)artist;
- (unsigned long long)artistPersistentID;
- (long long)artistStoreID;
- (CDUnknownBlockType)artworkCatalogBlock;
- (id)artworkTimeMarkers;
- (id)chapterTimeMarkers;
- (id)cloudAlbumID;
- (unsigned long long)cloudID;
- (id)cloudUniversalLibraryID;
- (id)composer;
- (unsigned long long)composerPersistentID;
- (id)copyrightText;
- (void)dealloc;
- (double)durationFromExternalMetadata;
- (id)externalContentIdentifier;
- (id)genre;
- (unsigned long long)genrePersistentID;
- (BOOL)hasStoreLyrics;
- (id)initWithGenericObject:(id)arg1 itemProperties:(id)arg2 playbackRequestEnvironment:(id)arg3;
- (BOOL)isAlwaysLive;
- (BOOL)isAssetURLValid;
- (BOOL)isExplicitTrack;
- (BOOL)isLikedStateEnabled;
- (BOOL)isRadioItem;
- (BOOL)isStreamable;
- (BOOL)isValidPlayerSubstituteForItem:(id)arg1;
- (id)libraryLyrics;
- (void)loadAssetAndPlayerItem;
- (id)mainTitle;
- (id)mediaItem;
- (unsigned long long)mediaType;
- (void)metadataOutput:(id)arg1 didOutputTimedMetadataGroups:(id)arg2 fromPlayerItemTrack:(id)arg3;
- (id)modelGenericObject;
- (long long)mpcReporting_equivalencySourceAdamID;
- (id)mpcReporting_householdID;
- (id)mpcReporting_identityPropertiesLoader;
- (unsigned long long)mpcReporting_itemType;
- (id)mpcReporting_jingleTimedMetadata;
- (id)mpcReporting_privateListeningEnabled;
- (id)mpcReporting_requestingBundleIdentifier;
- (id)mpcReporting_requestingBundleVersion;
- (BOOL)mpcReporting_shouldReportPlayEventsToStore;
- (BOOL)mpcReporting_shouldUseRelativeTimePositions;
- (id)mpcReporting_siriInitiated;
- (void)notePlaybackFinishedByHittingEnd;
- (void)nowPlayingInfoCenter:(id)arg1 lyricsForContentItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)persistentID;
- (id)playbackInfo;
- (BOOL)prefersSeekOverSkip;
- (void)prepareForRate:(float)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reevaluateType;
- (BOOL)requiresLoadedAssetForAirPlayProperties;
- (void)resolvePlaybackError:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (BOOL)resourceLoader:(id)arg1 shouldWaitForRenewalOfRequestedResource:(id)arg2;
- (void)setLoudnessInfoVolumeNormalization:(float)arg1;
- (void)setPlaybackCheckpointCurrentTime:(double)arg1;
- (void)setPlaybackFinishedTime:(double)arg1;
- (void)setPlaybackStoppedTime:(double)arg1;
- (void)setRating:(float)arg1;
- (BOOL)shouldPreventPlayback;
- (BOOL)shouldShowComposer;
- (BOOL)stationAllowsItemLiking;
- (id)stationHash;
- (long long)stationID;
- (id)stationName;
- (id)stationStringID;
- (long long)storeItemInt64ID;
- (long long)storeSubscriptionAdamID;
- (BOOL)supportsLikedState;
- (long long)type;
- (id)urlTimeMarkers;
- (BOOL)useEmbeddedChapterData;
- (float)userRating;

@end

