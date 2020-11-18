//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/ADBannerViewInternalDelegate-Protocol.h>
#import <NewsUI/NUAdContextProvider-Protocol.h>
#import <NewsUI/SVVideo-Protocol.h>
#import <NewsUI/SVVideoAdProviding-Protocol.h>

@class NSArray, NSString, NSURL, NUAdBannerView, SVKeyValueObserver, SXVideoAdStateManager;
@protocol NUAdContextProvider, NUAdProvider, NUVideoAdEventTracker, NUVideoPlaybackCounter, SVModalPresentationViewControllerProviding, SVVideoMetadata, SVVisibilityMonitoring, SXVASTAnalyticsEventInfoFactory;

@interface NUVideoAdProvider : NSObject <NUAdContextProvider, ADBannerViewInternalDelegate, SVVideo, SVVideoAdProviding>
{
    BOOL _appeared;
    NSString *_identifier;
    NSArray *_contextProviders;
    id<NUAdContextProvider> _contextProviderForVideoBefore;
    id<NUAdContextProvider> _contextProviderForVideoAfter;
    NUAdBannerView *_bannerView;
    unsigned long long _skipThreshold;
    NSURL *_URL;
    SVKeyValueObserver *_playbackStartedObserver;
    id<NUVideoAdEventTracker> _eventTracker;
    id<SVVideoMetadata> _metadata;
    SXVideoAdStateManager *_stateManager;
    id<NUAdProvider> _adProvider;
    id<SVVisibilityMonitoring> _videoPlayerVisibilityMonitor;
    id<SXVASTAnalyticsEventInfoFactory> _analyticsEventInfoFactory;
    id<NUVideoPlaybackCounter> _playbackCounter;
    id<SVModalPresentationViewControllerProviding> _modalPresentationViewControllerProvider;
}

@property (copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (readonly, nonatomic) id<NUAdProvider> adProvider; // @synthesize adProvider=_adProvider;
@property (readonly, nonatomic) BOOL allowsCallToActionBar;
@property (readonly, nonatomic) id<SXVASTAnalyticsEventInfoFactory> analyticsEventInfoFactory; // @synthesize analyticsEventInfoFactory=_analyticsEventInfoFactory;
@property (nonatomic) BOOL appeared; // @synthesize appeared=_appeared;
@property (strong, nonatomic) NUAdBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property (strong, nonatomic) id<NUAdContextProvider> contextProviderForVideoAfter; // @synthesize contextProviderForVideoAfter=_contextProviderForVideoAfter;
@property (strong, nonatomic) id<NUAdContextProvider> contextProviderForVideoBefore; // @synthesize contextProviderForVideoBefore=_contextProviderForVideoBefore;
@property (copy, nonatomic) NSArray *contextProviders; // @synthesize contextProviders=_contextProviders;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) id<NUVideoAdEventTracker> eventTracker; // @synthesize eventTracker=_eventTracker;
@property (readonly, nonatomic) BOOL hasAction;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) id<SVVideoMetadata> metadata; // @synthesize metadata=_metadata;
@property (readonly, nonatomic) id<SVModalPresentationViewControllerProviding> modalPresentationViewControllerProvider; // @synthesize modalPresentationViewControllerProvider=_modalPresentationViewControllerProvider;
@property (readonly, nonatomic) id<NUVideoPlaybackCounter> playbackCounter; // @synthesize playbackCounter=_playbackCounter;
@property (strong, nonatomic) SVKeyValueObserver *playbackStartedObserver; // @synthesize playbackStartedObserver=_playbackStartedObserver;
@property (nonatomic) unsigned long long skipThreshold; // @synthesize skipThreshold=_skipThreshold;
@property (readonly, nonatomic) SXVideoAdStateManager *stateManager; // @synthesize stateManager=_stateManager;
@property (readonly) Class superclass;
@property (readonly, nonatomic) double threshold;
@property (readonly, weak, nonatomic) id<SVVisibilityMonitoring> videoPlayerVisibilityMonitor; // @synthesize videoPlayerVisibilityMonitor=_videoPlayerVisibilityMonitor;
@property (readonly, nonatomic) unsigned long long videoType;

- (void).cxx_destruct;
- (id)adContextValueForKeyPath:(id)arg1;
- (id)contextProvidersForKeyPath:(id)arg1;
- (void)didAppear;
- (void)didDisappear;
- (void)impressionQuartilePassed:(unsigned long long)arg1;
- (void)impressionThresholdPassed:(double)arg1;
- (id)initWithContextProviders:(id)arg1 adProvider:(id)arg2 contextProviderForVideoBefore:(id)arg3 contextProviderForVideoAfter:(id)arg4 eventTracker:(id)arg5 videoPlayerVisibilityMonitor:(id)arg6 analyticsEventInfoFactory:(id)arg7 playbackCounter:(id)arg8 modalPresentationViewControllerProvider:(id)arg9;
- (CDUnknownBlockType)loadWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)metadataForCurrentState;
- (void)muteStateChanged:(BOOL)arg1;
- (void)playbackFailedWithError:(id)arg1;
- (void)playbackFinished;
- (void)playbackInitiated;
- (void)playbackPaused;
- (void)playbackResumed;
- (void)playbackStarted;
- (void)presentAction;
- (void)presentPrivacyStatement;
- (void)skipped;
- (void)tappedAdvance;
- (void)tappedToToggleControls;
- (id)viewControllerForStoryboardPresentationFromBannerView:(id)arg1;

@end

