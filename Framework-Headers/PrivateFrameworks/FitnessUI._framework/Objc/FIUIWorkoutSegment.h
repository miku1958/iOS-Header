//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKQuantity, NSDate;

@interface FIUIWorkoutSegment : NSObject
{
    NSDate *_startDate;
    NSDate *_endDate;
    HKQuantity *_activeEnergy;
    HKQuantity *_distance;
    double _elapsedTime;
}

@property (strong, nonatomic) HKQuantity *activeEnergy; // @synthesize activeEnergy=_activeEnergy;
@property (strong, nonatomic) HKQuantity *distance; // @synthesize distance=_distance;
@property (nonatomic) double elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property (copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;

+ (id)_decimalNumberFormatter;
- (void).cxx_destruct;
- (id)description;
- (id)formattedActiveEnergyValueForUnit:(id)arg1;
- (id)formattedDistanceValueForUnit:(id)arg1;
- (id)formattedDurationValueWithFormattingManager:(id)arg1;
- (id)formattedPaceUsingFormatType:(long long)arg1 formattingManager:(id)arg2;

@end

