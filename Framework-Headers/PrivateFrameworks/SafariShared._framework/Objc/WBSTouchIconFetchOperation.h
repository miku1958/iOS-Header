//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSWebViewMetadataFetchOperation.h>

#import <SafariShared/WBSTouchIconObserver-Protocol.h>

@class NSArray, NSSet, NSString, NSTimer, _WKRemoteObjectInterface;

@interface WBSTouchIconFetchOperation : WBSWebViewMetadataFetchOperation <WBSTouchIconObserver>
{
    _WKRemoteObjectInterface *_touchIconObserverInterface;
    NSTimer *_loadingTimeoutTimer;
    NSArray *_pendingTouchIconURLs;
    NSSet *_touchIconURLs;
    long long _state;
    CDUnknownBlockType _completionHandler;
}

@property (readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_downloadFirstValidImageWithURLs:(id)arg1 failureHandler:(CDUnknownBlockType)arg2;
- (void)_downloadPendingTouchIconURLs;
- (void)_scheduleTimeoutWithTimeInterval:(double)arg1;
- (void)_setUpRemoteObjectProxies;
- (void)_tearDownRemoteObjectProxies;
- (void)clearWebView;
- (void)didCompleteWithResult:(id)arg1;
- (void)didCreateWebView;
- (void)didFailFetch;
- (void)didFetchTouchIconURLs:(id)arg1 andFaviconURLs:(id)arg2 forURL:(id)arg3;
- (id)initWithRequest:(id)arg1;
- (id)initWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)loadRequest;
- (void)resetState;
- (void)startOffscreenFetching;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (id)webViewConfiguration;
- (void)willClearWebView;

@end

