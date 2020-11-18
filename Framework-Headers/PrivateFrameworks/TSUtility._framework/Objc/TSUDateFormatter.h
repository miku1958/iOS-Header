//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TSUDateFormatter : NSObject
{
    NSString *mDateOnlyFormatString;
    NSString *mTimeOnlyFormatString;
    struct __CFDateFormatter *mFullDateFormatter;
}

+ (id)dateFormatStringSpecialSymbols;
+ (id)datePortionOfDateTimeFormatString:(id)arg1;
+ (id)defaultDateTimeFormat;
+ (unsigned long long)p_DateTimeSplitLocationInFormatString:(id)arg1;
+ (id)shortMonthNamesForNonCachedCurrentLocale;
+ (id)supportedDateFormats;
+ (id)supportedTimeFormats;
+ (id)timePortionOfDateTimeFormatString:(id)arg1;
- (id)appropriateOutputFormatStringForInputFormatString:(id)arg1;
- (void)dealloc;
- (id)fullDateString:(id)arg1;
- (id)init;
- (id)stringFromDate:(id)arg1 format:(id)arg2;

@end

