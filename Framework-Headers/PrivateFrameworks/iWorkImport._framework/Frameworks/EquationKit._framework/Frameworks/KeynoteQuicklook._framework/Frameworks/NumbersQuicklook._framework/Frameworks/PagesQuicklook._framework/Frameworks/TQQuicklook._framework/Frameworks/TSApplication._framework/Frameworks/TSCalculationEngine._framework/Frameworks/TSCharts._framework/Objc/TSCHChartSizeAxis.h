//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCHChartAxis.h>

@interface TSCHChartSizeAxis : TSCHChartAxis
{
}

+ (unsigned char)styleOwnerPathType;
- (void)adjustMinMaxForDataRangeInAnalysis:(id)arg1;
- (id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg1;
- (id)computeMinorGridlinesFromMajorGridlinesInAnalysis:(id)arg1;
- (double)doubleModelToAxisValue:(double)arg1 forSeries:(id)arg2;
- (void)updateGridValueTypeInterceptInAnalysis:(id)arg1;
- (id)userMax;
- (id)userMin;

@end

