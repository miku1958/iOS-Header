//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFCameraClipPlayerDelegate-Protocol.h>
#import <Home/HFCameraLiveStreamControllerDelegate-Protocol.h>
#import <Home/HMCameraRecordingEventManagerObserver-Protocol.h>

@class AVPlayer, HFCameraAnalyticsCameraClipPlaybackSessionEvent, HFCameraPlaybackEngineCache, HFCameraPlaybackPosition, HMCameraClip, HMCameraClipManager, HMCameraProfile, HMCameraSource, HMHome, NADelegateDispatcher, NSArray, NSDate, NSError, NSMapTable, NSString, NSUUID;
@protocol HFCameraClipPlaying, HFCameraClipScrubbing, HFCameraLiveStreamControlling, OS_dispatch_queue;

@interface HFCameraPlaybackEngine : NSObject <HMCameraRecordingEventManagerObserver, HFCameraClipPlayerDelegate, HFCameraLiveStreamControllerDelegate>
{
    BOOL _prefersAudioEnabled;
    BOOL _microphoneEnabled;
    BOOL _streamAudioEnabled;
    BOOL _userScrubbing;
    BOOL _pictureInPictureModeActive;
    BOOL _shouldBypassVideoFetchRequest;
    BOOL _wantsToPlay;
    BOOL _scrubbing;
    float _streamAudioVolume;
    unsigned long long _timelineState;
    HMCameraProfile *_cameraProfile;
    HMCameraSource *_liveCameraSource;
    unsigned long long _timeControlStatus;
    NSError *_playbackError;
    HMHome *_home;
    CDUnknownBlockType _clipPlayerBuilder;
    id<HFCameraLiveStreamControlling> _liveStreamController;
    id<HFCameraClipScrubbing> _clipScrubber;
    NSMapTable *_observerStates;
    NADelegateDispatcher *_observerDispatcher;
    unsigned long long _playbackContentType;
    unsigned long long _engineMode;
    NSDate *_lastRequestedClipPlaybackDate;
    unsigned long long _scrubbingInProgressCount;
    NSObject<OS_dispatch_queue> *_clipQueue;
    long long _lastPlayerTimeControlStatus;
    HFCameraAnalyticsCameraClipPlaybackSessionEvent *_playbackSessionEvent;
    unsigned long long _playbackRetryAttempts;
    HFCameraPlaybackEngineCache *_eventCache;
    HMCameraClipManager *_clipManager;
    NSUUID *_notificationCenterClipUUID;
    id<HFCameraClipPlaying> _clipPlayer;
}

@property (readonly, copy, nonatomic) NSArray *cameraClips;
@property (readonly, copy, nonatomic) NSArray *cameraEvents;
@property (strong, nonatomic) HMCameraProfile *cameraProfile; // @synthesize cameraProfile=_cameraProfile;
@property (weak, nonatomic) HMCameraClipManager *clipManager; // @synthesize clipManager=_clipManager;
@property (readonly, nonatomic) id<HFCameraClipPlaying> clipPlayer; // @synthesize clipPlayer=_clipPlayer;
@property (readonly, copy, nonatomic) CDUnknownBlockType clipPlayerBuilder; // @synthesize clipPlayerBuilder=_clipPlayerBuilder;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *clipQueue; // @synthesize clipQueue=_clipQueue;
@property (readonly, nonatomic) id<HFCameraClipScrubbing> clipScrubber; // @synthesize clipScrubber=_clipScrubber;
@property (readonly, nonatomic) HMCameraClip *currentClip;
@property (readonly, copy, nonatomic) NSArray *datesContainingClips;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long engineMode; // @synthesize engineMode=_engineMode;
@property (strong, nonatomic) HFCameraPlaybackEngineCache *eventCache; // @synthesize eventCache=_eventCache;
@property (readonly, nonatomic) BOOL hasRecordingEvents;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HMHome *home; // @synthesize home=_home;
@property (readonly, nonatomic) BOOL isCameraPortraitMode;
@property (nonatomic) long long lastPlayerTimeControlStatus; // @synthesize lastPlayerTimeControlStatus=_lastPlayerTimeControlStatus;
@property (copy, nonatomic) NSDate *lastRequestedClipPlaybackDate; // @synthesize lastRequestedClipPlaybackDate=_lastRequestedClipPlaybackDate;
@property (strong, nonatomic) HMCameraSource *liveCameraSource; // @synthesize liveCameraSource=_liveCameraSource;
@property (readonly, nonatomic) id<HFCameraLiveStreamControlling> liveStreamController; // @synthesize liveStreamController=_liveStreamController;
@property (nonatomic, getter=isMicrophoneEnabled) BOOL microphoneEnabled; // @synthesize microphoneEnabled=_microphoneEnabled;
@property (strong, nonatomic) NSUUID *notificationCenterClipUUID; // @synthesize notificationCenterClipUUID=_notificationCenterClipUUID;
@property (readonly, nonatomic) NADelegateDispatcher *observerDispatcher; // @synthesize observerDispatcher=_observerDispatcher;
@property (readonly, nonatomic) NSMapTable *observerStates; // @synthesize observerStates=_observerStates;
@property (readonly, copy, nonatomic) NSArray *observers;
@property (nonatomic, getter=isPictureInPictureModeActive) BOOL pictureInPictureModeActive; // @synthesize pictureInPictureModeActive=_pictureInPictureModeActive;
@property (nonatomic) unsigned long long playbackContentType; // @synthesize playbackContentType=_playbackContentType;
@property (strong, nonatomic) NSError *playbackError; // @synthesize playbackError=_playbackError;
@property (strong, nonatomic) HFCameraPlaybackPosition *playbackPosition;
@property (nonatomic) unsigned long long playbackRetryAttempts; // @synthesize playbackRetryAttempts=_playbackRetryAttempts;
@property (strong, nonatomic) HFCameraAnalyticsCameraClipPlaybackSessionEvent *playbackSessionEvent; // @synthesize playbackSessionEvent=_playbackSessionEvent;
@property (readonly, nonatomic) AVPlayer *player;
@property (nonatomic) BOOL prefersAudioEnabled; // @synthesize prefersAudioEnabled=_prefersAudioEnabled;
@property (nonatomic, getter=isScrubbing) BOOL scrubbing; // @synthesize scrubbing=_scrubbing;
@property (nonatomic) unsigned long long scrubbingInProgressCount; // @synthesize scrubbingInProgressCount=_scrubbingInProgressCount;
@property (nonatomic) BOOL shouldBypassVideoFetchRequest; // @synthesize shouldBypassVideoFetchRequest=_shouldBypassVideoFetchRequest;
@property (nonatomic, getter=isStreamAudioEnabled) BOOL streamAudioEnabled; // @synthesize streamAudioEnabled=_streamAudioEnabled;
@property (nonatomic) float streamAudioVolume; // @synthesize streamAudioVolume=_streamAudioVolume;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timeControlStatus; // @synthesize timeControlStatus=_timeControlStatus;
@property (nonatomic) unsigned long long timelineState; // @synthesize timelineState=_timelineState;
@property (nonatomic, getter=isUserScrubbing) BOOL userScrubbing; // @synthesize userScrubbing=_userScrubbing;
@property (nonatomic) BOOL wantsToPlay; // @synthesize wantsToPlay=_wantsToPlay;

+ (id)findClipPositionForDate:(id)arg1 inEvents:(id)arg2 options:(unsigned long long)arg3;
+ (unsigned long long)hf_indexOfClipForDate:(id)arg1 inEvents:(id)arg2 enumerationOptions:(unsigned long long)arg3 searchOptions:(unsigned long long)arg4;
- (void).cxx_destruct;
- (id)_derivedPlaybackError;
- (unsigned long long)_derivedTimeControlStatus;
- (void)_setMicrophoneEnabled:(BOOL)arg1 notifyObservers:(BOOL)arg2;
- (void)_setPlayerVolume:(float)arg1 notifyObservers:(BOOL)arg2;
- (void)_setStreamAudioEnabled:(BOOL)arg1 notifyObservers:(BOOL)arg2;
- (void)_setupClipPlayerWithClipManager:(id)arg1;
- (void)_setupLiveStreamController:(id)arg1;
- (void)_setupTimeObservationForObserver:(id)arg1;
- (void)_updatePlaybackStateNotifyingObservers:(BOOL)arg1;
- (void)_updatePlaybackStateNotifyingObservers:(BOOL)arg1 rebuildClipPlayerIfNeeded:(BOOL)arg2;
- (void)_updateStateForRequestedPlaybackPosition:(id)arg1 notifyObservers:(BOOL)arg2;
- (void)addObserver:(id)arg1 withOptions:(id)arg2;
- (void)beginScrubbing;
- (void)clipPlayer:(id)arg1 didUpdateError:(id)arg2 isFatal:(BOOL)arg3;
- (void)clipPlayer:(id)arg1 didUpdateMuted:(BOOL)arg2;
- (void)clipPlayer:(id)arg1 didUpdateTimeControlStatus:(long long)arg2;
- (void)clipPlayerDidPlayToEndTime:(id)arg1;
- (void)dealloc;
- (void)endScrubbing;
- (id)engineModeDescription;
- (void)fetchCameraClipForNotificationUUID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchCameraEventsWithCompletion:(CDUnknownBlockType)arg1;
- (id)findClipPositionForDate:(id)arg1;
- (id)findClipPositionForDate:(id)arg1 options:(unsigned long long)arg2;
- (id)firstOfTheDayClipForDate:(id)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (BOOL)isFirstEventOfTheDay:(id)arg1;
- (BOOL)isLiveStreamPlaying;
- (BOOL)isLiveStreaming;
- (void)modifyPlaybackFromSender:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)pause;
- (void)play;
- (void)recordingEventManager:(id)arg1 didRemoveRecordingEventsWithUUIDs:(id)arg2;
- (void)recordingEventManager:(id)arg1 didUpdateRecordingEvents:(id)arg2;
- (void)removeObserver:(id)arg1;
- (id)shortDebugDescription;
- (void)startPlaybackAtDate:(id)arg1 withClip:(id)arg2;
- (void)startPlaybackForCurrentClip;
- (void)streamControllerStateDidUpdate:(id)arg1;
- (id)timeControlStatusDescription;
- (id)timelineStateDescription;
- (void)updateConfiguration:(id)arg1;
- (void)updateLiveStreamForCameraProfile:(id)arg1;
- (void)updatePlaybackPositionToDate:(id)arg1 usingClip:(id)arg2;

@end
