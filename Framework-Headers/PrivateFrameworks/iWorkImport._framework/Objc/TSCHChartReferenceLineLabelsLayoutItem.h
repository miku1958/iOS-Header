//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHChartLayoutItem.h>

@class TSCHChartAxisID;

__attribute__((visibility("hidden")))
@interface TSCHChartReferenceLineLabelsLayoutItem : TSCHChartLayoutItem
{
    TSCHChartAxisID *mAxisID;
}

@property (readonly, strong, nonatomic) TSCHChartAxisID *axisID; // @synthesize axisID=mAxisID;

- (struct CGRect)calcDrawingRect;
- (struct CGSize)calcMinSize;
- (void)dealloc;
- (id)initWithParent:(id)arg1 axisID:(id)arg2;
- (id)p_areaLayoutItem;
- (struct CGRect)p_drawingRectForModel:(id)arg1;
- (void)protected_iterateHitChartElements:(struct CGPoint)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)subselectionKnobPositionsForSelection:(id)arg1;

@end

