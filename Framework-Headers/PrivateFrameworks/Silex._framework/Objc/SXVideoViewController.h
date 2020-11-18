//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Silex/SXPlaybackTransitionCoordinatorDelegate-Protocol.h>
#import <Silex/SXVideoControlsViewControllerDelegate-Protocol.h>
#import <Silex/SXVideoPlaybackObserver-Protocol.h>
#import <Silex/SXVideoViewDelegate-Protocol.h>
#import <Silex/SXVolumeObserver-Protocol.h>
#import <Silex/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSMutableArray, NSString, SXMediaSelectionController, SXPlaybackCoordinator, SXScreenDimmingManager, SXVideoControlsViewController, SXVideoPlaybackQueue, SXVideoView, SXVideoViewControllerConfiguration, SXVideoVisibilityMonitor, SXVolumeController;
@protocol SXVideoViewControllerDataSource, SXVideoViewControllerDelegate;

@interface SXVideoViewController : UIViewController <SXVideoPlaybackObserver, UIViewControllerTransitioningDelegate, SXVideoControlsViewControllerDelegate, SXPlaybackTransitionCoordinatorDelegate, SXVolumeObserver, SXVideoViewDelegate>
{
    SXVideoViewControllerConfiguration *_configuration;
    id<SXVideoViewControllerDataSource> _dataSource;
    id<SXVideoViewControllerDelegate> _delegate;
    SXVideoView *_videoView;
    SXVideoControlsViewController *_controlsViewController;
    SXPlaybackCoordinator *_playbackCoordinator;
    SXVideoPlaybackQueue *_queue;
    NSMutableArray *_videos;
    NSMutableArray *_ads;
    unsigned long long _numberOfVideos;
    SXMediaSelectionController *_mediaSelectionController;
    SXScreenDimmingManager *_screenDimmingManager;
    SXVolumeController *_volumeController;
    SXVideoVisibilityMonitor *_videoVisibilityMonitor;
}

@property (strong, nonatomic) NSMutableArray *ads; // @synthesize ads=_ads;
@property (readonly, nonatomic) SXVideoViewControllerConfiguration *configuration; // @synthesize configuration=_configuration;
@property (strong, nonatomic) SXVideoControlsViewController *controlsViewController; // @synthesize controlsViewController=_controlsViewController;
@property (weak, nonatomic) id<SXVideoViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SXVideoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) SXMediaSelectionController *mediaSelectionController; // @synthesize mediaSelectionController=_mediaSelectionController;
@property (readonly, nonatomic) BOOL muted;
@property (nonatomic) unsigned long long numberOfVideos; // @synthesize numberOfVideos=_numberOfVideos;
@property (strong, nonatomic) SXPlaybackCoordinator *playbackCoordinator; // @synthesize playbackCoordinator=_playbackCoordinator;
@property (strong, nonatomic) SXVideoPlaybackQueue *queue; // @synthesize queue=_queue;
@property (readonly, nonatomic) SXScreenDimmingManager *screenDimmingManager; // @synthesize screenDimmingManager=_screenDimmingManager;
@property (readonly) Class superclass;
@property (strong, nonatomic) SXVideoView *videoView; // @synthesize videoView=_videoView;
@property (readonly, nonatomic) SXVideoVisibilityMonitor *videoVisibilityMonitor; // @synthesize videoVisibilityMonitor=_videoVisibilityMonitor;
@property (strong, nonatomic) NSMutableArray *videos; // @synthesize videos=_videos;
@property (readonly, nonatomic) SXVolumeController *volumeController; // @synthesize volumeController=_volumeController;

- (void).cxx_destruct;
- (void)accessibilityDidActivateVideoView:(id)arg1;
- (void)advance;
- (void)dealloc;
- (unsigned long long)indexOfVideo:(id)arg1;
- (unsigned long long)indexOfVideoForAd:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)layoutForAd:(id)arg1 withPlaybackCoordinator:(id)arg2 reason:(unsigned long long)arg3;
- (id)layoutForVideo:(id)arg1 withPlaybackCoordinator:(id)arg2 reason:(unsigned long long)arg3;
- (void)muteStateChanged:(BOOL)arg1;
- (void)pause;
- (void)play;
- (BOOL)playbackAllowed:(id)arg1;
- (void)playbackCoordinator:(id)arg1 loadingProgressed:(double)arg2;
- (void)playbackCoordinator:(id)arg1 playbackFailedWithError:(id)arg2;
- (void)playbackCoordinator:(id)arg1 timeElapsed:(double)arg2 duration:(double)arg3;
- (void)playbackCoordinatorFinishedPlayback:(id)arg1;
- (void)playbackCoordinatorStartedPlayback:(id)arg1;
- (void)playbackCoordinatorStateChanged:(id)arg1;
- (void)playbackTransitionCoordinator:(id)arg1 addObserversToPlaybackCoordinator:(id)arg2;
- (void)playbackTransitionCoordinator:(id)arg1 removeObserversFromPlaybackCoordinator:(id)arg2;
- (void)refreshVideoControlsForPlaybackCoordinator:(id)arg1 reason:(unsigned long long)arg2;
- (void)setupVideoQueueIfNeeded;
- (BOOL)skipToPrevious;
- (id)subtitleForVideoAtIndex:(unsigned long long)arg1;
- (id)titleForVideoAtIndex:(unsigned long long)arg1;
- (void)transitionToPlaybackCoordinator:(id)arg1 direction:(unsigned long long)arg2;
- (void)videoControlsViewController:(id)arg1 didToggleControlVisibility:(BOOL)arg2;
- (void)videoControlsViewControllerWantsSelectCaptions:(id)arg1;
- (void)videoControlsViewControllerWantsToClose:(id)arg1;
- (void)videoControlsViewControllerWantsToLearnMore:(id)arg1;
- (void)videoControlsViewControllerWantsToPause:(id)arg1;
- (void)videoControlsViewControllerWantsToPlay:(id)arg1;
- (void)videoControlsViewControllerWantsToSeePrivacyStatement:(id)arg1;
- (void)videoControlsViewControllerWantsToSeekToStart:(id)arg1;
- (BOOL)videoControlsViewControllerWantsToSkipToNextVideo:(id)arg1;
- (BOOL)videoControlsViewControllerWantsToSkipToPreviousVideo:(id)arg1;
- (void)videoControlsViewControllsWantsToToggleVolume:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)volumeLevelChanged:(double)arg1;

@end

