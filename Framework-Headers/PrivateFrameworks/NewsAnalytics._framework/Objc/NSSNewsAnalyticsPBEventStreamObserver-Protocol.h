//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NTPBEvent;

@protocol NSSNewsAnalyticsPBEventStreamObserver
- (void)observeEvent:(NTPBEvent *)arg1;
- (void)observeEvents:(NSArray *)arg1;

@optional
- (void)observeAppAnalyticsEvent:(NTPBEvent *)arg1;
@end

