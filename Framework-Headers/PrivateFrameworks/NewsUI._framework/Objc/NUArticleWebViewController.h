//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NewsUI/NULoadable-Protocol.h>
#import <NewsUI/UIScrollViewDelegate-Protocol.h>
#import <NewsUI/WKNavigationDelegatePrivate-Protocol.h>

@class NSString, SWCrashRetryThrottler, WKWebView;
@protocol FCHeadlineProviding, NULoadingDelegate;

@interface NUArticleWebViewController : UIViewController <UIScrollViewDelegate, WKNavigationDelegatePrivate, NULoadable>
{
    id<NULoadingDelegate> _loadingDelegate;
    id<FCHeadlineProviding> _headline;
    WKWebView *_webView;
    SWCrashRetryThrottler *_webCrashRetryThrottler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<FCHeadlineProviding> headline; // @synthesize headline=_headline;
@property (weak, nonatomic) id<NULoadingDelegate> loadingDelegate; // @synthesize loadingDelegate=_loadingDelegate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SWCrashRetryThrottler *webCrashRetryThrottler; // @synthesize webCrashRetryThrottler=_webCrashRetryThrottler;
@property (readonly, nonatomic) WKWebView *webView; // @synthesize webView=_webView;

+ (id)webViewConfiguration;
- (void).cxx_destruct;
- (void)_webView:(id)arg1 renderingProgressDidChange:(unsigned long long)arg2;
- (void)_webViewWebProcessDidCrash:(id)arg1;
- (void)dealloc;
- (id)initWithHeadline:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewForZoomingInScrollView:(id)arg1;

@end

