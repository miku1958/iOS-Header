//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FitnessUI/NSObject-Protocol.h>

@class FIUIChartDataGroup, NSArray;
@protocol FIUIChartPoint;

@protocol FIUIChartDataGroupDataSource <NSObject>
- (unsigned long long)dataGroup:(FIUIChartDataGroup *)arg1 numberOfPointsInSetAtIndex:(unsigned long long)arg2;
- (id<FIUIChartPoint>)dataGroup:(FIUIChartDataGroup *)arg1 pointForSetAtIndex:(unsigned long long)arg2 pointIndex:(unsigned long long)arg3;
- (unsigned long long)numberOfDataSetsInGroup:(FIUIChartDataGroup *)arg1;

@optional
- (NSArray *)dataGroup:(FIUIChartDataGroup *)arg1 dataPointsForSetAtIndex:(unsigned long long)arg2;
- (NSArray *)dataGroup:(FIUIChartDataGroup *)arg1 labelsForSetAtIndex:(unsigned long long)arg2;
@end
