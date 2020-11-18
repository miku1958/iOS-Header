//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSCalendar.h>

@interface NSCalendar (HKCalendar)
+ (id)hk_canonicalDateOfBirthDateComponentsWithDate:(id)arg1;
+ (id)hk_gregorianCalendar;
+ (id)hk_gregorianCalendarWithUTCTimeZone;
- (id)hk_dateByShiftingFromGregorianCalendarWithUTCTimeZone:(id)arg1;
- (id)hk_dateByShiftingToGregorianCalendarWithUTCTimeZone:(id)arg1;
- (id)hk_dateBySubtractingDays:(unsigned long long)arg1 fromDate:(id)arg2;
- (id)hk_dateFromComponentsWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4;
- (id)hk_dateOfBirthDateComponentsWithDate:(id)arg1;
- (id)hk_startOfDateByAddingDays:(long long)arg1 toDate:(id)arg2;
- (id)hk_startOfDateBySubtractingDays:(long long)arg1 fromDate:(id)arg2;
- (id)hk_startOfFitnessWeekBeforeDate:(id)arg1;
- (id)hk_startOfSleepDayForDate:(id)arg1;
- (id)hk_startOfWeekWithFirstWeekday:(long long)arg1 beforeDate:(id)arg2;
- (id)hk_weekendDays;
@end

