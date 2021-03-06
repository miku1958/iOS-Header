//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WebInspectorFrontend, WebView;

@interface WebInspector : NSObject
{
    WebView *_inspectedWebView;
    WebInspectorFrontend *_frontend;
}

@property (readonly, nonatomic, getter=isOpen) BOOL open;

- (void)attach:(id)arg1;
- (void)close:(id)arg1;
- (void)dealloc;
- (void)detach:(id)arg1;
- (void)evaluateInFrontend:(id)arg1 script:(id)arg2;
- (id)initWithInspectedWebView:(id)arg1;
- (void)inspectedWebViewClosed;
- (BOOL)isDebuggingJavaScript;
- (BOOL)isJavaScriptProfilingEnabled;
- (BOOL)isProfilingJavaScript;
- (BOOL)isTimelineProfilingEnabled;
- (void)releaseFrontend;
- (void)setFrontend:(id)arg1;
- (void)setJavaScriptProfilingEnabled:(BOOL)arg1;
- (void)setTimelineProfilingEnabled:(BOOL)arg1;
- (void)show:(id)arg1;
- (void)showConsole:(id)arg1;
- (void)showWindow;
- (void)startDebuggingJavaScript:(id)arg1;
- (void)startProfilingJavaScript:(id)arg1;
- (void)stopDebuggingJavaScript:(id)arg1;
- (void)stopProfilingJavaScript:(id)arg1;
- (void)toggleDebuggingJavaScript:(id)arg1;
- (void)toggleProfilingJavaScript:(id)arg1;

@end

