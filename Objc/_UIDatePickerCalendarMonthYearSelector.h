//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSCalendar, NSLocale, UIDatePicker, _UIDatePickerCalendarMonth, _UIDatePickerDateRange;
@protocol _UIDatePickerCalendarMonthYearSelectorDelegate;

__attribute__((visibility("hidden")))
@interface _UIDatePickerCalendarMonthYearSelector : UIView
{
    UIDatePicker *_datePicker;
    id<_UIDatePickerCalendarMonthYearSelectorDelegate> _delegate;
    NSCalendar *_calendar;
    NSLocale *_locale;
    _UIDatePickerDateRange *_dateRange;
    _UIDatePickerCalendarMonth *_selectedMonth;
}

@property (readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property (readonly, nonatomic) _UIDatePickerDateRange *dateRange; // @synthesize dateRange=_dateRange;
@property (weak, nonatomic) id<_UIDatePickerCalendarMonthYearSelectorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property (strong, nonatomic) _UIDatePickerCalendarMonth *selectedMonth; // @synthesize selectedMonth=_selectedMonth;

- (void).cxx_destruct;
- (void)_didSelectDate:(id)arg1;
- (void)_reload;
- (void)_setSelectedMonth:(id)arg1 animated:(BOOL)arg2 updatePicker:(BOOL)arg3 notifyDelegate:(BOOL)arg4;
- (void)_setupViewHierarchy;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)reloadWithCalendar:(id)arg1 locale:(id)arg2 dateRange:(id)arg3 selectedMonth:(id)arg4;
- (void)setSelectedMonth:(id)arg1 animated:(BOOL)arg2;

@end

