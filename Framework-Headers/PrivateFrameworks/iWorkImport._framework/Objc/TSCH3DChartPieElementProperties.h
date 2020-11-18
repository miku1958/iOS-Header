//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DChartBasicElementProperties.h>

__attribute__((visibility("hidden")))
@interface TSCH3DChartPieElementProperties : TSCH3DChartBasicElementProperties
{
    vector_7584168e mPercentOfTotal;
    vector_7584168e mRotation;
    vector_7584168e mExplode;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)anyHasExplosion;
- (BOOL)applyElementTransform:(struct ObjectTransforms *)arg1 series:(id)arg2 index:(const tvec2_3b141483 *)arg3 propertyAccessor:(const struct ChartScenePropertyAccessor *)arg4;
- (struct GeometryResource)boundsGeometryForSeries:(id)arg1 index:(const tvec2_3b141483 *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (float)elementTransformDepthFromPropertyAccessor:(const struct ChartScenePropertyAccessor *)arg1;
- (float)explosionAtElementIndex:(const tvec2_3b141483 *)arg1;
- (float)explosionAtElementIndex:(const tvec2_3b141483 *)arg1 propertyAccessor:(const struct ChartScenePropertyAccessor *)arg2;
- (long long)flatIndex:(const tvec2_3b141483 *)arg1;
- (float)percentOfTotalAtElementIndex:(const tvec2_3b141483 *)arg1;
- (void)reset;
- (float)rotationAtElementIndex:(const tvec2_3b141483 *)arg1;
- (void)setExplosion:(float)arg1 atElementIndex:(const tvec2_3b141483 *)arg2;
- (void)setPercentOfTotal:(float)arg1 atElementIndex:(const tvec2_3b141483 *)arg2;
- (void)setRotation:(float)arg1 atElementIndex:(const tvec2_3b141483 *)arg2;
- (void)updateLabels;
- (void)updateValues;

@end

