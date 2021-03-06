//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface UIDatePickerWeekMonthDayView : UIView
{
    struct {
        unsigned int weekdayLast:1;
    } _datePickerWeekMonthDayViewFlags;
    UILabel *_dateLabel;
    UILabel *_weekdayLabel;
    NSString *_formattedDateString;
    double _weekdayWidth;
}

@property (readonly, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property (copy, nonatomic) NSString *formattedDateString; // @synthesize formattedDateString=_formattedDateString;
@property (readonly, nonatomic) UILabel *weekdayLabel; // @synthesize weekdayLabel=_weekdayLabel;
@property (nonatomic) BOOL weekdayLast;
@property (nonatomic) double weekdayWidth; // @synthesize weekdayWidth=_weekdayWidth;

- (void).cxx_destruct;
- (BOOL)_canBeReusedInPickerView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

