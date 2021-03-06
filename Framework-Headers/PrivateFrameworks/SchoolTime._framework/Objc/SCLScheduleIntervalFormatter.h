//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSBundle, NSCalendar, NSDateFormatter, NSDateIntervalFormatter, NSLocale, NSString, NSTimeZone;

@interface SCLScheduleIntervalFormatter : NSFormatter
{
    BOOL _coalescesAMPMSymbols;
    BOOL _prefersHoursOnly;
    unsigned long long _formattingStyle;
    NSLocale *_locale;
    NSDateFormatter *_shortFormatter;
    NSDateIntervalFormatter *_briefFormatter;
    NSBundle *_bundle;
    NSString *_table;
    NSCalendar *_referenceCalendar;
    NSTimeZone *_referenceTimeZone;
}

@property (strong, nonatomic) NSDateIntervalFormatter *briefFormatter; // @synthesize briefFormatter=_briefFormatter;
@property (strong, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property (nonatomic) BOOL coalescesAMPMSymbols; // @synthesize coalescesAMPMSymbols=_coalescesAMPMSymbols;
@property (nonatomic) unsigned long long formattingStyle; // @synthesize formattingStyle=_formattingStyle;
@property (strong, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property (nonatomic) BOOL prefersHoursOnly; // @synthesize prefersHoursOnly=_prefersHoursOnly;
@property (strong, nonatomic) NSCalendar *referenceCalendar; // @synthesize referenceCalendar=_referenceCalendar;
@property (strong, nonatomic) NSTimeZone *referenceTimeZone; // @synthesize referenceTimeZone=_referenceTimeZone;
@property (strong, nonatomic) NSDateFormatter *shortFormatter; // @synthesize shortFormatter=_shortFormatter;
@property (strong, nonatomic) NSString *table; // @synthesize table=_table;

- (void).cxx_destruct;
- (id)_shortIntervalFormat;
- (id)_stringForCoalescedAMPMSymbolsWithDateInterval:(id)arg1 locale:(id)arg2 startTimeComponents:(id)arg3 endTimeComponents:(id)arg4;
- (id)_stringForDateInterval:(id)arg1 startComponents:(id)arg2 endComponents:(id)arg3;
- (id)init;
- (id)newDateFormatterWithLocale:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromTime:(id)arg1 toTime:(id)arg2;
- (id)stringFromTimeInterval:(id)arg1;

@end

