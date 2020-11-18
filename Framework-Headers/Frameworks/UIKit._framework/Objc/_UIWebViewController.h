//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, UIBarButtonItem, _UIAsyncInvocation, _UIQueueingServiceWebViewControllerProxy, _UIRemoteWebViewController;
@protocol _UIWebViewControllerDelegate;

@interface _UIWebViewController : UIViewController
{
    _UIAsyncInvocation *_cancelViewServiceRequest;
    _UIRemoteWebViewController *_remoteViewController;
    _UIQueueingServiceWebViewControllerProxy *_serviceProxy;
    BOOL _hasCalledBeginAppearanceTransition;
    BOOL _hasCalledEndAppearanceTransition;
    BOOL _canGoBack;
    BOOL _canGoForward;
    BOOL _loading;
    float _estimatedProgress;
    id<_UIWebViewControllerDelegate> _delegate;
    UIBarButtonItem *_backBarButtonItem;
    UIBarButtonItem *_forwardBarButtonItem;
    NSString *_pageTitle;
    NSString *_URLString;
}

@property (copy, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
@property (readonly, strong, nonatomic) UIBarButtonItem *backBarButtonItem; // @synthesize backBarButtonItem=_backBarButtonItem;
@property (readonly, nonatomic) BOOL canGoBack; // @synthesize canGoBack=_canGoBack;
@property (readonly, nonatomic) BOOL canGoForward; // @synthesize canGoForward=_canGoForward;
@property (nonatomic) id<_UIWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) float estimatedProgress; // @synthesize estimatedProgress=_estimatedProgress;
@property (readonly, strong, nonatomic) UIBarButtonItem *forwardBarButtonItem; // @synthesize forwardBarButtonItem=_forwardBarButtonItem;
@property (readonly, nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property (readonly, copy, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;

- (void)_addRemoteView;
- (void)_connectToService;
- (void)_decidePolicyForEncodedRequest:(id)arg1 inMainFrame:(BOOL)arg2 navigationType:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (void)_dispatchDidDismissViewController;
- (void)_dispatchWillPresentViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_sendBeginAppearanceTransitionIfReadyAnimated:(BOOL)arg1;
- (void)_sendEndAppearanceTransitionIfReady;
- (void)_setCanGoBack:(BOOL)arg1 canGoForward:(BOOL)arg2;
- (void)_setEstimatedProgress:(float)arg1;
- (void)_setLoading:(BOOL)arg1 error:(id)arg2;
- (void)_setTitle:(id)arg1;
- (void)_setURLString:(id)arg1;
- (void)_updateBarButtonItems;
- (void)_webContentSizeWithReplyHandler:(CDUnknownBlockType)arg1;
- (void)configureWithSettings:(id)arg1;
- (void)dealloc;
- (void)goBack;
- (void)goForward;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadRequest:(id)arg1;
- (void)loadView;
- (void)queueingServiceProxy:(id)arg1 willQueueInvocation:(id)arg2;
- (void)reload;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)stopLoading;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

