//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSSiteMetadataFetchOperation.h>

#import <SafariShared/WKNavigationDelegate-Protocol.h>

@class NSString, WKWebView, WKWebViewConfiguration;
@protocol WBSWebViewMetadataFetchOperationDelegate;

@interface WBSWebViewMetadataFetchOperation : WBSSiteMetadataFetchOperation <WKNavigationDelegate>
{
    id<WBSWebViewMetadataFetchOperationDelegate> _delegate;
    WKWebView *_webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WBSWebViewMetadataFetchOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property (readonly, nonatomic) WKWebViewConfiguration *webViewConfiguration;
@property (readonly, nonatomic) struct CGSize webViewSize;

- (void).cxx_destruct;
- (void)_webViewWebProcessDidCrash:(id)arg1;
- (void)cancel;
- (void)clearWebView;
- (void)dealloc;
- (void)didCreateWebView;
- (void)didFailFetch;
- (void)setUpWebViewIfNeeded;
- (void)start;
- (void)startOffscreenFetching;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)willClearWebView;

@end
