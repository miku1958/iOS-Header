//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

@class AVPlayer, AVValueTiming, NSArray, NSDictionary, NSError, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AVPlayerController : UIResponder
{
    BOOL _jKeyDown;
    BOOL _kKeyDown;
    BOOL _lKeyDown;
    NSArray *_audioMediaSelectionOptions;
    NSArray *_legibleMediaSelectionOptions;
    float _rate;
    BOOL _isResumed;
    NSObject<OS_dispatch_source> *_seekTimer;
    double _timeOfLastUpdate;
    NSObject<OS_dispatch_queue> *_seekQueue;
    BOOL _ignoreRateKeyValueChange;
    id _updateTimingPeriodicObserverToken;
    id _updateAtMinMaxTimePeriodicObserverToken;
    id _playerItemTimeJumpedObserver;
    id _playerItemDidPlayToEndTimeObserver;
    id _audioSessionInterruptionObserver;
    id _currentLocaleDidChangeObserver;
    BOOL _audioSessionInterrupted;
    BOOL _pictureInPictureInterrupted;
    float _rateBeforeInterruption;
    BOOL _isPictureInPictureSupported;
    BOOL _looping;
    long long _actionAtItemEnd;
    BOOL _pendingSeek;
    CDStruct_1b6d18a9 _toleranceBefore;
    CDStruct_1b6d18a9 _toleranceAfter;
    BOOL _isScanningForward;
    BOOL _isScanningBackward;
    unsigned long long _scanningCount;
    double _preScanningRate;
    BOOL _shouldPlayWhenLikelyToKeepUp;
    BOOL _forceScanning;
    double _rateBeforeForceScanning;
    BOOL _hasDiscoveredVideo;
    BOOL _needsUpdateHasDiscoveredVideo;
    id _deviceBatteryStateDidChangeObserver;
    BOOL _deviceBatteryMonitoringWasEnabled;
    BOOL _playingOnSecondScreen;
    BOOL _atMaxTime;
    BOOL _atMinTime;
    BOOL _scrubbing;
    BOOL _seekingInternal;
    BOOL _seeking;
    BOOL _composable;
    BOOL _hasProtectedContent;
    BOOL _compatibleWithAirPlayVideo;
    BOOL _preventingIdleSystemSleep;
    BOOL _preventingIdleDisplaySleep;
    BOOL _disablingAutomaticTermination;
    BOOL _deviceBatteryChargingOrFull;
    AVPlayer *_player;
    AVValueTiming *_timing;
    double _seekToTime;
    NSDictionary *_metadata;
    NSArray *_contentChapters;
    NSArray *_availableMetadataFormats;
    double _rateBeforeScrubBegan;
    CDStruct_1b6d18a9 _seekToTimeInternal;
}

@property (nonatomic) BOOL CALayerDestinationIsTVOut;
@property (nonatomic, getter=isAtMaxTime) BOOL atMaxTime; // @synthesize atMaxTime=_atMaxTime;
@property (nonatomic, getter=isAtMinTime) BOOL atMinTime; // @synthesize atMinTime=_atMinTime;
@property (strong, nonatomic) NSArray *availableMetadataFormats; // @synthesize availableMetadataFormats=_availableMetadataFormats;
@property (nonatomic, getter=isCompatibleWithAirPlayVideo) BOOL compatibleWithAirPlayVideo; // @synthesize compatibleWithAirPlayVideo=_compatibleWithAirPlayVideo;
@property (nonatomic, getter=isComposable) BOOL composable; // @synthesize composable=_composable;
@property (strong, nonatomic) NSArray *contentChapters; // @synthesize contentChapters=_contentChapters;
@property (nonatomic, getter=isDeviceBatteryChargingOrFull) BOOL deviceBatteryChargingOrFull; // @synthesize deviceBatteryChargingOrFull=_deviceBatteryChargingOrFull;
@property (nonatomic, getter=isDisablingAutomaticTermination) BOOL disablingAutomaticTermination; // @synthesize disablingAutomaticTermination=_disablingAutomaticTermination;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL hasDiscoveredVideo;
@property (nonatomic) BOOL hasProtectedContent; // @synthesize hasProtectedContent=_hasProtectedContent;
@property (strong, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property (readonly, nonatomic) float nominalFrameRate;
@property (strong, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property (nonatomic, getter=isPlayingOnSecondScreen) BOOL playingOnSecondScreen;
@property (nonatomic, getter=isPreventingIdleDisplaySleep) BOOL preventingIdleDisplaySleep; // @synthesize preventingIdleDisplaySleep=_preventingIdleDisplaySleep;
@property (nonatomic, getter=isPreventingIdleSystemSleep) BOOL preventingIdleSystemSleep; // @synthesize preventingIdleSystemSleep=_preventingIdleSystemSleep;
@property (nonatomic) double rateBeforeScrubBegan; // @synthesize rateBeforeScrubBegan=_rateBeforeScrubBegan;
@property (nonatomic, getter=isScrubbing) BOOL scrubbing; // @synthesize scrubbing=_scrubbing;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *seekTimer;
@property (nonatomic) double seekToTime; // @synthesize seekToTime=_seekToTime;
@property CDStruct_1b6d18a9 seekToTimeInternal; // @synthesize seekToTimeInternal=_seekToTimeInternal;
@property (nonatomic, getter=isSeeking) BOOL seeking; // @synthesize seeking=_seeking;
@property (getter=isSeekingInternal) BOOL seekingInternal; // @synthesize seekingInternal=_seekingInternal;
@property (readonly, nonatomic) BOOL shouldPreventIdleDisplaySleep;
@property (readonly, nonatomic) long long status;
@property (strong, nonatomic) AVValueTiming *timing; // @synthesize timing=_timing;

+ (void)initialize;
+ (id)keyPathsForValuesAffectingAllowsExternalPlayback;
+ (id)keyPathsForValuesAffectingCanPause;
+ (id)keyPathsForValuesAffectingCanPlay;
+ (id)keyPathsForValuesAffectingCanScanBackward;
+ (id)keyPathsForValuesAffectingCanScanForward;
+ (id)keyPathsForValuesAffectingCanSeek;
+ (id)keyPathsForValuesAffectingCanSeekChapterBackward;
+ (id)keyPathsForValuesAffectingCanSeekChapterForward;
+ (id)keyPathsForValuesAffectingCanSeekFrameBackward;
+ (id)keyPathsForValuesAffectingCanSeekFrameForward;
+ (id)keyPathsForValuesAffectingCanSeekToBeginning;
+ (id)keyPathsForValuesAffectingCanSeekToEnd;
+ (id)keyPathsForValuesAffectingCanTogglePlayback;
+ (id)keyPathsForValuesAffectingCompletelySeekable;
+ (id)keyPathsForValuesAffectingContentDimensions;
+ (id)keyPathsForValuesAffectingContentDuration;
+ (id)keyPathsForValuesAffectingContentDurationWithinEndTimes;
+ (id)keyPathsForValuesAffectingCurrentTime;
+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingError;
+ (id)keyPathsForValuesAffectingExternalPlaybackActive;
+ (id)keyPathsForValuesAffectingExternalPlaybackAirPlayDeviceLocalizedName;
+ (id)keyPathsForValuesAffectingExternalPlaybackType;
+ (id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasContent;
+ (id)keyPathsForValuesAffectingHasContentChapters;
+ (id)keyPathsForValuesAffectingHasEnabledAudio;
+ (id)keyPathsForValuesAffectingHasEnabledVideo;
+ (id)keyPathsForValuesAffectingHasLegibleMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasLiveStreamingContent;
+ (id)keyPathsForValuesAffectingHasMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasShareableContent;
+ (id)keyPathsForValuesAffectingHasTrimmableContent;
+ (id)keyPathsForValuesAffectingLoadedTimeRanges;
+ (id)keyPathsForValuesAffectingMaxTime;
+ (id)keyPathsForValuesAffectingMinTime;
+ (id)keyPathsForValuesAffectingPictureInPicturePossible;
+ (id)keyPathsForValuesAffectingPlaying;
+ (id)keyPathsForValuesAffectingPlayingOnExternalScreen;
+ (id)keyPathsForValuesAffectingRate;
+ (id)keyPathsForValuesAffectingSeekableTimeRanges;
+ (id)keyPathsForValuesAffectingShouldPreventIdleDisplaySleep;
+ (id)keyPathsForValuesAffectingStatus;
- (void).cxx_destruct;
- (void)_attemptToResumePlaybackAfterInterruption;
- (void)_disableLegibleMediaSelectionOptions:(id)arg1;
- (void)_enableAutoMediaSelection:(id)arg1;
- (BOOL)_isMarkedNotSerializablePlayerItem:(id)arg1;
- (BOOL)_isRestrictedFromSavingPlayerItem:(id)arg1;
- (id)_queuePlayer;
- (id)_selectedMediaOptionWithMediaCharacteristic:(id)arg1;
- (void)_setMediaOption:(id)arg1 mediaCharacteristic:(id)arg2;
- (void)_setNeedsUpdateHasDiscoveredVideo;
- (void)_updateHasDiscoveredVideoIfNeeded;
- (void)_updateScanningBackwardRate;
- (void)_updateScanningForwardRate;
- (void)actuallySeekToTime;
- (BOOL)allowsExternalPlayback;
- (id)audioMediaSelectionOptions;
- (id)audioOptions;
- (void)autoplay:(id)arg1;
- (void)beginScanningBackward:(id)arg1;
- (void)beginScanningForward:(id)arg1;
- (void)beginScrubbing;
- (void)beginScrubbing:(id)arg1;
- (BOOL)canPause;
- (BOOL)canPlay;
- (BOOL)canScanBackward;
- (BOOL)canScanForward;
- (BOOL)canSeek;
- (BOOL)canSeekChapterBackward;
- (BOOL)canSeekChapterForward;
- (BOOL)canSeekFrameBackward;
- (BOOL)canSeekFrameForward;
- (BOOL)canSeekToBeginning;
- (BOOL)canSeekToEnd;
- (BOOL)canTogglePlayback;
- (void)changeVolumeToMaximum:(id)arg1;
- (void)changeVolumeToMinimum:(id)arg1;
- (struct CGSize)contentDimensions;
- (double)contentDuration;
- (double)contentDurationWithinEndTimes;
- (id)currentAudioMediaSelectionOption;
- (id)currentLegibleMediaSelectionOption;
- (double)currentTime;
- (double)currentTimeWithinEndTimes;
- (void)dealloc;
- (void)decreaseVolume:(id)arg1;
- (void)endScanningBackward:(id)arg1;
- (void)endScanningForward:(id)arg1;
- (void)endScrubbing;
- (void)endScrubbing:(id)arg1;
- (id)externalPlaybackAirPlayDeviceLocalizedName;
- (long long)externalPlaybackType;
- (void)gotoEndOfSeekableRanges:(id)arg1;
- (BOOL)hasAudioMediaSelectionOptions;
- (BOOL)hasContent;
- (BOOL)hasContentChapters;
- (BOOL)hasEnabledAudio;
- (BOOL)hasEnabledVideo;
- (BOOL)hasLegibleMediaSelectionOptions;
- (BOOL)hasLiveStreamingContent;
- (BOOL)hasMediaSelectionOptions;
- (BOOL)hasShareableContent;
- (BOOL)hasTrimmableContent;
- (void)increaseVolume:(id)arg1;
- (id)init;
- (id)initWithPlayer:(id)arg1;
- (BOOL)isCompletelySeekable;
- (BOOL)isExternalPlaybackActive;
- (BOOL)isLooping;
- (BOOL)isPictureInPictureInterrupted;
- (BOOL)isPictureInPicturePossible;
- (BOOL)isPlaying;
- (BOOL)isPlayingOnExternalScreen;
- (id)keyPathsForValuesAffectingCurrentAudioMediaSelectionOption;
- (id)keyPathsForValuesAffectingCurrentLegibleMediaSelectionOption;
- (id)legibleMediaSelectionOptions;
- (id)legibleOptions;
- (id)loadedTimeRanges;
- (double)maxTime;
- (id)mediaSelectionGroupForMediaCharacteristic:(id)arg1;
- (double)minTime;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pause:(id)arg1;
- (void)play:(id)arg1;
- (double)rate;
- (void)reloadAudioOptions;
- (void)reloadLegibleOptions;
- (void)reloadOptions;
- (void)scanBackward:(id)arg1;
- (void)scanForward:(id)arg1;
- (id)scanningDelays;
- (void)seekByTimeInterval:(double)arg1;
- (void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)seekChapterBackward:(id)arg1;
- (void)seekChapterForward:(id)arg1;
- (void)seekFrameBackward:(id)arg1;
- (void)seekFrameForward:(id)arg1;
- (void)seekToBeginning:(id)arg1;
- (void)seekToChapter:(id)arg1;
- (void)seekToEnd:(id)arg1;
- (void)seekToTime:(double)arg1;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (id)seekableTimeRanges;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (void)setAudioMediaSelectionOptions:(id)arg1;
- (void)setCurrentAudioMediaSelectionOption:(id)arg1;
- (void)setCurrentLegibleMediaSelectionOption:(id)arg1;
- (void)setLegibleMediaSelectionOptions:(id)arg1;
- (void)setLooping:(BOOL)arg1;
- (void)setMaxTime:(double)arg1;
- (void)setMinTime:(double)arg1;
- (void)setPictureInPictureInterrupted:(BOOL)arg1;
- (void)setPlaying:(BOOL)arg1;
- (void)setRate:(double)arg1;
- (void)setRateWithForce:(double)arg1;
- (void)setVolume:(double)arg1;
- (void)skipBackwardThirtySeconds:(id)arg1;
- (void)throttledSeekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3;
- (void)toggleMuted:(id)arg1;
- (void)togglePlayback:(id)arg1;
- (void)togglePlaybackEvenWhenInBackground:(id)arg1;
- (void)updateAtMinMaxTime;
- (void)updateTiming;
- (double)volume;

@end

