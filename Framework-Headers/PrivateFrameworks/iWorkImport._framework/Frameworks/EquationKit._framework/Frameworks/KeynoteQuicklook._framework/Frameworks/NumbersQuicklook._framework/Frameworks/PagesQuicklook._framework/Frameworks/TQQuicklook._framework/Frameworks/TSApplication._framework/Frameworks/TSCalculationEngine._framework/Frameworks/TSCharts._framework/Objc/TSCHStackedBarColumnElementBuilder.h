//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCHBarColumnElementBuilder.h>

@interface TSCHStackedBarColumnElementBuilder : TSCHBarColumnElementBuilder
{
}

- (struct CGPath *)newRoundedRectPathWithRect:(struct CGRect)arg1 chartInfo:(id)arg2 series:(id)arg3 groupIndex:(unsigned long long)arg4 isVertical:(BOOL)arg5 forGroups:(id)arg6 forBodyLayout:(id)arg7;
- (double)p_beginValueForSeries:(id)arg1 groupIndex:(unsigned long long)arg2 unitSpaceIntercept:(double)arg3 relativelyPositive:(BOOL)arg4 valueAxis:(id)arg5;
- (unsigned long long)p_logicalSeriesIndexForSeries:(id)arg1;
- (unsigned long long)p_numberOfSeriesForGapCalcInModel:(id)arg1;
- (id)p_stackedRectsWithChartInfo:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3;

@end

