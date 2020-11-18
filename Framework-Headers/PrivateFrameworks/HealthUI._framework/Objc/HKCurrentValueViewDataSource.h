//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKInteractiveChartCurrentValueViewDataSource-Protocol.h>

@class HKDateCache, HKDisplayCategoryController, HKDisplayType, HKHealthStore, HKSelectedRangeFormatter, NSArray, NSString, UIColor, UIFont;
@protocol HKCurrentValueViewDataSourceValueRangeFormatter;

@interface HKCurrentValueViewDataSource : NSObject <HKInteractiveChartCurrentValueViewDataSource>
{
    BOOL _pendingData;
    NSArray *_selectedRangeData;
    id<HKCurrentValueViewDataSourceValueRangeFormatter> _valueRangeFormatter;
    UIColor *_titleColor;
    HKSelectedRangeFormatter *_selectedRangeFormatter;
    HKDateCache *_dateCache;
    HKHealthStore *_healthStore;
    HKDisplayCategoryController *_displayCategoryController;
    HKDisplayType *_displayType;
    NSString *_dateIntervalString;
    UIColor *_valueColor;
    UIFont *_majorFont;
    UIFont *_minorFont;
}

@property (strong, nonatomic) HKDateCache *dateCache; // @synthesize dateCache=_dateCache;
@property (strong, nonatomic) NSString *dateIntervalString; // @synthesize dateIntervalString=_dateIntervalString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) HKDisplayCategoryController *displayCategoryController; // @synthesize displayCategoryController=_displayCategoryController;
@property (strong, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property (strong, nonatomic) UIFont *majorFont; // @synthesize majorFont=_majorFont;
@property (strong, nonatomic) UIFont *minorFont; // @synthesize minorFont=_minorFont;
@property (nonatomic) BOOL pendingData; // @synthesize pendingData=_pendingData;
@property (strong, nonatomic) NSArray *selectedRangeData; // @synthesize selectedRangeData=_selectedRangeData;
@property (strong, nonatomic) HKSelectedRangeFormatter *selectedRangeFormatter; // @synthesize selectedRangeFormatter=_selectedRangeFormatter;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property (strong, nonatomic) UIColor *valueColor; // @synthesize valueColor=_valueColor;
@property (weak, nonatomic) id<HKCurrentValueViewDataSourceValueRangeFormatter> valueRangeFormatter; // @synthesize valueRangeFormatter=_valueRangeFormatter;

+ (id)defaultStringForValueRange:(id)arg1 timeScope:(long long)arg2;
- (void).cxx_destruct;
- (id)_dividerForRangeData:(id)arg1 font:(id)arg2 foregroundColor:(id)arg3;
- (BOOL)_isAudioExposureDisplayType;
- (BOOL)_isDataMinMax;
- (BOOL)_isMenstruationDisplayType;
- (long long)_numberOfColumns;
- (BOOL)_rangeDataIsBloodPressure:(id)arg1;
- (BOOL)_rangeDataIsMenstruation:(id)arg1;
- (BOOL)_rangeDataIsSleep:(id)arg1;
- (id)_selectedRangeDataForColumnAtIndex:(long long)arg1;
- (id)attributedTitleStringForCurrentValueView:(id)arg1;
- (id)attributedValueStringForCurrentValueView:(id)arg1;
- (id)initWithDateCache:(id)arg1 displayCategoryController:(id)arg2 healthStore:(id)arg3 selectedRangeFormatter:(id)arg4;
- (id)secondaryStringForCurrentValueView:(id)arg1;
- (id)secondaryTextColorForCurrentValueView:(id)arg1;
- (id)textColorForCurrentValueView:(id)arg1;
- (void)updateDataSourceWithGraphView:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3;

@end
