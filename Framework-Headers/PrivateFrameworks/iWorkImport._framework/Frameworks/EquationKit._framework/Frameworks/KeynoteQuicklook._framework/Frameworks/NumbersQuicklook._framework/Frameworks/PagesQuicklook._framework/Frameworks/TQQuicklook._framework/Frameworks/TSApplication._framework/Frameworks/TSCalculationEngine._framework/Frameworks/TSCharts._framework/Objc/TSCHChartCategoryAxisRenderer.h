//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCHChartAxisRenderer.h>

@interface TSCHChartCategoryAxisRenderer : TSCHChartAxisRenderer
{
}

- (void)addSelection:(id)arg1 toCGPath:(struct CGPath *)arg2 useWrapWidth:(BOOL)arg3;
- (BOOL)canEditTextForSelectionPath:(id)arg1;
- (BOOL)canRenderSelectionPath:(id)arg1;
- (id)categoryAxisLayoutItem;
- (void)drawIntoLayer:(int)arg1 inContext:(struct CGContext *)arg2 visible:(struct CGRect)arg3;
- (struct CGRect)frameForEditingTextForSelectionPath:(id)arg1;
- (unsigned long long)p_categoryIndexForSelectionPath:(id)arg1;
- (BOOL)p_doesSelectionPathReferToAxisLabel:(id)arg1;
- (BOOL)p_doesSelectionPathReferToAxisSeriesLabel:(id)arg1;
- (void)p_drawIntoLayer:(int)arg1 inContext:(struct CGContext *)arg2 visible:(struct CGRect)arg3 limitRenderLabels:(int)arg4 limitLabelIndex:(unsigned long long)arg5 rangePtr:(struct _NSRange *)arg6;
- (unsigned long long)p_seriesIndexForSelectionPath:(id)arg1;
- (void)renderIntoContext:(struct CGContext *)arg1 selection:(id)arg2;
- (id)transparencyLayers;

@end

