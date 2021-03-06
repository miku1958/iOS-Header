//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCHChartLayoutItem.h>

@class TSCHChartAxisID, TSCHChartAxisLineLayoutItem, TSCHChartAxisPaddingLayoutItem, TSCHChartAxisTickMarksLayoutItem, TSCHChartAxisTitleLayoutItem, TSCHChartReferenceLineLabelPaddingLayoutItem, TSCHChartReferenceLineLabelsLayoutItem;

@interface TSCHChartAxisLayoutItem : TSCHChartLayoutItem
{
    TSCHChartAxisID *mAxisID;
    int mAxisPosition;
    TSCHChartAxisTitleLayoutItem *mAxisTitle;
    TSCHChartAxisPaddingLayoutItem *mAxisPadding;
    TSCHChartAxisTickMarksLayoutItem *mTickMarks;
    TSCHChartAxisLineLayoutItem *mAxisLine;
    TSCHChartReferenceLineLabelPaddingLayoutItem *mRefLineLabelPadding;
    TSCHChartReferenceLineLabelsLayoutItem *mRefLineLabels;
    struct CGSize mChartBodySize;
    TSCHChartAxisID *mReferenceLineLabelAxisID;
}

@property (strong, nonatomic) TSCHChartAxisID *axisID; // @synthesize axisID=mAxisID;
@property (readonly, nonatomic) TSCHChartAxisLineLayoutItem *axisLineLayoutItem; // @synthesize axisLineLayoutItem=mAxisLine;
@property (readonly, nonatomic) TSCHChartAxisPaddingLayoutItem *axisPaddingLayoutItem; // @synthesize axisPaddingLayoutItem=mAxisPadding;
@property (readonly, nonatomic) int axisPosition; // @synthesize axisPosition=mAxisPosition;
@property (readonly, nonatomic) TSCHChartAxisTickMarksLayoutItem *axisTickMarksLayoutItem; // @synthesize axisTickMarksLayoutItem=mTickMarks;
@property (readonly, nonatomic) TSCHChartAxisTitleLayoutItem *axisTitleLayoutItem; // @synthesize axisTitleLayoutItem=mAxisTitle;
@property (nonatomic) struct CGSize chartBodySize; // @synthesize chartBodySize=mChartBodySize;
@property (readonly, nonatomic) TSCHChartReferenceLineLabelPaddingLayoutItem *refLineLabelPadding; // @synthesize refLineLabelPadding=mRefLineLabelPadding;
@property (readonly, nonatomic) TSCHChartReferenceLineLabelsLayoutItem *refLineLabels; // @synthesize refLineLabels=mRefLineLabels;
@property (strong, nonatomic) TSCHChartAxisID *referenceLineLabelAxisID; // @synthesize referenceLineLabelAxisID=mReferenceLineLabelAxisID;

- (void).cxx_destruct;
- (struct CGSize)calcMinSize;
- (struct CGRect)calcOverhangRect;
- (id)initWithParent:(id)arg1 axisPosition:(int)arg2;
- (id)p_description;
- (void)p_layoutInward;
- (void)p_layoutLabelsNow;
- (void)p_layoutOutward;
- (id)p_subselectionHaloPositionsForLabelsSelections:(id)arg1;
- (id)p_subselectionKnobPositionsForLabelsSelection:(id)arg1;
- (struct CGRect)protected_layoutSpaceRectForAllLabels;
- (id)renderersWithRep:(id)arg1;
- (id)subselectionHaloPositionsForSelections:(id)arg1;
- (id)subselectionKnobPositionsForSelection:(id)arg1;

@end

