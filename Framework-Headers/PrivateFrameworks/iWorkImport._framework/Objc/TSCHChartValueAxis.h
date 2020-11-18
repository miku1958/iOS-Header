//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHChartAxis.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface TSCHChartValueAxis : TSCHChartAxis
{
}

@property (readonly, nonatomic) NSNumber *userMax;
@property (readonly, nonatomic) NSNumber *userMin;

+ (id)axisForInfo:(id)arg1;
+ (unsigned char)styleOwnerPathType;
- (void)adjustMinMaxForDataRangeInAnalysis:(id)arg1;
- (id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg1;
- (id)defaultProperties;
- (BOOL)editableFormatForValueStrings;
- (id)g_genericToSpecificPropertyMap;
- (pair_952e027e)labelEnumeratorPair;
- (id)p_GetGenericToValuePropertyMap;
- (CDStruct_41cea37a)p_axisDescFromFixedMinValue:(double)arg1 fixedMaxValue:(double)arg2 spreadRanges:(const CDStruct_c3b9c2ee *)arg3;
- (CDStruct_41cea37a)p_axisDescFromFixedNegativeMinValue:(double)arg1 positiveMaxValue:(double)arg2 spreadRanges:(const CDStruct_c3b9c2ee *)arg3;
- (CDStruct_41cea37a)p_axisDescFromFixedPositiveMinValue:(double)arg1 positiveMaxValue:(double)arg2 spreadRanges:(const CDStruct_c3b9c2ee *)arg3;
- (CDStruct_41cea37a)p_axisDescFromMinValue:(double)arg1 maxValue:(double)arg2 userValues:(long long)arg3;
- (CDStruct_41cea37a)p_axisDescFromNegativeMinValue:(double)arg1 fixedPositiveMaxValue:(double)arg2 spreadRanges:(const CDStruct_c3b9c2ee *)arg3;
- (CDStruct_41cea37a)p_axisDescFromNegativeMinValue:(double)arg1 positiveMaxValue:(double)arg2 spreadRanges:(const CDStruct_c3b9c2ee *)arg3;
- (CDStruct_41cea37a)p_axisDescFromPositiveMinValue:(double)arg1 fixedPositiveMaxValue:(double)arg2 spreadRanges:(const CDStruct_c3b9c2ee *)arg3;
- (CDStruct_41cea37a)p_axisDescFromPositiveMinValue:(double)arg1 positiveMaxValue:(double)arg2 spreadRanges:(const CDStruct_c3b9c2ee *)arg3;
- (double)p_calculateAxisDeltaFromSpread:(double)arg1 spreadRanges:(const CDStruct_c3b9c2ee *)arg2;
- (CDStruct_41cea37a)p_calculateAxisDescFromMinValue:(double)arg1 maxValue:(double)arg2 userValues:(long long)arg3;
- (id)p_computeMajorGridlines:(long long)arg1 analysis:(id)arg2;
- (id)p_computeMajorGridlinesAutomaticallyInAnalysis:(id)arg1 forHorizChart:(BOOL)arg2;
- (void)p_includeZeroWithMinValue:(double *)arg1 maxValue:(double *)arg2 userValues:(long long)arg3;
- (int)specificPropertyForGeneric:(int)arg1;
- (BOOL)supportsAxisValueLabels;
- (BOOL)supportsReferenceLines;
- (void)updateModelAxisAnalysis:(id)arg1;
- (void)updateModelMinMaxForErrorBarsOnSeries:(id)arg1 axisID:(id)arg2 analysis:(id)arg3;
- (void)updateModelMinMaxForTrendLineOnSeries:(id)arg1 axisID:(id)arg2 analysis:(id)arg3;
- (double)validateUserMaxForDouble:(double)arg1;
- (double)validateUserMinForDouble:(double)arg1;

@end

