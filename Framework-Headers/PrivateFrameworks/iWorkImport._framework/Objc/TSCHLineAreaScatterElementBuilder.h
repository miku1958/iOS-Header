//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHElementBuilder.h>

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSCHLineAreaScatterElementBuilder : TSCHElementBuilder
{
    NSMutableDictionary *mPathCache;
    NSObject<OS_dispatch_queue> *mPathCacheQueue;
}

- (void).cxx_destruct;
- (unsigned long long)countOfElementsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementBounds:(struct CGRect **)arg4 outNewClipRects:(struct CGRect **)arg5 outNewElementPaths:(const struct CGPath ***)arg6 outSelectionKnobLocations:(id *)arg7 forHighlightPath:(BOOL)arg8;
- (unsigned long long)countOfErrorBarsInSeries:(id)arg1 forGroups:(id)arg2 forAxisID:(id)arg3 forBodyLayout:(id)arg4 outClipRect:(struct CGRect *)arg5 outNewErrorBarDescriptors:(CDStruct_183601bc **)arg6;
- (unsigned long long)countOfHitCheckRegionsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementPaths:(const struct CGPath ***)arg4 outSelectionKnobLocations:(id *)arg5;
- (unsigned long long)countOfLabelsForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewTransforms:(struct CGAffineTransform **)arg4 outNewElementSizes:(struct CGSize **)arg5 outNewClipRect:(struct CGRect **)arg6 outNewStrings:(id *)arg7;
- (unsigned long long)countOfPointsForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outElementSize:(struct CGSize *)arg4 outClipRect:(struct CGRect *)arg5 outUnitSymbolPath:(const struct CGPath **)arg6 outNewTransformArray:(struct CGAffineTransform **)arg7 outNewGroupIndexArray:(unsigned long long **)arg8;
- (float)dataPointDimension:(id)arg1 symbolType:(int)arg2 stroke:(id)arg3;
- (long long)hitCheckPoint:(struct CGPoint)arg1 inSeries:(id)arg2 withBodyLayout:(id)arg3;
- (id)init;
- (struct CGPoint)labelPointForPosition:(unsigned int)arg1 rect:(struct CGRect)arg2 stringSize:(struct CGSize)arg3 symbolType:(int)arg4;
- (BOOL)needsSeparateHitTestingPaths;
- (BOOL)p_addBottomStroke:(CDStruct_e0d92598 *)arg1 toPath:(struct CGPath *)arg2 seriesIndex:(unsigned long long)arg3 valuesStart:(unsigned long long)arg4 valuesEnd:(unsigned long long)arg5 withPointsArray:(CDStruct_460b8ffe *)arg6 withCount:(unsigned long long)arg7;
- (void)p_addCurvedTopStroke:(CDStruct_e0d92598 *)arg1 toPath:(struct CGPath *)arg2 withPointsArray:(CDStruct_460b8ffe *)arg3 withCount:(unsigned long long)arg4;
- (void)p_addKnobsForPoint:(struct CGPoint)arg1 strokedUnitSymbolRect:(struct CGRect)arg2 toKnobSet:(id)arg3 symbolsShowing:(BOOL)arg4 includePoint:(BOOL)arg5;
- (void)p_addTopStroke:(CDStruct_e0d92598 *)arg1 toPath:(struct CGPath *)arg2 withPointsArray:(CDStruct_460b8ffe *)arg3 withCount:(unsigned long long)arg4 lineType:(int)arg5;
- (double)p_bubbleMaxForSeries:(id)arg1 inChartBodyLayoutSize:(struct CGSize)arg2;
- (id)p_calculateSelectionKnobSet:(id)arg1;
- (BOOL)p_centerPointForSeries:(id)arg1 forGroupIndex:(unsigned long long)arg2 xAxis:(id)arg3 yAxis:(id)arg4 plotAreaFrame:(struct CGRect)arg5 nullsUseIntercept:(BOOL)arg6 outPoint:(struct CGPoint *)arg7;
- (CDStruct_40a92360 *)p_centerPointsForSeries:(id)arg1 forGroupIndexes:(struct _NSRange)arg2 xAxis:(id)arg3 yAxis:(id)arg4 nullsUseIntercept:(BOOL)arg5 plotAreaFrame:(struct CGRect)arg6;
- (CDStruct_40a92360 *)p_centerPointsForSeries:(id)arg1 forGroupIndexes:(struct _NSRange)arg2 xAxis:(id)arg3 yAxis:(id)arg4 plotAreaFrame:(struct CGRect)arg5;
- (void)p_createElementsForSeries:(id)arg1 forGroups:(id)arg2 inBodyLayout:(id)arg3 outTopStrokePath:(const struct CGPath **)arg4 outTopStrokeClipRect:(struct CGRect *)arg5 outSeriesElementPath:(const struct CGPath **)arg6 outSeriesElementClipRect:(struct CGRect *)arg7 outSymbolElementPath:(const struct CGPath **)arg8 outSymbolElementClipRect:(struct CGRect *)arg9 outSymbolElementHitCheckPath:(const struct CGPath **)arg10 outSelectionKnobLocations:(id *)arg11;
- (CDStruct_460b8ffe *)p_createPointArrayForSeries:(id)arg1 inAreaFrame:(struct CGRect)arg2 valueStart:(unsigned long long)arg3 valueEnd:(unsigned long long)arg4 cullBadPoints:(BOOL)arg5 outCount:(unsigned long long *)arg6;
- (CDStruct_460b8ffe *)p_createPointArrayForSeries:(id)arg1 inAreaFrame:(struct CGRect)arg2 valueStart:(long long)arg3 valueEnd:(long long)arg4 outCount:(unsigned long long *)arg5;
- (BOOL)p_hitCheckPoint:(struct CGPoint)arg1 inSymbolsOfSeries:(id)arg2 withBodyLayout:(id)arg3;
- (struct CGPath *)p_newCirclePath:(struct CGPoint)arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4;
- (struct CGPath *)p_newCrossPath:(struct CGPoint)arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4;
- (struct CGPath *)p_newDiamondPath:(struct CGPoint)arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4;
- (struct CGPath *)p_newPathForSymbol:(int)arg1 context:(struct CGContext *)arg2 at:(struct CGPoint)arg3 width:(double)arg4 pathLocation:(long long)arg5 stroke:(id)arg6;
- (struct CGPath *)p_newPlusPath:(struct CGPoint)arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4 context:(struct CGContext *)arg5;
- (struct CGPath *)p_newSquarePath:(struct CGPoint)arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4 context:(struct CGContext *)arg5;
- (struct CGPath *)p_newTrianglePath:(struct CGPoint)arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4;
- (struct CGPath *)p_newUnitPathForSymbol:(int)arg1 symbolSize:(double)arg2 stroke:(id)arg3 forHitCheck:(BOOL)arg4;
- (struct CGPath *)p_newYieldPath:(struct CGPoint)arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4;
- (id)p_symbolKnobLocationsForSeries:(id)arg1 forGroups:(id)arg2 inBodyLayout:(id)arg3;
- (void)p_trendlineInfoForSeries:(id)arg1 forBodyLayout:(id)arg2 outVertical:(BOOL *)arg3 outOffsetInBody:(double *)arg4;
- (id)p_uncachedUnitPathForSymbol:(int)arg1 symbolSize:(double)arg2 stroke:(id)arg3 forHitCheck:(BOOL)arg4;
- (BOOL)symbolTypeIsClosed:(int)arg1;
- (struct CGAffineTransform)transformForRenderingLabelInBody:(id)arg1 forSeries:(unsigned long long)arg2 forGroup:(unsigned long long)arg3 outElementSize:(struct CGSize *)arg4 outClipRect:(struct CGRect *)arg5;
- (struct CGAffineTransform)transformForRenderingSeriesElementForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outElementSize:(struct CGSize *)arg4 outClipRect:(struct CGRect *)arg5 outNewElementPath:(const struct CGPath **)arg6;
- (struct CGAffineTransform)transformForRenderingSeriesElementSymbolsForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outElementSize:(struct CGSize *)arg4 outClipRect:(struct CGRect *)arg5 outNewElementPath:(const struct CGPath **)arg6;
- (struct CGAffineTransform)transformForRenderingSeriesElementTopStrokeForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outElementSize:(struct CGSize *)arg4 outClipRect:(struct CGRect *)arg5 outNewElementPath:(const struct CGPath **)arg6;

@end

