//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WKNavigationAction, WKWebView;

@interface _SFSyntheticClickContext : NSObject
{
    WKWebView *_webView;
    WKNavigationAction *_navigationAction;
}

@property (readonly, nonatomic) WKNavigationAction *navigationAction; // @synthesize navigationAction=_navigationAction;
@property (readonly, nonatomic) WKWebView *webView; // @synthesize webView=_webView;

- (void).cxx_destruct;
- (id)initWithWebView:(id)arg1 navigationAction:(id)arg2;

@end

