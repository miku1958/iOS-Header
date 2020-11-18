//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <UIKit/NSCoding-Protocol.h>
#import <UIKit/UIPickerViewScrollTesting-Protocol.h>

@class NSCalendar, NSDate, NSLocale, NSTimeZone, UIColor, _UIDatePickerView;

@interface UIDatePicker : UIControl <UIPickerViewScrollTesting, NSCoding>
{
    _UIDatePickerView *_pickerView;
    BOOL _useCurrentDateDuringDecoding;
}

@property (nonatomic, getter=_usesModernStyle, setter=_setUsesModernStyle:) BOOL _usesModernStyle;
@property (nonatomic, getter=_allowsZeroCountDownDuration, setter=_setAllowsZeroCountDownDuration:) BOOL allowsZeroCountDownDuration; // @dynamic allowsZeroCountDownDuration;
@property (nonatomic, getter=_allowsZeroTimeInterval, setter=_setAllowsZeroTimeInterval:) BOOL allowsZeroTimeInterval; // @dynamic allowsZeroTimeInterval;
@property (copy, nonatomic) NSCalendar *calendar; // @dynamic calendar;
@property (readonly, nonatomic, getter=_contentWidth) double contentWidth; // @dynamic contentWidth;
@property (nonatomic) double countDownDuration; // @dynamic countDownDuration;
@property (strong, nonatomic) NSDate *date; // @dynamic date;
@property (nonatomic) long long datePickerMode; // @dynamic datePickerMode;
@property (readonly, nonatomic, getter=_dateUnderSelectionBar) NSDate *dateUnderSelectionBar; // @dynamic dateUnderSelectionBar;
@property (nonatomic, getter=_drawsBackground, setter=_setDrawsBackground:) BOOL drawsBackground; // @dynamic drawsBackground;
@property (strong, nonatomic, getter=_highlightColor, setter=_setHighlightColor:) UIColor *highlightColor;
@property (readonly, nonatomic, getter=_isTimeIntervalMode) BOOL isTimeIntervalMode; // @dynamic isTimeIntervalMode;
@property (strong, nonatomic) NSLocale *locale; // @dynamic locale;
@property (strong, nonatomic) NSDate *maximumDate; // @dynamic maximumDate;
@property (strong, nonatomic) NSDate *minimumDate; // @dynamic minimumDate;
@property (nonatomic) long long minuteInterval; // @dynamic minuteInterval;
@property (strong, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *textColor;
@property (strong, nonatomic, getter=_textShadowColor, setter=_setTextShadowColor:) UIColor *textShadowColor;
@property (nonatomic) double timeInterval; // @dynamic timeInterval;
@property (strong, nonatomic) NSTimeZone *timeZone; // @dynamic timeZone;
@property (nonatomic, getter=_useCurrentDateDuringDecoding, setter=_setUseCurrentDateDuringDecoding:) BOOL useCurrentDateDuringDecoding;
@property (nonatomic, getter=_usesBlackChrome, setter=_setUsesBlackChrome:) BOOL usesBlackChrome; // @dynamic usesBlackChrome;

- (void).cxx_destruct;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (void)_installPickerView:(id)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (id)_labelTextForCalendarUnit:(unsigned long long)arg1;
- (id)_locale;
- (void)_performScrollTest:(id)arg1 withIterations:(long long)arg2 rowsToScroll:(long long)arg3 inComponent:(long long)arg4;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)_selectedTextForCalendarUnit:(unsigned long long)arg1;
- (void)_setHidesLabels:(BOOL)arg1;
- (void)_setHighlightsToday:(BOOL)arg1;
- (void)_setLocale:(id)arg1;
- (void)_setUpInitialValues;
- (void)awakeFromNib;
- (id)dateComponents;
- (void)encodeWithCoder:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (int)hour;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)invalidateIntrinsicContentSize;
- (int)minute;
- (int)second;
- (void)setBackgroundColor:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setDate:(id)arg1 animate:(BOOL)arg2;
- (void)setDate:(id)arg1 animated:(BOOL)arg2;
- (void)setDateComponents:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHighlightsToday:(BOOL)arg1;
- (void)setStaggerTimeIntervals:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end

