//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/WKUIDelegate-Protocol.h>

@class NSArray, NSURL, UIScrollView, UIViewController, WKSecurityOrigin, WKWebView, _WKActivatedElementInfo, _WKFrameHandle;

@protocol WKUIDelegatePrivate <WKUIDelegate>

@optional
- (NSArray *)_webView:(WKWebView *)arg1 actionsForElement:(_WKActivatedElementInfo *)arg2 defaultActions:(NSArray *)arg3;
- (void)_webView:(WKWebView *)arg1 commitPreviewedImageWithURL:(NSURL *)arg2;
- (void)_webView:(WKWebView *)arg1 commitPreviewedViewController:(UIViewController *)arg2;
- (void)_webView:(WKWebView *)arg1 decideDatabaseQuotaForSecurityOrigin:(WKSecurityOrigin *)arg2 currentQuota:(unsigned long long)arg3 currentOriginUsage:(unsigned long long)arg4 currentDatabaseUsage:(unsigned long long)arg5 expectedUsage:(unsigned long long)arg6 decisionHandler:(void (^)(unsigned long long))arg7;
- (void)_webView:(WKWebView *)arg1 decideWebApplicationCacheQuotaForSecurityOrigin:(WKSecurityOrigin *)arg2 currentQuota:(unsigned long long)arg3 totalBytesNeeded:(unsigned long long)arg4 decisionHandler:(void (^)(unsigned long long))arg5;
- (void)_webView:(WKWebView *)arg1 didDismissPreviewViewController:(UIViewController *)arg2;
- (void)_webView:(WKWebView *)arg1 didDismissPreviewViewController:(UIViewController *)arg2 committing:(BOOL)arg3;
- (void)_webView:(WKWebView *)arg1 didNotHandleTapAsClickAtPoint:(struct CGPoint)arg2;
- (struct UIEdgeInsets)_webView:(WKWebView *)arg1 finalObscuredInsetsForScrollView:(UIScrollView *)arg2 withVelocity:(struct CGPoint)arg3 targetContentOffset:(inout struct CGPoint *)arg4;
- (void)_webView:(WKWebView *)arg1 mediaDocumentNaturalSizeChanged:(struct CGSize)arg2;
- (UIViewController *)_webView:(WKWebView *)arg1 previewViewControllerForAnimatedImageAtURL:(NSURL *)arg2 defaultActions:(NSArray *)arg3 elementInfo:(_WKActivatedElementInfo *)arg4 imageSize:(struct CGSize)arg5;
- (UIViewController *)_webView:(WKWebView *)arg1 previewViewControllerForURL:(NSURL *)arg2;
- (UIViewController *)_webView:(WKWebView *)arg1 previewViewControllerForURL:(NSURL *)arg2 defaultActions:(NSArray *)arg3 elementInfo:(_WKActivatedElementInfo *)arg4;
- (void)_webView:(WKWebView *)arg1 printFrame:(_WKFrameHandle *)arg2;
- (BOOL)_webView:(WKWebView *)arg1 shouldIncludeAppLinkActionsForElement:(_WKActivatedElementInfo *)arg2;
- (BOOL)_webView:(WKWebView *)arg1 shouldRequestGeolocationAuthorizationForURL:(NSURL *)arg2 isMainFrame:(BOOL)arg3 mainFrameURL:(NSURL *)arg4;
- (void)_webView:(WKWebView *)arg1 willPreviewImageWithURL:(NSURL *)arg2;
- (void)_webViewClose:(WKWebView *)arg1;
- (void)_webViewDidEnterFullscreen:(WKWebView *)arg1;
- (void)_webViewDidExitFullscreen:(WKWebView *)arg1;
- (void)_webViewFullscreenMayReturnToInline:(WKWebView *)arg1;
@end

