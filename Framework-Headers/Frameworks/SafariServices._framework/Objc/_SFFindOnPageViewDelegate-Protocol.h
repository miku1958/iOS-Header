//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSString, WKWebView, _SFFindOnPageView;

@protocol _SFFindOnPageViewDelegate <NSObject>

@optional
- (void)updateFindCompletionProviderWithMatchesCount:(unsigned long long)arg1 forString:(NSString *)arg2 forFindOnPageView:(_SFFindOnPageView *)arg3;
- (void)visibilityWillChangeForFindOnPageView:(_SFFindOnPageView *)arg1;
- (WKWebView *)webViewForFindOnPageView:(_SFFindOnPageView *)arg1;
@end

