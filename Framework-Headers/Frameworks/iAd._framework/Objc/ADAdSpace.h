//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iAd/ADCreativeControllerDelegate-Protocol.h>
#import <iAd/ADPrivacyViewControllerInternalDelegate-Protocol.h>
#import <iAd/ADWebViewActionViewControllerDelegate-Protocol.h>

@class ADAdActionPublicAttributes, ADAdImpressionPublicAttributes, ADAdSpaceConfiguration, ADContext, ADCreativeController, ADMediaAnalyticsEventInfo, ADPrivacyViewController, ADRemoteActionViewController, ADWebViewActionViewController, NSArray, NSString, NSURL, _UIAsyncInvocation;
@protocol ADAdRecipient;

@interface ADAdSpace : NSObject <ADPrivacyViewControllerInternalDelegate, ADWebViewActionViewControllerDelegate, ADCreativeControllerDelegate>
{
    id<ADAdRecipient> _recipient;
    BOOL _requiresFastVisibiltyTestOnly;
    BOOL _firedAdStatusEvent;
    BOOL _isModalInterstitial;
    BOOL _didInstallCreativeView;
    BOOL _hasImpressed;
    BOOL _adLibManagedVideo;
    BOOL _visibilityCheckScheduled;
    BOOL _adRequestMade;
    BOOL _shouldMonitorVisibility;
    BOOL _serviceAdSpaceRequestInProgress;
    BOOL _shouldPresentActionViewControllerWhenReady;
    BOOL _actionViewControllerReadyForPresentation;
    BOOL _actionViewControllerWantsDismissal;
    BOOL _fastVisibilityContextIsFeed;
    BOOL _shouldTearDownCreativeControllerAfterDismissingRemoteActionViewController;
    BOOL _privacyRequestInProgress;
    float _lastPlayTime;
    float _lastVolume;
    float _totalDuration;
    float _visibilityPercentage;
    int _videoPlayCount;
    NSString *_identifier;
    NSURL *_serverURL;
    NSString *_advertisingSection;
    NSString *_authenticationUserName;
    ADContext *_context;
    ADAdImpressionPublicAttributes *_currentAdImpressionPublicAttributes;
    ADAdActionPublicAttributes *_currentActionPublicAttributes;
    unsigned long long _reUseCount;
    long long _pendingAnalyticsVideoState;
    ADMediaAnalyticsEventInfo *_pendingAnalyticsEventInfo;
    long long _visibility;
    double _lastSlowCheck;
    ADCreativeController *_creativeController;
    ADRemoteActionViewController *_remoteActionViewController;
    ADWebViewActionViewController *_webViewActionViewController;
    _UIAsyncInvocation *_remoteViewControllerRequestCancelationInvocation;
    long long _progressMileStoneMet;
    NSArray *_prerollVideoAssets;
    ADPrivacyViewController *_privacyViewController;
    struct CGRect _selectedAdFrame;
}

@property (nonatomic) BOOL actionViewControllerReadyForPresentation; // @synthesize actionViewControllerReadyForPresentation=_actionViewControllerReadyForPresentation;
@property (nonatomic) BOOL actionViewControllerWantsDismissal; // @synthesize actionViewControllerWantsDismissal=_actionViewControllerWantsDismissal;
@property (nonatomic) BOOL adLibManagedVideo; // @synthesize adLibManagedVideo=_adLibManagedVideo;
@property (nonatomic) BOOL adRequestMade; // @synthesize adRequestMade=_adRequestMade;
@property (copy, nonatomic) NSString *advertisingSection; // @synthesize advertisingSection=_advertisingSection;
@property (copy, nonatomic) NSString *authenticationUserName; // @synthesize authenticationUserName=_authenticationUserName;
@property (readonly, nonatomic) ADAdSpaceConfiguration *configuration;
@property (readonly, nonatomic) NSString *connectionAssertionIdentifier;
@property (copy, nonatomic) ADContext *context; // @synthesize context=_context;
@property (strong, nonatomic) ADCreativeController *creativeController; // @synthesize creativeController=_creativeController;
@property (strong, nonatomic) ADAdActionPublicAttributes *currentActionPublicAttributes; // @synthesize currentActionPublicAttributes=_currentActionPublicAttributes;
@property (strong, nonatomic) ADAdImpressionPublicAttributes *currentAdImpressionPublicAttributes; // @synthesize currentAdImpressionPublicAttributes=_currentAdImpressionPublicAttributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didInstallCreativeView; // @synthesize didInstallCreativeView=_didInstallCreativeView;
@property (nonatomic) BOOL fastVisibilityContextIsFeed; // @synthesize fastVisibilityContextIsFeed=_fastVisibilityContextIsFeed;
@property (nonatomic) BOOL firedAdStatusEvent; // @synthesize firedAdStatusEvent=_firedAdStatusEvent;
@property (nonatomic) BOOL hasImpressed; // @synthesize hasImpressed=_hasImpressed;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) BOOL isModalInterstitial; // @synthesize isModalInterstitial=_isModalInterstitial;
@property (nonatomic) float lastPlayTime; // @synthesize lastPlayTime=_lastPlayTime;
@property (nonatomic) double lastSlowCheck; // @synthesize lastSlowCheck=_lastSlowCheck;
@property (nonatomic) float lastVolume; // @synthesize lastVolume=_lastVolume;
@property (copy, nonatomic) ADMediaAnalyticsEventInfo *pendingAnalyticsEventInfo; // @synthesize pendingAnalyticsEventInfo=_pendingAnalyticsEventInfo;
@property (nonatomic) long long pendingAnalyticsVideoState; // @synthesize pendingAnalyticsVideoState=_pendingAnalyticsVideoState;
@property (strong, nonatomic) NSArray *prerollVideoAssets; // @synthesize prerollVideoAssets=_prerollVideoAssets;
@property (nonatomic) BOOL privacyRequestInProgress; // @synthesize privacyRequestInProgress=_privacyRequestInProgress;
@property (strong, nonatomic) ADPrivacyViewController *privacyViewController; // @synthesize privacyViewController=_privacyViewController;
@property (nonatomic) long long progressMileStoneMet; // @synthesize progressMileStoneMet=_progressMileStoneMet;
@property (nonatomic) unsigned long long reUseCount; // @synthesize reUseCount=_reUseCount;
@property (readonly, nonatomic) id<ADAdRecipient> recipient;
@property (strong, nonatomic) ADRemoteActionViewController *remoteActionViewController; // @synthesize remoteActionViewController=_remoteActionViewController;
@property (strong, nonatomic) _UIAsyncInvocation *remoteViewControllerRequestCancelationInvocation; // @synthesize remoteViewControllerRequestCancelationInvocation=_remoteViewControllerRequestCancelationInvocation;
@property (nonatomic) BOOL requiresFastVisibiltyTestOnly; // @synthesize requiresFastVisibiltyTestOnly=_requiresFastVisibiltyTestOnly;
@property (nonatomic) struct CGRect selectedAdFrame; // @synthesize selectedAdFrame=_selectedAdFrame;
@property (copy, nonatomic) NSURL *serverURL; // @synthesize serverURL=_serverURL;
@property (nonatomic) BOOL serviceAdSpaceRequestInProgress; // @synthesize serviceAdSpaceRequestInProgress=_serviceAdSpaceRequestInProgress;
@property (nonatomic) BOOL shouldMonitorVisibility; // @synthesize shouldMonitorVisibility=_shouldMonitorVisibility;
@property (nonatomic) BOOL shouldPresentActionViewControllerWhenReady; // @synthesize shouldPresentActionViewControllerWhenReady=_shouldPresentActionViewControllerWhenReady;
@property (nonatomic) BOOL shouldTearDownCreativeControllerAfterDismissingRemoteActionViewController; // @synthesize shouldTearDownCreativeControllerAfterDismissingRemoteActionViewController=_shouldTearDownCreativeControllerAfterDismissingRemoteActionViewController;
@property (readonly) Class superclass;
@property (nonatomic) float totalDuration; // @synthesize totalDuration=_totalDuration;
@property (nonatomic) int videoPlayCount; // @synthesize videoPlayCount=_videoPlayCount;
@property (nonatomic) long long visibility; // @synthesize visibility=_visibility;
@property (nonatomic) BOOL visibilityCheckScheduled; // @synthesize visibilityCheckScheduled=_visibilityCheckScheduled;
@property (nonatomic) float visibilityPercentage; // @synthesize visibilityPercentage=_visibilityPercentage;
@property (strong, nonatomic) ADWebViewActionViewController *webViewActionViewController; // @synthesize webViewActionViewController=_webViewActionViewController;

+ (id)ADIdentifierNameForCreativeType:(int)arg1;
- (void)_clientApplicationDidBecomeActive;
- (void)_clientApplicationDidEnterBackground;
- (void)_closeConnectionIfNecessary;
- (void)_considerPresentingActionViewController;
- (void)_considerPresentingWebViewActionViewControllerWithURL:(id)arg1;
- (void)_handleMRAIDActionPresentation;
- (void)_notifiyCreativeControllerOfActionViewControllerPresentation;
- (void)_presentPrivacyViewController;
- (void)_remote_actionViewControllerReadyForPresentation;
- (void)_remote_close;
- (void)_remote_creativeDidFailWithError:(id)arg1;
- (void)_remote_dismissViewController;
- (void)_remote_dismissViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_remote_openURL:(id)arg1;
- (void)_remote_pauseBannerMedia;
- (void)_remote_requestViewControllerWithClassName:(id)arg1 forAdSpaceControllerWithIdentifier:(id)arg2;
- (void)_remote_resumeBannerMedia;
- (void)_remote_updateActionViewControllerOrientation:(unsigned long long)arg1;
- (void)_requestAdFromAdSheet;
- (void)_tearDownCreativeController;
- (void)_tearDownWebActionViewController;
- (id)_updateIdentifier;
- (id)_videoAssetsForVideoURL:(id)arg1;
- (void)adPrivacyViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)adPrivacyViewControllerDidAppear:(id)arg1;
- (void)adPrivacyViewControllerDidDisappear:(id)arg1;
- (void)adPrivacyViewControllerDidDismiss:(id)arg1;
- (void)adPrivacyViewControllerDidLinkOut:(id)arg1;
- (void)adPrivacyViewControllerDidLoad:(id)arg1;
- (void)adPrivacyViewControllerDidRenderTransparency:(id)arg1;
- (BOOL)canReuseForContext:(id)arg1;
- (void)cancelBannerViewAction;
- (void)captureEvent:(id)arg1 forAd:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)captureEvent:(id)arg1 forAd:(id)arg2 forVideoState:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)captureUnloadEventForAd:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)close;
- (void)creativeControllerNavigationAttemptBlockedDueToAccidentalTap;
- (void)creativeControllerTapGestureTimerDidExpireBeforePrimaryActionWasInvoked;
- (void)creativeControllerVideoCompletedWithVolume:(float)arg1;
- (void)creativeControllerVideoCreativeViewLoaded;
- (void)creativeControllerVideoExitFullScreenTapped:(float)arg1 volume:(float)arg2;
- (void)creativeControllerVideoFullScreenTapped:(float)arg1 volume:(float)arg2;
- (void)creativeControllerVideoMoreInfoTapped:(float)arg1 volume:(float)arg2;
- (void)creativeControllerVideoMuted:(float)arg1;
- (void)creativeControllerVideoPaused:(float)arg1 volume:(float)arg2;
- (void)creativeControllerVideoProgressed:(float)arg1 volume:(float)arg2;
- (void)creativeControllerVideoResumedPlaying:(float)arg1 volume:(float)arg2;
- (void)creativeControllerVideoSkipAdTapped:(float)arg1 volume:(float)arg2;
- (void)creativeControllerVideoStartedPlaying:(float)arg1 volume:(float)arg2;
- (void)creativeControllerVideoTapped:(float)arg1 volume:(float)arg2;
- (void)creativeControllerVideoUnmuted:(float)arg1 volume:(float)arg2;
- (void)creativeControllerVideoViewabilityChanged:(BOOL)arg1 playTime:(float)arg2 volume:(float)arg3;
- (void)creativeControllerVideoVolumeChanged:(float)arg1 playTime:(float)arg2;
- (void)creativeControllerViewDidRequestCloseWithTapLocation:(struct CGPoint)arg1;
- (void)creativeControllerViewDidRequestCreateCalendarEvent:(id)arg1 withTapLocation:(struct CGPoint)arg2;
- (void)creativeControllerViewDidRequestExpandURL:(id)arg1 withMaximumSize:(struct CGSize)arg2 withTapLocation:(struct CGPoint)arg3;
- (void)creativeControllerViewDidRequestOpenURL:(id)arg1 withTapLocation:(struct CGPoint)arg2;
- (void)dealloc;
- (void)determineActionForTapAtLocation:(struct CGPoint)arg1 inFrame:(struct CGRect)arg2 withMRAIDAction:(id)arg3 completeHandler:(CDUnknownBlockType)arg4;
- (void)executeBannerViewActionFrom:(struct CGRect)arg1 withTapLocation:(struct CGPoint)arg2;
- (void)impressionPublicAttributesDidLoad:(id)arg1;
- (id)initForRecipient:(id)arg1;
- (void)installCreativeView;
- (void)internalAdTypeDidChange;
- (void)proceedWithClosing:(BOOL)arg1;
- (void)refuseBannerViewAction;
- (void)reportNativeClickEvent;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)showAdTransparency;
- (void)startVisibilityMonitoring;
- (void)stopVisibilityMonitoring;
- (void)uninstallCreativeView;
- (void)updateCreativeControllerVisibility;
- (void)updateVisibility;
- (void)webViewActionViewControllerHomeButtonWasTapped:(id)arg1;

@end

