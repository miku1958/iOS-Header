//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/RequestDesktopSiteUIProcessListener-Protocol.h>
#import <SafariServices/SFContentBlockerManagerObserver-Protocol.h>

@class NSMutableSet, NSString, WBUInjectedJavaScriptController, WKWebView, _WKRemoteObjectInterface;
@protocol RequestDesktopSiteWebProcessPlugInListener;

@interface _SFReloadOptionsController : NSObject <RequestDesktopSiteUIProcessListener, SFContentBlockerManagerObserver>
{
    _WKRemoteObjectInterface *_requestDesktopSiteUIProcessPlugInListenerInterface;
    id<RequestDesktopSiteWebProcessPlugInListener> _requestDesktopSiteWebProcessPlugInListener;
    NSMutableSet *_domainsNeedingDesktopUserAgent;
    WKWebView *_webView;
    BOOL _hasEnabledContentBlockers;
    WBUInjectedJavaScriptController *_activityJSController;
}

@property (readonly, nonatomic) WBUInjectedJavaScriptController *activityJSController; // @synthesize activityJSController=_activityJSController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasEnabledContentBlockers; // @synthesize hasEnabledContentBlockers=_hasEnabledContentBlockers;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL loadedUsingDesktopUserAgent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_checkForContentBlockers;
- (void)contentBlockerManagerExtensionListDidChange:(id)arg1;
- (void)dealloc;
- (void)didMarkURLAsNeedingDesktopUserAgent:(id)arg1;
- (id)init;
- (id)initWithWebView:(id)arg1 activityJSController:(id)arg2;
- (void)invalidate;
- (void)requestDesktopSite;
- (void)requestDesktopSiteWithURL:(id)arg1;

@end

