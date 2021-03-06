//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayerController, AVValueTiming, NSArray, NSString, WebAVMediaSelectionOption;

@interface WebAVPlayerController : NSObject
{
    WebAVMediaSelectionOption *_currentAudioMediaSelectionOption;
    WebAVMediaSelectionOption *_currentLegibleMediaSelectionOption;
    BOOL _pictureInPictureInterrupted;
    BOOL _muted;
    BOOL _liveStreamEventModePossible;
    BOOL _isScrubbing;
    BOOL _allowsPictureInPicture;
    BOOL _canScanBackward;
    BOOL _hasContentChapters;
    BOOL _canPlay;
    BOOL _canPause;
    BOOL _canTogglePlayback;
    BOOL _canSeek;
    BOOL _hasEnabledAudio;
    BOOL _hasEnabledVideo;
    BOOL _hasVideo;
    BOOL _playingOnSecondScreen;
    BOOL _externalPlaybackActive;
    BOOL _allowsExternalPlayback;
    AVPlayerController *_playerControllerProxy;
    struct PlaybackSessionModel *_delegate;
    struct PlaybackSessionInterfaceAVKit *_playbackSessionInterface;
    double _rate;
    double _contentDuration;
    double _contentDurationWithinEndTimes;
    NSArray *_loadedTimeRanges;
    long long _status;
    AVValueTiming *_timing;
    NSArray *_seekableTimeRanges;
    NSArray *_audioMediaSelectionOptions;
    NSArray *_legibleMediaSelectionOptions;
    long long _externalPlaybackType;
    NSString *_externalPlaybackAirPlayDeviceLocalizedName;
    double _seekableTimeRangesLastModifiedTime;
    double _liveUpdateInterval;
    AVValueTiming *_minTiming;
    AVValueTiming *_maxTiming;
    struct CGSize _contentDimensions;
}

@property BOOL allowsExternalPlayback; // @synthesize allowsExternalPlayback=_allowsExternalPlayback;
@property (strong) NSArray *audioMediaSelectionOptions; // @synthesize audioMediaSelectionOptions=_audioMediaSelectionOptions;
@property BOOL canPause; // @synthesize canPause=_canPause;
@property BOOL canPlay; // @synthesize canPlay=_canPlay;
@property BOOL canScanBackward; // @synthesize canScanBackward=_canScanBackward;
@property (readonly) BOOL canScanForward;
@property BOOL canSeek; // @synthesize canSeek=_canSeek;
@property (readonly) BOOL canSeekFrameBackward;
@property (readonly) BOOL canSeekFrameForward;
@property (readonly) BOOL canSeekToBeginning;
@property (readonly) BOOL canSeekToEnd;
@property BOOL canTogglePlayback; // @synthesize canTogglePlayback=_canTogglePlayback;
@property struct CGSize contentDimensions; // @synthesize contentDimensions=_contentDimensions;
@property double contentDuration; // @synthesize contentDuration=_contentDuration;
@property double contentDurationWithinEndTimes; // @synthesize contentDurationWithinEndTimes=_contentDurationWithinEndTimes;
@property (strong) WebAVMediaSelectionOption *currentAudioMediaSelectionOption;
@property (strong) WebAVMediaSelectionOption *currentLegibleMediaSelectionOption;
@property struct PlaybackSessionModel *delegate; // @synthesize delegate=_delegate;
@property (getter=isExternalPlaybackActive) BOOL externalPlaybackActive; // @synthesize externalPlaybackActive=_externalPlaybackActive;
@property (strong) NSString *externalPlaybackAirPlayDeviceLocalizedName; // @synthesize externalPlaybackAirPlayDeviceLocalizedName=_externalPlaybackAirPlayDeviceLocalizedName;
@property long long externalPlaybackType; // @synthesize externalPlaybackType=_externalPlaybackType;
@property (readonly) BOOL hasAudioMediaSelectionOptions;
@property (readonly) BOOL hasContentChapters; // @synthesize hasContentChapters=_hasContentChapters;
@property BOOL hasEnabledAudio; // @synthesize hasEnabledAudio=_hasEnabledAudio;
@property BOOL hasEnabledVideo; // @synthesize hasEnabledVideo=_hasEnabledVideo;
@property (readonly) BOOL hasLegibleMediaSelectionOptions;
@property (readonly) BOOL hasMediaSelectionOptions;
@property BOOL hasVideo; // @synthesize hasVideo=_hasVideo;
@property (readonly) BOOL isScrubbing;
@property (strong) NSArray *legibleMediaSelectionOptions; // @synthesize legibleMediaSelectionOptions=_legibleMediaSelectionOptions;
@property double liveUpdateInterval; // @synthesize liveUpdateInterval=_liveUpdateInterval;
@property (strong) NSArray *loadedTimeRanges; // @synthesize loadedTimeRanges=_loadedTimeRanges;
@property (readonly) double maxTime;
@property (strong, nonatomic) AVValueTiming *maxTiming; // @synthesize maxTiming=_maxTiming;
@property (readonly) double minTime;
@property (strong, nonatomic) AVValueTiming *minTiming; // @synthesize minTiming=_minTiming;
@property (getter=isMuted) BOOL muted;
@property (getter=isPictureInPictureInterrupted) BOOL pictureInPictureInterrupted;
@property (readonly, getter=isPictureInPicturePossible) BOOL pictureInPicturePossible;
@property struct PlaybackSessionInterfaceAVKit *playbackSessionInterface; // @synthesize playbackSessionInterface=_playbackSessionInterface;
@property (strong) AVPlayerController *playerControllerProxy; // @synthesize playerControllerProxy=_playerControllerProxy;
@property (getter=isPlaying) BOOL playing;
@property (readonly, getter=isPlayingOnExternalScreen) BOOL playingOnExternalScreen;
@property (nonatomic, getter=isPlayingOnSecondScreen) BOOL playingOnSecondScreen; // @synthesize playingOnSecondScreen=_playingOnSecondScreen;
@property double rate; // @synthesize rate=_rate;
@property (strong) NSArray *seekableTimeRanges; // @synthesize seekableTimeRanges=_seekableTimeRanges;
@property double seekableTimeRangesLastModifiedTime; // @synthesize seekableTimeRangesLastModifiedTime=_seekableTimeRangesLastModifiedTime;
@property long long status; // @synthesize status=_status;
@property (strong) AVValueTiming *timing; // @synthesize timing=_timing;
@property double volume;

+ (id)keyPathsForValuesAffectingCanScanForward;
+ (id)keyPathsForValuesAffectingCanSeekToBeginning;
+ (id)keyPathsForValuesAffectingCanSeekToEnd;
+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasLegibleMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasLiveStreamingContent;
+ (id)keyPathsForValuesAffectingHasMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasSeekableLiveStreamingContent;
+ (id)keyPathsForValuesAffectingMaxTime;
+ (id)keyPathsForValuesAffectingMinTime;
+ (id)keyPathsForValuesAffectingPlaying;
+ (id)keyPathsForValuesAffectingPlayingOnExternalScreen;
- (void)beginScanningBackward:(id)arg1;
- (void)beginScanningForward:(id)arg1;
- (void)beginScrubbing:(id)arg1;
- (double)currentTimeWithinEndTimes;
- (void)dealloc;
- (void)endScanningBackward:(id)arg1;
- (void)endScanningForward:(id)arg1;
- (void)endScrubbing:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)gotoEndOfSeekableRanges:(id)arg1;
- (BOOL)hasLiveStreamingContent;
- (BOOL)hasSeekableLiveStreamingContent;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pause:(id)arg1;
- (void)play:(id)arg1;
- (id)player;
- (void)seekByTimeInterval:(double)arg1;
- (void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)seekChapterBackward:(id)arg1;
- (void)seekChapterForward:(id)arg1;
- (void)seekToBeginning:(id)arg1;
- (void)seekToEnd:(id)arg1;
- (void)seekToTime:(double)arg1;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)setAllowsPictureInPicture:(BOOL)arg1;
- (void)setCurrentTimeWithinEndTimes:(double)arg1;
- (void)skipBackwardThirtySeconds:(id)arg1;
- (void)toggleMuted:(id)arg1;
- (void)togglePlayback:(id)arg1;
- (void)togglePlaybackEvenWhenInBackground:(id)arg1;
- (void)updateMinMaxTiming;
- (void)volumeChanged:(double)arg1;

@end

