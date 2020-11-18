//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKGraphSeriesDataSource.h>

#import <HealthUI/HKHistogramAxisDimensionDataSource-Protocol.h>

@class HKGraphSeriesDataBlock, HKHealthStore, HKQuantitySample, HKQuantityType, HKUnit, HKUnitPreferenceController, HKValueRange, NSArray, NSDate, NSPredicate, NSString;
@protocol HKHistogramChartDataSourceDataFetchObserver;

@interface HKHistogramChartDataSource : HKGraphSeriesDataSource <HKHistogramAxisDimensionDataSource>
{
    unsigned char _didExecuteQuery;
    id<HKHistogramChartDataSourceDataFetchObserver> _fetchObserver;
    unsigned long long _binningMode;
    unsigned long long _binCalculation;
    unsigned long long _dateBasedBinModeConfig;
    HKHealthStore *_healthStore;
    HKUnitPreferenceController *_unitPreferenceController;
    NSString *_quantityIdentifier;
    NSPredicate *_predicate;
    HKGraphSeriesDataBlock *_dataBlock;
    NSDate *_samplesStartDate;
    NSDate *_samplesEndDate;
    HKValueRange *_xAxisRange;
    HKValueRange *_yAxisRange;
    unsigned long long _numberOfBins;
    unsigned long long _binWidth;
    CDUnknownBlockType _dataBlockBuilder;
    CDUnknownBlockType _xAxisStringForLocation;
    HKQuantitySample *_minimumSample;
    HKQuantitySample *_maximumSample;
    NSArray *_quantityValueRanges;
}

@property (nonatomic) unsigned long long binCalculation; // @synthesize binCalculation=_binCalculation;
@property (nonatomic) unsigned long long binWidth; // @synthesize binWidth=_binWidth;
@property (nonatomic) unsigned long long binningMode; // @synthesize binningMode=_binningMode;
@property (strong, nonatomic) HKGraphSeriesDataBlock *dataBlock; // @synthesize dataBlock=_dataBlock;
@property (copy, nonatomic) CDUnknownBlockType dataBlockBuilder; // @synthesize dataBlockBuilder=_dataBlockBuilder;
@property (nonatomic) unsigned long long dateBasedBinModeConfig; // @synthesize dateBasedBinModeConfig=_dateBasedBinModeConfig;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned char didExecuteQuery; // @synthesize didExecuteQuery=_didExecuteQuery;
@property (weak, nonatomic) id<HKHistogramChartDataSourceDataFetchObserver> fetchObserver; // @synthesize fetchObserver=_fetchObserver;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property (strong, nonatomic) HKQuantitySample *maximumSample; // @synthesize maximumSample=_maximumSample;
@property (strong, nonatomic) HKQuantitySample *minimumSample; // @synthesize minimumSample=_minimumSample;
@property (nonatomic) unsigned long long numberOfBins; // @synthesize numberOfBins=_numberOfBins;
@property (readonly, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property (readonly, nonatomic) NSString *quantityIdentifier; // @synthesize quantityIdentifier=_quantityIdentifier;
@property (readonly, nonatomic) HKQuantityType *quantityType;
@property (strong, nonatomic) NSArray *quantityValueRanges; // @synthesize quantityValueRanges=_quantityValueRanges;
@property (strong, nonatomic) NSDate *samplesEndDate; // @synthesize samplesEndDate=_samplesEndDate;
@property (strong, nonatomic) NSDate *samplesStartDate; // @synthesize samplesStartDate=_samplesStartDate;
@property (readonly, nonatomic) NSArray *sortDescriptors;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HKUnit *unit;
@property (readonly, nonatomic) HKUnitPreferenceController *unitPreferenceController; // @synthesize unitPreferenceController=_unitPreferenceController;
@property (readonly, nonatomic) HKValueRange *xAxisRange; // @synthesize xAxisRange=_xAxisRange;
@property (copy, nonatomic) CDUnknownBlockType xAxisStringForLocation; // @synthesize xAxisStringForLocation=_xAxisStringForLocation;
@property (readonly, nonatomic) HKValueRange *yAxisRange; // @synthesize yAxisRange=_yAxisRange;

+ (id)_daysInWeekXValueRange;
+ (id)_hoursInDayXValueRange;
- (void).cxx_destruct;
- (unsigned long long)_binIndexForSample:(id)arg1;
- (id)_buildQuantityValueRangesFromSortedSamples:(id)arg1;
- (unsigned long long)_dateBasedBinIndexForSample:(id)arg1;
- (id)_dateBasedXValueRangeForConfig:(unsigned long long)arg1;
- (unsigned long long)_dayIndexForDayName:(id)arg1;
- (id)_dayNameFormatter;
- (id)_dayNameFromDayIndex:(unsigned long long)arg1;
- (id)_dayXAxisStringForLocation:(id)arg1;
- (id)_daysOfTheWeek;
- (id)_displayType;
- (id)_hourNameFromHourIndex:(unsigned long long)arg1;
- (id)_hourOfTheDayFormatter;
- (id)_hourXAxisStringForLocation:(id)arg1;
- (id)_initWithQuantityTypeIdentifier:(id)arg1 healthStore:(id)arg2 unitPreferenceController:(id)arg3 predicate:(id)arg4 xAxisRange:(id)arg5 yAxisRange:(id)arg6 binMode:(unsigned long long)arg7 binCalculation:(unsigned long long)arg8 binWidth:(double)arg9 numberOfBins:(unsigned long long)arg10 dateBasedBinModeConfig:(unsigned long long)arg11;
- (unsigned long long)_normalBinIndexForSample:(id)arg1;
- (id)_query;
- (id)_samplesSortedByQuantity:(id)arg1;
- (CDStruct_6ca94699)blockPathForX:(id)arg1 zoom:(long long)arg2;
- (void)blocksRequestedFromPath:(CDStruct_6ca94699)arg1 toPath:(CDStruct_6ca94699)arg2;
- (id)buildBinsWithSamples:(id)arg1;
- (id)buildGraphSeriesDataBlockFromSamples:(id)arg1;
- (id)buildGraphSeriesDataBlockWithCalculatedBinValues:(id)arg1;
- (id)cachedBlockForPath:(CDStruct_6ca94699)arg1 context:(id)arg2;
- (id)calculateBinValueForBins:(id)arg1 usingCalculation:(unsigned long long)arg2;
- (void)didCompleteFetch;
- (void)fetchData;
- (id)initWithQuantityTypeIdentifier:(id)arg1 healthStore:(id)arg2 unitPreferenceController:(id)arg3 predicate:(id)arg4 yAxisRange:(id)arg5 binCalculation:(unsigned long long)arg6 dateBasedBinModeConfig:(unsigned long long)arg7;
- (id)initWithQuantityTypeIdentifier:(id)arg1 healthStore:(id)arg2 unitPreferenceController:(id)arg3 predicate:(id)arg4 yAxisRange:(id)arg5 binWidth:(double)arg6;
- (id)stringForLocation:(id)arg1;
- (id)xAxisStringForLocation:(id)arg1;

@end
