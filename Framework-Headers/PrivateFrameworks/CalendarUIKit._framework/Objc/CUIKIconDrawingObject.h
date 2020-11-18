//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCalendar, NSString, UIFont;

@interface CUIKIconDrawingObject : NSObject
{
    NSCalendar *_calendar;
    NSString *_dayNumber;
    CDUnknownBlockType _dateNameBlock;
    long long _dateNameFormatType;
    long long _format;
    struct CGSize _canvasSize;
}

@property (strong) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property struct CGSize canvasSize; // @synthesize canvasSize=_canvasSize;
@property (readonly, nonatomic) double dateNameBaselineVerticalInset;
@property (copy) CDUnknownBlockType dateNameBlock; // @synthesize dateNameBlock=_dateNameBlock;
@property (readonly, nonatomic) UIFont *dateNameFont;
@property long long dateNameFormatType; // @synthesize dateNameFormatType=_dateNameFormatType;
@property (readonly, nonatomic) double dateNameHorizontalInset;
@property (copy) NSString *dayNumber; // @synthesize dayNumber=_dayNumber;
@property (readonly, nonatomic) double dayNumberBaselineVerticalInset;
@property (readonly, nonatomic) UIFont *dayNumberFont;
@property (readonly, nonatomic) double dayNumberTrackingValue;
@property long long format; // @synthesize format=_format;
@property (readonly, nonatomic) double minDateNameFontScale;
@property (readonly, nonatomic) double minDateNameLetterSpacing;
@property (readonly, nonatomic) double minFullDateNameFontScale;

+ (id)_dateNamesForCalendar:(id)arg1 type:(long long)arg2;
+ (id)_dateNamesForDateFormatter:(id)arg1 type:(long long)arg2;
+ (id)colorForDayOfWeek;
+ (id)countriesRequiringBlackDayOfWeek;
+ (BOOL)isBlackDayOfWeekRequiredForLocale:(id)arg1;
- (void).cxx_destruct;
- (void)_drawDateName;
- (void)_drawDayNumber;
- (void)_drawDayNumberForHomeScreenStyledIcon;
- (void)_drawDayNumberForNotificationIcon;
- (void)draw;
- (id)initWithCalendar:(id)arg1 dayNumber:(id)arg2 dateNameBlock:(CDUnknownBlockType)arg3 dateNameFormatType:(long long)arg4 canvasSize:(struct CGSize)arg5 format:(long long)arg6;

@end

