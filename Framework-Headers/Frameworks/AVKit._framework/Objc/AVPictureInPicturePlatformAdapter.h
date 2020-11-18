//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVKit/AVPictureInPictureControlsStyleAppearance-Protocol.h>
#import <AVKit/AVPictureInPictureViewControllerDelegate-Protocol.h>
#import <AVKit/PGPictureInPictureProxyDelegate-Protocol.h>

@class AVObservationController, AVPictureInPicturePrerollAttributes, AVPictureInPictureViewController, AVPlayerController, AVSecondScreenConnection, NSString, NSTimer, PGPictureInPictureProxy, UIWindow;
@protocol AVPictureInPictureContentSource, AVPictureInPicturePlatformAdapterDelegate;

__attribute__((visibility("hidden")))
@interface AVPictureInPicturePlatformAdapter : NSObject <AVPictureInPictureViewControllerDelegate, PGPictureInPictureProxyDelegate, AVPictureInPictureControlsStyleAppearance>
{
    BOOL _allowsPictureInPicturePlayback;
    BOOL _alwaysStartsAutomaticallyWhenEnteringBackground;
    BOOL _canStartAutomaticallyWhenEnteringBackground;
    BOOL _requiresLinearPlayback;
    BOOL _microphoneEnabled;
    BOOL _managesWiredSecondScreenPlayback;
    BOOL _anyPictureInPictureActive;
    BOOL _scrubbingOrSeeking;
    BOOL _scrubbing;
    BOOL _seeking;
    BOOL _interruptedForAudioSession;
    BOOL _wasPlayingWhenSuspended;
    BOOL _routingVideoToHostedWindow;
    id<AVPictureInPicturePlatformAdapterDelegate> _delegate;
    AVPlayerController *_playerController;
    long long _controlsStyle;
    AVPictureInPicturePrerollAttributes *_prerollAttributes;
    AVPictureInPictureViewController *_pictureInPictureViewController;
    long long _status;
    PGPictureInPictureProxy *_pegasusProxy;
    NSTimer *_layoutCheckTimer;
    AVSecondScreenConnection *_secondScreenConnection;
    UIWindow *_sourceWindowWhenPictureInPictureStarted;
    id<AVPictureInPictureContentSource> _contentSourceAwaitingInvalidation;
    id<AVPictureInPictureContentSource> _contentSourceAwaitingSetup;
    long long _observedTimeControlStatus;
    double _rateWhenScrubbingOrSeekingBegan;
    id<AVPictureInPictureContentSource> _source;
    AVObservationController *_observationController;
    struct CGRect _videoRectInScreen;
}

@property (nonatomic) BOOL allowsPictureInPicturePlayback; // @synthesize allowsPictureInPicturePlayback=_allowsPictureInPicturePlayback;
@property (nonatomic) BOOL alwaysStartsAutomaticallyWhenEnteringBackground; // @synthesize alwaysStartsAutomaticallyWhenEnteringBackground=_alwaysStartsAutomaticallyWhenEnteringBackground;
@property (readonly, nonatomic, getter=isAnyPictureInPictureActive) BOOL anyPictureInPictureActive; // @synthesize anyPictureInPictureActive=_anyPictureInPictureActive;
@property (readonly, nonatomic) BOOL canAnimatePictureInPictureTransition;
@property (nonatomic) BOOL canStartAutomaticallyWhenEnteringBackground; // @synthesize canStartAutomaticallyWhenEnteringBackground=_canStartAutomaticallyWhenEnteringBackground;
@property (weak, nonatomic) id<AVPictureInPictureContentSource> contentSourceAwaitingInvalidation; // @synthesize contentSourceAwaitingInvalidation=_contentSourceAwaitingInvalidation;
@property (weak, nonatomic) id<AVPictureInPictureContentSource> contentSourceAwaitingSetup; // @synthesize contentSourceAwaitingSetup=_contentSourceAwaitingSetup;
@property (nonatomic) long long controlsStyle; // @synthesize controlsStyle=_controlsStyle;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AVPictureInPicturePlatformAdapterDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isInterruptedForAudioSession) BOOL interruptedForAudioSession; // @synthesize interruptedForAudioSession=_interruptedForAudioSession;
@property (readonly, nonatomic) NSTimer *layoutCheckTimer; // @synthesize layoutCheckTimer=_layoutCheckTimer;
@property (nonatomic) BOOL managesWiredSecondScreenPlayback; // @synthesize managesWiredSecondScreenPlayback=_managesWiredSecondScreenPlayback;
@property (nonatomic, getter=isMicrophoneEnabled) BOOL microphoneEnabled; // @synthesize microphoneEnabled=_microphoneEnabled;
@property (readonly, nonatomic) AVObservationController *observationController; // @synthesize observationController=_observationController;
@property (nonatomic) long long observedTimeControlStatus; // @synthesize observedTimeControlStatus=_observedTimeControlStatus;
@property (readonly, nonatomic) PGPictureInPictureProxy *pegasusProxy; // @synthesize pegasusProxy=_pegasusProxy;
@property (readonly, nonatomic) AVPictureInPictureViewController *pictureInPictureViewController; // @synthesize pictureInPictureViewController=_pictureInPictureViewController;
@property (strong, nonatomic) AVPlayerController *playerController; // @synthesize playerController=_playerController;
@property (strong, nonatomic) AVPictureInPicturePrerollAttributes *prerollAttributes; // @synthesize prerollAttributes=_prerollAttributes;
@property (nonatomic) double rateWhenScrubbingOrSeekingBegan; // @synthesize rateWhenScrubbingOrSeekingBegan=_rateWhenScrubbingOrSeekingBegan;
@property (nonatomic) BOOL requiresLinearPlayback; // @synthesize requiresLinearPlayback=_requiresLinearPlayback;
@property (nonatomic, getter=isRoutingVideoToHostedWindow) BOOL routingVideoToHostedWindow; // @synthesize routingVideoToHostedWindow=_routingVideoToHostedWindow;
@property (nonatomic, getter=isScrubbing) BOOL scrubbing; // @synthesize scrubbing=_scrubbing;
@property (nonatomic, getter=isScrubbingOrSeeking) BOOL scrubbingOrSeeking; // @synthesize scrubbingOrSeeking=_scrubbingOrSeeking;
@property (strong, nonatomic) AVSecondScreenConnection *secondScreenConnection; // @synthesize secondScreenConnection=_secondScreenConnection;
@property (nonatomic, getter=isSeeking) BOOL seeking; // @synthesize seeking=_seeking;
@property (weak, nonatomic) id<AVPictureInPictureContentSource> source; // @synthesize source=_source;
@property (weak, nonatomic) UIWindow *sourceWindowWhenPictureInPictureStarted; // @synthesize sourceWindowWhenPictureInPictureStarted=_sourceWindowWhenPictureInPictureStarted;
@property (nonatomic) long long status; // @synthesize status=_status;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSystemPictureInPicturePossible) BOOL systemPictureInPicturePossible;
@property (nonatomic) struct CGRect videoRectInScreen; // @synthesize videoRectInScreen=_videoRectInScreen;
@property (nonatomic) BOOL wasPlayingWhenSuspended; // @synthesize wasPlayingWhenSuspended=_wasPlayingWhenSuspended;

+ (id)imageSymbolConfiguration;
+ (BOOL)isPictureInPictureSupported;
+ (id)startPictureInPictureButtonImageName;
+ (id)stopPictureInPictureButtonImageName;
- (void).cxx_destruct;
- (void)_createProxyIfNeeded;
- (void)_removeSecondScreenConnection;
- (long long)_sceneActivationState;
- (void)_setRoutingVideoToHostedWindow:(BOOL)arg1 pictureInPictureViewController:(id)arg2 source:(id)arg3;
- (void)_setStatusAndNotifyDelegateIfNeeded:(long long)arg1;
- (void)_startObservation;
- (void)_startObservingForPlaybackStateUpdates;
- (void)_updatePictureInPictureShouldStartWhenEnteringBackground;
- (void)_updateProxyPlaybackState;
- (void)_updateStatus;
- (void)_updateStatusUsingProposedStatus:(long long)arg1;
- (void)dealloc;
- (id)initWithSource:(id)arg1;
- (void)pictureInPictureProxy:(id)arg1 didReceivePlaybackCommand:(id)arg2;
- (void)pictureInPictureProxy:(id)arg1 didStartPictureInPictureWithAnimationType:(long long)arg2;
- (void)pictureInPictureProxy:(id)arg1 didStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3;
- (void)pictureInPictureProxy:(id)arg1 didUpdateResourcesUsageReductionReasons:(unsigned long long)arg2 oldReasons:(unsigned long long)arg3;
- (void)pictureInPictureProxy:(id)arg1 failedToStartPictureInPictureWithAnimationType:(long long)arg2 error:(id)arg3;
- (void)pictureInPictureProxy:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)pictureInPictureProxy:(id)arg1 willStartPictureInPictureWithAnimationType:(long long)arg2;
- (void)pictureInPictureProxy:(id)arg1 willStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3;
- (long long)pictureInPictureProxyInterfaceOrientationForTransitionAnimation:(id)arg1;
- (void)pictureInPictureProxyPictureInPictureInterruptionBegan:(id)arg1;
- (void)pictureInPictureProxyPictureInPictureInterruptionEnded:(id)arg1;
- (id)pictureInPictureProxyViewControllerWindowForTransitionAnimation:(id)arg1;
- (struct CGRect)pictureInPictureProxyViewFrameForTransitionAnimation:(id)arg1;
- (void)pictureInPictureViewControllerViewDidAppear:(id)arg1;
- (void)pictureInPictureViewControllerViewWillDisappear:(id)arg1;
- (void)startPictureInPicture;
- (void)stopPictureInPictureAndRestoreUserInterface:(BOOL)arg1;
- (void)updateLayoutDependentBehaviors;

@end
