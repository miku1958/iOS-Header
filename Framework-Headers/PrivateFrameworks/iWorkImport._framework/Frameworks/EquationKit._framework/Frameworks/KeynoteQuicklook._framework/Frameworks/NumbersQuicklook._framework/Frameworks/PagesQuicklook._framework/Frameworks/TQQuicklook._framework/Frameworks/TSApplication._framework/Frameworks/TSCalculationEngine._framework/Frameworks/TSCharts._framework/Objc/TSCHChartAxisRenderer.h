//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCHRenderer.h>

#import <TSCharts/TSCHCompositeRendering-Protocol.h>

@class NSString, TSCHSelectionPath;

@interface TSCHChartAxisRenderer : TSCHRenderer <TSCHCompositeRendering>
{
    TSCHSelectionPath *mAxisTitleSelectionPath;
    struct CGRect mStartingEditingFrame;
    NSString *mEditingString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSString *editingString; // @synthesize editingString=mEditingString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addSelection:(id)arg1 toCGPath:(struct CGPath *)arg2 useWrapWidth:(BOOL)arg3;
- (id)axisLayoutItem;
- (id)axisTitleSelectionPath;
- (BOOL)canEditTextForSelectionPath:(id)arg1;
- (BOOL)canRenderSelectionPath:(id)arg1;
- (void)drawIntoLayer:(int)arg1 inContext:(struct CGContext *)arg2 visible:(struct CGRect)arg3;
- (struct CGRect)frameForEditingTextForSelectionPath:(id)arg1;
- (BOOL)isCompositeRenderer;
- (BOOL)needsAnySeparateLayers;
- (void)p_addLinePath:(struct CGContext *)arg1 stroke:(id)arg2;
- (void)p_addTickmarkPaths:(struct CGContext *)arg1 axis:(id)arg2 locations:(id)arg3 stroke:(id)arg4 width:(float)arg5;
- (void)p_debugRenderTickmarkArea:(struct CGContext *)arg1;
- (void)p_drawTitle:(struct CGContext *)arg1 rangePtr:(struct _NSRange *)arg2;
- (BOOL)p_isTitleVisible;
- (BOOL)p_needsPositionBasedTransparencyLayer;
- (BOOL)p_needsSharedTickMarkLayer;
- (void)p_renderIntoContext:(struct CGContext *)arg1 visible:(struct CGRect)arg2;
- (void)renderIntoContext:(struct CGContext *)arg1 selection:(id)arg2;
- (id)transparencyLayers;
- (void)useEditedString:(id)arg1;
- (void)willBeginTransparencyLayer:(int)arg1 inContext:(struct CGContext *)arg2;

@end

