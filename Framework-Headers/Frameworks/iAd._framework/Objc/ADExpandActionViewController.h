//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iAd/ADActionViewController.h>

#import <iAd/WKNavigationDelegate-Protocol.h>

@class ADCountdownButton, ADHomeButtonHandler, ADWebView, ADWebViewGestureRecognizer, NSString, NSURL, _WKRemoteObjectInterface;
@protocol ADWebProcessProxy;

@interface ADExpandActionViewController : ADActionViewController <WKNavigationDelegate>
{
    id<ADWebProcessProxy> _webProcessProxy;
    BOOL _adIsDismissing;
    BOOL _visible;
    BOOL _browserContextControllerDidLoad;
    BOOL _shouldBlockNavigation;
    BOOL _tapWasRecognized;
    ADWebView *_webView;
    ADCountdownButton *_dismissButton;
    NSURL *_URL;
    _WKRemoteObjectInterface *_remoteObjectInterface;
    ADWebViewGestureRecognizer *_gestureRecognizer;
    NSString *_creativeIdentifier;
    ADHomeButtonHandler *_homeButtonHandler;
    struct CGSize _maximumExpandedSize;
}

@property (copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (nonatomic) BOOL adIsDismissing; // @synthesize adIsDismissing=_adIsDismissing;
@property (nonatomic) BOOL browserContextControllerDidLoad; // @synthesize browserContextControllerDidLoad=_browserContextControllerDidLoad;
@property (copy, nonatomic) NSString *creativeIdentifier; // @synthesize creativeIdentifier=_creativeIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) ADCountdownButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property (strong, nonatomic) ADWebViewGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) ADHomeButtonHandler *homeButtonHandler; // @synthesize homeButtonHandler=_homeButtonHandler;
@property (nonatomic) struct CGSize maximumExpandedSize; // @synthesize maximumExpandedSize=_maximumExpandedSize;
@property (strong, nonatomic) _WKRemoteObjectInterface *remoteObjectInterface; // @synthesize remoteObjectInterface=_remoteObjectInterface;
@property (nonatomic) BOOL shouldBlockNavigation; // @synthesize shouldBlockNavigation=_shouldBlockNavigation;
@property (readonly) Class superclass;
@property (nonatomic) BOOL tapWasRecognized; // @synthesize tapWasRecognized=_tapWasRecognized;
@property (nonatomic, getter=isVisible) BOOL visible; // @synthesize visible=_visible;
@property (strong, nonatomic) ADWebView *webView; // @synthesize webView=_webView;
@property (readonly, nonatomic) struct CGRect webViewFrame;

- (void)_dismissButtonTapped;
- (void)_dismissKeyboard;
- (void)_dismissWithSystemEvent:(int)arg1;
- (id)_incrementCreativeIdentifier;
- (BOOL)_navigationIsBlocked;
- (void)_registerExportedObjectInterface;
- (void)_requestOpenURL:(id)arg1;
- (void)_resetGestureFlags;
- (void)_tapRecognized:(id)arg1;
- (void)_unregisterExportedObjectInterface;
- (void)_updateJSOExpandedSize;
- (void)_updateWebViewFrame;
- (void)clientApplicationDidEnterBackground;
- (void)dealloc;
- (void)didSetAdSpace;
- (void)dismiss;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)webProcessMRAIDJSODidCallClose;
- (void)webProcessMRAIDJSODidCallExpand:(id)arg1 withMaximumSize:(id)arg2;
- (void)webProcessMRAIDJSODidCallOpen:(id)arg1;
- (void)webProcessPlugInBrowserContextControllerGlobalObjectIsAvailableForFrame;
- (void)webProcessPlugInDidCreateBrowserContextController;
- (void)webProcessPlugInWillDestroyBrowserContextController;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;

@end

