//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FitnessUI/FUChartDataSetDataSource-Protocol.h>

@class NSArray, NSString;
@protocol FUChartDataGroupDataSource;

@interface FUChartDataGroup : NSObject <FUChartDataSetDataSource>
{
    id<FUChartDataGroupDataSource> _dataSource;
    NSArray *_dataSets;
}

@property (strong, nonatomic) NSArray *dataSets; // @synthesize dataSets=_dataSets;
@property (weak, nonatomic) id<FUChartDataGroupDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dataSetAtIndexCreateIfNecessary:(unsigned long long)arg1;
- (id)_getLabelsForSetAtIndex:(unsigned long long)arg1;
- (unsigned long long)_getNumberOfDataPointsInSetAtIndex:(unsigned long long)arg1;
- (unsigned long long)_getNumberOfDataSets;
- (id)_getPointForSetAtIndex:(unsigned long long)arg1 pointIndex:(unsigned long long)arg2;
- (id)_getPointsForSetAtIndex:(unsigned long long)arg1;
- (void)_reloadDataSet:(id)arg1;
- (void)addDataPointWithXValue:(float)arg1 yValue:(float)arg2 setIndex:(unsigned long long)arg3;
- (id)dataPointsForSet:(id)arg1;
- (id)dataSet:(id)arg1 chartPointForIndex:(unsigned long long)arg2;
- (id)dataSetAtIndex:(unsigned long long)arg1;
- (id)labelsForSet:(id)arg1;
- (id)maxXValue;
- (id)maxYValue;
- (id)minXValue;
- (id)minYValue;
- (unsigned long long)numberOfDataPointsForDataSet:(id)arg1;
- (unsigned long long)numberOfDataSets;
- (void)reloadData;
- (void)reloadDataInSetAtIndex:(unsigned long long)arg1;
- (void)reloadDataPointInSetAtIndex:(unsigned long long)arg1 pointIndex:(unsigned long long)arg2;
- (void)removeDataPointFromSetAtIndex:(unsigned long long)arg1 pointIndex:(unsigned long long)arg2;

@end

