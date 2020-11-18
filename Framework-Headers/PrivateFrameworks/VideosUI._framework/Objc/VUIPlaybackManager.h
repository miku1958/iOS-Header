//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/AVPlayerViewControllerDelegatePrivate-Protocol.h>
#import <VideosUI/VUINowPlayingFeatureMonitorDelegate-Protocol.h>
#import <VideosUI/VideosExtrasContextDelegate-Protocol.h>

@class AVExternalPlaybackController, AVPlayerViewController, MPAVRoutingController, NSString, TVPStateMachine, UIButton, UIImage, UIViewController, VUINowPlayingFeatureMonitor, VUIPlayer, VUIVideoAdvisoryLogoImageDownloader, VUIVideoAdvisoryView, VideosExtrasContext, VideosExtrasPresenter;
@protocol TVPMediaItem;

@interface VUIPlaybackManager : NSObject <AVPlayerViewControllerDelegatePrivate, VideosExtrasContextDelegate, VUINowPlayingFeatureMonitorDelegate>
{
    BOOL _requiresLinearPlayback;
    BOOL _shouldDisplayTVRatingWhenVideoBoundsIsAvailable;
    BOOL _shouldAnimateTVRatingView;
    VUIPlayer *_mainPlayer;
    VUIPlayer *_backgroundAudioPlayer;
    VUIPlayer *_extrasPlayer;
    VUIPlayer *_activePlayer;
    TVPStateMachine *_stateMachine;
    VideosExtrasContext *_extrasContext;
    AVPlayerViewController *_avPlayerViewController;
    AVPlayerViewController *_mainAVPlayerViewController;
    AVPlayerViewController *_extrasAVPlayerViewController;
    UIViewController *_presentingViewController;
    long long _dismissalOperation;
    MPAVRoutingController *_routingController;
    AVExternalPlaybackController *_avExternalPlaybackController;
    VideosExtrasPresenter *_extrasPresenter;
    VUINowPlayingFeatureMonitor *_featureMonitor;
    UIButton *_skipButton;
    VUIVideoAdvisoryLogoImageDownloader *_logoImageDownloader;
    UIImage *_ratingImage;
    VUIVideoAdvisoryView *_ratingView;
}

@property (weak, nonatomic) VUIPlayer *activePlayer; // @synthesize activePlayer=_activePlayer;
@property (strong, nonatomic) AVExternalPlaybackController *avExternalPlaybackController; // @synthesize avExternalPlaybackController=_avExternalPlaybackController;
@property (strong, nonatomic) AVPlayerViewController *avPlayerViewController; // @synthesize avPlayerViewController=_avPlayerViewController;
@property (strong, nonatomic) VUIPlayer *backgroundAudioPlayer; // @synthesize backgroundAudioPlayer=_backgroundAudioPlayer;
@property (readonly, nonatomic) NSObject<TVPMediaItem> *currentMediaItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long dismissalOperation; // @synthesize dismissalOperation=_dismissalOperation;
@property (strong, nonatomic) AVPlayerViewController *extrasAVPlayerViewController; // @synthesize extrasAVPlayerViewController=_extrasAVPlayerViewController;
@property (strong, nonatomic) VideosExtrasContext *extrasContext; // @synthesize extrasContext=_extrasContext;
@property (strong, nonatomic) VUIPlayer *extrasPlayer; // @synthesize extrasPlayer=_extrasPlayer;
@property (strong, nonatomic) VideosExtrasPresenter *extrasPresenter; // @synthesize extrasPresenter=_extrasPresenter;
@property (strong, nonatomic) VUINowPlayingFeatureMonitor *featureMonitor; // @synthesize featureMonitor=_featureMonitor;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isFullscreenPlaybackUIBeingShown;
@property (readonly, nonatomic) BOOL isPIPing;
@property (readonly, nonatomic) BOOL isPlaybackUIBeingShown;
@property (strong, nonatomic) VUIVideoAdvisoryLogoImageDownloader *logoImageDownloader; // @synthesize logoImageDownloader=_logoImageDownloader;
@property (strong, nonatomic) AVPlayerViewController *mainAVPlayerViewController; // @synthesize mainAVPlayerViewController=_mainAVPlayerViewController;
@property (strong, nonatomic) VUIPlayer *mainPlayer; // @synthesize mainPlayer=_mainPlayer;
@property (weak, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property (strong, nonatomic) UIImage *ratingImage; // @synthesize ratingImage=_ratingImage;
@property (strong, nonatomic) VUIVideoAdvisoryView *ratingView; // @synthesize ratingView=_ratingView;
@property (nonatomic) BOOL requiresLinearPlayback; // @synthesize requiresLinearPlayback=_requiresLinearPlayback;
@property (strong, nonatomic) MPAVRoutingController *routingController; // @synthesize routingController=_routingController;
@property (nonatomic) BOOL shouldAnimateTVRatingView; // @synthesize shouldAnimateTVRatingView=_shouldAnimateTVRatingView;
@property (nonatomic) BOOL shouldDisplayTVRatingWhenVideoBoundsIsAvailable; // @synthesize shouldDisplayTVRatingWhenVideoBoundsIsAvailable=_shouldDisplayTVRatingWhenVideoBoundsIsAvailable;
@property (strong, nonatomic) UIButton *skipButton; // @synthesize skipButton=_skipButton;
@property (strong, nonatomic) TVPStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property (readonly) Class superclass;

+ (void)_performRatingAndAgeVerificationWithMediaItem:(id)arg1 presentingController:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)_presentCantPlaybackOverCellularAlertControllerWithMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)_presentCellularPlaybackIsDisabledAlertControllerWithPresentingViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)_presentStartingPlaybackWindowWarningWithRentalMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)_rentalPlaybackStartDateWithMediaItem:(id)arg1;
+ (BOOL)_shouldWarnAboutPlaybackQualityForRentalMediaItem:(id)arg1;
+ (BOOL)_shouldWarnStartingRentalPlaybackWindowWithMediaItem:(id)arg1;
+ (void)_showCellularPlaybackQualityOptionsForRentalMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)_verifyMediaItemIsPlayableOnCellular:(id)arg1 presentingViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)preflightPlaybackWithMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_addRollsInfoFeaturesFromMediaItem:(id)arg1;
- (void)_addSkipInfoFeaturesFromMediaItem:(id)arg1;
- (void)_addTVRatingFeatureFromMediaItem:(id)arg1;
- (void)_addTappableViewToRemoveSkipButton;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_avPlayerViewControllerPresentationDidTimeout;
- (void)_configureStillWatchingFeatureMonitoringIfLivePlayback;
- (void)_currentMediaItemDidChange:(id)arg1;
- (void)_downloadRatingImageIfAvailable:(id)arg1;
- (void)_externalPlaybackTypeDidChange:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (void)_networkReachbilityDidChange:(id)arg1;
- (void)_notifyAVPlayerViewControllerDisplaySize;
- (void)_playbackErrorDidOccur:(id)arg1;
- (void)_playbackStateDidChange:(id)arg1;
- (void)_registerApplicationNotifications;
- (void)_registerStateMachineHandlers;
- (void)_removeTappableViewForSkipButtonIfNeeded;
- (void)_setExtrasButtonVisible:(BOOL)arg1;
- (void)_showOrUpdateTVRatingIfNeeded;
- (void)_showSkipButtonWithTitle:(id)arg1 show:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_showStillWatchingAlertFeature:(id)arg1;
- (void)_showTVRating:(BOOL)arg1 withImage:(id)arg2 animated:(BOOL)arg3;
- (void)_skipButtonTapped:(id)arg1;
- (id)_stillWatchingAlertDurationOverride;
- (void)_updateRequiresLinearPlayback;
- (void)_updateRollsInfoFromMainPlayersCurrentMediaItem;
- (void)_updateStopWhenBackgroundedFeatureForApplicationState:(long long)arg1 isFullScreen:(BOOL)arg2;
- (void)_updateTimeBoundFeature:(id)arg1 animated:(BOOL)arg2;
- (void)_updateTimeTriggeredFeature:(id)arg1 animated:(BOOL)arg2;
- (void)dismissPlaybackAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)extrasBackButtonPressed;
- (void)extrasContext:(id)arg1 extrasVisibilityNeedsUpdate:(BOOL)arg2;
- (void)extrasContext:(id)arg1 hadFatalError:(id)arg2;
- (void)extrasContextDidLoadMainMenuItems:(id)arg1;
- (void)extrasDoneButtonPressed;
- (void)extrasMenuItemSelected:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)extrasRequestReloadWithContext:(id)arg1;
- (void)extrasRequestsMediaPlayback:(id)arg1 isBackground:(BOOL)arg2;
- (void)extrasRequestsPlaybackStop;
- (void)featureMonitor:(id)arg1 featureDidChangeState:(id)arg2 animated:(BOOL)arg3;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)playerViewController:(id)arg1 contentViewWillTransitionToSize:(struct CGSize)arg2 withTransitionCoordinator:(id)arg3;
- (void)playerViewController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
- (void)playerViewController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)playerViewController:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (void)playerViewControllerDidStartPictureInPicture:(id)arg1;
- (void)playerViewControllerDidStopPictureInPicture:(id)arg1;
- (void)playerViewControllerWillStartPictureInPicture:(id)arg1;
- (void)playerViewControllerWillStopPictureInPicture:(id)arg1;
- (void)presentExtrasWithURL:(id)arg1 storeID:(id)arg2 actionParams:(id)arg3 fromViewController:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)presentPlaylist:(id)arg1 fromViewController:(id)arg2 dismissalOperation:(long long)arg3 animated:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;

@end
