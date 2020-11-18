//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHChartAxisLayoutItem.h>

@class TSCHChartAxisSeriesLabelsLayoutItem, TSCHChartCategoryAxisLabelsLayoutItem;

__attribute__((visibility("hidden")))
@interface TSCHChartCategoryAxisLayoutItem : TSCHChartAxisLayoutItem
{
    TSCHChartAxisSeriesLabelsLayoutItem *mSeriesLabels;
    TSCHChartCategoryAxisLabelsLayoutItem *mCategoryLabels;
}

@property (readonly, nonatomic) TSCHChartCategoryAxisLabelsLayoutItem *axisCategoryLabelsLayoutItem; // @synthesize axisCategoryLabelsLayoutItem=mCategoryLabels;
@property (readonly, nonatomic) TSCHChartAxisSeriesLabelsLayoutItem *axisSeriesLabelsLayoutItem; // @synthesize axisSeriesLabelsLayoutItem=mSeriesLabels;

- (void).cxx_destruct;
- (void)buildSubTree;
- (void)p_layoutLabelsNow;
- (struct CGRect)protected_layoutSpaceRectForAllLabels;
- (id)renderersWithRep:(id)arg1;

@end

