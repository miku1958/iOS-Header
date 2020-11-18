//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCHPropertyMapsGeneratedProtocol-Protocol.h>
#import <iWorkImport/TSCHStyleOwnerCollaborationSupport-Protocol.h>
#import <iWorkImport/TSCHStyleOwning-Protocol.h>
#import <iWorkImport/TSCHUnretainedParent-Protocol.h>

@class NSArray, NSString, TSCHChartAxisID, TSCHChartModel, TSUFastReadInvalidatingCache, TSULocale, TSUWeakReference;
@protocol TSCHStyleActAlike;

__attribute__((visibility("hidden")))
@interface TSCHChartAxis : NSObject <TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwnerCollaborationSupport, TSCHUnretainedParent, TSCHStyleOwning>
{
    TSCHChartModel *mChartModel;
    TSCHChartAxisID *mAxisID;
    id<TSCHStyleActAlike> mStyle;
    id<TSCHStyleActAlike> mNonStyle;
    unsigned long long mStyleIndex;
    unsigned long long mNonStyleIndex;
    TSUFastReadInvalidatingCache *mAnalysisCache;
    TSUFastReadInvalidatingCache *mInterceptCache;
    TSUFastReadInvalidatingCache *mMultiDataSetAnalysisCache;
    TSUWeakReference *mNonTransientCounterpart;
}

@property (readonly, nonatomic) TSCHChartAxisID *axisID; // @synthesize axisID=mAxisID;
@property (readonly, nonatomic) int currentAxisScaleSetting;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) BOOL isCategory;
@property (readonly) BOOL isRangeContinuous;
@property (readonly, nonatomic) TSULocale *locale;
@property (readonly, nonatomic) TSCHChartModel *model; // @synthesize model=mChartModel;
@property (readonly, nonatomic) NSArray *referenceLines;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) BOOL supportsReferenceLines;

+ (id)axisForInfo:(id)arg1;
+ (id)defaultNumberFormat;
+ (id)paragraphStyleForLabelsFontForInfo:(id)arg1;
+ (tvec2_84d5962d)sizeOfLabelsForInfo:(id)arg1 onlyHeight:(BOOL)arg2;
+ (tvec2_84d5962d)sizeOfSeriesLabelsForInfo:(id)arg1;
+ (tvec2_84d5962d)sizeOfSeriesLabelsForInfo:(id)arg1 onlyHeight:(BOOL)arg2;
+ (unsigned char)styleOwnerPathType;
- (void)adjustMinMaxForDataRangeInAnalysis:(id)arg1;
- (int)adjustedNumberFormatType;
- (id)analysis;
- (unsigned long long)axisIndex;
- (double)axisInterceptPosition;
- (id)chartInfo;
- (void)clearParent;
- (id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg1;
- (id)computeMinorGridlinesFromMajorGridlinesInAnalysis:(id)arg1;
- (id)context;
- (double)currentDataSetModelAverage;
- (double)currentDataSetModelMax;
- (double)currentDataSetModelMedian;
- (double)currentDataSetModelMin;
- (id)customFormatForGridValueType:(int)arg1;
- (id)dataFormatter;
- (id)dataFormatterForSeries:(id)arg1 index:(unsigned long long)arg2;
- (void)dealloc;
- (id)defaultProperties;
- (int)defaultPropertyForGeneric:(int)arg1;
- (double)doubleAxisToModelValue:(double)arg1;
- (double)doubleModelToAxisValue:(double)arg1 forSeries:(id)arg2;
- (id)drawableInfo;
- (BOOL)editableFormatForValueStrings;
- (float)floatValueForProperty:(int)arg1 defaultValue:(float)arg2;
- (id)formattedStringForAxisValue:(id)arg1;
- (id)formattedStringForSeries:(id)arg1 index:(unsigned long long)arg2;
- (id)formattedStringForSeries:(id)arg1 index:(unsigned long long)arg2 multiDataSetIndex:(unsigned long long)arg3;
- (id)g_genericToDefaultPropertyMap;
- (id)g_operationPropertyNameForGenericProperty:(int)arg1;
- (id)gridValueAxisToModelValue:(double)arg1;
- (int)gridValueType;
- (BOOL)hasCustomFormatForGridValueType:(int)arg1;
- (BOOL)hasFloatValueForProperty:(int)arg1 value:(float *)arg2;
- (BOOL)hasIntValueForProperty:(int)arg1 value:(int *)arg2;
- (BOOL)hasObjectValueForProperty:(int)arg1 value:(id *)arg2;
- (unsigned long long)indexForSelectionPathLabelIndex:(unsigned long long)arg1;
- (id)initWithAxisID:(id)arg1 model:(id)arg2;
- (id)inspectorStringForSeries:(id)arg1 index:(unsigned long long)arg2 value:(id)arg3;
- (int)intValueForProperty:(int)arg1 defaultValue:(int)arg2;
- (id)interceptAnalysis;
- (double)interceptForAxis:(id)arg1;
- (void)invalidateMultiDataSetAnalysis;
- (void)invalidateTransientState;
- (id)majorGridLocations;
- (double)max;
- (double)min;
- (id)minorGridLocations;
- (double)modelMax;
- (double)modelMin;
- (id)multiDataSetAnalysis;
- (unsigned long long)nonStyleIndex;
- (id)nonstyle;
- (id)objectValueForProperty:(int)arg1;
- (id)operationPropertyNameFromGenericProperty:(int)arg1;
- (id)p_axisAnalysisFromCurrentModel;
- (id)p_axisDataFormatterFromCurrentModel;
- (int)p_axisGridValueType;
- (unsigned long long)p_count;
- (id)p_dataFormatterForSeries:(id)arg1 index:(unsigned long long)arg2 onlyForValidValue:(BOOL)arg3;
- (id)p_fixupNegativeStyleForDataFormatter:(id)arg1;
- (id)p_genericToDefaultPropertyMap;
- (id)p_interceptAnalysisFromCurrentModel;
- (id)p_multiDataAxisAnalysisFromCurrentModel;
- (id)p_nonTransientCounterpart;
- (unsigned long long)p_rangeCount;
- (void)p_setupMultiDataSetAnalysisCacheIfNeeded;
- (void)propertiesWereMutated:(id)arg1;
- (double)range;
- (id)referenceLineAtIndex:(unsigned long long)arg1;
- (id)referenceLineWithUUID:(id)arg1;
- (unsigned long long)selectionPathLabelIndexForIndex:(unsigned long long)arg1;
- (unsigned long long)selectionPathLabelIndexForMultiDataSetIndex:(unsigned long long)arg1;
- (void)setNonStyle:(id)arg1 index:(unsigned long long)arg2;
- (void)setStyle:(id)arg1 index:(unsigned long long)arg2;
- (BOOL)shouldAnalyzeAxisValue:(double)arg1;
- (tvec2_84d5962d)sizeOfLabelsForInfo:(id)arg1 enumerator:(id)arg2 onlyHeight:(BOOL)arg3;
- (int)specificPropertyForGeneric:(int)arg1;
- (id)style;
- (unsigned long long)styleIndex;
- (BOOL)supportsFormattedStringForInvalidValue;
- (id)swapTuplesForMutations:(id)arg1 forImport:(BOOL)arg2;
- (id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2;
- (double)unitSpaceCenterValueForSeries:(id)arg1 index:(unsigned long long)arg2;
- (double)unitSpaceCenterValueForValue:(double)arg1;
- (double)unitSpaceCenterValueHalfOffset;
- (double *)unitSpaceCenterValuesForSeries:(id)arg1 indexes:(struct _NSRange)arg2;
- (double)unitSpaceHalfOffsetForCountSpaceHalfOffset;
- (double)unitSpaceValueForCountSpaceValue:(double)arg1;
- (double)unitSpaceValueForCountSpaceValue:(double)arg1 min:(double)arg2 count:(double)arg3;
- (double)unitSpaceValueForDataSpaceValue:(double)arg1;
- (double)unitSpaceValueForDataSpaceValue:(double)arg1 min:(double)arg2 max:(double)arg3;
- (double)unitSpaceValueForDataSpaceValue:(double)arg1 series:(id)arg2 index:(unsigned long long)arg3;
- (double)unitSpaceValueForSeries:(id)arg1 index:(unsigned long long)arg2;
- (double)unitSpaceValueForSeries:(id)arg1 index:(unsigned long long)arg2 min:(double)arg3 max:(double)arg4;
- (double *)unitSpaceValuesForSeries:(id)arg1 indexes:(struct _NSRange)arg2;
- (double *)unitSpaceValuesForSeries:(id)arg1 indexes:(struct _NSRange)arg2 min:(double)arg3 max:(double)arg4;
- (void)updateAxisDateInterceptInAnalysis:(id)arg1;
- (void)updateGridValueTypeInterceptInAnalysis:(id)arg1;
- (void)updateMinMaxGridLocationsInAnalysis:(id)arg1;
- (void)updateModelAxisAnalysis:(id)arg1;
- (void)updateMultiDataModelAxisAnalysis:(id)arg1;
- (id)valueForFormattedString:(id)arg1;
- (id)valueForProperty:(int)arg1;

@end

