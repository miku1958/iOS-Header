//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

#import <Foundation/NSObservable-Protocol.h>
#import <Foundation/NSObserver-Protocol.h>

@class NSArray, NSCalendar, NSDate, NSLocale, NSMutableDictionary, NSString, NSTimeZone;

@interface NSDateFormatter : NSFormatter <NSObservable, NSObserver>
{
    NSMutableDictionary *_attributes;
    struct __CFDateFormatter *_formatter;
    unsigned long long _counter;
    long long _cacheGeneration;
    struct os_unfair_lock_s _lock;
}

@property (copy) NSString *AMSymbol;
@property (copy) NSString *PMSymbol;
@property (copy) NSCalendar *calendar;
@property (copy) NSString *dateFormat;
@property unsigned long long dateStyle;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSDate *defaultDate;
@property (readonly, copy) NSString *description;
@property BOOL doesRelativeDateFormatting;
@property (copy) NSArray *eraSymbols;
@property unsigned long long formatterBehavior;
@property long long formattingContext;
@property BOOL generatesCalendarDates;
@property (copy) NSDate *gregorianStartDate;
@property (readonly) unsigned long long hash;
@property (getter=isLenient) BOOL lenient;
@property (copy) NSLocale *locale;
@property (copy) NSArray *longEraSymbols;
@property (copy) NSArray *monthSymbols;
@property (copy) NSArray *quarterSymbols;
@property (copy) NSArray *shortMonthSymbols;
@property (copy) NSArray *shortQuarterSymbols;
@property (copy) NSArray *shortStandaloneMonthSymbols;
@property (copy) NSArray *shortStandaloneQuarterSymbols;
@property (copy) NSArray *shortStandaloneWeekdaySymbols;
@property (copy) NSArray *shortWeekdaySymbols;
@property (copy) NSArray *standaloneMonthSymbols;
@property (copy) NSArray *standaloneQuarterSymbols;
@property (copy) NSArray *standaloneWeekdaySymbols;
@property (readonly) Class superclass;
@property unsigned long long timeStyle;
@property (copy) NSTimeZone *timeZone;
@property (copy) NSDate *twoDigitStartDate;
@property (copy) NSArray *veryShortMonthSymbols;
@property (copy) NSArray *veryShortStandaloneMonthSymbols;
@property (copy) NSArray *veryShortStandaloneWeekdaySymbols;
@property (copy) NSArray *veryShortWeekdaySymbols;
@property (copy) NSArray *weekdaySymbols;

+ (id)_componentsFromFormatString:(id)arg1;
+ (id)_formatStringFromComponents:(id)arg1;
+ (id)dateFormatFromTemplate:(id)arg1 options:(unsigned long long)arg2 locale:(id)arg3;
+ (unsigned long long)defaultFormatterBehavior;
+ (void)initialize;
+ (id)localizedStringFromDate:(id)arg1 dateStyle:(unsigned long long)arg2 timeStyle:(unsigned long long)arg3;
+ (void)setDefaultFormatterBehavior:(unsigned long long)arg1;
- (id)_attributedStringWithFieldsFromDate:(id)arg1;
- (long long)_cacheGenerationCount;
- (void)_clearFormatter;
- (id)_dateFormat;
- (id)_getLocaleAlreadyLocked:(BOOL)arg1;
- (void)_invalidateCache;
- (id)_locale_forOldMethods;
- (BOOL)_mayDecorateAttributedStringForObjectValue:(id)arg1;
- (id)_nextChangeDateAfterDate:(id)arg1;
- (void)_regenerateFormatter;
- (void)_regenerateFormatterIfAbsent;
- (void)_reset;
- (void)_setDateFormat:(id)arg1;
- (void)_setDateFormat:(id)arg1 alreadyLocked:(BOOL)arg2;
- (void)_setIsLenient:(BOOL)arg1;
- (void)_setUsesCharacterDirection:(BOOL)arg1;
- (id)_timeZone_forOldMethods;
- (BOOL)_tracksCacheGenerationCount;
- (BOOL)_usesCharacterDirection;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dateFromString:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 range:(inout struct _NSRange *)arg3 error:(out id *)arg4;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)receiveObservedValue:(id)arg1;
- (void)setLocalizedDateFormatFromTemplate:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromDate:(id)arg1;

@end

