//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DExtrusionGeometry.h>

__attribute__((visibility("hidden")))
@interface TSCH3DLineExtrusionGeometry : TSCH3DExtrusionGeometry
{
    tvec2_84d5962d mYlimits;
    tvec2_84d5962d mXlimits;
}

@property (nonatomic) tvec2_84d5962d xlimits; // @synthesize xlimits=mXlimits;
@property (nonatomic) tvec2_84d5962d ylimits; // @synthesize ylimits=mYlimits;

+ (id)lineFromValues:(const vector_ec52ae8c *)arg1 yLimits:(tvec2_84d5962d)arg2;
- (id).cxx_construct;
- (id)elementsBoundsPositions;
- (void)generateArrays;
- (id)init;
- (tmat4x4_3074befe)matrixAtXPosition:(float)arg1 returningXRangeInfo:(struct LineExtrusionGeometryXRangeInfo *)arg2;
- (tmat3x3_b39cd897)p_rotationMatrixForCrossSectionIndex:(unsigned long long)arg1;
- (id)selectionKnobPositions;
- (void)setSpine:(const vector_45b393db *)arg1;

@end

