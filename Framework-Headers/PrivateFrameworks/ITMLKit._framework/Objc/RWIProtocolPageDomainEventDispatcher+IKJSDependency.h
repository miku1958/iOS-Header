//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolPageDomainEventDispatcher.h>

@interface RWIProtocolPageDomainEventDispatcher (IKJSDependency)
- (void)safe_defaultAppearanceDidChangeWithAppearance:(long long)arg1;
- (void)safe_domContentEventFiredWithTimestamp:(double)arg1;
- (void)safe_frameClearedScheduledNavigationWithFrameId:(id)arg1;
- (void)safe_frameDetachedWithFrameId:(id)arg1;
- (void)safe_frameNavigatedWithFrame:(id)arg1;
- (void)safe_frameScheduledNavigationWithFrameId:(id)arg1 delay:(double)arg2;
- (void)safe_frameStartedLoadingWithFrameId:(id)arg1;
- (void)safe_frameStoppedLoadingWithFrameId:(id)arg1;
- (void)safe_loadEventFiredWithTimestamp:(double)arg1;
@end
