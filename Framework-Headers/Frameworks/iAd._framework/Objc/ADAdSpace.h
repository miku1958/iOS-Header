//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iAd/ADCreativeControllerDelegate-Protocol.h>
#import <iAd/ADPrivacyViewControllerInternalDelegate-Protocol.h>
#import <iAd/ADWebViewActionViewControllerDelegate-Protocol.h>

@class ADAdActionPublicAttributes, ADAdImpressionPublicAttributes, ADAdSpaceConfiguration, ADContext, ADCreativeController, ADPrivacyViewController, ADRemoteActionViewController, ADWebViewActionViewController, NSString, NSURL, _UIAsyncInvocation;
@protocol ADAdRecipient;

@interface ADAdSpace : NSObject <ADPrivacyViewControllerInternalDelegate, ADWebViewActionViewControllerDelegate, ADCreativeControllerDelegate>
{
    id<ADAdRecipient> _recipient;
    BOOL _requiresFastVisibiltyTestOnly;
    BOOL _firedAdStatusEvent;
    BOOL _isModalInterstitial;
    BOOL _didInstallCreativeView;
    BOOL _hasImpressed;
    BOOL _visibilityCheckScheduled;
    BOOL _adRequestMade;
    BOOL _shouldMonitorVisibility;
    BOOL _serviceAdSpaceRequestInProgress;
    BOOL _shouldPresentActionViewControllerWhenReady;
    BOOL _actionViewControllerReadyForPresentation;
    BOOL _actionViewControllerWantsDismissal;
    BOOL _fastVisibilityContextIsFeed;
    BOOL _shouldTearDownCreativeControllerAfterDismissingRemoteActionViewController;
    NSString *_identifier;
    NSURL *_serverURL;
    NSString *_advertisingSection;
    NSString *_authenticationUserName;
    ADContext *_context;
    ADAdImpressionPublicAttributes *_currentAdImpressionPublicAttributes;
    ADAdActionPublicAttributes *_currentActionPublicAttributes;
    long long _visibility;
    double _lastSlowCheck;
    ADCreativeController *_creativeController;
    ADRemoteActionViewController *_remoteActionViewController;
    ADWebViewActionViewController *_webViewActionViewController;
    _UIAsyncInvocation *_remoteViewControllerRequestCancelationInvocation;
    ADPrivacyViewController *_privacyViewController;
    struct CGRect _selectedAdFrame;
}

@property (nonatomic) BOOL actionViewControllerReadyForPresentation; // @synthesize actionViewControllerReadyForPresentation=_actionViewControllerReadyForPresentation;
@property (nonatomic) BOOL actionViewControllerWantsDismissal; // @synthesize actionViewControllerWantsDismissal=_actionViewControllerWantsDismissal;
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
@property (nonatomic) double lastSlowCheck; // @synthesize lastSlowCheck=_lastSlowCheck;
@property (strong, nonatomic) ADPrivacyViewController *privacyViewController; // @synthesize privacyViewController=_privacyViewController;
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
@property (nonatomic) long long visibility; // @synthesize visibility=_visibility;
@property (nonatomic) BOOL visibilityCheckScheduled; // @synthesize visibilityCheckScheduled=_visibilityCheckScheduled;
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
- (void)adPrivacyViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)adPrivacyViewControllerDidAppear:(id)arg1;
- (void)adPrivacyViewControllerDidDismiss:(id)arg1;
- (void)adPrivacyViewControllerDidLinkOut:(id)arg1;
- (void)adPrivacyViewControllerDidLoad:(id)arg1;
- (void)adPrivacyViewControllerDidRenderTransparency:(id)arg1;
- (BOOL)canReuseForContext:(id)arg1;
- (void)cancelBannerViewAction;
- (void)close;
- (void)creativeControllerTapGestureTimerDidExpireBeforePrimaryActionWasInvoked;
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

