//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH2DChartAbstractAreaLayoutItem.h>

@class TSCHChartAxisLayoutItem, TSCHChartReferenceLineLabelsLayoutItem;

__attribute__((visibility("hidden")))
@interface TSCHChartAreaLayoutItem : TSCH2DChartAbstractAreaLayoutItem
{
    TSCHChartAxisLayoutItem *mTopHorizontalAxis;
    TSCHChartAxisLayoutItem *mBottomHorizontalAxis;
    TSCHChartAxisLayoutItem *mLeftVerticalAxis;
    TSCHChartAxisLayoutItem *mRightVerticalAxis;
    unsigned long long mRelayoutDepth;
    BOOL mInOutwardLayout;
}

@property (readonly, nonatomic) TSCHChartReferenceLineLabelsLayoutItem *rightRefLineLabels;
@property (readonly, nonatomic) TSCHChartReferenceLineLabelsLayoutItem *topRefLineLabels;

- (void).cxx_destruct;
- (void)buildSubTree;
- (struct CGRect)i_currentBufferAreaUnitRect;
- (void)p_arrangeSizedChildren;
- (Class)p_axisLayoutItemClassForAxisID:(id)arg1;
- (double)p_dataSetNameLabelPadding;
- (void)p_layoutInward;
- (void)p_layoutOutward;
- (void)p_updateMinHitSizes;
- (void)protected_iterateHitChartElements:(struct CGPoint)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)renderersWithRep:(id)arg1;
- (struct CGRect)titleFrame;

@end

