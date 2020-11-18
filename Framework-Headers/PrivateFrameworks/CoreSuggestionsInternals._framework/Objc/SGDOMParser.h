//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/WKNavigationDelegate-Protocol.h>

@class NSString, WKWebView;
@protocol OS_dispatch_semaphore;

@interface SGDOMParser : NSObject <WKNavigationDelegate>
{
    NSObject<OS_dispatch_semaphore> *_loadedSem;
    WKWebView *_webView;
    NSString *_html;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_parseDocument:(id)arg1;
- (id)parseHTML:(id)arg1;
- (void)runJavascriptOnWebView:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (id)webView;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;

@end
