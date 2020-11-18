//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/_SFAdaptivePreviewViewControllerDelegate-Protocol.h>

@class NSString, NSURL, UIViewController, WBSAppLink, WKWebView, _SFLinkPreviewHeader, _WKActivatedElementInfo;
@protocol _SFLinkPreviewHandler;

@interface _SFLinkPreviewHelper : NSObject <_SFAdaptivePreviewViewControllerDelegate>
{
    WBSAppLink *_appLink;
    UIViewController *_cachedPreviewViewController;
    NSURL *_fallbackURL;
    id<_SFLinkPreviewHandler> _handler;
    _WKActivatedElementInfo *_elementInfo;
    WKWebView *_webView;
    _SFLinkPreviewHeader *_activeLinkPreviewHeader;
}

@property (weak, nonatomic) _SFLinkPreviewHeader *activeLinkPreviewHeader; // @synthesize activeLinkPreviewHeader=_activeLinkPreviewHeader;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) _WKActivatedElementInfo *elementInfo; // @synthesize elementInfo=_elementInfo;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIViewController *previewContentViewController;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) WKWebView *webView; // @synthesize webView=_webView;

+ (void)commitPreviewViewController:(id)arg1;
+ (id)contextMenuConfigurationForWebView:(id)arg1 elementInfo:(id)arg2 handler:(id)arg3;
+ (void)initialize;
+ (void)invalidateLinkPreviewHelperForWebView:(id)arg1;
+ (id)linkPreviewHelperForWebView:(id)arg1;
+ (CDUnknownBlockType)openInNewTabAnalyticsHandler;
+ (id)previewViewControllerWebView:(id)arg1 url:(id)arg2 handler:(id)arg3;
+ (void)setOpenInNewTabAnalyticsHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (BOOL)_previewViewControllerIsLinkPreview;
- (id)adaptivePreviewViewController:(id)arg1 requestLinkPreviewViewControllerWithURL:(id)arg2;
- (id)addToReadingListActionForURL:(id)arg1;
- (void)commitPreviewViewController;
- (void)dealloc;
- (id)downloadActionForURL:(id)arg1;
- (double)headerViewHeightForAdaptivePreviewViewController:(id)arg1;
- (id)initWithWebView:(id)arg1 elementInfo:(id)arg2 orURL:(id)arg3 handler:(id)arg4;
- (void)invalidate;
- (void)invalidateElementInfo;
- (id)makeContextMenuConfiguration;
- (id)makePreviewViewController;
- (id)menuElementsForSuggestedActions:(id)arg1;
- (id)menuWithSuggestedActions:(id)arg1;
- (id)openActionForAlternateURL:(id)arg1;
- (id)openActionForRedirectToExternalNavigationResult:(id)arg1;
- (id)openInNewTabActionForURL:(id)arg1 preActionHandler:(CDUnknownBlockType)arg2;
- (id)openInNewWindowActionForURL:(id)arg1;
- (void)openURL:(id)arg1 forAction:(long long)arg2;
- (id)previewViewController;
- (id)previewViewControllerForURL:(id)arg1;

@end
