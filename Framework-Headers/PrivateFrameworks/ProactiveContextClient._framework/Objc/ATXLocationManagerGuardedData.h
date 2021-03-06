//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ATXLocationManagerState, CLLocation, NSDate;

@interface ATXLocationManagerGuardedData : NSObject
{
    CLLocation *currentLocation;
    unsigned long long currentRoutineMode;
    ATXLocationManagerState *state;
    NSDate *lastLOIUpdateTimestamp;
    NSDate *lastRoutineModeTimestamp;
    NSDate *lastPredictedLOIsUpdateTimestamp;
    NSDate *lastPredictedExitTimesUpdateTimestamp;
}

- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end

