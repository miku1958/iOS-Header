//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServicesUI/AMSUICommonView.h>

#import <AppleMediaServicesUI/AMSUIWebViewClientInterface-Protocol.h>
#import <AppleMediaServicesUI/WKNavigationDelegatePrivate-Protocol.h>
#import <AppleMediaServicesUI/WKUIDelegate-Protocol.h>

@class AMSBinaryPromise, AMSUIWebClientContext, DelegateProxy, NSArray, NSString, WKWebView, _WKRemoteObjectInterface;
@protocol AMSUIWebViewPluginInterface;

__attribute__((visibility("hidden")))
@interface AMSUIWebView : AMSUICommonView <AMSUIWebViewClientInterface, WKUIDelegate, WKNavigationDelegatePrivate>
{
    BOOL _contentLoaded;
    WKWebView *_underlyingWebView;
    NSArray *_baseScripts;
    AMSBinaryPromise *_contentRulesPromise;
    AMSUIWebClientContext *_context;
    AMSBinaryPromise *_currentLoadPromise;
    _WKRemoteObjectInterface *_exportedInterface;
    DelegateProxy *_exportedObjectProxy;
    id<AMSUIWebViewPluginInterface> _remoteProxy;
}

@property (strong, nonatomic) NSArray *baseScripts; // @synthesize baseScripts=_baseScripts;
@property (readonly, nonatomic) BOOL contentLoaded; // @synthesize contentLoaded=_contentLoaded;
@property (strong, nonatomic) AMSBinaryPromise *contentRulesPromise; // @synthesize contentRulesPromise=_contentRulesPromise;
@property (strong, nonatomic) AMSUIWebClientContext *context; // @synthesize context=_context;
@property (strong, nonatomic) AMSBinaryPromise *currentLoadPromise; // @synthesize currentLoadPromise=_currentLoadPromise;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) _WKRemoteObjectInterface *exportedInterface; // @synthesize exportedInterface=_exportedInterface;
@property (strong, nonatomic) DelegateProxy *exportedObjectProxy; // @synthesize exportedObjectProxy=_exportedObjectProxy;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<AMSUIWebViewPluginInterface> remoteProxy; // @synthesize remoteProxy=_remoteProxy;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WKWebView *underlyingWebView; // @synthesize underlyingWebView=_underlyingWebView;

+ (id)_sharedProcessPool;
- (void).cxx_destruct;
- (void)_addScriptsToContentController:(id)arg1 additionalScripts:(id)arg2;
- (id)_prepareWithURL:(id)arg1 loadBlock:(CDUnknownBlockType)arg2;
- (id)_setupContentRulesForWebView:(id)arg1 context:(id)arg2;
- (void)_unregisterProxies;
- (void)_webView:(id)arg1 contentRuleListWithIdentifier:(id)arg2 performedAction:(id)arg3 forURL:(id)arg4;
- (void)_webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 userInfo:(id)arg4;
- (void)_webView:(id)arg1 didFailToInitializePlugInWithInfo:(id)arg2;
- (void)_webView:(id)arg1 navigation:(id)arg2 didFailProvisionalLoadInSubframe:(id)arg3 withError:(id)arg4;
- (void)_webView:(id)arg1 navigation:(id)arg2 didSameDocumentNavigation:(long long)arg3;
- (void)_webView:(id)arg1 navigationDidFinishDocumentLoad:(id)arg2;
- (void)_webView:(id)arg1 webContentProcessDidTerminateWithReason:(long long)arg2;
- (void)dealloc;
- (void)frameFinishedLoading;
- (id)initWithContext:(id)arg1 additionalScripts:(id)arg2;
- (void)layoutSubviews;
- (id)loadHTML:(id)arg1 baseURL:(id)arg2;
- (id)loadRequest:(id)arg1;
- (void)receiveJSObject:(id)arg1 logKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)sendJSRequest:(id)arg1;
- (void)updateUserScriptsWithScripts:(id)arg1;
- (void)webPlugInDidCreateContext;
- (void)webPlugInWillDestroyContext;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;

@end
