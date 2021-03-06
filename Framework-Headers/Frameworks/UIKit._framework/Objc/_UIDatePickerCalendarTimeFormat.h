//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumberFormatter, NSString;

__attribute__((visibility("hidden")))
@interface _UIDatePickerCalendarTimeFormat : NSObject
{
    BOOL _wantsDoubleDigitHours;
    BOOL _forceDoubleDigitHours;
    BOOL _hasLeadingLiteral;
    BOOL _hasTrailingLiteral;
    NSString *_timeFormat;
    NSString *_hourFormat;
    long long _clock;
    long long _clockLayout;
    NSNumberFormatter *_hourFormatter;
    NSNumberFormatter *_minuteFormatter;
    NSNumberFormatter *_strictHourFormatter;
}

@property (readonly, nonatomic) long long clock; // @synthesize clock=_clock;
@property (readonly, nonatomic) long long clockLayout; // @synthesize clockLayout=_clockLayout;
@property (readonly, nonatomic) BOOL forceDoubleDigitHours; // @synthesize forceDoubleDigitHours=_forceDoubleDigitHours;
@property (readonly, nonatomic) BOOL hasLeadingLiteral; // @synthesize hasLeadingLiteral=_hasLeadingLiteral;
@property (readonly, nonatomic) BOOL hasTrailingLiteral; // @synthesize hasTrailingLiteral=_hasTrailingLiteral;
@property (readonly, nonatomic) NSString *hourFormat; // @synthesize hourFormat=_hourFormat;
@property (readonly, nonatomic) NSNumberFormatter *hourFormatter; // @synthesize hourFormatter=_hourFormatter;
@property (readonly, nonatomic) NSNumberFormatter *minuteFormatter; // @synthesize minuteFormatter=_minuteFormatter;
@property (readonly, nonatomic) NSNumberFormatter *strictHourFormatter; // @synthesize strictHourFormatter=_strictHourFormatter;
@property (readonly, nonatomic) NSString *timeFormat; // @synthesize timeFormat=_timeFormat;
@property (readonly, nonatomic) BOOL wantsDoubleDigitHours; // @synthesize wantsDoubleDigitHours=_wantsDoubleDigitHours;

- (void).cxx_destruct;
- (id)initWithCalendar:(id)arg1 locale:(id)arg2 forceDoubleDigitHoursWhenFormatting:(BOOL)arg3;
- (id)localizedTimeStringWithHours:(unsigned long long)arg1 minutes:(unsigned long long)arg2;
- (id)localizedTimeStringWithHours:(unsigned long long)arg1 minutes:(unsigned long long)arg2 hourRange:(struct _NSRange *)arg3 minuteRange:(struct _NSRange *)arg4;

@end

