//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSCalendar.h>

@class NSArray;

@interface NSCalendar (HKSPSleep)

@property (readonly, nonatomic) NSArray *hksp_orderedSleepDays;

+ (unsigned long long)_hksp_optionsForBackwards:(BOOL)arg1;
- (id)_hksp_nextDateAfterDate:(id)arg1 matchingComponents:(id)arg2 backwards:(BOOL)arg3;
- (id)_hksp_nextDateAfterDate:(id)arg1 matchingUnit:(unsigned long long)arg2 value:(long long)arg3 backwards:(BOOL)arg4;
- (id)_hksp_nextDateHelperAfterDate:(id)arg1 nextDateBlock:(CDUnknownBlockType)arg2;
- (id)hksp_componentsByAddingTimeInterval:(double)arg1 toComponents:(id)arg2;
- (BOOL)hksp_dateRequiresSingularTimeString:(id)arg1;
- (unsigned long long)hksp_dayPeriodForDate:(id)arg1 locale:(id)arg2;
- (unsigned long long)hksp_firstNonWeekendDay;
- (id)hksp_localizedGroupingStringForWeekdays:(unsigned long long)arg1;
- (id)hksp_nextDateAfterDate:(id)arg1 matchingComponents:(id)arg2;
- (id)hksp_nextDateAfterDate:(id)arg1 matchingUnit:(unsigned long long)arg2 value:(long long)arg3;
- (id)hksp_orderedSleepWeekdaysForWeekdays:(unsigned long long)arg1;
- (id)hksp_previousDateBeforeDate:(id)arg1 matchingComponents:(id)arg2;
- (id)hksp_previousDateBeforeDate:(id)arg1 matchingUnit:(unsigned long long)arg2 value:(long long)arg3;
- (double)hksp_timeIntervalFromComponents:(id)arg1 toComponents:(id)arg2;
@end

