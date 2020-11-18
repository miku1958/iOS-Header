//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/MPAVMetadataItem-Protocol.h>

@class AVAsset, AVPlayerItem, AVPlayerItemAccessLog, MPAVController, MPAlternateTextTrack, MPAlternateTracks, MPMediaItem, MPModelObject, MPModelSong, MPQueueFeeder, MPStoreDownload, NSArray, NSDictionary, NSError, NSNumber, NSString, NSURL;
@protocol MPAVItemPlaylistIdentifier, MPAVItemQueueIdentifier, OS_dispatch_queue;

@interface MPAVItem : NSObject <MPAVMetadataItem>
{
    AVAsset *_asset;
    NSObject<OS_dispatch_queue> *_assetQueue;
    AVPlayerItem *_avPlayerItem;
    BOOL _isAssetLoaded;
    MPQueueFeeder *_feeder;
    MPAVController *_player;
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
    BOOL _hasLoadedPlaybackMode;
    BOOL _hasPostedNaturalSizeChange;
    BOOL _hasRegisteredForCaptionsAppearanceChanged;
    BOOL _hasValidPlayerItemDuration;
    long long _likedState;
    BOOL _limitReadAhead;
    CDStruct_1b6d18a9 _playerItemDuration;
    BOOL _didAttemptToLoadAsset;
    BOOL _canReusePlayerItem;
    BOOL _prefersHLS;
    BOOL _shouldUseStreamingRedownload;
    BOOL _likedStateEnabled;
    BOOL _supportsLikedState;
    BOOL _allowsAirPlayFromCloud;
    BOOL _allowsExternalPlayback;
    float _currentPlaybackRate;
    float _loudnessInfoVolumeNormalization;
    NSError *_assetError;
    id<MPAVItemPlaylistIdentifier> _playlistIdentifier;
    id<MPAVItemQueueIdentifier> _queueIdentifier;
    unsigned long long _indexInQueueFeeder;
    long long _playbackMode;
    long long _albumStoreID;
    NSArray *_buyOffers;
    NSString *_copyrightText;
    long long _storeItemInt64ID;
    long long _storeSubscriptionAdamID;
    MPMediaItem *_mediaItem;
    MPModelSong *_modelSong;
    MPModelObject *_modelObject;
    NSString *_aggregateDictionaryItemIdentifier;
}

@property (nonatomic, getter=_currentPlaybackRate, setter=_setCurrentPlaybackRate:) float _currentPlaybackRate; // @synthesize _currentPlaybackRate;
@property (readonly, nonatomic) CDStruct_1b6d18a9 _playerItemDurationIfAvailable;
@property (readonly, nonatomic) AVPlayerItemAccessLog *accessLog;
@property (readonly, copy, nonatomic) NSString *aggregateDictionaryItemIdentifier; // @synthesize aggregateDictionaryItemIdentifier=_aggregateDictionaryItemIdentifier;
@property (readonly, nonatomic) NSString *album;
@property (readonly, nonatomic) NSString *albumArtist;
@property (readonly, nonatomic) long long albumStoreID; // @synthesize albumStoreID=_albumStoreID;
@property (readonly, nonatomic) unsigned long long albumTrackCount;
@property (readonly, nonatomic) unsigned long long albumTrackNumber;
@property (readonly, nonatomic) BOOL allowsAirPlayFromCloud; // @synthesize allowsAirPlayFromCloud=_allowsAirPlayFromCloud;
@property (readonly, nonatomic) BOOL allowsEQ;
@property (readonly, nonatomic) BOOL allowsExternalPlayback; // @synthesize allowsExternalPlayback=_allowsExternalPlayback;
@property (readonly, nonatomic) MPAlternateTracks *alternateTracks; // @synthesize alternateTracks=_alternateTracks;
@property (readonly, nonatomic) NSString *artist;
@property (readonly, nonatomic) long long artistStoreID;
@property (strong, nonatomic) NSArray *artworkTimeMarkers; // @synthesize artworkTimeMarkers=_artworkTimeMarkers;
@property (readonly, nonatomic) AVAsset *asset;
@property (strong, nonatomic) NSError *assetError; // @synthesize assetError=_assetError;
@property (readonly, copy, nonatomic) NSNumber *bookmarkTime;
@property (readonly, copy, nonatomic) NSArray *buyOffers; // @synthesize buyOffers=_buyOffers;
@property (readonly, nonatomic) BOOL canReusePlayerItem; // @synthesize canReusePlayerItem=_canReusePlayerItem;
@property (readonly, nonatomic) BOOL canSeedGenius;
@property (strong, nonatomic) NSArray *chapterTimeMarkers; // @synthesize chapterTimeMarkers=_chapterTimeMarkers;
@property (strong, nonatomic) NSArray *closedCaptionTimeMarkers;
@property (readonly, nonatomic) NSString *composer;
@property (readonly, copy, nonatomic) NSString *copyrightText; // @synthesize copyrightText=_copyrightText;
@property (readonly, nonatomic) double currentTimeDisplayOverride;
@property (readonly, nonatomic) long long customAVEQPreset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) float defaultPlaybackRate; // @synthesize defaultPlaybackRate=_defaultPlaybackRate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL didAttemptToLoadAsset; // @synthesize didAttemptToLoadAsset=_didAttemptToLoadAsset;
@property (readonly, nonatomic) BOOL didDeferLeaseStart;
@property (readonly, nonatomic) unsigned long long discCount;
@property (readonly, nonatomic) unsigned long long discNumber;
@property (readonly, nonatomic) NSString *displayableText;
@property (readonly, nonatomic) BOOL displayableTextLoaded;
@property (readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property (readonly, nonatomic) double durationFromExternalMetadata;
@property (readonly, nonatomic) double durationIfAvailable;
@property (readonly, nonatomic) BOOL durationIsValid;
@property (readonly, nonatomic, getter=isExplicitTrack) BOOL explicitTrack;
@property (weak, nonatomic) MPQueueFeeder *feeder; // @synthesize feeder=_feeder;
@property (nonatomic) CDStruct_1b6d18a9 forwardPlaybackEndTime;
@property (readonly, nonatomic) NSString *genre;
@property (readonly, nonatomic) BOOL hasDisplayableText;
@property (nonatomic) BOOL hasPlayedThisSession;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long indexInQueueFeeder; // @synthesize indexInQueueFeeder=_indexInQueueFeeder;
@property (readonly, copy, nonatomic) NSNumber *initialPlaybackStartTime;
@property (readonly, nonatomic) BOOL isAd;
@property (readonly, nonatomic) BOOL isAlwaysLive;
@property BOOL isAssetLoaded; // @synthesize isAssetLoaded=_isAssetLoaded;
@property (readonly, nonatomic) BOOL isCloudItem;
@property (readonly, nonatomic) BOOL isStreamingLowQualityAsset;
@property (nonatomic) long long likedState;
@property (readonly, nonatomic, getter=isLikedStateEnabled) BOOL likedStateEnabled; // @synthesize likedStateEnabled=_likedStateEnabled;
@property (nonatomic) BOOL limitReadAhead;
@property (readonly, nonatomic) NSString *localizedPositionInPlaylistString;
@property (nonatomic) float loudnessInfoVolumeNormalization; // @synthesize loudnessInfoVolumeNormalization=_loudnessInfoVolumeNormalization;
@property (readonly, nonatomic) NSString *lyrics;
@property (readonly, nonatomic) NSString *mainTitle;
@property (readonly, strong, nonatomic) MPMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property (readonly, nonatomic) MPModelObject *modelObject; // @synthesize modelObject=_modelObject;
@property (readonly, nonatomic) MPModelSong *modelSong; // @synthesize modelSong=_modelSong;
@property (readonly, nonatomic) struct CGSize naturalSize;
@property (readonly, nonatomic) unsigned long long persistentID;
@property (readonly, nonatomic) double playableDuration;
@property (readonly, nonatomic) double playableDurationIfAvailable;
@property (readonly, copy, nonatomic) NSDictionary *playbackInfo;
@property (readonly, nonatomic) long long playbackMode; // @synthesize playbackMode=_playbackMode;
@property (weak, nonatomic) MPAVController *player; // @synthesize player=_player;
@property (strong, nonatomic) AVPlayerItem *playerItem;
@property (strong, nonatomic) id<MPAVItemPlaylistIdentifier> playlistIdentifier;
@property (strong, nonatomic) id<MPAVItemPlaylistIdentifier> playlistIdentifier; // @synthesize playlistIdentifier=_playlistIdentifier;
@property (readonly, nonatomic) NSURL *podcastURL;
@property (nonatomic, setter=_setPrefersHLS:) BOOL prefersHLS; // @synthesize prefersHLS=_prefersHLS;
@property (readonly, nonatomic) struct CGSize presentationSize;
@property (strong, nonatomic) id<MPAVItemQueueIdentifier> queueIdentifier; // @synthesize queueIdentifier=_queueIdentifier;
@property (strong, nonatomic) MPAlternateTextTrack *selectedAlternateTextTrack;
@property (nonatomic, setter=_setShouldUseStreamingRedownload:) BOOL shouldUseStreamingRedownload; // @synthesize shouldUseStreamingRedownload=_shouldUseStreamingRedownload;
@property (nonatomic) float soundCheckVolumeNormalization; // @synthesize soundCheckVolumeNormalization=_soundCheckVolumeNormalization;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) MPStoreDownload *storeDownload;
@property (readonly, nonatomic) NSString *storeItemID;
@property (readonly, nonatomic) long long storeItemInt64ID; // @synthesize storeItemInt64ID=_storeItemInt64ID;
@property (readonly, nonatomic) long long storePlaybackEndpointType;
@property (readonly, nonatomic) long long storeSubscriptionAdamID; // @synthesize storeSubscriptionAdamID=_storeSubscriptionAdamID;
@property (readonly, nonatomic, getter=isStreamable) BOOL streamable;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsLikedState; // @synthesize supportsLikedState=_supportsLikedState;
@property (readonly, nonatomic) BOOL supportsRating;
@property (readonly, nonatomic) BOOL supportsRewindAndFastForward15Seconds;
@property (readonly, nonatomic) BOOL supportsSettingCurrentTime;
@property (readonly, nonatomic) BOOL supportsSkip;
@property (readonly, nonatomic) double timeOfSeekableEnd;
@property (readonly, nonatomic) double timeOfSeekableStart;
@property (readonly, nonatomic) NSArray *timedMetadataIfAvailable;
@property (readonly, nonatomic) long long type;
@property (strong, nonatomic) NSArray *urlTimeMarkers; // @synthesize urlTimeMarkers=_urlTimeMarkers;
@property (readonly, nonatomic) BOOL useEmbeddedChapterData;
@property (nonatomic) BOOL userAdvancedDuringPlayback;
@property (nonatomic) BOOL userChangedItemsDuringPlayback;
@property (readonly, nonatomic) float userRating;
@property (nonatomic) BOOL userSkippedPlayback;
@property (readonly, nonatomic) BOOL usesSubscriptionLease;

+ (id)URLFromPath:(id)arg1;
+ (void)applyVolumeNormalizationForQueuedItems:(id)arg1;
+ (long long)defaultScaleMode;
+ (void)setDefaultScaleMode:(long long)arg1;
- (void).cxx_destruct;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_captionAppearanceSettingsChanged;
- (void)_checkAllowsBlockingDurationCall;
- (void)_clearAsset;
- (void)_currentPlaybackRateDidChange:(float)arg1;
- (double)_durationFromExternalMetadataIfAvailable;
- (double)_durationInSeconds;
- (long long)_expectedPlaybackMode;
- (void)_handleUpdatedLikedState:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_imageChapterTrackIDsForAsset:(id)arg1;
- (id)_initialPlaybackStartTimeForPlaybackInfo:(id)arg1;
- (void)_internalLikedStateDidChangeNotification:(id)arg1;
- (void)_itemAttributeAvailableKey:(id)arg1;
- (void)_likedStateDidChange;
- (void)_loadAssetAndPlayerItem;
- (void)_loadAssetProperties;
- (void)_loadMediaItemWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_loadTimeMarkersAsync;
- (void)_loadTimeMarkersBlocking;
- (long long)_persistedLikedState;
- (double)_playableDurationForLoadedTimeRanges:(id)arg1;
- (void)_playerItemNewAccessLogEntryNotification:(id)arg1;
- (void)_realoadEmbeddedTimeMarkers;
- (void)_releaseAllTimeMarkers;
- (id)_seekableTimeRanges;
- (void)_setListeningForCaptionsAppearanceSettingsChanged:(BOOL)arg1;
- (void)_setNeedsPersistedLikedStateUpdate;
- (id)_timeMarkerFromMarkers:(id)arg1 forTime:(double)arg2;
- (void)_updateSoundCheckVolumeNormalizationForPlayerItem;
- (void)_willBecomeActivePlayerItem;
- (void)_willResignActivePlayerItem;
- (unsigned long long)alternatesCountForTypes:(unsigned long long)arg1;
- (void)applyVolumeNormalizationWithSoundCheckEnabled:(BOOL)arg1;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (id)artworkTimeMarkerForTime:(double)arg1;
- (CDUnknownBlockType)blockForDirectAVControllerNotificationReferencingItem:(id)arg1;
- (id)chapterTimeMarkerForTime:(double)arg1;
- (id)closedCaptionTimeMarkerForTime:(double)arg1;
- (void)dealloc;
- (double)durationInSeconds;
- (void)flushNowPlayingCaches;
- (BOOL)hasAlternatesForTypes:(unsigned long long)arg1;
- (BOOL)hasDataForItemArtwork;
- (id)inBandAlternateTextTracks;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (id)initWithPlayerItem:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (BOOL)isAssetURLValid;
- (BOOL)isSupportedDefaultPlaybackSpeed:(long long)arg1;
- (BOOL)isValidPlayerSubstituteForItem:(id)arg1;
- (void)loadAssetAndPlayerItem;
- (id)localeForAssetTrack:(id)arg1;
- (id)localizedAttributedPositionInPlaylistStringWithRegularTextAttributes:(id)arg1 emphasizedTextAttributes:(id)arg2;
- (void)notePlaybackFinishedByHittingEnd;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)path;
- (float)playbackRateForLevel:(unsigned long long)arg1 direction:(long long)arg2 paused:(BOOL)arg3;
- (void)prepareForRate:(float)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reevaluatePlaybackMode;
- (void)reevaluateType;
- (void)replaceOutOfBandAlternateTextTracksWithArray:(id)arg1;
- (void)replacePlayerItemWithPlayerItem:(id)arg1;
- (void)resetBookkeeping;
- (float)scanIntervalForLevel:(unsigned long long)arg1 paused:(BOOL)arg2;
- (void)setAlternateAudioTrackID:(int)arg1;
- (void)setAlternateAudioTrackLocale:(id)arg1;
- (void)setOverrideDuration:(double)arg1;
- (void)setPlaybackCheckpointCurrentTime:(double)arg1;
- (void)setPlaybackFinishedTime:(double)arg1;
- (void)setPlaybackStoppedTime:(double)arg1;
- (void)setRating:(float)arg1;
- (void)setSubtitleTrackID:(int)arg1;
- (void)setupEQPresetWithDefaultPreset:(long long)arg1;
- (void)setupPlaybackInfo;
- (int)subtitleTrackID;
- (id)titlesForTime:(double)arg1;
- (id)url;
- (id)urlTimeMarkerForTime:(double)arg1;

@end

