//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NTPBSession;
@protocol NSSNewsAnalyticsSessionManagerObserving;

@protocol NSSNewsAnalyticsSessionManager

@property (nonatomic, readonly) NTPBSession *currentSession;

- (void)addObserver:(id<NSSNewsAnalyticsSessionManagerObserving>)arg1;
@end
