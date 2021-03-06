//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPSwipableViewDelegate-Protocol.h>
#import <MediaPlayer/MPTransportControlsTarget-Protocol.h>
#import <MediaPlayer/MPVideoControllerProtocol-Protocol.h>
#import <MediaPlayer/MPVideoOverlayDelegate-Protocol.h>
#import <MediaPlayer/MPVolumeControllerDelegate-Protocol.h>
#import <MediaPlayer/UIAlertViewDelegate-Protocol.h>

@class MPAVController, MPAVItem, MPInlineVideoFullscreenViewController, MPSwipableView, MPTVOutWindow, MPVideoBackgroundView, MPVideoContainerView, MPVideoPlaybackOverlayView, MPVideoView, MPVolumeController, MPWeakTimer, NSSet, NSString, UIActivityIndicatorView, UIAlertView, UIColor, UIImage, UINavigationController, UIPinchGestureRecognizer, UITapGestureRecognizer, UIView, UIWindow, _UIHostedWindow;
@protocol MPVideoOverlay;

__attribute__((visibility("hidden")))
@interface MPInlineVideoController : NSObject <MPVolumeControllerDelegate, MPVideoControllerProtocol, MPSwipableViewDelegate, MPVideoOverlayDelegate, MPTransportControlsTarget, UIAlertViewDelegate>
{
    id _delegate;
    MPAVItem *_item;
    MPAVController *_player;
    unsigned long long _activeOverlayUserEvents;
    BOOL _automaticallyHandleTransportControls;
    BOOL _allowsDetailScrubbing;
    BOOL _allowsWirelessPlayback;
    BOOL _alwaysAllowHidingControlsOverlay;
    long long _artworkImageStyle;
    BOOL _attemptAutoPlayWhenControlsHidden;
    MPVideoBackgroundView *_backgroundView;
    UIColor *_backstopColor;
    BOOL _canAnimateControlsOverlay;
    BOOL _canShowControlsOverlay;
    BOOL _controlsOverlayVisible;
    unsigned long long _desiredParts;
    unsigned long long _disabledParts;
    BOOL _disableAutoRotation;
    BOOL _disableControlsAutohide;
    BOOL _displayPlaybackErrorAlerts;
    BOOL _inlinePlaybackUsesTVOut;
    long long _itemTypeOverride;
    BOOL _needsTVWindowSetup;
    BOOL _needsTVWindowTeardown;
    UIImage *_posterImage;
    long long _scaleMode;
    BOOL _TVOutEnabled;
    BOOL _TVOutEnabledMaster;
    BOOL _useHostedWindowWhenFullscreen;
    MPSwipableView *_view;
    MPVideoPlaybackOverlayView *_videoOverlayView;
    unsigned long long _visibleParts;
    BOOL _navigationBarHidden;
    NSString *_playbackErrorDescription;
    long long _videoOverlayStyle;
    UIView *_advertisementView;
    UIAlertView *_alertSheet;
    UIWindow *_alternateTracksWindow;
    unsigned long long _backgroundTaskId;
    BOOL _batteryMonitoringWasEnabled;
    UINavigationController *_chaptersContainerController;
    MPVideoContainerView *_containerView;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    MPInlineVideoFullscreenViewController *_fullscreenViewController;
    BOOL _fullscreenViewSizeIsExternallyManaged;
    UIWindow *_fullscreenWindow;
    BOOL _hasShownFirstVideoFrame;
    MPWeakTimer *_idleTimer;
    BOOL _inCloneMirrorMode;
    BOOL _isAnimatingOverlay;
    BOOL _isTransitioningFromFullscreen;
    BOOL _isTransitioningToFullscreen;
    UIActivityIndicatorView *_loadingIndicator;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    long long _scaleModeOverride;
    BOOL _scheduledLoadingIndicator;
    UIView *_subtitlesView;
    BOOL _swallowNextTapGesture;
    UITapGestureRecognizer *_tapGestureRecognizer;
    MPTVOutWindow *_tvOutWindow;
    UIView *_videoBackgroundView;
    NSSet *_viewsToFade;
    BOOL _wantsOverlayVisibleWhenItemIsAvailable;
    BOOL _wasPlaying;
    UIWindow *_windowForDisablingAutorotation;
    UIWindow *_windowForFullscreenTransition;
    BOOL _shouldDestroyVideoSnapshot;
    MPVolumeController *_volumeController;
}

@property (nonatomic) BOOL TVOutEnabled; // @synthesize TVOutEnabled=_TVOutEnabled;
@property (readonly, nonatomic) UIView *advertisementView; // @synthesize advertisementView=_advertisementView;
@property (nonatomic) BOOL allowsDetailScrubbing; // @synthesize allowsDetailScrubbing=_allowsDetailScrubbing;
@property (nonatomic) BOOL allowsWirelessPlayback; // @synthesize allowsWirelessPlayback=_allowsWirelessPlayback;
@property (nonatomic) BOOL alwaysAllowHidingControlsOverlay; // @synthesize alwaysAllowHidingControlsOverlay=_alwaysAllowHidingControlsOverlay;
@property (nonatomic) long long artworkImageStyle; // @synthesize artworkImageStyle=_artworkImageStyle;
@property (nonatomic) BOOL attemptAutoPlayWhenControlsHidden; // @synthesize attemptAutoPlayWhenControlsHidden=_attemptAutoPlayWhenControlsHidden;
@property (nonatomic) BOOL autoPlayWhenLikelyToKeepUp;
@property (nonatomic) BOOL automaticallyHandleTransportControls; // @synthesize automaticallyHandleTransportControls=_automaticallyHandleTransportControls;
@property (readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (strong, nonatomic) UIColor *backstopColor; // @synthesize backstopColor=_backstopColor;
@property (nonatomic) BOOL canAnimateControlsOverlay; // @synthesize canAnimateControlsOverlay=_canAnimateControlsOverlay;
@property (readonly, nonatomic) BOOL canChangeScaleMode;
@property (nonatomic) BOOL canShowControlsOverlay; // @synthesize canShowControlsOverlay=_canShowControlsOverlay;
@property (nonatomic) BOOL controlsOverlayVisible; // @synthesize controlsOverlayVisible=_controlsOverlayVisible;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long desiredParts; // @synthesize desiredParts=_desiredParts;
@property (nonatomic) BOOL disableAutoRotation; // @synthesize disableAutoRotation=_disableAutoRotation;
@property (nonatomic) BOOL disableControlsAutohide;
@property (nonatomic) unsigned long long disabledParts; // @synthesize disabledParts=_disabledParts;
@property (nonatomic) BOOL displayPlaybackErrorAlerts; // @synthesize displayPlaybackErrorAlerts=_displayPlaybackErrorAlerts;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen;
@property (readonly, nonatomic) UIView *fullscreenView;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) _UIHostedWindow *hostedWindow;
@property (readonly, nonatomic) unsigned int hostedWindowContextID;
@property (nonatomic) BOOL inlinePlaybackUsesTVOut; // @synthesize inlinePlaybackUsesTVOut=_inlinePlaybackUsesTVOut;
@property (strong, nonatomic) MPAVItem *item; // @synthesize item=_item;
@property (nonatomic) long long itemTypeOverride; // @synthesize itemTypeOverride=_itemTypeOverride;
@property (nonatomic) BOOL navigationBarHidden; // @synthesize navigationBarHidden=_navigationBarHidden;
@property (nonatomic) long long orientation;
@property (copy, nonatomic) NSString *playbackErrorDescription; // @synthesize playbackErrorDescription=_playbackErrorDescription;
@property (strong, nonatomic) MPAVController *player; // @synthesize player=_player;
@property (strong, nonatomic) UIImage *posterImage; // @synthesize posterImage=_posterImage;
@property (nonatomic) long long scaleMode; // @synthesize scaleMode=_scaleMode;
@property (readonly, nonatomic) UIView *subtitlesView; // @synthesize subtitlesView=_subtitlesView;
@property (readonly) Class superclass;
@property (nonatomic) long long videoOverlayStyle; // @synthesize videoOverlayStyle=_videoOverlayStyle;
@property (readonly, strong, nonatomic) UIView<MPVideoOverlay> *videoOverlayView;
@property (readonly, strong, nonatomic) MPVideoView *videoView;
@property (readonly, strong, nonatomic) UIView *view;
@property (readonly, nonatomic) BOOL viewControllerWillRequestExit;
@property (nonatomic) unsigned long long visibleParts; // @synthesize visibleParts=_visibleParts;

- (void).cxx_destruct;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidFinishSuspensionSnapshot:(id)arg1;
- (void)_applicationResumedEventsOnly:(id)arg1;
- (void)_applicationSuspended:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_availableRoutesChanged:(id)arg1;
- (void)_batteryStateDidChange:(id)arg1;
- (void)_bufferingStateChanged:(id)arg1;
- (BOOL)_canEnableAirPlayVideoRoutes;
- (void)_cancelOverlayIdleTimer;
- (void)_delayedShowLoadingIndicator;
- (void)_destroyVideoOverlayView;
- (void)_destroyVideoSnapshotView;
- (void)_doneWithChapters:(id)arg1;
- (void)_durationAvailable:(id)arg1;
- (long long)_effectiveItemType;
- (void)_effectiveScaleModeDidChange:(id)arg1;
- (void)_enableAirPlayVideoRoutesIfNecessary;
- (void)_firstVideoFrameDisplayed:(id)arg1;
- (void)_flipFromChaptersDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_flipToChaptersDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_hideLoadingIndicator;
- (void)_hideOverlayAnimated:(BOOL)arg1;
- (void)_hideOverlayDidEnd;
- (BOOL)_isAnimatingFullscreenTransition;
- (void)_isExternalPlaybackActiveDidChange:(id)arg1;
- (void)_itemTypeAvailable:(id)arg1;
- (long long)_itemTypeWithActualTypePreference;
- (void)_overlayIdleTimerFired:(id)arg1;
- (BOOL)_overlayViewIsVisible;
- (void)_playbackError:(id)arg1;
- (void)_playbackStateChanged:(id)arg1;
- (void)_postScaleModeDidChange;
- (void)_postViewControllerRequestsExitWithReason:(long long)arg1;
- (void)_registerForPlayerNotifications;
- (void)_resetOverlayIdleTimer;
- (void)_resetOverlayIdleTimer:(double)arg1;
- (void)_scaleModeDidChange:(id)arg1;
- (void)_scheduleLoadingIndicatorIfNeeded;
- (void)_screenDidConnect:(id)arg1;
- (void)_screenDidDisconnect:(id)arg1;
- (void)_setupSubviews;
- (void)_setupTVOutWindow;
- (BOOL)_shouldShowDestinationPlaceholder;
- (void)_showOverlayAnimated:(BOOL)arg1;
- (void)_showOverlayAnimated:(BOOL)arg1 quickHide:(BOOL)arg2;
- (void)_showOverlayDidEnd:(BOOL)arg1;
- (void)_showStillFrameIfNotAlreadyPlaying;
- (void)_showVideoSnapshotView;
- (void)_sizeDidChange:(id)arg1;
- (void)_tearDownTVOutWindow;
- (void)_timedImageMetadataAvailable:(id)arg1;
- (void)_transitionFromFullscreenAnimated:(BOOL)arg1;
- (void)_transitionFromFullscreenAnimated:(BOOL)arg1 fromDoneButton:(BOOL)arg2;
- (void)_transitionFromFullscreenDidEnd;
- (void)_transitionToFullscreenAnimated:(BOOL)arg1;
- (void)_transitionToFullscreenDidEnd;
- (void)_unregisterForPlayerNotifications;
- (void)_updateAlwaysPlayWheneverPossible;
- (void)_updateBackgroundViewConfiguration:(BOOL)arg1;
- (void)_updateBackgroundViewInformation;
- (void)_updateDisableAirPlayMirroringDuringPlayback;
- (void)_updateDoubleTapGestureRecognizer;
- (void)_updateIdleTimerDisabledFromPlaybackState:(long long)arg1;
- (void)_updateProgressControlForItem:(id)arg1;
- (void)_updateTVOutEnabled;
- (BOOL)_useInlineControls;
- (void)_validityChanged:(id)arg1;
- (void)_viewWasPinched:(id)arg1;
- (void)_viewWasTapped:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (BOOL)canHideOverlay:(BOOL)arg1;
- (BOOL)canShowQTAudioOnlyUI;
- (void)clearWeakReferencesToObject:(id)arg1;
- (void)dealloc;
- (void)displayVideoView;
- (void)exitFullscreen;
- (void)fullscreenOverlayDidHide;
- (void)fullscreenOverlayDidShow;
- (void)fullscreenOverlayWillHideAnimated:(BOOL)arg1;
- (void)fullscreenOverlayWillShowAnimated:(BOOL)arg1;
- (id)init;
- (void)noteIgnoredChangeTypes:(unsigned long long)arg1;
- (void)overlay:(id)arg1 didBeginUserEvent:(unsigned long long)arg2;
- (void)overlay:(id)arg1 didCancelUserEvent:(unsigned long long)arg2;
- (void)overlay:(id)arg1 didEndUserEvent:(unsigned long long)arg2;
- (void)overlayTappedBackButton:(id)arg1;
- (void)overlayTappedFullscreenButton:(id)arg1;
- (void)prepareToDisplayVideo;
- (void)setControlsNeedLayout;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2 force:(BOOL)arg3;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setOrientation:(long long)arg1 animate:(BOOL)arg2;
- (void)setOwnsStatusBar:(BOOL)arg1;
- (void)setScaleModeOverride:(long long)arg1 animated:(BOOL)arg2;
- (void)setUseHostedWindowWhenFullscreen:(BOOL)arg1;
- (void)setVideoSnapshotEnabled:(BOOL)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)swipableView:(id)arg1 didMoveToSuperview:(id)arg2;
- (void)swipableView:(id)arg1 willMoveToWindow:(id)arg2;
- (void)swipableViewHadActivity:(id)arg1;
- (BOOL)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;

@end

