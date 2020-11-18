//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSCalendar, NSDate, NSString, UIFont;

@interface UIDateLabel : UILabel
{
    BOOL _forceTimeOnly;
    NSDate *_date;
    BOOL _boldForAllLocales;
    NSDate *_yesterday;
    NSDate *_today;
    NSDate *_noon;
    NSDate *_tomorrow;
    NSDate *_previousWeek;
    UIFont *_timeDesignatorFont;
    NSCalendar *_calendar;
    BOOL _shouldRecomputeText;
    double _paddingFromTimeToDesignator;
}

@property (nonatomic) BOOL boldForAllLocales; // @synthesize boldForAllLocales=_boldForAllLocales;
@property (strong, nonatomic) NSDate *date;
@property (readonly, nonatomic, getter=_dateString) NSString *dateString;
@property (nonatomic) BOOL forceTimeOnly; // @synthesize forceTimeOnly=_forceTimeOnly;
@property (nonatomic) double paddingFromTimeToDesignator; // @synthesize paddingFromTimeToDesignator=_paddingFromTimeToDesignator;
@property (nonatomic) BOOL shouldRecomputeText; // @synthesize shouldRecomputeText=_shouldRecomputeText;
@property (readonly, nonatomic) NSString *timeDesignator;
@property (readonly, nonatomic) BOOL timeDesignatorAppearsBeforeTime;
@property (readonly, nonatomic) UIFont *timeDesignatorFont;
@property (readonly, nonatomic) struct CGSize timeDesignatorSize;
@property (nonatomic) double timeInterval;
@property (readonly, nonatomic) BOOL use24HourTime;

+ (id)_dateFormatter;
+ (id)_relativeDateFormatter;
+ (id)_timeOnlyDateFormatter;
+ (id)_weekdayDateFormatter;
+ (id)amString;
+ (id)defaultFont;
+ (id)pmString;
- (void).cxx_destruct;
- (id)_calendar;
- (id)_dateWithDayDiffFromToday:(long long)arg1;
- (void)_didUpdateDate;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (double)_lastWeek;
- (double)_noon;
- (void)_recomputeTextIfNecessary;
- (id)_stringDrawingContext;
- (double)_today;
- (id)_todayDate;
- (double)_tomorrow;
- (double)_yesterday;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;
- (id)font;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)invalidate;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)text;

@end

