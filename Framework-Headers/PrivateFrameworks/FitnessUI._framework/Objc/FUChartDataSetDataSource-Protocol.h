//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FitnessUI/NSObject-Protocol.h>

@class FUChartDataSet, NSArray;
@protocol FUChartPoint;

@protocol FUChartDataSetDataSource <NSObject>
- (id<FUChartPoint>)dataSet:(FUChartDataSet *)arg1 chartPointForIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfDataPointsForDataSet:(FUChartDataSet *)arg1;

@optional
- (NSArray *)dataPointsForSet:(FUChartDataSet *)arg1;
- (NSArray *)labelsForSet:(FUChartDataSet *)arg1;
@end

