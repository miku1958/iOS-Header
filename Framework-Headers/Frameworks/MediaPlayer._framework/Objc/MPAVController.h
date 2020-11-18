//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/AVAudioSessionDelegateMediaPlayerOnly-Protocol.h>
#import <MediaPlayer/ICEnvironmentMonitorObserver-Protocol.h>
#import <MediaPlayer/MPAVPlaylistManagerDelegate-Protocol.h>
#import <MediaPlayer/MPAVRoutingControllerDelegate-Protocol.h>

@class AVAudioSessionMediaPlayerOnly, AVPictureInPictureController, AVPlayerLayer, MPAVItem, MPAVPlaylistManager, MPAVPolicyEnforcer, MPAVQueueCoordinator, MPAVRoute, MPAVRoutingController, MPMediaItem, MPMediaQuery, MPQueueFeeder, MPQueuePlayer, MPVideoView, NSArray, NSDate, NSMapTable, NSMutableArray, NSMutableSet, NSNotification, NSString;
@protocol OS_dispatch_source;

@interface MPAVController : NSObject <AVAudioSessionDelegateMediaPlayerOnly, ICEnvironmentMonitorObserver, MPAVPlaylistManagerDelegate, MPAVRoutingControllerDelegate>
{
    BOOL _currentItemStartedAsCloudItem;
    BOOL _currentItemHasFinishedDownloading;
    BOOL _didResolveError;
    BOOL _disableAirPlayMirroringDuringPlayback;
    NSDate *_itemDidChangeDate;
    BOOL _shouldPreventStateChangesForRateChange;
    unsigned long long _stallBackgroundTaskIdentifier;
    BOOL _usesAudioOnlyModeForExternalPlayback;
    MPAVPlaylistManager *_playlistManager;
    long long _playbackMode;
    BOOL _valid;
    BOOL _allowsItemErrorResolution;
    MPAVRoutingController *_routingController;
    MPAVRoute *_pickedRoute;
    AVPlayerLayer *_videoLayer;
    unsigned long long _videoLayerUsageCount;
    MPVideoView *_videoView;
    id _periodicTimeObserverToken;
    unsigned long long _tickTimerEnabled;
    struct __CFRunLoopTimer *_tickTimer;
    double _tickInterval;
    struct __CFRunLoopTimer *_currentItemBookkeepingTimer;
    long long _indexChangeDirection;
    unsigned long long _itemIndexAtDeath;
    long long _lastDisconnectReason;
    double _lastKnownTimeBeforeDeath;
    double _lastPlaybackIndexChangeTime;
    double _lastSetTime;
    double _lastSetTimeChangeTime;
    unsigned int _hasDelayedCurrentTimeToSet:1;
    unsigned int _forceDelayedCurrentTimeToSet:1;
    double _delayedCurrentTimeToSet;
    CDStruct_1b6d18a9 _pendingCurrentTime;
    long long _delayedCurrentTimeOptions;
    unsigned long long _lastSetTimeMarker;
    double _temporaryChapterTime;
    unsigned int _autoPlayWhenLikelyToKeepUp:1;
    unsigned int _autoplayDisabledForCurrentItem:1;
    BOOL _autoPlayBackgroundTaskAssertionEnabled;
    long long _autoPlayBackgroundTaskCount;
    BOOL _appHasBeenSuspended;
    unsigned long long _autoPlayBackgroundTaskIdentifier;
    NSObject<OS_dispatch_source> *_autoPlayTimeoutSource;
    double _nextFadeOutDuration;
    BOOL _hasPendingRate;
    BOOL _hasSentTracePlaybackStartDidFinish;
    MPAVItem *_pendingRateItem;
    float _pendingRate;
    BOOL _pendingChangeForScanning;
    id _boundaryTimeObserver;
    NSArray *_boundaryTimes;
    unsigned long long _boundaryTimeIndexLastPosted;
    NSMutableArray *_observerInfos;
    NSMapTable *_observerInfoToCoreMediaObserver;
    float _rateBeforeSeek;
    float _inflightSeekRate;
    unsigned long long _scanLevel;
    long long _scanDirection;
    long long _resetRateAfterSeekingUpdateDisabled;
    long long _seeklessState;
    unsigned int _isSeekingOrScrubbing:1;
    unsigned int _resetRateAfterSeeking:1;
    unsigned int _activeRewindHoldingAtStart:1;
    double _lastSeekableEnd;
    double _whenSawSeekableEnd;
    double _maxSeekableFwd;
    double _seekFwdSlop;
    double _lastSeekableStart;
    double _whenSawSeekableStart;
    double _maxSeekableRev;
    double _seekRevSlop;
    unsigned int _canSeekRev:1;
    unsigned int _canSeekFwd:1;
    unsigned int _alwaysPlayWheneverPossible:1;
    unsigned int _stopAtEnd:1;
    unsigned int _didReachEnd:1;
    unsigned int _pausedDuringInterruption:1;
    unsigned int _resumePlaybackWhenActive:1;
    unsigned int _useApplicationAudioSession:1;
    unsigned int _playInBackgroundUserDefaultEnabled:1;
    unsigned int _canPlayFastForward:1;
    unsigned int _canPlayFastReverse:1;
    unsigned int _shouldAutoclearDisplayOverride:1;
    long long _state;
    long long _displayOverridePlaybackState;
    unsigned long long _bufferingState;
    NSNotification *_delayedPlaybackStateNotification;
    NSObject<OS_dispatch_source> *_stallTimerSource;
    BOOL _hasProvidedAudibleLikelyToKeepUp;
    BOOL _hasProvidedAudiblePlay;
    double _itemInitialBookmarkTime;
    float _rateBeforeResignActive;
    long long _ubiquitousBookkeepingDisabledCount;
    double _secondsSinceUbiquitousCheckpoint;
    Class _videoViewClass;
    double _lastInterruptionEnd;
    BOOL _shouldEnforceHDCP;
    NSMutableSet *_clientsWantingExternalPlayback;
    long long _currentItemRevisionID;
    unsigned long long _numberOfErrorsSinceLastPlay;
    BOOL _shouldResetQueueWhenReachingEnd;
    BOOL _muted;
    BOOL _limitsBandwidthForCellularAccess;
    BOOL _useAirPlayMusicMode;
    BOOL _managesAirPlayBehaviors;
    BOOL _wantsPictureInPicture;
    BOOL _automaticallyHidesVideoLayersForMusicVideosWhenApplicationBackgrounds;
    MPAVPolicyEnforcer *_policyEnforcer;
    MPQueuePlayer *_queuePlayer;
    MPAVQueueCoordinator *_queueCoordinator;
    NSString *_identifier;
    AVPictureInPictureController *_pictureInPictureController;
}

@property (readonly, nonatomic) long long _displayPlaybackState;
@property (readonly, nonatomic) AVAudioSessionMediaPlayerOnly *_playerAVAudioSession;
@property (readonly, nonatomic) long long activeRepeatType;
@property (readonly, nonatomic) long long activeShuffleType;
@property (nonatomic) BOOL alwaysPlayWheneverPossible;
@property (nonatomic) BOOL autoPlayWhenLikelyToKeepUp;
@property (nonatomic) BOOL automaticallyHidesVideoLayersForMusicVideosWhenApplicationBackgrounds; // @synthesize automaticallyHidesVideoLayersForMusicVideosWhenApplicationBackgrounds=_automaticallyHidesVideoLayersForMusicVideosWhenApplicationBackgrounds;
@property (readonly, nonatomic) MPQueuePlayer *avPlayer;
@property (readonly, nonatomic) unsigned long long bufferingState; // @synthesize bufferingState=_bufferingState;
@property (readonly, nonatomic) MPAVItem *currentItem;
@property (readonly, nonatomic, getter=isCurrentItemReady) BOOL currentItemReady;
@property (readonly, nonatomic) MPMediaItem *currentMediaItem;
@property (readonly, nonatomic) MPMediaQuery *currentMediaQuery;
@property (nonatomic) double currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=destinationIsTVOut, setter=setDestinationIsTVOut:) BOOL destinationIsTVOut;
@property (nonatomic) BOOL disableAirPlayMirroringDuringPlayback;
@property (nonatomic) long long displayOverridePlaybackState; // @synthesize displayOverridePlaybackState=_displayOverridePlaybackState;
@property (readonly, nonatomic) double durationOfCurrentItemIfAvailable;
@property (readonly, nonatomic, getter=isExternalPlaybackActive) BOOL externalPlaybackActive;
@property (readonly, nonatomic) long long externalPlaybackType;
@property (copy, nonatomic) NSString *externalPlaybackVideoGravity;
@property (readonly, nonatomic) MPQueueFeeder *feeder;
@property (readonly, nonatomic) BOOL hasVolumeControl;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) BOOL limitsBandwidthForCellularAccess; // @synthesize limitsBandwidthForCellularAccess=_limitsBandwidthForCellularAccess;
@property (nonatomic) BOOL managesAirPlayBehaviors; // @synthesize managesAirPlayBehaviors=_managesAirPlayBehaviors;
@property (readonly, nonatomic) BOOL muted; // @synthesize muted=_muted;
@property (nonatomic) double nextFadeOutDuration; // @synthesize nextFadeOutDuration=_nextFadeOutDuration;
@property (readonly, nonatomic) AVPictureInPictureController *pictureInPictureController; // @synthesize pictureInPictureController=_pictureInPictureController;
@property (readonly, nonatomic) double playableDurationOfCurrentItemIfAvailable;
@property (nonatomic) long long playbackMode; // @synthesize playbackMode=_playbackMode;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (strong, nonatomic, getter=_playlistManager) MPAVPlaylistManager *playlistManager; // @synthesize playlistManager=_playlistManager;
@property (strong, nonatomic) MPAVPolicyEnforcer *policyEnforcer; // @synthesize policyEnforcer=_policyEnforcer;
@property (strong, nonatomic) MPAVQueueCoordinator *queueCoordinator; // @synthesize queueCoordinator=_queueCoordinator;
@property (strong, nonatomic) MPQueuePlayer *queuePlayer; // @synthesize queuePlayer=_queuePlayer;
@property (readonly, nonatomic) float rate;
@property (nonatomic) long long repeatType;
@property (readonly, nonatomic) MPAVRoutingController *routingController;
@property (readonly, nonatomic) BOOL shouldDisplayAsPlaying;
@property (nonatomic) BOOL shouldEnforceHDCP; // @synthesize shouldEnforceHDCP=_shouldEnforceHDCP;
@property (nonatomic) BOOL shouldResetQueueWhenReachingEnd; // @synthesize shouldResetQueueWhenReachingEnd=_shouldResetQueueWhenReachingEnd;
@property (readonly, nonatomic) BOOL showPlaybackStateOverlaysOnTVOut;
@property (nonatomic) long long shuffleType;
@property (nonatomic) long long state; // @synthesize state=_state;
@property (nonatomic) BOOL stopAtEnd;
@property (readonly) Class superclass;
@property (nonatomic) BOOL ubiquitousBookkeepingEnabled;
@property (nonatomic) BOOL useAirPlayMusicMode; // @synthesize useAirPlayMusicMode=_useAirPlayMusicMode;
@property (nonatomic) BOOL useApplicationAudioSession;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) AVPlayerLayer *videoLayer;
@property (readonly, nonatomic) MPVideoView *videoView;
@property (nonatomic) float volume;
@property (nonatomic) BOOL wantsPictureInPicture; // @synthesize wantsPictureInPicture=_wantsPictureInPicture;

+ (id)_itemKeysToObserve;
+ (id)_playerKeysToObserve;
+ (BOOL)automaticallyNotifiesObserversOfPlaylistManager;
+ (void)initialize;
+ (BOOL)isNetworkSupportedPath:(id)arg1;
+ (id)keyPathsForValuesAffectingCurrentItem;
+ (BOOL)outputSupportsAC3;
+ (Class)playlistManagerClass;
+ (BOOL)prefersApplicationAudioSession;
- (void).cxx_destruct;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationDidRemoveDeactivationReason:(id)arg1;
- (void)_applicationWillAddDeactivationReason:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applyAirPlayMusicMode;
- (void)_applyAirPlayMusicModeForItem:(id)arg1 shouldIgnorePlaybackQueueTransactions:(BOOL)arg2;
- (void)_applyCellularAccessSettings;
- (void)_attemptAutoPlay;
- (void)_audioSessionMediaServicesWereResetNotification:(id)arg1;
- (void)_canPlayFastForwardDidChange:(id)arg1;
- (void)_canPlayFastReverseDidChange:(id)arg1;
- (BOOL)_canPlayItem:(id)arg1;
- (void)_cancelStallTimer;
- (void)_cancelUpdateCurrentItemBookkeepingTimer;
- (BOOL)_changeChapterTimeMarkerIndexBy:(long long)arg1;
- (void)_checkForBoundaryTimeCrossing;
- (void)_clearLastSetTimeIfPlayerTimeIsValid;
- (void)_clearResetRateAfterSeeking;
- (void)_clearSeekingIntervalsForStreaming;
- (void)_clearVideoLayer:(BOOL)arg1;
- (void)_configureAVPlaylistManager;
- (void)_configureAudioSession;
- (void)_configureUpdateCurrentItemBookkeepingTimer;
- (void)_connectAVPlayer;
- (void)_contentsChanged;
- (unsigned long long)_currentIndexInBoundaryCMTimes:(id)arg1;
- (double)_currentTimeWithPreloadedPlayerTime:(BOOL)arg1 value:(CDStruct_1b6d18a9)arg2;
- (void)_delayedPlaybackIndexChange;
- (void)_delayedPostPlaybackStateChangedNotification;
- (void)_delayedSetCurrentTime;
- (void)_delayedUpdateScanningRate;
- (void)_delayedUpdateTimeMarker;
- (void)_delegateAuthorizationForItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_disconnectAVPlayerWithReason:(long long)arg1;
- (void)_durationDidChange:(id)arg1;
- (void)_endSeekAndChangeRate:(BOOL)arg1;
- (id)_expectedAssetTypesForPlaybackMode:(long long)arg1;
- (id)_extractImageFromMetadata:(id)arg1;
- (void)_firstVideoFrameDisplayed:(id)arg1;
- (void)_handlePlaybackErrorResolutionType:(long long)arg1 forItem:(id)arg2 playbackError:(id)arg3 resolutionError:(id)arg4;
- (BOOL)_hasEnoughDataToPlay;
- (BOOL)_hasValidPlayerTime;
- (void)_isExternalPlaybackActiveDidChange:(id)arg1;
- (BOOL)_isVideoLayerAttachedToPlayer;
- (BOOL)_isVideosOrTVApp;
- (void)_itemAssetIsLoadedNotification:(id)arg1;
- (void)_itemBookmarkTimeDidChangeNotification:(id)arg1;
- (void)_itemDidChange:(id)arg1;
- (void)_itemFailedToPlayToEnd:(id)arg1;
- (void)_itemFailedToPlayToEndNotification:(id)arg1;
- (void)_itemHasFinishedDownloadingDidChangeNotification:(id)arg1;
- (void)_itemPlaybackDidEndNotification:(id)arg1;
- (void)_itemPlaybackModeAvailableNotification:(id)arg1;
- (void)_itemReadyToPlay:(id)arg1;
- (void)_itemSecureKeyDeliverDidFinishNotification:(id)arg1;
- (void)_itemShouldPreventPlaybackDidChangeNotification:(id)arg1;
- (void)_itemTimeMarkersAvailableNotification:(id)arg1;
- (void)_itemTypeAvailableNotification:(id)arg1;
- (void)_itemWillChange:(id)arg1;
- (void)_networkChangedNotification:(id)arg1;
- (void)_pauseBookkeepingTimer;
- (void)_pausePlaybackIfNecessary;
- (void)_pausePlaybackIfNecessaryIgnoringVideoLayerAttachment:(BOOL)arg1;
- (void)_pauseTickTimer;
- (void)_pauseWithFadeout:(float)arg1 forScanning:(BOOL)arg2;
- (id)_pickedRoute;
- (void)_playWithOptions:(unsigned long long)arg1 allowsEnablingAutoPlay:(BOOL)arg2;
- (void)_playbackFailedWithError:(id)arg1 canResolve:(BOOL)arg2;
- (id)_playerFailedToQueueNotification:(id)arg1;
- (void)_postMPAVControllerItemReadyToPlayNotificationWithItem:(id)arg1;
- (void)_postMPAVControllerSizeDidChangeNotificationWithItem:(id)arg1;
- (void)_postPlaybackStateChangedNotificationWithOriginalState:(long long)arg1 newState:(long long)arg2 delayable:(BOOL)arg3;
- (void)_prepareToPlayItem:(id)arg1;
- (void)_rateDidChange:(id)arg1;
- (void)_readyForDisplayDidChange:(id)arg1;
- (void)_registerForAVItemNotifications:(id)arg1;
- (void)_registerForPlaylistManager:(id)arg1;
- (void)_reloadTimeMarkerObservationsForItem:(id)arg1;
- (void)_resetInternalState;
- (void)_resumeBookkeepingTimer;
- (void)_resumePlaybackIfNecessary;
- (void)_resumeTickTimer;
- (void)_scheduleUpdateCurrentItemBookkeepingTimer;
- (long long)_seeklessStateForState:(long long)arg1;
- (void)_sendTracePlaybackStartDidFinishIfNeededForItem:(id)arg1;
- (void)_serverConnectionDidDie:(id)arg1;
- (void)_setActionAtEndAttributeForState:(long long)arg1;
- (void)_setAllowsItemErrorResolution:(BOOL)arg1;
- (void)_setAutoPlayBackgroundTaskAssertionEnabled:(BOOL)arg1;
- (void)_setBufferingState:(unsigned long long)arg1;
- (void)_setLastSetTime:(double)arg1;
- (BOOL)_setRate:(float)arg1 forScanning:(BOOL)arg2;
- (BOOL)_setRate:(float)arg1 forScanning:(BOOL)arg2 withItem:(id)arg3;
- (void)_setState:(long long)arg1;
- (void)_setValid:(BOOL)arg1;
- (void)_setVideoLayerAttachedToPlayer:(BOOL)arg1 force:(BOOL)arg2 pauseIfNecessary:(BOOL)arg3;
- (void)_setVideoLayersEnabledForCurrentPlayerItemIfNeeded:(BOOL)arg1;
- (BOOL)_shouldProvideAudiblePlaybackPerformance;
- (BOOL)_showsPlayingWhenInState:(long long)arg1;
- (void)_sizeDidChange:(id)arg1;
- (void)_streamBufferFull:(id)arg1;
- (void)_streamLikelyToKeepUp:(id)arg1;
- (void)_streamLimitExceeded:(long long)arg1;
- (void)_streamRanDry:(id)arg1;
- (void)_streamUnlikelyToKeepUp:(id)arg1;
- (void)_timeHasJumpedNotification:(id)arg1;
- (void)_timedMetadataDidChange:(id)arg1;
- (void)_tracksDidChange:(id)arg1;
- (void)_unregisterForAVItemNotifications:(id)arg1;
- (void)_unregisterForPlayer:(id)arg1;
- (void)_unregisterForPlaylistManager:(id)arg1;
- (void)_updateCurrentItemBookkeepingForTimerCallback;
- (void)_updateCurrentItemBookkeepingMarkedAsCheckpoint:(BOOL)arg1;
- (void)_updateCurrentItemDurationSnapshotWithPlayerTime:(CDStruct_1b6d18a9)arg1;
- (void)_updateCurrentItemHasFinishedDownloading;
- (void)_updateLastSetTimeForCurrentItemIfNeeded;
- (void)_updatePlaybackModeForItem:(id)arg1;
- (void)_updateProgress:(struct __CFRunLoopTimer *)arg1;
- (void)_updateScanningRate;
- (void)_updateSeekingIntervalsForStreaming;
- (void)_updateStateForPlaybackPrevention;
- (void)_updateTypeForItem:(id)arg1;
- (void)_verifyDisplayProtection;
- (void)_verifyShouldContinuePlayback;
- (void)_volumeDidChangeNotification:(id)arg1;
- (id)addPeriodicTimeObserverForInterval:(double)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)airPlayFailedRentalDownloadRequired;
- (void)airPlayVideoEnded;
- (BOOL)allowsExternalPlayback;
- (void)applyRepeatSettings;
- (void)applyShuffleSettings;
- (void)autoclearDisplayOverride;
- (BOOL)becomeActiveWithError:(id *)arg1;
- (void)beginInterruption;
- (void)beginSeek:(int)arg1;
- (void)beginTickTimerWithInterval:(double)arg1;
- (void)beginUsingVideoLayer;
- (BOOL)canPlayFastReverse;
- (BOOL)canSeekBackwards;
- (BOOL)canSeekForwards;
- (BOOL)canSkipToSeekableEnd;
- (void)changePlaybackIndexBy:(long long)arg1;
- (void)changePlaybackIndexBy:(long long)arg1 deltaType:(long long)arg2;
- (void)changePlaybackIndexBy:(long long)arg1 deltaType:(long long)arg2 ignoreElapsedTime:(BOOL)arg3;
- (void)changePlaybackIndexBy:(long long)arg1 deltaType:(long long)arg2 ignoreElapsedTime:(BOOL)arg3 allowSkippingUnskippableContent:(BOOL)arg4;
- (BOOL)changePlaybackIndexBy:(long long)arg1 deltaType:(long long)arg2 ignoreElapsedTime:(BOOL)arg3 allowSkippingUnskippableContent:(BOOL)arg4 error:(id *)arg5;
- (double)currentTimeForBookmarking;
- (void)dealloc;
- (void)disableAutoplayForCurrentItem;
- (id)embeddedDataTimesForItem:(id)arg1;
- (void)enableAutoplayForCurrentItem;
- (void)endInterruptionFromInterruptor:(id)arg1 category:(id)arg2 flags:(unsigned long long)arg3;
- (void)endPlayback;
- (void)endSeek;
- (void)endTickTimer;
- (void)endUsingVideoLayer;
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;
- (void)finalizeBookkeepingNow;
- (BOOL)forceRestartPlaybackIfNecessary;
- (id)init;
- (BOOL)isLiveStreaming;
- (BOOL)isSeekingOrScrubbing;
- (BOOL)isTickTimerEnabled;
- (void)notifyAVPlayerItemDidChange:(id)arg1;
- (void)notifyAVPlayerItemWillChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pause;
- (void)pauseWithFadeout:(float)arg1;
- (void)play;
- (void)playItemAtIndex:(unsigned long long)arg1 withOptions:(unsigned long long)arg2;
- (void)playWithOptions:(unsigned long long)arg1;
- (void)playlistManager:(id)arg1 didFailLoadingAllItemsForQueueFeeder:(id)arg2;
- (void)playlistManager:(id)arg1 didTransitionToPlaylistFeeder:(id)arg2;
- (void)playlistManager:(id)arg1 queueCoordinator:(id)arg2 willInsertItem:(id)arg3 afterItem:(id)arg4;
- (id)preferredLanguages;
- (void)reloadWithPlaybackContext:(id)arg1;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeTimeObserver:(id)arg1;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)routingControllerDidPauseFromActiveRouteChange:(id)arg1;
- (void)routingControllerExternalScreenTypeDidChange:(id)arg1;
- (void)setActive:(BOOL)arg1;
- (void)setAutoclearingDisplayOverridePlaybackState:(long long)arg1;
- (void)setClient:(id)arg1 wantsToAllowExternalPlayback:(BOOL)arg2;
- (void)setClient:(id)arg1 wantsToAllowExternalPlayback:(BOOL)arg2 shouldIgnorePlaybackQueueTransactions:(BOOL)arg3;
- (void)setCurrentTime:(double)arg1 options:(long long)arg2;
- (void)setDisableAirPlayMirroringDuringPlayback:(BOOL)arg1 shouldIgnorePlaybackQueueTransactions:(BOOL)arg2;
- (void)setPlaybackIndex:(long long)arg1;
- (void)setPlaybackIndex:(long long)arg1 selectionDirection:(long long)arg2;
- (BOOL)setRate:(float)arg1;
- (void)setRateForScanning:(float)arg1;
- (void)setUsesAudioOnlyModeForExternalPlayback:(BOOL)arg1;
- (void)setUsesAudioOnlyModeForExternalPlayback:(BOOL)arg1 shouldIgnorePlaybackQueueTransactions:(BOOL)arg2;
- (BOOL)shouldHaveNoActionAtEndForState:(long long)arg1;
- (void)skipToSeekableEnd;
- (void)skipToSeekableStart;
- (void)tickTimerFired;
- (double)timeOfPlayableEnd;
- (double)timeOfPlayableStart;
- (double)timeOfSeekableEnd;
- (double)timeOfSeekableStart;
- (void)togglePlayback;
- (void)togglePlaybackWithOptions:(unsigned long long)arg1;
- (void)updateBookkeepingNow;

@end

