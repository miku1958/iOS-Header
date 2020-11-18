//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCHUnretainedParent-Protocol.h>

@class TSCHChartSeries;

__attribute__((visibility("hidden")))
@interface TSCHErrorBarData : NSObject <TSCHUnretainedParent>
{
    TSCHChartSeries *mSeries;
    BOOL mSupportsXAxisBars;
    double mMaxValue;
    double mMinValue;
    long long mMaxValueGroupIndex;
    long long mMinValueGroupIndex;
    double mMaxValueScatterX;
    double mMinValueScatterX;
    double mStandardError;
    double mStandardDeviation;
    double mStandardDeviationMean;
    double mStandardErrorScatterX;
    double mStandardDeviationScatterX;
    double mStandardDeviationMeanScatterX;
    BOOL mErrorBarsInvalid;
}

@property (readonly, nonatomic) long long maxValueGroupIndex; // @synthesize maxValueGroupIndex=mMaxValueGroupIndex;
@property (readonly, nonatomic) long long minValueGroupIndex; // @synthesize minValueGroupIndex=mMinValueGroupIndex;

+ (BOOL)hasErrorBarsForSeries:(id)arg1;
+ (int)p_errorBarSettingForSeries:(id)arg1 useXAxis:(BOOL)arg2 axisID:(id)arg3;
- (void).cxx_destruct;
- (void)clearParent;
- (BOOL)hasErrorDataForAxisID:(id)arg1 valueIndex:(unsigned long long)arg2 chartVertical:(BOOL)arg3 barVertical:(BOOL *)arg4 unitValue:(struct CGPoint *)arg5 unitPositive:(struct CGPoint *)arg6 unitNegative:(struct CGPoint *)arg7;
- (id)initWithSeries:(id)arg1;
- (void)invalidateData;
- (id)lineEndForAxisID:(id)arg1;
- (double)maxValueForAxisID:(id)arg1;
- (double)minValueForAxisID:(id)arg1;
- (float)opacityForAxisID:(id)arg1;
- (void)p_clearData;
- (double *)p_createArrayOfSeriesOffsetsForAxisID:(id)arg1 count:(unsigned long long)arg2;
- (double *)p_createArrayOfSeriesValuesForAxisID:(id)arg1 count:(unsigned long long)arg2;
- (double)p_customErrorForAxisID:(id)arg1 groupIndex:(unsigned long long)arg2 positive:(BOOL)arg3;
- (BOOL)p_errorBarIsVerticalForAxisID:(id)arg1 chartVertical:(BOOL)arg2;
- (int)p_errorBarSettingForAxisID:(id)arg1 value:(double)arg2 barType:(int)arg3;
- (int)p_errorBarTypeForAxisID:(id)arg1;
- (double)p_errorForValue:(double *)arg1 onAxisID:(id)arg2 groupIndex:(unsigned long long)arg3 positive:(BOOL)arg4;
- (double)p_fixedErrorForAxisID:(id)arg1;
- (struct CGPoint)p_getValuePointForGroup:(unsigned long long)arg1 inputAxisID:(id)arg2 outputAxisID:(id)arg3 barVertical:(BOOL)arg4;
- (double)p_negativeErrorForValue:(double *)arg1 onAxisID:(id)arg2 groupIndex:(unsigned long long)arg3;
- (double)p_percentageErrorForAxisID:(id)arg1;
- (double)p_positiveErrorForValue:(double *)arg1 onAxisID:(id)arg2 groupIndex:(unsigned long long)arg3;
- (double)p_stdDevErrorForAxisID:(id)arg1;
- (double)p_stdDevFactorForAxisID:(id)arg1;
- (double)p_stdDevMeanForAxisID:(id)arg1;
- (double)p_stdErrorErrorForAxisID:(id)arg1;
- (unsigned long long)p_stripBadValuesInArray:(double *)arg1 numValues:(unsigned long long)arg2;
- (void)p_updateDataForAxisID:(id)arg1;
- (void)p_updateMinMaxForAxisID:(id)arg1 forValues:(double *)arg2 withOffsets:(double *)arg3 numValues:(unsigned long long)arg4;
- (void)p_updateMinMaxForStackedPercentageAxis:(id)arg1 forValues:(double *)arg2 withOffsets:(double *)arg3 numValues:(unsigned long long)arg4;
- (void)p_updateStdDeviationForAxisID:(id)arg1 forValues:(double *)arg2 withOffsets:(double *)arg3 numValues:(unsigned long long)arg4;
- (void)p_updateStdErrorForAxisID:(id)arg1 forValues:(double *)arg2 withOffsets:(double *)arg3 numValues:(unsigned long long)arg4;
- (id)shadowForAxisID:(id)arg1;
- (BOOL)showErrorBarsForAxisID:(id)arg1;
- (id)strokeForAxisID:(id)arg1;
- (void)updateIfNeeded;

@end

