//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDateComponents, NSNumberFormatter, NSString, UIColor, UIFont, _UIDatePickerView;

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode : NSObject
{
    NSDateComponents *_selectedDateComponents;
    NSDateComponents *_baseDateComponents;
    unsigned long long *_elements;
    long long _yearsSinceBaseDate;
    struct _NSRange _maxDayRange;
    struct _NSRange _maxMonthRange;
    NSString *_localizedFormatString;
    NSArray *_dateFormatters;
    UIColor *_todayTextColor;
    UIFont *_amPmFont;
    UIFont *_font;
    UIFont *_defaultTimeFont;
    NSString *_amString;
    NSString *_pmString;
    NSDateComponents *_todayDateComponents;
    NSNumberFormatter *_formatter;
    _UIDatePickerView *_datePickerView;
    BOOL _isUsingJapaneseCalendar;
    unsigned long long _numberOfComponents;
    long long _minuteInterval;
    double _todaySinceReferenceDate;
    NSDate *_minimumDate;
    NSDateComponents *_minimumDateComponents;
    NSDate *_maximumDate;
    NSDateComponents *_maximumDateComponents;
    NSDate *_baseDate;
    NSDate *_originatingDate;
}

@property (readonly, nonatomic) UIFont *amPmFont;
@property (readonly, nonatomic) NSString *amString;
@property (strong, nonatomic) NSDate *baseDate; // @synthesize baseDate=_baseDate;
@property (strong, nonatomic) NSDateComponents *baseDateComponents;
@property (readonly, nonatomic) long long datePickerMode;
@property (weak, nonatomic) _UIDatePickerView *datePickerView; // @synthesize datePickerView=_datePickerView;
@property (readonly, nonatomic) UIFont *defaultTimeFont;
@property (readonly, nonatomic) long long displayedCalendarUnits;
@property (nonatomic) unsigned long long *elements;
@property (readonly, nonatomic) UIFont *font;
@property (readonly, nonatomic, getter=is24Hour) BOOL is24Hour; // @dynamic is24Hour;
@property (readonly, nonatomic, getter=isTimeIntervalMode) BOOL isTimeIntervalMode; // @dynamic isTimeIntervalMode;
@property (strong, nonatomic) NSString *localizedFormatString; // @synthesize localizedFormatString=_localizedFormatString;
@property (readonly, nonatomic) NSDate *maximumDate; // @synthesize maximumDate=_maximumDate;
@property (readonly, nonatomic) NSDateComponents *maximumDateComponents; // @synthesize maximumDateComponents=_maximumDateComponents;
@property (readonly, nonatomic) NSDate *minimumDate; // @synthesize minimumDate=_minimumDate;
@property (readonly, nonatomic) NSDateComponents *minimumDateComponents; // @synthesize minimumDateComponents=_minimumDateComponents;
@property (nonatomic) long long minuteInterval; // @synthesize minuteInterval=_minuteInterval;
@property (nonatomic) unsigned long long numberOfComponents; // @synthesize numberOfComponents=_numberOfComponents;
@property (strong, nonatomic) NSDate *originatingDate; // @synthesize originatingDate=_originatingDate;
@property (readonly, nonatomic) NSString *pmString;
@property (readonly, nonatomic) double rowHeight;
@property (strong, nonatomic) NSDateComponents *selectedDateComponents; // @synthesize selectedDateComponents=_selectedDateComponents;
@property (readonly, nonatomic) UIFont *sizedFont;
@property (strong, nonatomic) NSDateComponents *todayDateComponents;
@property (nonatomic) double todaySinceReferenceDate; // @synthesize todaySinceReferenceDate=_todaySinceReferenceDate;
@property (readonly, nonatomic) UIColor *todayTextColor;
@property (readonly, nonatomic) double totalComponentWidth; // @dynamic totalComponentWidth;
@property (nonatomic) long long yearsSinceBaseDate; // @synthesize yearsSinceBaseDate=_yearsSinceBaseDate;

+ (id)_datePickerModeWithFormatString:(id)arg1 datePickerView:(id)arg2;
+ (id)_datePickerModeWithMode:(long long)arg1 datePickerView:(id)arg2;
+ (long long)datePickerMode;
+ (unsigned long long)extractableCalendarUnits;
+ (void)initialize;
+ (id)newDateFromGregorianYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 timeZone:(id)arg4;
- (void).cxx_destruct;
- (id)_dateByEnsuringValue:(long long)arg1 forCalendarUnit:(unsigned long long)arg2;
- (id)_dateForYearRow:(long long)arg1;
- (long long)_incrementForStaggeredTimeIntervals;
- (BOOL)_isComponentScrolling:(long long)arg1;
- (BOOL)_monthExists:(long long)arg1 inYear:(long long)arg2;
- (long long)_numberOfDaysInDateComponents:(id)arg1;
- (BOOL)_scrollingAnyColumnExcept:(int)arg1;
- (BOOL)_shouldEnableValueForRow:(long long)arg1 column:(long long)arg2;
- (BOOL)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3;
- (void)_shouldReset:(id)arg1;
- (void)_updateSelectedDateComponentsWithNewValueInComponent:(long long)arg1 usingSelectionBarValue:(BOOL)arg2;
- (long long)_yearlessYearForMonth:(long long)arg1;
- (BOOL)areValidDateComponents:(id)arg1 comparingUnits:(long long)arg2;
- (id)calendar;
- (id)calendarForFormatters;
- (unsigned long long)calendarUnitForComponent:(long long)arg1;
- (void)clearBaseDate;
- (long long)componentForCalendarUnit:(unsigned long long)arg1;
- (double)componentWidthForTwoDigitCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;
- (id)dateComponentsByRestrictingSelectedComponents:(id)arg1 withLastManipulatedColumn:(long long)arg2;
- (id)dateForRow:(long long)arg1 inCalendarUnit:(unsigned long long)arg2;
- (id)dateFormatForCalendarUnit:(unsigned long long)arg1;
- (id)dateFormatterForCalendarUnit:(unsigned long long)arg1;
- (long long)dayForRow:(long long)arg1;
- (void)dealloc;
- (long long)eraForYearRow:(long long)arg1;
- (void)fixUpElementsForRTL;
- (id)fontForCalendarUnit:(unsigned long long)arg1;
- (long long)hourForRow:(long long)arg1;
- (id)init;
- (void)loadDate:(id)arg1 animated:(BOOL)arg2;
- (id)locale;
- (long long)minuteForRow:(long long)arg1;
- (long long)monthForRow:(long long)arg1;
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1;
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1;
- (void)noteCalendarChanged;
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1;
- (long long)numberOfRowsInComponent:(long long)arg1;
- (struct _NSRange)rangeForCalendarUnit:(unsigned long long)arg1;
- (void)resetComponentWidths;
- (void)resetSelectedDateComponentsWithValuesUnderSelectionBars;
- (long long)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(long long)arg3 currentRow:(long long)arg4;
- (long long)rowForValue:(long long)arg1 forCalendarUnit:(unsigned long long)arg2 currentRow:(long long)arg3;
- (long long)secondForRow:(long long)arg1;
- (void)takeExtremesFromMinimumDate:(id)arg1 maximumDate:(id)arg2;
- (id)timeZone;
- (long long)titleAlignmentForCalendarUnit:(unsigned long long)arg1;
- (id)titleForRow:(long long)arg1 inComponent:(long long)arg2;
- (double)totalComponentWidthWithFont:(id)arg1;
- (void)updateEnabledStateOfViewForRow:(long long)arg1 inComponent:(long long)arg2;
- (void)updateSelectedDateComponentsWithNewValueInComponent:(long long)arg1;
- (long long)validateValue:(long long)arg1 forCalendarUnit:(unsigned long long)arg2;
- (long long)valueForDate:(id)arg1 dateComponents:(id)arg2 calendarUnit:(unsigned long long)arg3;
- (long long)valueForRow:(long long)arg1 inCalendarUnit:(unsigned long long)arg2;
- (id)viewForRow:(long long)arg1 inComponent:(long long)arg2 reusingView:(id)arg3;
- (double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;
- (double)widthForComponent:(long long)arg1 maxWidth:(double)arg2;
- (long long)yearForRow:(long long)arg1;

@end

