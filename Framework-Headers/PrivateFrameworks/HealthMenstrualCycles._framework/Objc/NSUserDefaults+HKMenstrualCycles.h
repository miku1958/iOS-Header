//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSUserDefaults.h>

@interface NSUserDefaults (HKMenstrualCycles)

@property (readonly, nonatomic) BOOL hkmc_analyticsDebugModeEnabled;
@property (readonly, nonatomic) BOOL hkmc_calendarLogAdjacentDaysDisabled;
@property (readonly, nonatomic) BOOL hkmc_timelineLogAdjacentDaysEnabled;
@property (readonly, nonatomic) BOOL hkmc_timelineTapToLogDisabled;
@property (readonly, nonatomic) BOOL hkmc_useDemoCycles;

+ (id)hkmc_menstrualCyclesDefaults;
- (long long)hkmc_integerForKey:(id)arg1 defaultValue:(long long)arg2;
@end
