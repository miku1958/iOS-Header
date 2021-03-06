//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/NSObject-Protocol.h>

@class NSIndexSet, TSCHChartLayout, TSDLayoutGeometry;

@protocol TSCHSupportsRendering <NSObject>
- (TSCHChartLayout *)chartLayout;
- (void)drawInContext:(struct CGContext *)arg1;
- (BOOL)forceRenderBlankBackground;
- (TSDLayoutGeometry *)geometry;
- (BOOL)is2DRepFor3DChartRep;
- (BOOL)isDrawingIntoPDF;
- (BOOL)renderElements;
- (BOOL)renderElementsShadowOnly;
- (BOOL)renderElementsWithoutShadows;
- (BOOL)renderGrid;
- (NSIndexSet *)renderGroupIndexSetForSeriesIndex:(unsigned long long)arg1;
- (BOOL)renderLabels;
- (BOOL)renderReferenceLines;
- (NSIndexSet *)renderSeriesIndexSet;
- (BOOL)renderTrendLinesForSeriesIndex:(unsigned long long)arg1;
- (BOOL)requireSeparateLabelLayer;
- (BOOL)shadowsEnabled;
- (double)viewScale;
@end

