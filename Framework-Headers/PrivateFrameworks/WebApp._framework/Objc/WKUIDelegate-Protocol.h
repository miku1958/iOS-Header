//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebApp/NSObject-Protocol.h>

@class NSString, WKFrameInfo, WKNavigationAction, WKWebView, WKWebViewConfiguration, WKWindowFeatures;

@protocol WKUIDelegate <NSObject>

@optional
- (WKWebView *)webView:(WKWebView *)arg1 createWebViewWithConfiguration:(WKWebViewConfiguration *)arg2 forNavigationAction:(WKNavigationAction *)arg3 windowFeatures:(WKWindowFeatures *)arg4;
- (void)webView:(WKWebView *)arg1 runJavaScriptAlertPanelWithMessage:(NSString *)arg2 initiatedByFrame:(WKFrameInfo *)arg3 completionHandler:(void (^)(void))arg4;
- (void)webView:(WKWebView *)arg1 runJavaScriptConfirmPanelWithMessage:(NSString *)arg2 initiatedByFrame:(WKFrameInfo *)arg3 completionHandler:(void (^)(BOOL))arg4;
- (void)webView:(WKWebView *)arg1 runJavaScriptTextInputPanelWithPrompt:(NSString *)arg2 defaultText:(NSString *)arg3 initiatedByFrame:(WKFrameInfo *)arg4 completionHandler:(void (^)(NSString *))arg5;
- (void)webViewDidClose:(WKWebView *)arg1;
@end
