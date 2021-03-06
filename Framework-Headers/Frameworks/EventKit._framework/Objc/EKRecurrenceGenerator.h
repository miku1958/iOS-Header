//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarFoundation/CalRecurrenceGenerator.h>

@interface EKRecurrenceGenerator : CalRecurrenceGenerator
{
}

+ (int)_convertEKRecurrenceFrequencyToCalRecurrenceFrequency:(long long)arg1;
- (id)_copyOccurrenceDatesWithEKEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 exceptionDates:(id)arg6 limit:(long long)arg7 adjustDatesForAllDayEvents:(BOOL)arg8;
- (void)_prepareForEKRecurrence:(id)arg1 forCalendarItem:(id)arg2;
- (void)_setupForEKEvent:(id)arg1 adjustDatesForAllDayEvents:(BOOL)arg2;
- (id)copyOccurrenceDatesWithEKEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 exceptionDates:(id)arg6 limit:(long long)arg7;
- (id)copyOccurrenceDatesWithEKEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 limit:(long long)arg6;
- (id)copyOccurrenceDatesWithEKEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 limit:(long long)arg6 adjustDatesForAllDayEvents:(BOOL)arg7;
- (id)copyOccurrenceDatesWithEKEvent:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 timeZone:(id)arg4 limit:(long long)arg5;
- (BOOL)isOccurrenceDate:(id)arg1 validForEvent:(id)arg2;
- (id)nextOccurrenceDateWithEKRecurrences:(id)arg1 forCalendarItem:(id)arg2 exceptionDates:(id)arg3 initialDate:(id)arg4 afterDate:(id)arg5;
- (id)nextOccurrenceDateWithEKRecurrences:(id)arg1 forCalendarItem:(id)arg2 initialDate:(id)arg3 afterDate:(id)arg4;
- (BOOL)occurrenceDate:(id)arg1 matchesRecurrenceRule:(id)arg2 forEvent:(id)arg3 includeDetachedEventsInSeries:(BOOL)arg4;

@end

