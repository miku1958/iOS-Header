//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKAxis.h>

@class HKDateIntervalCache, NSArray;

@interface HKDateAxis : HKAxis
{
    HKDateIntervalCache *_intervalCache;
    NSArray *_cachedAxisLabels;
    long long _dayScopeType;
}

@property (nonatomic) long long dayScopeType; // @synthesize dayScopeType=_dayScopeType;

- (void).cxx_destruct;
- (unsigned long long)_anchorUnitForZoom:(long long)arg1;
- (id)_axisLabelsWithModelRange:(id)arg1 zoom:(long long)arg2;
- (void)_clearCachedAxisLabels;
- (id)_dateRangeForChartRange:(struct HKRange)arg1 zoomScale:(double)arg2;
- (void)_enumerateCachedCoordinatesInModelRange:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)_formattedStringForDate:(id)arg1 zoom:(long long)arg2;
- (BOOL)_labelsOutsideStartDate:(id)arg1 endDate:(id)arg2;
- (void)_setRangeForDateRange:(id)arg1;
- (void)_updateIntervalCacheWithModelRange:(id)arg1 zoomScale:(double)arg2;
- (long long)dateZoomForZoomScale:(double)arg1;
- (id)extendedModelRangeWithRange:(id)arg1 timeScope:(long long)arg2;
- (id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (id)init;
- (void)offsetForValueRange:(id)arg1 chartRect:(struct CGRect)arg2 zoomScaleOut:(double *)arg3 contentOffsetOut:(struct CGPoint *)arg4;
- (id)rangeForChartRect:(struct CGRect)arg1 zoomScale:(double)arg2 contentOffset:(struct CGPoint)arg3;
- (id)stringForDate:(id)arg1 zoom:(long long)arg2 labelType:(long long)arg3;
- (id)zoomScaleEngine;

@end

