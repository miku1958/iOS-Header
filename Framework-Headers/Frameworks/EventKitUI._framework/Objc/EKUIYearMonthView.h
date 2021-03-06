//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <EventKitUI/_UICursorInteractionDelegate-Protocol.h>

@class EKCalendarDate, EKUIOverlayCalendarSignificantDatesProvider, NSCalendar, NSSet, NSString, UIColor, UIFont;

@interface EKUIYearMonthView : UIView <_UICursorInteractionDelegate>
{
    EKCalendarDate *_endCalendarDate;
    NSString *_monthString;
    long long _firstDayIndex;
    long long _daysInWeek;
    long long _todayIndex;
    NSSet *_firstOfOverlayMonthIndices;
    NSSet *_firstOfOverlayYearIndices;
    NSCalendar *_calendar;
    UIView *_hidingView;
    UIView *_previewContainerView;
    BOOL _computeCircleFrameWithoutAdjustments;
    EKCalendarDate *_calendarDate;
    EKUIOverlayCalendarSignificantDatesProvider *_overlaySignificantDatesProvider;
    double _circleSizeForDoubleDigit;
}

@property (readonly, nonatomic) NSCalendar *calendar;
@property (strong, nonatomic) EKCalendarDate *calendarDate; // @synthesize calendarDate=_calendarDate;
@property (readonly, nonatomic) double circleFrameXAdjustment;
@property (readonly, nonatomic) double circleFrameYAdjustment;
@property (readonly, nonatomic) double circleSize;
@property (readonly, nonatomic) double circleSizeForDoubleDigit; // @synthesize circleSizeForDoubleDigit=_circleSizeForDoubleDigit;
@property (readonly, nonatomic) BOOL computeCircleFrameWithoutAdjustments; // @synthesize computeCircleFrameWithoutAdjustments=_computeCircleFrameWithoutAdjustments;
@property (readonly, nonatomic) UIColor *dayColor;
@property (readonly, nonatomic) NSString *dayColorKey;
@property (readonly, nonatomic) UIFont *dayNumberFont;
@property (readonly, nonatomic) double dayNumberKerning;
@property (readonly, nonatomic) double dayTextSize;
@property (readonly, nonatomic) long long daysInWeek;
@property (readonly, nonatomic) double daysXAdjustLeft;
@property (readonly, nonatomic) double daysYAdjustTop;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIFont *headerFont;
@property (readonly, nonatomic) double headerFontKerning;
@property (readonly, nonatomic) double headerFontMaxSize;
@property (readonly, nonatomic) double headerFontMinSize;
@property (readonly, nonatomic) double headerXAdjust;
@property (readonly, nonatomic) BOOL opaque;
@property (strong, nonatomic) EKUIOverlayCalendarSignificantDatesProvider *overlaySignificantDatesProvider; // @synthesize overlaySignificantDatesProvider=_overlaySignificantDatesProvider;
@property (readonly, nonatomic) double roundedRectCornerRadius;
@property (readonly, nonatomic) BOOL showMonthName;
@property (readonly, nonatomic) BOOL showWeekDayInitials;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIFont *todayNumberFont;
@property (readonly, nonatomic) double todayNumberKerning;
@property (readonly, nonatomic) double todayTextSize;
@property (readonly, nonatomic) double todayTextYAdjustment;
@property (readonly, nonatomic) BOOL vibrant;
@property (readonly, nonatomic) double weekDayInitialsAdjustLeft;
@property (readonly, nonatomic) double weekDayInitialsAdjustTop;
@property (readonly, nonatomic) UIFont *weekDayInitialsFont;
@property (readonly, nonatomic) double xInset;
@property (readonly, nonatomic) double xSpacing;
@property (readonly, nonatomic) double yInset;
@property (readonly, nonatomic) double ySpacing;

+ (id)_defaultTextColor;
+ (double)heightForInterfaceOrientation:(long long)arg1 windowSize:(struct CGSize)arg2 heightSizeClass:(long long)arg3;
- (void).cxx_destruct;
- (void)_adjustHidingViewToFrame:(struct CGRect)arg1;
- (id)_containerForPreview;
- (long long)_dayIndexForPoint:(struct CGPoint)arg1;
- (id)_generatePreviewForDayIndex:(long long)arg1;
- (id)_generatePreviewForMonthTitle;
- (void)_getMetricsForDayIndex:(long long)arg1 textFrame:(struct CGRect *)arg2 circleFrame:(struct CGRect *)arg3;
- (void)_getTodayNumberTextFrame:(struct CGRect *)arg1 circleFrame:(struct CGRect *)arg2;
- (id)_imageForDayNumber:(id)arg1 size:(struct CGSize)arg2 underlineThickness:(double)arg3;
- (id)_imageForDayNumber:(id)arg1 size:(struct CGSize)arg2 underlineThickness:(double)arg3 forPreview:(BOOL)arg4;
- (id)_imageForMonthDays:(long long)arg1 size:(struct CGSize)arg2 underlineThickness:(double)arg3;
- (id)_imageForMonthName:(id)arg1;
- (id)_imageForMonthName:(id)arg1 forPreview:(BOOL)arg2;
- (struct CGRect)_monthNameFrame;
- (struct CGPoint)_monthNameOriginPoint;
- (BOOL)_pointIntersectsMonthName:(struct CGPoint)arg1;
- (void)_reloadCachedValues;
- (void)_setUpInteraction;
- (BOOL)_shouldUseRoundedRectInsteadOfCircle;
- (id)_todayAttributes;
- (void)_updateFirstOfMonthAndYearIndices;
- (void)_updateToday;
- (void)_warmImageCache;
- (id)_weekDayInitialsImage;
- (id)calendarDateForPoint:(struct CGPoint)arg1;
- (BOOL)containsCalendarDate:(id)arg1;
- (id)cursorInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (void)cursorInteraction:(id)arg1 willEnterRegion:(id)arg2;
- (void)cursorInteraction:(id)arg1 willExitRegion:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)frameForGridOfDays:(BOOL)arg1;
- (struct CGRect)frameForTodayHighlight;
- (struct CGPoint)headerOrigin;
- (id)initWithCalendarDate:(id)arg1 calendar:(id)arg2;
- (BOOL)isCurrentMonth;
- (void)localeChanged;
- (double)minHeaderFontSizeUsed;
- (id)monthNameForDate:(id)arg1;
- (id)monthString;
- (void)overlaySignificantDatesChangedInRange:(id)arg1;
- (BOOL)pointIsAboveMonthNameBaseline:(struct CGPoint)arg1;
- (void)pulseTodayCircle;
- (struct CGSize)roundedRectSizeForDayNumberString:(id)arg1;
- (BOOL)shouldAddPreciseInteractivity;
- (void)tintColorDidChange;
- (void)updateToday;

@end

