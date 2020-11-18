//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKQuantity, NSDateComponents, NSNumber;

@interface HKSHGoalProgress : NSObject
{
    long long _sleepAnalysisAsleepCount;
    long long _sleepAnalysisInBedCount;
    long long _sleepAnalysisCount;
    HKQuantity *_averageSleepDuration;
    HKQuantity *_averageInBedDuration;
    long long _bedtimeAchievedCount;
    long long _sleepDurationGoalAchievedCount;
    long long _sleepDurationGoalStreakCount;
    HKQuantity *_averageBedtimeMiss;
    HKQuantity *_averageSleepDurationGoalMiss;
    NSDateComponents *_averageBedtime;
    NSDateComponents *_averageWakeTime;
    NSDateComponents *_averageSleepStartTime;
    NSDateComponents *_averageSleepEndTime;
    NSNumber *_standardDeviationActualTimeAsleep;
    NSNumber *_standardDeviationScheduledTimeAsleep;
    NSNumber *_standardDeviationActualVsScheduledTimeAsleep;
    CDStruct_ef5fcbe6 _morningIndexRange;
}

@property (readonly, copy, nonatomic) NSDateComponents *averageBedtime; // @synthesize averageBedtime=_averageBedtime;
@property (readonly, copy, nonatomic) HKQuantity *averageBedtimeMiss; // @synthesize averageBedtimeMiss=_averageBedtimeMiss;
@property (readonly, copy, nonatomic) HKQuantity *averageInBedDuration; // @synthesize averageInBedDuration=_averageInBedDuration;
@property (readonly, copy, nonatomic) HKQuantity *averageSleepDuration; // @synthesize averageSleepDuration=_averageSleepDuration;
@property (readonly, copy, nonatomic) HKQuantity *averageSleepDurationGoalMiss; // @synthesize averageSleepDurationGoalMiss=_averageSleepDurationGoalMiss;
@property (readonly, copy, nonatomic) NSDateComponents *averageSleepEndTime; // @synthesize averageSleepEndTime=_averageSleepEndTime;
@property (readonly, copy, nonatomic) NSDateComponents *averageSleepStartTime; // @synthesize averageSleepStartTime=_averageSleepStartTime;
@property (readonly, copy, nonatomic) NSDateComponents *averageWakeTime; // @synthesize averageWakeTime=_averageWakeTime;
@property (readonly, nonatomic) long long bedtimeAchievedCount; // @synthesize bedtimeAchievedCount=_bedtimeAchievedCount;
@property (readonly, nonatomic) CDStruct_ef5fcbe6 morningIndexRange; // @synthesize morningIndexRange=_morningIndexRange;
@property (readonly, nonatomic) long long sleepAnalysisAsleepCount; // @synthesize sleepAnalysisAsleepCount=_sleepAnalysisAsleepCount;
@property (readonly, nonatomic) long long sleepAnalysisCount; // @synthesize sleepAnalysisCount=_sleepAnalysisCount;
@property (readonly, nonatomic) long long sleepAnalysisInBedCount; // @synthesize sleepAnalysisInBedCount=_sleepAnalysisInBedCount;
@property (readonly, nonatomic) long long sleepDurationGoalAchievedCount; // @synthesize sleepDurationGoalAchievedCount=_sleepDurationGoalAchievedCount;
@property (readonly, nonatomic) long long sleepDurationGoalStreakCount; // @synthesize sleepDurationGoalStreakCount=_sleepDurationGoalStreakCount;
@property (readonly, copy, nonatomic) NSNumber *standardDeviationActualTimeAsleep; // @synthesize standardDeviationActualTimeAsleep=_standardDeviationActualTimeAsleep;
@property (readonly, copy, nonatomic) NSNumber *standardDeviationActualVsScheduledTimeAsleep; // @synthesize standardDeviationActualVsScheduledTimeAsleep=_standardDeviationActualVsScheduledTimeAsleep;
@property (readonly, copy, nonatomic) NSNumber *standardDeviationScheduledTimeAsleep; // @synthesize standardDeviationScheduledTimeAsleep=_standardDeviationScheduledTimeAsleep;

+ (id)goalProgressWithMorningIndexRange:(CDStruct_ef5fcbe6)arg1 sleepAnalysisAsleepCount:(long long)arg2 sleepAnalysisInBedCount:(long long)arg3 sleepAnalysisCount:(long long)arg4 averageSleepDuration:(id)arg5 averageInBedDuration:(id)arg6 bedtimeAchievedCount:(long long)arg7 sleepDurationGoalAchievedCount:(long long)arg8 sleepDurationGoalStreakCount:(long long)arg9 averageBedtimeMiss:(id)arg10 averageSleepDurationGoalMiss:(id)arg11 averageBedtime:(id)arg12 averageWakeTime:(id)arg13 averageSleepStartTime:(id)arg14 averageSleepEndTime:(id)arg15 standardDeviationActualTimeAsleep:(id)arg16 standardDeviationScheduledTimeAsleep:(id)arg17 standardDeviationActualVsScheduledTimeAsleep:(id)arg18;
- (void).cxx_destruct;

@end
