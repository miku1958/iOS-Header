//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIDatePickerCalendarDateComponent.h>

@class _UIDatePickerCalendarMonth;

__attribute__((visibility("hidden")))
@interface _UIDatePickerCalendarDay : _UIDatePickerCalendarDateComponent
{
    _UIDatePickerCalendarMonth *_month;
    _UIDatePickerCalendarMonth *_assignedMonth;
}

@property (readonly, nonatomic) _UIDatePickerCalendarMonth *assignedMonth; // @synthesize assignedMonth=_assignedMonth;
@property (readonly, nonatomic) BOOL isToday;
@property (readonly, nonatomic) _UIDatePickerCalendarMonth *month; // @synthesize month=_month;

+ (unsigned long long)representedCalendarUnits;
- (void).cxx_destruct;
- (id)copyWithAssignedMonth:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithDate:(id)arg1 calendar:(id)arg2;
- (id)initWithDate:(id)arg1 calendar:(id)arg2 month:(id)arg3 assignedMonth:(id)arg4;
- (BOOL)isEqual:(id)arg1;

@end

