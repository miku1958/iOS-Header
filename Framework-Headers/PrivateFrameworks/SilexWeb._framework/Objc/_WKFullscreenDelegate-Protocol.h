//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SilexWeb/NSObject-Protocol.h>

@class WKWebView;

@protocol _WKFullscreenDelegate <NSObject>

@optional
- (void)_webViewDidEnterElementFullscreen:(WKWebView *)arg1;
- (void)_webViewDidExitElementFullscreen:(WKWebView *)arg1;
- (void)_webViewWillEnterElementFullscreen:(WKWebView *)arg1;
- (void)_webViewWillExitElementFullscreen:(WKWebView *)arg1;
@end
