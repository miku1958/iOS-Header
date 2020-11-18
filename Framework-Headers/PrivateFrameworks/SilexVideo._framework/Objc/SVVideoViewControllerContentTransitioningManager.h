//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/AVPlayerViewControllerContentTransitioning_NewsOnly-Protocol.h>
#import <SilexVideo/SVVideoTransitionObserver-Protocol.h>

@class NSString;
@protocol SVPlayerProviding, SVVideoPlaybackSeekerFactory, SVVideoPlaybackSeeking, SVVideoQueueProviding, SVVideoSkipLockObserverFactory, SVVideoSkipLockObserving, SVVideoTimeProviderFactory, SVVideoTimeProviding, SVVideoVisiblePercentageManager, SVVisibilityReporting, SVVisiblePercentageReporting;

@interface SVVideoViewControllerContentTransitioningManager : NSObject <AVPlayerViewControllerContentTransitioning_NewsOnly, SVVideoTransitionObserver>
{
    id<SVVisibilityReporting> _visibilityReporter;
    id<SVVideoQueueProviding> _queueProvider;
    id<SVPlayerProviding> _playerProvider;
    id<SVVideoVisiblePercentageManager> _visiblePercentageManager;
    id<SVVideoSkipLockObserverFactory> _skipLockObserverFactory;
    id<SVVideoTimeProviderFactory> _timeProviderFactory;
    id<SVVideoPlaybackSeekerFactory> _seekerFactory;
    id<SVVideoSkipLockObserving> _skipLockObserver;
    id<SVVideoTimeProviding> _timeProvider;
    id<SVVideoPlaybackSeeking> _seeker;
    id<SVVisiblePercentageReporting> _visibilityReporterForAppearingVideo;
    id<SVVisiblePercentageReporting> _visibilityReporterForDisappearingVideo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<SVPlayerProviding> playerProvider; // @synthesize playerProvider=_playerProvider;
@property (readonly, nonatomic) id<SVVideoQueueProviding> queueProvider; // @synthesize queueProvider=_queueProvider;
@property (strong, nonatomic) id<SVVideoPlaybackSeeking> seeker; // @synthesize seeker=_seeker;
@property (readonly, nonatomic) id<SVVideoPlaybackSeekerFactory> seekerFactory; // @synthesize seekerFactory=_seekerFactory;
@property (strong, nonatomic) id<SVVideoSkipLockObserving> skipLockObserver; // @synthesize skipLockObserver=_skipLockObserver;
@property (readonly, nonatomic) id<SVVideoSkipLockObserverFactory> skipLockObserverFactory; // @synthesize skipLockObserverFactory=_skipLockObserverFactory;
@property (readonly) Class superclass;
@property (strong, nonatomic) id<SVVideoTimeProviding> timeProvider; // @synthesize timeProvider=_timeProvider;
@property (readonly, nonatomic) id<SVVideoTimeProviderFactory> timeProviderFactory; // @synthesize timeProviderFactory=_timeProviderFactory;
@property (readonly, weak, nonatomic) id<SVVisibilityReporting> visibilityReporter; // @synthesize visibilityReporter=_visibilityReporter;
@property (weak, nonatomic) id<SVVisiblePercentageReporting> visibilityReporterForAppearingVideo; // @synthesize visibilityReporterForAppearingVideo=_visibilityReporterForAppearingVideo;
@property (weak, nonatomic) id<SVVisiblePercentageReporting> visibilityReporterForDisappearingVideo; // @synthesize visibilityReporterForDisappearingVideo=_visibilityReporterForDisappearingVideo;
@property (readonly, nonatomic) id<SVVideoVisiblePercentageManager> visiblePercentageManager; // @synthesize visiblePercentageManager=_visiblePercentageManager;

- (void).cxx_destruct;
- (id)initWithVisiblePercentageManager:(id)arg1 visibilityReporter:(id)arg2 queueProvider:(id)arg3 playerProvider:(id)arg4 skipLockObserverFactory:(id)arg5 timeProviderFactory:(id)arg6 seekerFactory:(id)arg7;
- (void)playerViewController:(id)arg1 didUpdateContentTransitionProgress:(double)arg2;
- (id)playerViewController:(id)arg1 playerForContentTransitionType:(long long)arg2;
- (void)playerViewControllerDidCancelContentTransition:(id)arg1;
- (void)playerViewControllerDidCompleteContentTransition:(id)arg1;
- (void)playerViewControllerWillBeginContentTransition:(id)arg1;
- (void)playerViewControllerWillCancelContentTransition:(id)arg1;
- (void)playerViewControllerWillCompleteContentTransition:(id)arg1;
- (id)videoForContentTransitionType:(long long)arg1;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
