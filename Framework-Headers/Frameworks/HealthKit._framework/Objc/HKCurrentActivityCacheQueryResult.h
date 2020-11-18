//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKActivityCache, NSArray;

@interface HKCurrentActivityCacheQueryResult : NSObject <NSSecureCoding>
{
    HKActivityCache *_currentActivityCache;
    NSArray *_activeEnergyResults;
    NSArray *_appleMoveTimeResults;
    NSArray *_appleExerciseTimeResults;
    NSArray *_appleStandHourResults;
}

@property (copy, nonatomic) NSArray *activeEnergyResults; // @synthesize activeEnergyResults=_activeEnergyResults;
@property (copy, nonatomic) NSArray *appleExerciseTimeResults; // @synthesize appleExerciseTimeResults=_appleExerciseTimeResults;
@property (copy, nonatomic) NSArray *appleMoveTimeResults; // @synthesize appleMoveTimeResults=_appleMoveTimeResults;
@property (copy, nonatomic) NSArray *appleStandHourResults; // @synthesize appleStandHourResults=_appleStandHourResults;
@property (strong, nonatomic) HKActivityCache *currentActivityCache; // @synthesize currentActivityCache=_currentActivityCache;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
