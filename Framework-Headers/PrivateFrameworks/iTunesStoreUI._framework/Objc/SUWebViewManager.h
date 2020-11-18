//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/SUScriptInterfaceDelegate-Protocol.h>
#import <iTunesStoreUI/UIWebViewDelegate-Protocol.h>
#import <iTunesStoreUI/WebFrameLoadDelegate-Protocol.h>
#import <iTunesStoreUI/WebPolicyDelegate-Protocol.h>
#import <iTunesStoreUI/WebResourceLoadDelegate-Protocol.h>
#import <iTunesStoreUI/WebUIDelegate-Protocol.h>

@class ISURLRequestPerformance, NSLock, NSMapTable, NSMutableSet, NSSet, NSString, SSAuthenticationContext, SUClientInterface, SUScriptWindowContext, UIWebView;
@protocol SUWebViewManagerDelegate;

@interface SUWebViewManager : NSObject <SUScriptInterfaceDelegate, WebFrameLoadDelegate, WebPolicyDelegate, WebResourceLoadDelegate, WebUIDelegate, UIWebViewDelegate>
{
    SSAuthenticationContext *_authenticationContext;
    SUClientInterface *_clientInterface;
    id<SUWebViewManagerDelegate> _delegate;
    ISURLRequestPerformance *_initialRequestPerformance;
    NSLock *_lock;
    long long _modalAlertClickedIndex;
    id _originalFrameLoadDelegate;
    id _originalPolicyDelegate;
    id _originalResourceLoadDelegate;
    id _originalUIDelegate;
    NSMutableSet *_requireCellularURLs;
    NSMapTable *_scriptInterfaces;
    SUScriptWindowContext *_scriptWindowContext;
    NSSet *_suppressCookiesHosts;
    long long _usingNetworkCount;
    struct __CFSet *_webFramesPendingInitialRequest;
    UIWebView *_webView;
}

@property (copy, nonatomic) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<SUWebViewManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) ISURLRequestPerformance *initialRequestPerformance; // @synthesize initialRequestPerformance=_initialRequestPerformance;
@property (strong, nonatomic) id originalFrameLoadDelegate; // @synthesize originalFrameLoadDelegate=_originalFrameLoadDelegate;
@property (strong, nonatomic) id originalPolicyDelegate; // @synthesize originalPolicyDelegate=_originalPolicyDelegate;
@property (strong, nonatomic) id originalResourceLoadDelegate; // @synthesize originalResourceLoadDelegate=_originalResourceLoadDelegate;
@property (strong, nonatomic) id originalUIDelegate; // @synthesize originalUIDelegate=_originalUIDelegate;
@property (strong, nonatomic) SUScriptWindowContext *scriptWindowContext; // @synthesize scriptWindowContext=_scriptWindowContext;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIWebView *webView; // @synthesize webView=_webView;

+ (id)defaultLocalStoragePath;
- (id)DOMElementForScriptInterface:(id)arg1 element:(id)arg2;
- (void)_beginUsingNetwork;
- (void)_cancelUsingNetwork;
- (id)_delegate;
- (void)_endUsingNetwork;
- (void)_enumerateScriptInterfacesWithBlock:(CDUnknownBlockType)arg1;
- (id)_newAlertWithMessage:(id)arg1;
- (id)_userIdentifier;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)connectToWebView:(id)arg1;
- (void)dealloc;
- (void)disconnectFromWebView;
- (void)dispatchEvent:(id)arg1 forName:(id)arg2;
- (void)dispatchEvent:(id)arg1 forName:(id)arg2 synchronously:(BOOL)arg3;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)initWithClientInterface:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)parentViewControllerForScriptInterface:(id)arg1;
- (id)performanceMetricsForScriptInterface:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)scriptInterface:(id)arg1 requireCellularForResourceWithURL:(id)arg2;
- (id)uiWebView:(id)arg1 connectionPropertiesForResource:(id)arg2 dataSource:(id)arg3;
- (void)uiWebView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (id)uiWebView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (void)uiWebView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (void)uiWebView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (id)webThreadWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didParseSource:(id)arg2 fromURL:(id)arg3 sourceId:(long long)arg4 forWebFrame:(id)arg5;
- (void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 documentViewDidSetFrame:(struct CGRect)arg2;
- (void)webView:(id)arg1 exceptionWasRaised:(id)arg2 sourceId:(long long)arg3 line:(int)arg4 forWebFrame:(id)arg5;
- (void)webView:(id)arg1 failedToParseSource:(id)arg2 baseLineNumber:(unsigned long long)arg3 fromURL:(id)arg4 withError:(id)arg5 forWebFrame:(id)arg6;
- (void)webView:(id)arg1 resource:(id)arg2 didReceiveResponse:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (BOOL)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;

@end
