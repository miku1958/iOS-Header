//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHChartLayoutItem.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSCHChartTitleLayoutItem : TSCHChartLayoutItem
{
    double mChartBodyWidth;
    NSString *mEditedString;
    double mMinHitSize;
}

@property (nonatomic) double chartBodyWidth; // @synthesize chartBodyWidth=mChartBodyWidth;
@property (copy, nonatomic) NSString *editedString; // @synthesize editedString=mEditedString;
@property (nonatomic) double minHitSize; // @synthesize minHitSize=mMinHitSize;

- (void).cxx_destruct;
- (struct CGRect)calcDrawingRect;
- (struct CGSize)calcMinSize;
- (struct CGSize)calcMinSizeForModel:(id)arg1;
- (struct CGRect)calcOverhangRect;
- (id)initWithParent:(id)arg1;
- (struct CGPath *)newDragAndDropHighlightPathForSelection:(id)arg1;
- (id)p_titleParagraphStyle;
- (struct CGAffineTransform)p_transformForRenderingRangePtr:(struct _NSRange *)arg1 outElementSize:(struct CGSize *)arg2 outClipRect:(struct CGRect *)arg3 forSubselection:(BOOL)arg4 forSearchSelection:(BOOL)arg5;
- (BOOL)pointHitsTitleRect:(struct CGPoint)arg1;
- (void)protected_iterateHitChartElements:(struct CGPoint)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)renderersWithRep:(id)arg1;
- (struct CGAffineTransform)searchSelectionTransformForRenderingRange:(struct _NSRange)arg1 outElementSize:(struct CGSize *)arg2 outClipRect:(struct CGRect *)arg3;
- (BOOL)shouldPlaceTitleAtCenter;
- (id)subselectionHaloPositionsForSelections:(id)arg1;
- (id)subselectionKnobPositionsForSelection:(id)arg1;
- (id)titleText;
- (struct CGAffineTransform)transformForRenderingOutElementSize:(struct CGSize *)arg1 outClipRect:(struct CGRect *)arg2;
- (struct CGAffineTransform)transformForRenderingOutElementSize:(struct CGSize *)arg1 outClipRect:(struct CGRect *)arg2 forSubselection:(BOOL)arg3;
- (struct CGAffineTransform)transformForRenderingRange:(struct _NSRange)arg1 outElementSize:(struct CGSize *)arg2 outClipRect:(struct CGRect *)arg3;

@end

