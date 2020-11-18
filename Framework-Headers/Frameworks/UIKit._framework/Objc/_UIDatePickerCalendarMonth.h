//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIDatePickerCalendarDateComponent.h>

__attribute__((visibility("hidden")))
@interface _UIDatePickerCalendarMonth : _UIDatePickerCalendarDateComponent
{
    _UIDatePickerCalendarMonth *_previousMonth;
    _UIDatePickerCalendarMonth *_nextMonth;
}

@property (readonly, nonatomic) _UIDatePickerCalendarMonth *nextMonth;
@property (readonly, nonatomic) _UIDatePickerCalendarMonth *previousMonth;

+ (unsigned long long)representedCalendarUnits;
- (void).cxx_destruct;
- (id)_monthWithOffset:(long long)arg1;
- (id)dayMatchingOrdinalDay:(id)arg1;
- (id)dayWithDate:(id)arg1 assignedMonth:(id)arg2;

@end
