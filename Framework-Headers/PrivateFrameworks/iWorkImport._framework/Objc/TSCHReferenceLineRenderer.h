//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHRenderer.h>

__attribute__((visibility("hidden")))
@interface TSCHReferenceLineRenderer : TSCHRenderer
{
}

- (void)addSelection:(id)arg1 toCGPath:(struct CGPath *)arg2 useWrapWidth:(BOOL)arg3;
- (BOOL)canRenderSelectionPath:(id)arg1;
- (int)chunkPlane;
- (void)p_renderIntoContext:(struct CGContext *)arg1 visible:(struct CGRect)arg2;
- (void)p_renderLabelsIntoContext:(struct CGContext *)arg1 forRefLineLabelsLayout:(id)arg2;
- (void)p_renderLabelsIntoContext:(struct CGContext *)arg1 forRefLineLabelsLayout:(id)arg2 forSelection:(id)arg3;
- (void)p_renderLinesIntoContext:(struct CGContext *)arg1 linesToRender:(id)arg2;
- (void)renderIntoContext:(struct CGContext *)arg1 selection:(id)arg2;

@end

