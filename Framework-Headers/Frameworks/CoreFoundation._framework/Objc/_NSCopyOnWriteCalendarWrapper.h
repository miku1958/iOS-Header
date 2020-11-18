//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSCalendar.h>

@class _NSRefcountedPthreadMutex;

__attribute__((visibility("hidden")))
@interface _NSCopyOnWriteCalendarWrapper : NSCalendar
{
    NSCalendar *cal;
    _NSRefcountedPthreadMutex *_lock;
    BOOL needsToCopy;
}

+ (id)currentCalendar;
- (void)_copyWrappedCalendar;
- (id)_init;
- (id)_initWithCalendar:(id)arg1;
- (id)calendarIdentifier;
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2;
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3;
- (id)dateFromComponents:(id)arg1;
- (void)dealloc;
- (void)enumerateDatesStartingAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)finalize;
- (unsigned long long)firstWeekday;
- (unsigned long long)hash;
- (BOOL)isDateInWeekend:(id)arg1;
- (id)locale;
- (struct _NSRange)maximumRangeOfUnit:(unsigned long long)arg1;
- (unsigned long long)minimumDaysInFirstWeek;
- (struct _NSRange)minimumRangeOfUnit:(unsigned long long)arg1;
- (BOOL)nextWeekendStartDate:(out id *)arg1 interval:(out double *)arg2 options:(unsigned long long)arg3 afterDate:(id)arg4;
- (unsigned long long)ordinalityOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3;
- (struct _NSRange)rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3;
- (BOOL)rangeOfUnit:(unsigned long long)arg1 startDate:(id *)arg2 interval:(double *)arg3 forDate:(id)arg4;
- (void)setFirstWeekday:(unsigned long long)arg1;
- (void)setLocale:(id)arg1;
- (void)setMinimumDaysInFirstWeek:(unsigned long long)arg1;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;

@end

