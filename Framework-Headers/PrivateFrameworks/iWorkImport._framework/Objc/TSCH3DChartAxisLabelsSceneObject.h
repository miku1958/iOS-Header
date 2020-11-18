//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DChartLabelsContainingSceneObject.h>

@protocol TSCH3DAxisLabelPositioner, TSCH3DAxisLabelPositioner><NSObject;

__attribute__((visibility("hidden")))
@interface TSCH3DChartAxisLabelsSceneObject : TSCH3DChartLabelsContainingSceneObject
{
    id<TSCH3DAxisLabelPositioner><NSObject> mValueLabelPositioner;
    id<TSCH3DAxisLabelPositioner><NSObject> mCategoryLabelPositioner;
}

@property (strong) id<TSCH3DAxisLabelPositioner> categoryLabelPositioner; // @synthesize categoryLabelPositioner=mCategoryLabelPositioner;
@property (strong) id<TSCH3DAxisLabelPositioner> valueLabelPositioner; // @synthesize valueLabelPositioner=mValueLabelPositioner;

+ (void)cacheValueAxisLabelAlignmentForScene:(id)arg1;
+ (id)partWithEnumerator:(id)arg1 chartInfo:(id)arg2 styleIndex:(unsigned long long)arg3;
+ (void)setSelectionPath:(id)arg1 selectionMode:(int)arg2 forScene:(id)arg3;
+ (unsigned int)valueAxisLabelAlignmentForScene:(id)arg1;
- (unsigned int)alignmentForPositioner:(id)arg1 scene:(id)arg2 enumerator:(id)arg3 returningDirection:(tvec3_17f03ce0 *)arg4;
- (BOOL)canEditTextForSelectionPath:(id)arg1 forInfo:(id)arg2;
- (BOOL)canRenderSelectionPath:(id)arg1 forInfo:(id)arg2;
- (id)convertSelectionPathTo3D:(id)arg1 path:(id)arg2;
- (void)dealloc;
- (id)effects;
- (int)knobsModeForLabelType:(int)arg1 scene:(id)arg2;
- (tvec3_17f03ce0)labelPositionDirectionForScene:(id)arg1 enumerator:(id)arg2;
- (tvec3_17f03ce0)p_categoryLabelsOffsetFromAccessor:(id)arg1;
- (long long)p_categoryStride:(id)arg1;
- (void)p_renderCategoryLabels:(id)arg1;
- (void)p_renderLabels:(id)arg1 labelType:(int)arg2 part:(id)arg3 positioner:(id)arg4 offset:(const tvec3_17f03ce0 *)arg5 offset2DBlock:(CDUnknownBlockType)arg6 strideBlock:(CDUnknownBlockType)arg7 skipFirst:(BOOL)arg8 showLast:(BOOL)arg9;
- (void)p_renderValueLabels:(id)arg1;
- (void)p_setOffset:(const tvec3_17f03ce0 *)arg1 forLabelType:(int)arg2 pipeline:(id)arg3 part:(id)arg4 positioner:(id)arg5;
- (tvec3_17f03ce0)p_valueLabelsOffsetFromAccessor:(id)arg1;
- (void)postRenderBounds:(id)arg1;
- (void)renderAnnotatedLabels:(id)arg1;
- (id)renderInfoForSelectionPath:(id)arg1 info:(id)arg2;
- (void)renderLabels:(id)arg1;
- (id)selectionPathForInfo:(id)arg1 axis:(id)arg2 selectionPathLabelIndex:(unsigned long long)arg3;
- (id)selectionPathForInfo:(id)arg1 scene:(id)arg2 pickedPoint:(id)arg3;

@end
