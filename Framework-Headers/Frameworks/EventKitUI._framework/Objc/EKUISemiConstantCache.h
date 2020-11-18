//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, UIFont;

@interface EKUISemiConstantCache : NSObject
{
    double _currentWindowWidth;
    double _currentWindowHeight;
    double _currentScaleFactor;
    BOOL _currentWidthSizeClassIsRegular;
    unsigned long long _currentWindowSizeParadigm;
    BOOL _calInterfaceIsLeftToRight;
    BOOL _usesLargeText;
    double _dayOccurrenceMinimumCachedLineHeight;
    double _dayOccurrenceMinimumCachedLineHeightSmall;
    UIFont *_dayOccurrenceUncompressedSecondaryTextFont;
    NSMutableDictionary *_commentIconStrings;
    NSArray *_statusGlyphs;
    NSMutableDictionary *_birthdayImages;
    double _weekAllDayBaselineForLargeFormatWeekView;
    double _weekAllDayBaselineForSmallFormatWeekView;
    UIFont *_weekAllDayLabelFont;
    UIFont *_weekAllDayTodayLabelFont;
    double _weekAllDayOccurrenceHeight;
    double _minYearMonthHeaderFontSizeUsed;
}

@property (readonly) BOOL calInterfaceIsLeftToRight; // @synthesize calInterfaceIsLeftToRight=_calInterfaceIsLeftToRight;
@property (readonly) double currentScaleFactor; // @synthesize currentScaleFactor=_currentScaleFactor;
@property (readonly) double currentWindowHeight; // @synthesize currentWindowHeight=_currentWindowHeight;
@property (readonly) unsigned long long currentWindowSizeParadigm; // @synthesize currentWindowSizeParadigm=_currentWindowSizeParadigm;
@property (readonly) double currentWindowWidth; // @synthesize currentWindowWidth=_currentWindowWidth;
@property (readonly) double dayOccurrenceMinimumCachedLineHeight;
@property (readonly) double dayOccurrenceMinimumCachedLineHeightSmall;
@property (readonly) UIFont *dayOccurrenceUncompressedSecondaryTextFont;
@property double minYearMonthHeaderFontSizeUsed; // @synthesize minYearMonthHeaderFontSizeUsed=_minYearMonthHeaderFontSizeUsed;
@property (readonly) BOOL usesLargeText; // @synthesize usesLargeText=_usesLargeText;
@property double weekAllDayBaselineForLargeFormatWeekView; // @synthesize weekAllDayBaselineForLargeFormatWeekView=_weekAllDayBaselineForLargeFormatWeekView;
@property double weekAllDayBaselineForSmallFormatWeekView; // @synthesize weekAllDayBaselineForSmallFormatWeekView=_weekAllDayBaselineForSmallFormatWeekView;
@property (readonly) UIFont *weekAllDayLabelFont;
@property double weekAllDayOccurrenceHeight; // @synthesize weekAllDayOccurrenceHeight=_weekAllDayOccurrenceHeight;
@property (readonly) UIFont *weekAllDayTodayLabelFont;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_contentCategorySizeChanged:(id)arg1;
- (id)_dayOccurrenceFontWithStyle:(id)arg1 size:(double)arg2 regularSize:(double)arg3;
- (void)_localeChanged:(id)arg1;
- (void)_orientationChanged:(id)arg1;
- (id)birthdayImageForFont:(id)arg1;
- (id)birthdayImageForFont:(id)arg1 withColor:(id)arg2;
- (id)commentIconStringForFont:(id)arg1;
- (id)init;
- (id)statusGlyphForStatusType:(int)arg1;
- (void)updateMetrics;
- (void)updateWindowSize;

@end

