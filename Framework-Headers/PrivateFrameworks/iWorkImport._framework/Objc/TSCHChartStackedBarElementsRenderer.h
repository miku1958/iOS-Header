//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHChartBarElementsRenderer.h>

__attribute__((visibility("hidden")))
@interface TSCHChartStackedBarElementsRenderer : TSCHChartBarElementsRenderer
{
}

- (struct CGPath *)clippingPathForRect:(struct CGRect)arg1 inGroupIndex:(unsigned long long)arg2 withContext:(struct CGContext *)arg3 relativelyPositive:(BOOL)arg4 stackRects:(id)arg5;
- (void)renderRoundedCornerElementStrokeIntoContext:(struct CGContext *)arg1 stroke:(id)arg2 clippingPath:(struct CGPath *)arg3 elementRenderRect:(struct CGRect)arg4;
- (id)stackRectsWithContext:(struct CGContext *)arg1;

@end
