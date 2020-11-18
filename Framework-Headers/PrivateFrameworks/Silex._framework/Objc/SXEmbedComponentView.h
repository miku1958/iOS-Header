//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXComponentView.h>

#import <Silex/SXViewportChangeListener-Protocol.h>
#import <Silex/UIGestureRecognizerDelegate-Protocol.h>
#import <Silex/UIScrollViewDelegate-Protocol.h>
#import <Silex/WKNavigationDelegate-Protocol.h>
#import <Silex/WKScriptMessageHandler-Protocol.h>
#import <Silex/WKUIDelegate-Protocol.h>

@class NSMutableSet, NSString, SXEmbedResource, SXWebCrashRetryThrottler, UIActivityIndicatorView, UILabel, WKNavigation, WKWebView;
@protocol SXComponentActionHandler, SXEmbedService, SXEmbedType, SXReachabilityProvider;

@interface SXEmbedComponentView : SXComponentView <WKNavigationDelegate, WKUIDelegate, WKScriptMessageHandler, UIGestureRecognizerDelegate, UIScrollViewDelegate, SXViewportChangeListener>
{
    BOOL _failedLoading;
    BOOL _isCurrentlyLoadingEmbedData;
    BOOL _hasRegisteredScriptMessageHandlers;
    id<SXReachabilityProvider> _reachabilityProvider;
    id<SXEmbedService> _embedService;
    id<SXComponentActionHandler> _actionHandler;
    id<SXEmbedType> _embedConfiguration;
    SXEmbedResource *_embedResource;
    WKWebView *_webView;
    SXWebCrashRetryThrottler *_webCrashRetryThrottler;
    WKWebView *_webViewPresentingInFullscreen;
    UILabel *_errorLabel;
    NSString *_HTML;
    NSString *_userScript;
    NSMutableSet *_expectedMessages;
    UIActivityIndicatorView *_activityIndicator;
    WKNavigation *_initialNavigation;
    struct CGSize _currentlyLayoutingForSize;
    struct CGSize _currentLayoutSize;
    struct CGSize _currentViewportSize;
    struct CGPoint _lastKnownTouchPoint;
}

@property (strong, nonatomic) NSString *HTML; // @synthesize HTML=_HTML;
@property (readonly, nonatomic) id<SXComponentActionHandler> actionHandler; // @synthesize actionHandler=_actionHandler;
@property (strong, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property (nonatomic) struct CGSize currentLayoutSize; // @synthesize currentLayoutSize=_currentLayoutSize;
@property (nonatomic) struct CGSize currentViewportSize; // @synthesize currentViewportSize=_currentViewportSize;
@property (nonatomic) struct CGSize currentlyLayoutingForSize; // @synthesize currentlyLayoutingForSize=_currentlyLayoutingForSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) id<SXEmbedType> embedConfiguration; // @synthesize embedConfiguration=_embedConfiguration;
@property (strong, nonatomic) SXEmbedResource *embedResource; // @synthesize embedResource=_embedResource;
@property (readonly, nonatomic) id<SXEmbedService> embedService; // @synthesize embedService=_embedService;
@property (strong, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property (strong, nonatomic) NSMutableSet *expectedMessages; // @synthesize expectedMessages=_expectedMessages;
@property (nonatomic) BOOL failedLoading; // @synthesize failedLoading=_failedLoading;
@property (nonatomic) BOOL hasRegisteredScriptMessageHandlers; // @synthesize hasRegisteredScriptMessageHandlers=_hasRegisteredScriptMessageHandlers;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) WKNavigation *initialNavigation; // @synthesize initialNavigation=_initialNavigation;
@property (nonatomic) BOOL isCurrentlyLoadingEmbedData; // @synthesize isCurrentlyLoadingEmbedData=_isCurrentlyLoadingEmbedData;
@property (nonatomic) struct CGPoint lastKnownTouchPoint; // @synthesize lastKnownTouchPoint=_lastKnownTouchPoint;
@property (readonly, nonatomic) id<SXReachabilityProvider> reachabilityProvider; // @synthesize reachabilityProvider=_reachabilityProvider;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSString *userScript; // @synthesize userScript=_userScript;
@property (strong, nonatomic) SXWebCrashRetryThrottler *webCrashRetryThrottler; // @synthesize webCrashRetryThrottler=_webCrashRetryThrottler;
@property (strong, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property (strong, nonatomic) WKWebView *webViewPresentingInFullscreen; // @synthesize webViewPresentingInFullscreen=_webViewPresentingInFullscreen;

- (void).cxx_destruct;
- (id)HTMLByEnclosingHTML:(id)arg1 withHTML:(id)arg2;
- (void)_webViewDidEnterFullscreen:(id)arg1;
- (void)_webViewDidExitFullscreen:(id)arg1;
- (void)_webViewWebProcessDidCrash:(id)arg1;
- (void)addScriptMessageHandlers;
- (BOOL)allowHierarchyRemoval;
- (void)discardContents;
- (void)displayEmbedIfNeeded;
- (id)enclosingHTML;
- (void)finalizeLayoutForSize:(struct CGSize)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleError:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (BOOL)hasLoadedEmbedData;
- (id)initWithDocumentController:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 analyticsReporting:(id)arg4 componentStyleRendererFactory:(id)arg5 reachabilityProvider:(id)arg6 embedService:(id)arg7 actionHandler:(id)arg8;
- (double)initialScale;
- (void)layoutWebViewForSize:(struct CGSize)arg1;
- (void)loadEmbedData;
- (void)loadEmbedIfNeeded;
- (void)loadWebViewIfNeeded;
- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (void)reloadEmbed;
- (void)removeScriptMessageHandlers;
- (void)renderContents;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (BOOL)shouldAllowRequestToURL:(id)arg1;
- (BOOL)shouldLayoutWebView;
- (BOOL)shouldShowWebView;
- (void)showActivityIndicator:(BOOL)arg1;
- (id)unableToLoadMessage;
- (unsigned long long)userActionMediaTypes;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)willPresentComponent;

@end

