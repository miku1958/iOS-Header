//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NewsUI/NUAsyncContentViewControllerLoader-Protocol.h>
#import <NewsUI/SXAnimatableVideoViewController-Protocol.h>

@class NUVideoPlayerEventTracker, SXVideoView, SXVideoViewController, UIView;
@protocol NUVideoAdProviderDataSource, NUVideoViewControllerDelegate, SXVideoPlaybackController;

@interface NUVideoViewController : UIViewController <SXAnimatableVideoViewController, NUAsyncContentViewControllerLoader>
{
    BOOL _loadStarted;
    id<NUVideoViewControllerDelegate> _delegate;
    NUVideoPlayerEventTracker *_eventTracker;
    SXVideoViewController *_videoViewController;
    id<SXVideoPlaybackController> _playbackController;
    id<NUVideoAdProviderDataSource> _videoAdProviderDataSource;
}

@property (readonly, nonatomic) UIViewController *controlsViewController;
@property (weak, nonatomic) id<NUVideoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NUVideoPlayerEventTracker *eventTracker; // @synthesize eventTracker=_eventTracker;
@property (nonatomic, getter=hasLoadStarted) BOOL loadStarted; // @synthesize loadStarted=_loadStarted;
@property (readonly, nonatomic) id<SXVideoPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
@property (readonly, nonatomic) id<NUVideoAdProviderDataSource> videoAdProviderDataSource; // @synthesize videoAdProviderDataSource=_videoAdProviderDataSource;
@property (readonly, nonatomic) UIView *videoHostView;
@property (readonly, nonatomic) SXVideoView *videoView;
@property (readonly, nonatomic) SXVideoViewController *videoViewController; // @synthesize videoViewController=_videoViewController;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithResolver:(id)arg1 videoItems:(id)arg2 eventTracker:(id)arg3 configuration:(id)arg4 discoverMoreVideosInfo:(id)arg5 videoGroupsConfig:(id)arg6 videoProviderFactory:(id)arg7 videoAdProviderFactory:(id)arg8 onboardingVersion:(long long)arg9 visibilityMonitor:(id)arg10 activityViewControllerFactory:(id)arg11 URLHandler:(id)arg12;
- (id)loadContentWithTimeoutTime:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)pause;
- (void)play;
- (BOOL)prefersStatusBarHidden;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;

@end

