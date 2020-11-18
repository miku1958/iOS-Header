//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iAd/ADWebProcessDelegate-Protocol.h>
#import <iAd/WKNavigationDelegate-Protocol.h>
#import <iAd/_WKInputDelegate-Protocol.h>

@class ADAdImpressionPublicAttributes, ADWebView, ADWebViewGestureRecognizer, NSString, _WKRemoteObjectInterface;
@protocol ADCreativeControllerDelegate, ADWebProcessProxy;

@interface ADCreativeController : NSObject <WKNavigationDelegate, ADWebProcessDelegate, _WKInputDelegate>
{
    id<ADWebProcessProxy> _webProcessProxy;
    id<ADCreativeControllerDelegate> _delegate;
    BOOL _contentVisible;
    BOOL _tapWasRecognized;
    BOOL _isVideoAd;
    BOOL _isExpandedCreativePresented;
    BOOL _browserContextControllerDidLoad;
    BOOL _shouldBlockNavigation;
    ADWebView *_creativeView;
    NSString *_creativeIdentifier;
    ADAdImpressionPublicAttributes *_publicAttributes;
    CDUnknownBlockType _loadCompletion;
    _WKRemoteObjectInterface *_remoteObjectInterface;
    NSString *_adSpaceIdentifier;
    ADWebViewGestureRecognizer *_gestureRecognizer;
}

@property (copy, nonatomic) NSString *adSpaceIdentifier; // @synthesize adSpaceIdentifier=_adSpaceIdentifier;
@property (nonatomic) BOOL browserContextControllerDidLoad; // @synthesize browserContextControllerDidLoad=_browserContextControllerDidLoad;
@property (nonatomic, getter=isContentVisible) BOOL contentVisible; // @synthesize contentVisible=_contentVisible;
@property (copy, nonatomic) NSString *creativeIdentifier; // @synthesize creativeIdentifier=_creativeIdentifier;
@property (readonly, nonatomic) ADWebView *creativeView; // @synthesize creativeView=_creativeView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ADCreativeControllerDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) ADWebViewGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isExpandedCreativePresented; // @synthesize isExpandedCreativePresented=_isExpandedCreativePresented;
@property (nonatomic) BOOL isVideoAd; // @synthesize isVideoAd=_isVideoAd;
@property (copy, nonatomic) CDUnknownBlockType loadCompletion; // @synthesize loadCompletion=_loadCompletion;
@property (strong, nonatomic) ADAdImpressionPublicAttributes *publicAttributes; // @synthesize publicAttributes=_publicAttributes;
@property (strong, nonatomic) _WKRemoteObjectInterface *remoteObjectInterface; // @synthesize remoteObjectInterface=_remoteObjectInterface;
@property (nonatomic) BOOL shouldBlockNavigation; // @synthesize shouldBlockNavigation=_shouldBlockNavigation;
@property (readonly) Class superclass;
@property (nonatomic) BOOL tapWasRecognized; // @synthesize tapWasRecognized=_tapWasRecognized;

- (void)_callLoadCompletionWithError:(id)arg1;
- (id)_customUserAgentString;
- (id)_incrementCreativeIdentifier;
- (void)_navigationAttemptBlockedDueToAccidentalTapForMRAIDActionType:(long long)arg1;
- (BOOL)_navigationIsBlocked;
- (void)_requestOpenURL:(id)arg1;
- (void)_resetGestureFlags;
- (void)_tapGestureTimerDidExpireForRequestedActionType:(long long)arg1;
- (void)_tapRecognized:(id)arg1;
- (void)_updateWebProcessProxyVisibility;
- (id)_userAgentForUserAgentString:(id)arg1;
- (BOOL)_webView:(id)arg1 focusShouldStartInputSession:(id)arg2;
- (void)adSpaceActionViewControllerWillDismiss:(id)arg1;
- (void)adSpaceActionViewControllerWillPresent:(id)arg1;
- (BOOL)contentVisible;
- (void)dealloc;
- (struct CGRect)frameForCreativeView;
- (void)loadAdImpression:(id)arg1 identifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)resetVideoPlaytime;
- (void)unregisterExportedObjectInterface;
- (void)webProcessMRAIDJSODidCallClose;
- (void)webProcessMRAIDJSODidCallCreateCalendarEvent:(id)arg1;
- (void)webProcessMRAIDJSODidCallExpand:(id)arg1 withMaximumSize:(id)arg2;
- (void)webProcessMRAIDJSODidCallOpen:(id)arg1;
- (void)webProcessPlugInBrowserContextControllerGlobalObjectIsAvailableForFrame;
- (void)webProcessPlugInDidCreateBrowserContextController;
- (void)webProcessPlugInWillDestroyBrowserContextController;
- (void)webProcessVideoAdJSOCreativeViewLoaded;
- (void)webProcessVideoAdJSODidCallAudioMuted:(float)arg1;
- (void)webProcessVideoAdJSODidCallAudioUnmuted:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallExitFullScreenTapped:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallFullScreenTapped:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallMoreInfoTapped:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallPlayCompletedWithVolume:(float)arg1;
- (void)webProcessVideoAdJSODidCallPlayPaused:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallPlayProgressed:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallPlayResumed:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallPlayStarted:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallSkipAdTapped:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallVideoTapped:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallViewabilityChanged:(BOOL)arg1 playTime:(float)arg2 volume:(float)arg3;
- (void)webProcessVideoAdJSODidCallVolumeChanged:(float)arg1 playTime:(float)arg2;
- (void)webProcessVideoAdJSOGetVideoInfo:(CDUnknownBlockType)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;

@end

