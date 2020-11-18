//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSLocale, NSTimeZone;

@interface PLDateRangeFormatter : NSObject
{
    struct os_unfair_lock_s _lock;
    long long _preset;
    NSLocale *_locale;
    BOOL _useLocalDates;
    NSTimeZone *_timeZone;
    BOOL _includeDayNumbers;
    BOOL _includeDayNumbersWhenMonthsDiffer;
    BOOL _useRelativeDayFormatting;
    BOOL _useShortMonths;
    BOOL _useShortDaysInRanges;
    BOOL _useTime;
    BOOL _yearOnly;
    BOOL _monthOnly;
    BOOL _timeOnly;
    BOOL _omitYear;
    BOOL _monthWithDelimiterAndYear;
    NSDateFormatter *_sameDayDateFormatter;
    NSDateFormatter *_sameDayNoYearDateFormatter;
    NSDateFormatter *_dayOfTheWeekDateFormatter;
    NSDateFormatter *_yearDateFormatter;
    NSDateFormatter *_monthDateFormatter;
    NSDateFormatter *_monthYearDateFormatter;
    NSDateFormatter *_relativeDateFormatter;
    struct UDateIntervalFormat *_monthDayIntervalFormat;
    struct UDateIntervalFormat *_monthDayNoYearIntervalFormat;
    struct UDateIntervalFormat *_differentMonthDayIntervalFormat;
    struct UDateIntervalFormat *_differentMonthDayNoYearIntervalFormat;
    struct UDateIntervalFormat *_dayOfTheWeekIntervalFormat;
    struct UDateIntervalFormat *_timeIntervalFormat;
    struct UDateIntervalFormat *_monthIntervalFormat;
    struct UDateIntervalFormat *_monthYearIntervalFormat;
    struct UDateIntervalFormat *_yearIntervalFormat;
}

@property (strong, nonatomic) NSLocale *locale;
@property (nonatomic) long long preset;
@property (nonatomic) BOOL useLocalDates;

+ (id)autoupdatingFormatterWithPreset:(long long)arg1;
- (void).cxx_destruct;
- (void)_currentLocaleDidChange:(id)arg1;
- (id)_dayDifferentMonthsTemplate;
- (id)_dayOfTheWeekDateFormatter;
- (struct UDateIntervalFormat *)_dayOfTheWeekIntervalFormat;
- (id)_dayTemplate;
- (struct UDateIntervalFormat *)_differentMonthDayIntervalFormat;
- (struct UDateIntervalFormat *)_differentMonthDayNoYearIntervalFormat;
- (void)_handlePresetDidChange;
- (void)_handleUseLocalDatesDidChange;
- (id)_monthDateFormatter;
- (struct UDateIntervalFormat *)_monthDayIntervalFormat;
- (struct UDateIntervalFormat *)_monthDayNoYearIntervalFormat;
- (struct UDateIntervalFormat *)_monthIntervalFormat;
- (id)_monthYearDateFormatter;
- (struct UDateIntervalFormat *)_monthYearIntervalFormat;
- (id)_relativeDateFormatter;
- (void)_resetFormatters;
- (id)_sameDayDateFormatter;
- (id)_sameDayNoYearDateFormatter;
- (id)_sameMonthTemplate;
- (void)_significantTimeChange:(id)arg1;
- (id)_stringFromDate:(id)arg1 toDate:(id)arg2 currentDate:(id)arg3;
- (void)_systemTimeZoneDidChange:(id)arg1;
- (struct UDateIntervalFormat *)_timeIntervalFormat;
- (id)_yearDateFormatter;
- (struct UDateIntervalFormat *)_yearIntervalFormat;
- (void)dealloc;
- (id)init;
- (id)initWithPreset:(long long)arg1;
- (id)localTimeZone;
- (id)stringFromDate:(id)arg1;
- (id)stringFromDate:(id)arg1 toDate:(id)arg2;
- (id)stringFromDate:(id)arg1 toDate:(id)arg2 currentDate:(id)arg3;

@end
