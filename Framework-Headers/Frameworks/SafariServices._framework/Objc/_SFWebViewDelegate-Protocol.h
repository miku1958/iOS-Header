//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class _SFDownload, _SFWebView, _WKDownload;

@protocol _SFWebViewDelegate <NSObject>

@optional
- (_SFDownload *)sfWebView:(_SFWebView *)arg1 didStartDownload:(_WKDownload *)arg2;
- (void)sfWebViewDidBecomeFirstResponder:(_SFWebView *)arg1;
- (void)sfWebViewDidChangeSafeAreaInsets:(_SFWebView *)arg1;
- (void)sfWebViewDidEndFormControlInteraction:(_SFWebView *)arg1;
- (void)sfWebViewDidStartFormControlInteraction:(_SFWebView *)arg1;
@end
