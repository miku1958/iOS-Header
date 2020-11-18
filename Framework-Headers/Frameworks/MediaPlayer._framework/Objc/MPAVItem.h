//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVPlayerItem, AVPlayerItemAccessLog, ICMusicSubscriptionLeaseStatus, MPAlternateTracks, MPMediaItem, MPModelGenericObject, MPModelPlayEvent, MPNowPlayingContentItem, MPQueueFeeder, NSArray, NSDictionary, NSError, NSNumber, NSString, NSURL;
@protocol MPAVItemObserver, OS_dispatch_queue;

@interface MPAVItem : NSObject
{
    AVAsset *_asset;
    NSObject<OS_dispatch_queue> *_assetQueue;
    AVPlayerItem *_avPlayerItem;
    BOOL _isAssetLoaded;
    MPQueueFeeder *_feeder;
    float _soundCheckVolumeNormalization;
    NSArray *_chapterTimeMarkers;
    NSArray *_artworkTimeMarkers;
    NSArray *_urlTimeMarkers;
    NSArray *_closedCaptionTimeMarkers;
    MPAlternateTracks *_alternateTracks;
    double _cachedDuration;
    double _cachedPlayableDuration;
    NSArray *_cachedSeekableTimeRanges;
    double _seekableTimeRangesCacheTime;
    long long _type;
    MPNowPlayingContentItem *_contentItem;
    float _defaultPlaybackRate;
    unsigned int _advancedDuringPlayback:1;
    unsigned int _handledFinishTime:1;
    unsigned int _hasPlayedThisSession:1;
    unsigned int _wasCountedAsSkipped:1;
    unsigned int _isStreamable:2;
    unsigned int _watchingAttributes:1;
    unsigned int _userChangedItemsDuringPlayback:1;
    unsigned int _lyricsAvailable:1;
    unsigned int _timeMarkersNeedLoading:1;
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _hasLoadedHasProtectedContent;
    BOOL _hasLoadedPlaybackMode;
    BOOL _hasPostedNaturalSizeChange;
    BOOL _hasRegisteredForCaptionsAppearanceChanged;
    BOOL _hasValidPlayerItemDuration;
    double _lastLoggedTotalDuration;
    long long _likedState;
    CDStruct_1b6d18a9 _playerItemDuration;
    long long _exportableArtworkRevision;
    BOOL _meetsPlaybackHistoryThreshold;
    BOOL _assetLoaded;
    BOOL _didAttemptToLoadAsset;
    BOOL _canReusePlayerItem;
    BOOL _likedStateEnabled;
    BOOL _supportsLikedState;
    BOOL _prefersSeekOverSkip;
    BOOL _hasProtectedContent;
    BOOL _tailPlaceholder;
    BOOL _startItem;
    BOOL _shouldPreventPlayback;
    BOOL _allowsAirPlayFromCloud;
    BOOL _allowsExternalPlayback;
    BOOL _requiresLoadedAssetForAirPlayProperties;
    BOOL _hasFinishedDownloading;
    BOOL _hasPerformedErrorResolution;
    BOOL _activeItem;
    BOOL _externalDisplay;
    float _currentPlaybackRate;
    float _loudnessInfoVolumeNormalization;
    id<MPAVItemObserver> _observer;
    NSError *_itemError;
    NSString *_queueIdentifier;
    long long _playbackMode;
    long long _albumStoreID;
    NSArray *_buyOffers;
    NSString *_copyrightText;
    NSString *_externalContentIdentifier;
    long long _storeItemInt64ID;
    long long _storeSubscriptionAdamID;
    MPMediaItem *_mediaItem;
    MPModelGenericObject *_modelGenericObject;
    NSString *_aggregateDictionaryItemIdentifier;
    NSString *_storeFrontIdentifier;
    NSNumber *_storeAccountID;
    NSNumber *_useListeningHistory;
    long long _leasePlaybackPreventionState;
    ICMusicSubscriptionLeaseStatus *_leaseStatus;
    NSString *_contentItemID;
}

@property (nonatomic, getter=_currentPlaybackRate, setter=_setCurrentPlaybackRate:) float _currentPlaybackRate; // @synthesize _currentPlaybackRate;
@property (readonly, nonatomic) CDStruct_1b6d18a9 _playerItemDurationIfAvailable;
@property (readonly, nonatomic) AVPlayerItemAccessLog *accessLog;
@property (nonatomic, getter=isActiveItem) BOOL activeItem; // @synthesize activeItem=_activeItem;
@property (readonly, copy, nonatomic) NSString *aggregateDictionaryItemIdentifier; // @synthesize aggregateDictionaryItemIdentifier=_aggregateDictionaryItemIdentifier;
@property (readonly, nonatomic) NSString *album;
@property (readonly, nonatomic) NSString *albumArtist;
@property (readonly, nonatomic) unsigned long long albumArtistPersistentID;
@property (readonly, nonatomic) unsigned long long albumPersistentID;
@property (readonly, nonatomic) long long albumStoreID; // @synthesize albumStoreID=_albumStoreID;
@property (readonly, nonatomic) unsigned long long albumTrackCount;
@property (readonly, nonatomic) unsigned long long albumTrackNumber;
@property (readonly, nonatomic) BOOL allowsAirPlayFromCloud; // @synthesize allowsAirPlayFromCloud=_allowsAirPlayFromCloud;
@property (readonly, nonatomic) BOOL allowsEQ;
@property (readonly, nonatomic) BOOL allowsExternalPlayback; // @synthesize allowsExternalPlayback=_allowsExternalPlayback;
@property (readonly, nonatomic) MPAlternateTracks *alternateTracks; // @synthesize alternateTracks=_alternateTracks;
@property (readonly, nonatomic, getter=isAlwaysLive) BOOL alwaysLive;
@property (readonly, nonatomic) NSString *artist;
@property (readonly, nonatomic) unsigned long long artistPersistentID;
@property (readonly, nonatomic) long long artistStoreID;
@property (strong, nonatomic) NSArray *artworkTimeMarkers; // @synthesize artworkTimeMarkers=_artworkTimeMarkers;
@property (readonly, nonatomic) AVAsset *asset;
@property (readonly, nonatomic, getter=isAssetLoaded) BOOL assetLoaded; // @synthesize assetLoaded=_assetLoaded;
@property (readonly, nonatomic, getter=isAssetURLValid) BOOL assetURLValid;
@property (readonly, copy, nonatomic) NSNumber *bookmarkTime;
@property (readonly, copy, nonatomic) NSArray *buyOffers; // @synthesize buyOffers=_buyOffers;
@property (readonly, nonatomic) BOOL canReusePlayerItem; // @synthesize canReusePlayerItem=_canReusePlayerItem;
@property (readonly, nonatomic) BOOL canSeedGenius;
@property (readonly, nonatomic) BOOL canUseLoadedAsset;
@property (strong, nonatomic) NSArray *chapterTimeMarkers; // @synthesize chapterTimeMarkers=_chapterTimeMarkers;
@property (strong, nonatomic) NSArray *closedCaptionTimeMarkers;
@property (readonly, nonatomic) NSString *cloudAlbumID;
@property (readonly, nonatomic) unsigned long long cloudID;
@property (readonly, nonatomic) NSString *cloudUniversalLibraryID;
@property (readonly, nonatomic) NSString *composer;
@property (readonly, nonatomic) unsigned long long composerPersistentID;
@property (readonly, copy, nonatomic) NSString *containerUniqueID;
@property (readonly, nonatomic) MPNowPlayingContentItem *contentItem;
@property (copy, nonatomic) NSString *contentItemID; // @synthesize contentItemID=_contentItemID;
@property (readonly, copy, nonatomic) NSString *copyrightText; // @synthesize copyrightText=_copyrightText;
@property (readonly, nonatomic) double currentTimeDisplayOverride;
@property (readonly, nonatomic) long long customAVEQPreset;
@property (readonly, nonatomic) NSString *databaseID;
@property (nonatomic) float defaultPlaybackRate; // @synthesize defaultPlaybackRate=_defaultPlaybackRate;
@property (readonly, nonatomic) BOOL didAttemptToLoadAsset; // @synthesize didAttemptToLoadAsset=_didAttemptToLoadAsset;
@property (readonly, nonatomic) unsigned long long discCount;
@property (readonly, nonatomic) unsigned long long discNumber;
@property (readonly, nonatomic) NSString *displayableText;
@property (readonly, nonatomic) BOOL displayableTextLoaded;
@property (readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property (readonly, nonatomic) double durationFromExternalMetadata;
@property (readonly, nonatomic) double durationIfAvailable;
@property (readonly, nonatomic) BOOL durationIsValid;
@property (readonly, nonatomic, getter=isExplicitTrack) BOOL explicitTrack;
@property (readonly, copy, nonatomic) NSString *externalContentIdentifier; // @synthesize externalContentIdentifier=_externalContentIdentifier;
@property (nonatomic, getter=hasExternalDisplay) BOOL externalDisplay; // @synthesize externalDisplay=_externalDisplay;
@property (weak, nonatomic) MPQueueFeeder *feeder; // @synthesize feeder=_feeder;
@property (nonatomic) CDStruct_1b6d18a9 forwardPlaybackEndTime;
@property (readonly, nonatomic) NSString *genre;
@property (readonly, nonatomic) unsigned long long genrePersistentID;
@property (readonly, nonatomic) BOOL hasFinishedDownloading; // @synthesize hasFinishedDownloading=_hasFinishedDownloading;
@property (nonatomic) BOOL hasPerformedErrorResolution; // @synthesize hasPerformedErrorResolution=_hasPerformedErrorResolution;
@property (nonatomic) BOOL hasPlayedThisSession;
@property (readonly, nonatomic) BOOL hasProtectedContent; // @synthesize hasProtectedContent=_hasProtectedContent;
@property (readonly, nonatomic) BOOL hasStoreLyrics;
@property (readonly, nonatomic) BOOL hasTimeSyncedLyrics;
@property (nonatomic, getter=isInWishList) BOOL inWishList;
@property (readonly, copy, nonatomic) NSNumber *initialPlaybackStartTime;
@property (readonly, nonatomic) BOOL isAd;
@property BOOL isAssetLoaded; // @synthesize isAssetLoaded=_isAssetLoaded;
@property (strong, nonatomic) NSError *itemError; // @synthesize itemError=_itemError;
@property (readonly, nonatomic) long long leasePlaybackPreventionState; // @synthesize leasePlaybackPreventionState=_leasePlaybackPreventionState;
@property (readonly, copy, nonatomic) ICMusicSubscriptionLeaseStatus *leaseStatus; // @synthesize leaseStatus=_leaseStatus;
@property (readonly, nonatomic) NSString *libraryLyrics;
@property (nonatomic) long long likedState;
@property (readonly, nonatomic, getter=isLikedStateEnabled) BOOL likedStateEnabled; // @synthesize likedStateEnabled=_likedStateEnabled;
@property (nonatomic) float loudnessInfoVolumeNormalization; // @synthesize loudnessInfoVolumeNormalization=_loudnessInfoVolumeNormalization;
@property (readonly, nonatomic) NSString *lyrics;
@property (readonly, nonatomic) NSString *mainTitle;
@property (readonly, strong, nonatomic) MPMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property (readonly, nonatomic) unsigned long long mediaType;
@property (readonly, nonatomic) BOOL meetsPlaybackHistoryThreshold; // @synthesize meetsPlaybackHistoryThreshold=_meetsPlaybackHistoryThreshold;
@property (readonly, nonatomic) MPModelGenericObject *modelGenericObject; // @synthesize modelGenericObject=_modelGenericObject;
@property (readonly, nonatomic) MPModelPlayEvent *modelPlayEvent;
@property (readonly, nonatomic) struct CGSize naturalSize;
@property (weak, nonatomic) id<MPAVItemObserver> observer; // @synthesize observer=_observer;
@property (readonly, nonatomic) unsigned long long persistentID;
@property (readonly, nonatomic) NSString *personID;
@property (readonly, nonatomic, getter=isPlaceholder) BOOL placeholder;
@property (readonly, nonatomic) double playableDuration;
@property (readonly, nonatomic) double playableDurationIfAvailable;
@property (readonly, copy, nonatomic) NSError *playbackError;
@property (readonly, copy, nonatomic) NSDictionary *playbackInfo;
@property (readonly, nonatomic) long long playbackMode; // @synthesize playbackMode=_playbackMode;
@property (strong, nonatomic) AVPlayerItem *playerItem;
@property (readonly, nonatomic) NSURL *podcastURL;
@property (readonly, nonatomic) BOOL prefersSeekOverSkip; // @synthesize prefersSeekOverSkip=_prefersSeekOverSkip;
@property (readonly, nonatomic) struct CGSize presentationSize;
@property (strong, nonatomic) NSString *queueIdentifier; // @synthesize queueIdentifier=_queueIdentifier;
@property (readonly, nonatomic, getter=isRadioItem) BOOL radioItem;
@property (readonly, nonatomic) BOOL requiresLoadedAssetForAirPlayProperties; // @synthesize requiresLoadedAssetForAirPlayProperties=_requiresLoadedAssetForAirPlayProperties;
@property (readonly, nonatomic) BOOL shouldPreventPlayback; // @synthesize shouldPreventPlayback=_shouldPreventPlayback;
@property (readonly, nonatomic) BOOL shouldShowComposer;
@property (nonatomic) float soundCheckVolumeNormalization; // @synthesize soundCheckVolumeNormalization=_soundCheckVolumeNormalization;
@property (nonatomic, getter=isStartItem) BOOL startItem; // @synthesize startItem=_startItem;
@property (readonly, nonatomic) BOOL stationAllowsItemLiking;
@property (readonly, copy, nonatomic) NSString *stationHash;
@property (readonly, nonatomic) long long stationID;
@property (readonly, copy, nonatomic) NSString *stationName;
@property (readonly, copy, nonatomic) NSString *stationStringID;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSNumber *storeAccountID; // @synthesize storeAccountID=_storeAccountID;
@property (readonly, copy, nonatomic) NSString *storeFrontIdentifier; // @synthesize storeFrontIdentifier=_storeFrontIdentifier;
@property (readonly, nonatomic) NSString *storeItemID;
@property (readonly, nonatomic) long long storeItemInt64ID; // @synthesize storeItemInt64ID=_storeItemInt64ID;
@property (readonly, nonatomic) long long storePurchasedAdamID;
@property (readonly, nonatomic) long long storeSubscriptionAdamID; // @synthesize storeSubscriptionAdamID=_storeSubscriptionAdamID;
@property (readonly, nonatomic, getter=isStreamable) BOOL streamable;
@property (readonly, nonatomic) BOOL supportsLikedState; // @synthesize supportsLikedState=_supportsLikedState;
@property (readonly, nonatomic) BOOL supportsRadioTrackActions;
@property (readonly, nonatomic) BOOL supportsRating;
@property (readonly, nonatomic) BOOL supportsRewindAndFastForward15Seconds;
@property (readonly, nonatomic, getter=isTailPlaceholder) BOOL tailPlaceholder; // @synthesize tailPlaceholder=_tailPlaceholder;
@property (readonly, nonatomic) double timeOfSeekableEnd;
@property (readonly, nonatomic) double timeOfSeekableStart;
@property (readonly, nonatomic) struct OpaqueCMTimebase *timebase;
@property (readonly, nonatomic) NSArray *timedMetadataIfAvailable;
@property (readonly, nonatomic) long long type;
@property (strong, nonatomic) NSArray *urlTimeMarkers; // @synthesize urlTimeMarkers=_urlTimeMarkers;
@property (readonly, nonatomic) BOOL useEmbeddedChapterData;
@property (readonly, nonatomic) NSNumber *useListeningHistory; // @synthesize useListeningHistory=_useListeningHistory;
@property (nonatomic) BOOL userAdvancedDuringPlayback;
@property (nonatomic) BOOL userChangedItemsDuringPlayback;
@property (readonly, nonatomic) float userRating;
@property (nonatomic) BOOL userSkippedPlayback;
@property (readonly, nonatomic) BOOL usesSubscriptionLease;

+ (id)URLFromPath:(id)arg1;
+ (long long)defaultScaleMode;
+ (BOOL)hasNominalAmountBeenPlayedForElapsedTime:(double)arg1 startTime:(double)arg2 stopTime:(double)arg3;
+ (BOOL)isPlaceholder;
+ (double)nominalHasBeenPlayedThresholdForDuration:(double)arg1;
+ (void)setDefaultScaleMode:(long long)arg1;
+ (BOOL)shouldIncrementPlayCountForElapsedTime:(double)arg1 startTime:(double)arg2 stopTime:(double)arg3;
- (void).cxx_destruct;
- (void)_addObservationsForAVPlayerItem:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applyLoudnessInfo;
- (void)_captionAppearanceSettingsChanged;
- (void)_clearAsset;
- (id)_currentContentItemDeviceSpecificUserInfo;
- (void)_currentPlaybackRateDidChange:(float)arg1;
- (double)_durationFromExternalMetadataIfAvailable;
- (double)_expectedStartTimeWithPlaybackInfo:(id)arg1;
- (double)_expectedStopTimeWithPlaybackInfo:(id)arg1;
- (void)_handleUpdatedLikedState:(long long)arg1 forUserIdentity:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_imageChapterTrackIDsForAsset:(id)arg1;
- (id)_initialPlaybackStartTimeForPlaybackInfo:(id)arg1;
- (void)_internalLikedStateDidChangeNotification:(id)arg1;
- (BOOL)_isBackgroundPlaybackRestricted;
- (void)_itemAttributeAvailableKey:(id)arg1;
- (void)_likedStateDidChange;
- (void)_loadAssetAndPlayerItem;
- (void)_loadAssetProperties;
- (void)_loadAvailableMediaCharacteristicsIfNeeded;
- (void)_loadTimeMarkersAsync;
- (void)_loadTimeMarkersBlocking;
- (void)_performContentItemUpdate:(CDUnknownBlockType)arg1;
- (long long)_persistedLikedState;
- (double)_playableDurationForLoadedTimeRanges:(id)arg1;
- (void)_realoadEmbeddedTimeMarkers;
- (void)_releaseAllTimeMarkers;
- (void)_removeObservationsForAVPlayerItem:(id)arg1;
- (id)_seekableTimeRanges;
- (void)_setListeningForCaptionsAppearanceSettingsChanged:(BOOL)arg1;
- (void)_setNeedsPersistedLikedStateUpdate;
- (BOOL)_shouldPublishArtworkURL;
- (id)_timeMarkerFromMarkers:(id)arg1 forTime:(double)arg2;
- (void)_updateDurationSnapshotWithElapsedTime:(double)arg1 playbackRate:(float)arg2;
- (void)_updateHasFinishedDownloading;
- (void)_updateSoundCheckVolumeNormalizationForPlayerItem;
- (void)_willBecomeActivePlayerItem;
- (void)_willResignActivePlayerItem;
- (long long)albumYear;
- (unsigned long long)alternatesCountForTypes:(unsigned long long)arg1;
- (void)applyVolumeNormalizationWithSoundCheckEnabled:(BOOL)arg1;
- (CDUnknownBlockType)artworkCatalogBlock;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (id)artworkTimeMarkerForTime:(double)arg1;
- (CDUnknownBlockType)blockForDirectAVControllerNotificationReferencingItem:(id)arg1;
- (id)chapterTimeMarkerForTime:(double)arg1;
- (id)closedCaptionTimeMarkerForTime:(double)arg1;
- (void)dealloc;
- (void)disableItemReuse;
- (double)durationInSeconds;
- (void)flushNowPlayingCaches;
- (BOOL)hasAlternatesForTypes:(unsigned long long)arg1;
- (BOOL)hasDataForItemArtwork;
- (BOOL)hasDisplayableText;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (id)initWithPlayerItem:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (void)invalidateContentItemDeviceSpecificUserInfo;
- (BOOL)isSupportedDefaultPlaybackSpeed:(long long)arg1;
- (BOOL)isValidPlayerSubstituteForItem:(id)arg1;
- (void)loadAssetAndPlayerItem;
- (void)notePlaybackFinishedByHittingEnd;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)path;
- (float)playbackRateForLevel:(unsigned long long)arg1 direction:(long long)arg2 paused:(BOOL)arg3;
- (void)prepareForRate:(float)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reevaluateHasProtectedContent;
- (void)reevaluateType;
- (void)replacePlayerItemWithPlayerItem:(id)arg1;
- (void)resetBookkeeping;
- (void)resolvePlaybackError:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (float)scanIntervalForLevel:(unsigned long long)arg1 paused:(BOOL)arg2;
- (void)setAlternateAudioTrackID:(int)arg1;
- (void)setAlternateAudioTrackLocale:(id)arg1;
- (void)setLikedState:(long long)arg1 forUserIdentity:(id)arg2;
- (void)setMeetsPlaybackHistoryThresholdForElapsedTime:(double)arg1 startTime:(double)arg2;
- (void)setOverrideDuration:(double)arg1;
- (void)setPlaybackCheckpointCurrentTime:(double)arg1;
- (void)setPlaybackFinishedTime:(double)arg1;
- (void)setPlaybackStoppedTime:(double)arg1;
- (void)setRating:(float)arg1;
- (void)setSelectedAlternateTextTrack:(id)arg1;
- (void)setSubtitleTrackID:(int)arg1;
- (void)setupEQPresetWithDefaultPreset:(long long)arg1;
- (void)setupPlaybackInfo;
- (int)subtitleTrackID;
- (id)url;
- (id)urlTimeMarkerForTime:(double)arg1;

@end
