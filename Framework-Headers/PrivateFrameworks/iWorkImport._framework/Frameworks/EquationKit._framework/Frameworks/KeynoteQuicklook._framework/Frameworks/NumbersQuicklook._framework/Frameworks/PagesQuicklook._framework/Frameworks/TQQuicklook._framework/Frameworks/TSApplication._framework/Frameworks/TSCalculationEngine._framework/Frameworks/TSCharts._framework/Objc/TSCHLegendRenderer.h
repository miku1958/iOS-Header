//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCHRenderer.h>

@interface TSCHLegendRenderer : TSCHRenderer
{
    struct CGPoint _textEditingPixelAlignmentOffset;
}

@property (nonatomic) struct CGPoint textEditingPixelAlignmentOffset; // @synthesize textEditingPixelAlignmentOffset=_textEditingPixelAlignmentOffset;

- (void)addSelection:(id)arg1 toCGPath:(struct CGPath *)arg2 useWrapWidth:(BOOL)arg3;
- (BOOL)canRenderSelectionPath:(id)arg1;
- (void)p_draw3DLineBadgeIntoContext:(struct CGContext *)arg1 forCell:(id)arg2;
- (void)p_drawBadgeForCell:(id)arg1 intoContext:(struct CGContext *)arg2;
- (void)p_drawDefaultBadgeIntoContext:(struct CGContext *)arg1 forCell:(id)arg2;
- (void)p_drawDonutBadgeIntoContext:(struct CGContext *)arg1 forCell:(id)arg2;
- (void)p_drawLabelForCell:(id)arg1 intoContext:(struct CGContext *)arg2 rangePtr:(struct _NSRange *)arg3;
- (void)p_drawLineAreaBadgeIntoContext:(struct CGContext *)arg1 forCell:(id)arg2;
- (void)p_drawPieBadgeIntoContext:(struct CGContext *)arg1 forCell:(id)arg2;
- (void)p_renderIntoContext:(struct CGContext *)arg1 visible:(struct CGRect)arg2;
- (id)p_selectionPathForCell:(id)arg1;
- (void)renderIntoContext:(struct CGContext *)arg1 selection:(id)arg2;

@end
