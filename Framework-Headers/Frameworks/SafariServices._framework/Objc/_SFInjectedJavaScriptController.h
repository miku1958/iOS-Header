//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WKWebView;
@protocol SFInjectedJavaScriptWebProcessController;

@interface _SFInjectedJavaScriptController : NSObject
{
    WKWebView *_webView;
    id<SFInjectedJavaScriptWebProcessController> _activityProxy;
}

- (void).cxx_destruct;
- (id)_webProcessActivityProxy;
- (id)initWithWebView:(id)arg1;
- (void)runJavaScriptForActivity:(id)arg1 withScript:(id)arg2 object:(id)arg3 invokeMethod:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end

