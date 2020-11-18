//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class GEOAlightNotificationFeedback, MNTransitScheduleTracker;

@protocol MNTransitScheduleTrackerDelegate <NSObject>
- (void)transitScheduleTracker:(MNTransitScheduleTracker *)arg1 didSignalAlightForStepAtIndex:(unsigned long long)arg2;
- (void)transitScheduleTracker:(MNTransitScheduleTracker *)arg1 didUpdateFeedback:(GEOAlightNotificationFeedback *)arg2 forAlightingStepAtIndex:(unsigned long long)arg3;

@optional
- (void)transitScheduleTracker:(MNTransitScheduleTracker *)arg1 didArriveAtStepIndex:(unsigned long long)arg2;
- (void)transitScheduleTracker:(MNTransitScheduleTracker *)arg1 willArriveAtStepIndex:(unsigned long long)arg2 inTimeInterval:(double)arg3;
@end
