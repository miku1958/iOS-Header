//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSObject, NSString, UITextSuggestion, WKWebView;
@protocol NSSecureCoding, _WKFocusedElementInfo, _WKFormInputSession;

@protocol _WKInputDelegate <NSObject>

@optional
- (void)_webView:(WKWebView *)arg1 accessoryViewCustomButtonTappedInFormInputSession:(id<_WKFormInputSession>)arg2;
- (void)_webView:(WKWebView *)arg1 didStartInputSession:(id<_WKFormInputSession>)arg2;
- (BOOL)_webView:(WKWebView *)arg1 focusShouldStartInputSession:(id<_WKFocusedElementInfo>)arg2;
- (BOOL)_webView:(WKWebView *)arg1 hasSuggestionsForCurrentStringInInputSession:(id<_WKFormInputSession>)arg2;
- (void)_webView:(WKWebView *)arg1 insertTextSuggestion:(UITextSuggestion *)arg2 inInputSession:(id<_WKFormInputSession>)arg3;
- (NSArray *)_webView:(WKWebView *)arg1 suggestionsForString:(NSString *)arg2 inInputSession:(id<_WKFormInputSession>)arg3;
- (void)_webView:(WKWebView *)arg1 willSubmitFormValues:(NSDictionary *)arg2 userObject:(NSObject<NSSecureCoding> *)arg3 submissionHandler:(void (^)(void))arg4;
@end

