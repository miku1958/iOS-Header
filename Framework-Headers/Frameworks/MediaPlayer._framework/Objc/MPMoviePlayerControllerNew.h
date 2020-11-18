//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/MPMediaPlayback-Protocol.h>
#import <MediaPlayer/MPMovieViewDelegate-Protocol.h>

@class MPAVController, MPInlineVideoController, MPMovieAccessLog, MPMovieErrorLog, MPMoviePlayerController, MPMovieView, MPNowPlayingObserver, NSArray, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UIWindow;
@protocol MPMoviePlayerControllerDelegate;

@interface MPMoviePlayerControllerNew : NSObject <MPMovieViewDelegate, MPMediaPlayback>
{
    long long _additionalButtons;
    NSMutableSet *_asyncImageGenerators;
    long long _controlStyle;
    float _currentPlaybackRate;
    id<MPMoviePlayerControllerDelegate> _delegate;
    NSDictionary *_HTTPHeaderFields;
    MPMoviePlayerController *_moviePlayer;
    NSArray *_movies;
    BOOL _moviesNeedReload;
    long long _movieSourceType;
    MPMovieView *_movieView;
    MPNowPlayingObserver *_nowPlayingObserver;
    NSError *_playbackError;
    MPAVController *_player;
    NSMutableArray *_queuedThumbnailRequests;
    long long _repeatMode;
    long long _stateBeforeSettingPlaybackTime;
    MPInlineVideoController *_videoViewController;
    unsigned long long _finishNotificationsPosted;
    BOOL _shouldAutoplay;
    BOOL _useApplicationAudioSession;
    BOOL _setUseApplicationAudioSessionWhenPlaybackEnds;
    BOOL _preparedQueue;
    BOOL _didAppear;
    BOOL _ignorePlaybackStateChanges;
    BOOL _playWhenSourceTypeIsDetermined;
    BOOL _prepareWhenSourceTypeIsDetermined;
    BOOL _isChangingMoviePath;
    BOOL _wasPlayingBeforeSuspended;
    BOOL _canPostDidFinishNotificationOnItemChange;
    BOOL _readyForDisplay;
    BOOL _shouldRestartPlaybackFromBeginning;
    BOOL _useHostedWindowWhenFullscreen;
    BOOL _shouldIgnoreItemChange;
    BOOL _willSoonEndUsingVideoLayer;
    UIWindow *_preApexSupportWindow;
    double _initialPlaybackTime;
    double _endPlaybackTime;
    NSMutableDictionary *_timedMetadataForUniqueKey;
    BOOL _isActive;
    BOOL _isResigningActive;
    BOOL _didResignActive;
    BOOL _canShowControlsOverlayBeforeResignedActive;
    double _timeWhenResignedActive;
    unsigned long long _movieIndexWhenResignedActive;
    MPMovieAccessLog *_cachedAccessLog;
    MPMovieErrorLog *_cachedErrorLog;
}

@property (nonatomic) float currentPlaybackRate;
@property (nonatomic) double currentPlaybackTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isPreparedToPlay;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_HTTPHeaderFields;
- (long long)_additionalButtons;
- (id)_advertisementView;
- (BOOL)_areControlsHidden;
- (void)_bufferingStateDidChangeNotification:(id)arg1;
- (void)_cacheAccessAndErrorLogs;
- (BOOL)_canContinuePlayingWhenLocked;
- (void)_clearPlaybackStateAfterTimeJumpIfNecessary;
- (id)_currentItem;
- (id)_delegate;
- (void)_didBecomeActiveNotification:(id)arg1;
- (BOOL)_didPostFinishNotificationForReason:(long long)arg1;
- (void)_endPlayback;
- (void)_endUsingVideoLayer;
- (void)_ensureActive;
- (void)_firstVideoFrameDisplayedNotification:(id)arg1;
- (void)_handlePlaybackEnd;
- (id)_hostedWindow;
- (unsigned int)_hostedWindowContextID;
- (void)_isExternalPlaybackActiveDidChangeNotification:(id)arg1;
- (BOOL)_isNavigationBarHidden;
- (BOOL)_isReadyForDisplay;
- (BOOL)_isTVOutEnabled;
- (void)_itemDidChangeNotification:(id)arg1;
- (void)_itemPlaybackDidEndNotification:(id)arg1;
- (void)_itemPlaybackErrorNotification:(id)arg1;
- (void)_itemReadyToPlayNotification:(id)arg1;
- (void)_movieDurationAvailableNotification:(id)arg1;
- (void)_movieNaturalSizeAvailableNotification:(id)arg1;
- (id)_movieOptions;
- (void)_moviePlayerDidBecomeActiveNotification:(id)arg1;
- (void)_moviePlayerWillBecomeActiveNotification:(id)arg1;
- (void)_movieSourceTypeAvailableNotification:(id)arg1;
- (id)_movieSubtitle;
- (id)_movieTitle;
- (void)_movieTypeAvailableNotification:(id)arg1;
- (id)_movies;
- (id)_navigationBar;
- (id)_nowPlayingMovie;
- (void)_pausePlaybackForSuspension;
- (double)_playableEndTime;
- (double)_playableStartTime;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)_postDidFinishNotificationWithReason:(long long)arg1;
- (void)_postNotificationName:(id)arg1 object:(id)arg2;
- (void)_postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)_prepareToPlayWithStartIndex:(unsigned long long)arg1;
- (void)_rateDidChangeNotification:(id)arg1;
- (void)_resignActive;
- (id)_resolvedContentURL;
- (void)_restartPlaybackFromBeginning;
- (double)_seekableEndTime;
- (double)_seekableStartTime;
- (void)_serverDiedNotification:(id)arg1;
- (void)_setAdditionalButtons:(long long)arg1;
- (void)_setControlsHidden:(BOOL)arg1;
- (void)_setControlsHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setCurrentPlaybackTime:(double)arg1 timeOption:(long long)arg2;
- (void)_setDelegate:(id)arg1;
- (void)_setDisallowsAMRAudio:(BOOL)arg1;
- (void)_setHTTPHeaderFields:(id)arg1;
- (void)_setMovieMediaTypesOverride:(unsigned long long)arg1;
- (void)_setMoviePlayer:(id)arg1;
- (void)_setMovieSubtitle:(id)arg1;
- (void)_setMovieTitle:(id)arg1;
- (void)_setMovies:(id)arg1;
- (void)_setNavigationBarHidden:(BOOL)arg1;
- (void)_setNowPlayingMovie:(id)arg1;
- (void)_setShouldEnforceHDCP:(BOOL)arg1;
- (void)_setUseApplicationAudioSession:(BOOL)arg1;
- (void)_setUseHostedWindowWhenFullscreen:(BOOL)arg1;
- (void)_setVideoViewControllerOverlayStyle;
- (BOOL)_shouldContinuePlaybackInBackground;
- (BOOL)_shouldEnforceHDCP;
- (void)_simpleRemoteNotification:(id)arg1;
- (void)_timeDidJumpNotification:(id)arg1;
- (void)_timedMetadataAvailableNotification:(id)arg1;
- (void)_timedMetadataImageAvailableNotification:(id)arg1;
- (void)_updateDisabledPartsFromDelegate;
- (BOOL)_useHostedWindowWhenFullscreen;
- (id)_videoView;
- (id)_videoViewController;
- (void)_videoViewPathWillChangeNotification:(id)arg1;
- (void)_videoViewScaleModeDidChangeNotification:(id)arg1;
- (void)_willResignActiveNotification:(id)arg1;
- (void)_willTerminateNotification:(id)arg1;
- (id)accessLog;
- (BOOL)allowsAirPlay;
- (id)asset;
- (id)backgroundView;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (void)cancelAllThumbnailImageRequests;
- (id)contentURL;
- (long long)controlStyle;
- (void)dealloc;
- (BOOL)disallowsAMRAudio;
- (double)duration;
- (double)endPlaybackTime;
- (void)endSeeking;
- (id)errorLog;
- (id)init;
- (double)initialPlaybackTime;
- (BOOL)inlinePlaybackUsesTVOut;
- (BOOL)isAirPlayVideoActive;
- (BOOL)isFullscreen;
- (unsigned long long)loadState;
- (unsigned long long)movieMediaTypes;
- (long long)movieSourceType;
- (void)movieView:(id)arg1 willMoveToSuperview:(id)arg2;
- (void)movieView:(id)arg1 willMoveToWindow:(id)arg2;
- (void)movieViewDidMoveToWindow:(id)arg1;
- (struct CGSize)naturalSize;
- (void)pause;
- (void)play;
- (double)playableDuration;
- (long long)playbackState;
- (id)playerItem;
- (void)prepareToPlay;
- (long long)repeatMode;
- (void)requestThumbnailImagesAtTimes:(id)arg1 timeOption:(long long)arg2;
- (long long)scalingMode;
- (void)setAllowsAirPlay:(BOOL)arg1;
- (void)setAsset:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentURL:(id)arg1;
- (void)setControlStyle:(long long)arg1;
- (void)setEndPlaybackTime:(double)arg1;
- (void)setFullscreen:(BOOL)arg1;
- (void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setInitialPlaybackTime:(double)arg1;
- (void)setInlinePlaybackUsesTVOut:(BOOL)arg1;
- (void)setMovieControlMode:(int)arg1;
- (void)setMovieSourceType:(long long)arg1;
- (void)setPlayerItem:(id)arg1;
- (void)setRepeatMode:(long long)arg1;
- (void)setScalingMode:(long long)arg1;
- (void)setShouldAutoplay:(BOOL)arg1;
- (void)setUseApplicationAudioSession:(BOOL)arg1;
- (BOOL)shouldAutoplay;
- (void)skipToBeginning;
- (void)skipToNextItem;
- (void)skipToPreviousItem;
- (void)stop;
- (id)thumbnailImageAtTime:(double)arg1 timeOption:(long long)arg2;
- (id)timedMetadata;
- (id)timedMetadataForKey:(id)arg1;
- (BOOL)useApplicationAudioSession;
- (BOOL)videoController:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (void)videoController:(id)arg1 willHideOverlayWithDuration:(double)arg2;
- (void)videoController:(id)arg1 willShowOverlayWithDuration:(double)arg2;
- (void)videoControllerDidEnterFullscreen:(id)arg1;
- (void)videoControllerDidExitFullscreen:(id)arg1;
- (void)videoControllerDidHideOverlay:(id)arg1;
- (void)videoControllerDidShowOverlay:(id)arg1;
- (BOOL)videoControllerShouldAutohide:(id)arg1;
- (void)videoControllerWillEnterFullscreen:(id)arg1;
- (void)videoControllerWillExitFullscreen:(id)arg1;
- (id)view;
- (void)viewControllerRequestsExit:(id)arg1 reason:(long long)arg2;

@end

