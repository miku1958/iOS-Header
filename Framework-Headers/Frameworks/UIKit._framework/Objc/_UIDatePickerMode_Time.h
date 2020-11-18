//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIDatePickerMode.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode_Time : _UIDatePickerMode
{
    double _timeHourWidth;
    double _timeMinuteWidth;
    double _timeAMPMWidth;
    NSString *_hourFormat;
    NSString *_minuteFormat;
}

+ (long long)datePickerMode;
+ (unsigned long long)extractableCalendarUnits;
- (void).cxx_destruct;
- (BOOL)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3;
- (void)_shouldReset:(id)arg1;
- (id)dateFormatForCalendarUnit:(unsigned long long)arg1;
- (long long)displayedCalendarUnits;
- (id)font;
- (id)localizedFormatString;
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1;
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1;
- (void)noteCalendarChanged;
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1;
- (void)resetComponentWidths;
- (double)rowHeight;
- (double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;

@end

