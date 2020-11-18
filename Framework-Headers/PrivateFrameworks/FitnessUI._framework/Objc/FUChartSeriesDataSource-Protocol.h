//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FitnessUI/NSObject-Protocol.h>

@class FUChartSeries, NSArray;

@protocol FUChartSeriesDataSource <NSObject>
- (id)maxXValueForChartSeries:(FUChartSeries *)arg1;
- (id)maxYValueForChartSeries:(FUChartSeries *)arg1;
- (id)minXValueForChartSeries:(FUChartSeries *)arg1;
- (id)minYValueForChartSeries:(FUChartSeries *)arg1;

@optional
- (NSArray *)labelsAtIndex:(unsigned long long)arg1 forSeriesAtIndex:(unsigned long long)arg2;
@end

