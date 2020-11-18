//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebInspectorFrontend : NSObject
{
    struct WebInspectorFrontendClient *m_frontendClient;
}

- (void)attach;
- (void)detach;
- (id)initWithFrontendClient:(struct WebInspectorFrontendClient *)arg1;
- (BOOL)isDebuggingEnabled;
- (BOOL)isProfilingJavaScript;
- (BOOL)isTimelineProfilingEnabled;
- (void)setDebuggingEnabled:(BOOL)arg1;
- (void)setTimelineProfilingEnabled:(BOOL)arg1;
- (void)showConsole;
- (void)startProfilingJavaScript;
- (void)stopProfilingJavaScript;

@end
