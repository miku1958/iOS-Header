//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSCHChunkMap, TSUWeakReference;

__attribute__((visibility("hidden")))
@interface TSCHChunkManager : NSObject
{
    TSUWeakReference *mWeakChart;
    TSCHChunkMap *mCachedChunkMap;
}

+ (id)p_allChartDeliveryStylesLocalized:(BOOL)arg1;
+ (id)p_allLocalizedChartDeliveryStyles;
+ (id)p_allNonLocalizedChartDeliveryStyles;
+ (id)p_makeAllChartDeliveryStylesLocalized:(BOOL)arg1;
- (void)adjustRangeForRep:(id)arg1 chunkIndex:(unsigned long long)arg2 finalTexture:(BOOL)arg3 seriesStart:(long long *)arg4 seriesCount:(long long *)arg5;
- (void)adjustRangeForRep:(id)arg1 seriesIndex:(unsigned long long)arg2 chunkIndex:(unsigned long long)arg3 finalTexture:(BOOL)arg4 valueStart:(long long *)arg5 valueCount:(long long *)arg6;
- (id)animationFiltersWithDefaultFilters:(id)arg1;
- (unsigned long long)chartDeliveryStyleFromTSDDeliveryStyle:(unsigned long long)arg1;
- (unsigned long long)chunkCountByUpdatingCacheIfNecessaryForChartDeliveryStyle:(unsigned long long)arg1;
- (unsigned long long)chunkCountForChartDeliveryStyle:(unsigned long long)arg1;
- (id)containedTextForChartDeliveryStyle:(unsigned long long)arg1 chunkIndex:(unsigned long long)arg2 displayName:(id)arg3;
- (void)dealloc;
- (BOOL)hasBackgroundLayerForPieChart;
- (id)initWithChartInfo:(id)arg1;
- (BOOL)isVisibleAtBeginningOfMagicChartBuildForDeliveryStyle:(unsigned long long)arg1;
- (BOOL)lastChunkForSeriesIndex:(unsigned long long)arg1 currentChunk:(unsigned long long)arg2 chunkStyle:(unsigned long long)arg3;
- (id)p_backgroundStringForChartWithTitle:(id)arg1;
- (id)p_cachedChunkMap;
- (id)p_chart;
- (unsigned long long)p_chunkCountForChart:(id)arg1 chunkStyle:(unsigned long long)arg2 chunkMap:(id)arg3;
- (id)p_chunkMapForChart:(id)arg1 chunkStyle:(unsigned long long)arg2 forceUpdateCache:(BOOL)arg3;
- (id)p_createChunkMapForChart:(id)arg1 chunkStyle:(unsigned long long)arg2;
- (BOOL)p_hasBackgroundFillForChart:(id)arg1;
- (BOOL)p_hasBackgroundLayerForPieChartForChart:(id)arg1;
- (BOOL)p_isMultiDataForChart:(id)arg1;
- (BOOL)p_isPieForChart:(id)arg1;
- (BOOL)p_legendOnForChart:(id)arg1;
- (id)p_nameForMultiDataSetCategory:(unsigned long long)arg1 chart:(id)arg2;
- (id)p_seriesNameForSeriesAtIndex:(unsigned long long)arg1 withPrefix:(id)arg2 chart:(id)arg3;
- (BOOL)p_titleOnForChart:(id)arg1;
- (unsigned long long)textureDeliveryStyleFromDeliveryString:(id)arg1;
- (id)textureDeliveryStylesLocalized:(BOOL)arg1 animationFilter:(id)arg2;
- (void)updateCache:(unsigned long long)arg1;

@end

