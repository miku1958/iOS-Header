//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink;

__attribute__((visibility("hidden")))
@interface WebDisplayLinkHandler : NSObject
{
    struct DisplayRefreshMonitorIOS *m_monitor;
    CADisplayLink *m_displayLink;
}

- (void)dealloc;
- (void)handleDisplayLink:(id)arg1;
- (id)initWithMonitor:(struct DisplayRefreshMonitorIOS *)arg1;
- (void)invalidate;
- (void)setPreferredFramesPerSecond:(long long)arg1;

@end

