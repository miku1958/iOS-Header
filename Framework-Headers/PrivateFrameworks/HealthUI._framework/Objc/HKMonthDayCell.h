//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKCalendarDayCell.h>

@interface HKMonthDayCell : HKCalendarDayCell
{
    long long _dayOfWeek;
    long long _circleState;
}

@property (readonly, nonatomic) long long circleState; // @synthesize circleState=_circleState;

+ (double)dayLabelFontSize;
- (BOOL)_representsWeekendDay;
- (void)_setCircleState:(long long)arg1;
- (void)_updateFontAndCircle;
- (void)dealloc;
- (id)initWithDateCache:(id)arg1;
- (void)pressToTransition:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)updateWithDate:(id)arg1 dayOfMonth:(long long)arg2;

@end
