//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCH3DGeometry.h>

@interface TSCH3DExtrusionGeometry : TSCH3DGeometry
{
    vector_d73af98f mCrossSection;
    vector_7200ab52 mSpine;
    vector_d73af98f mScale;
    BOOL mBeginCap;
    BOOL mEndCap;
    float mCrossSectionCreaseAngle;
    float mSpineCreaseAngle;
    unsigned int mEndCapOffset;
    unsigned int mEndCapCount;
    unsigned int mBeginCapOffset;
    int mBeginCapCount;
    tvec3_17f03ce0 mNormalBias;
    tvec3_17f03ce0 mSpineDirectionBias;
}

@property (nonatomic) BOOL beginCap; // @synthesize beginCap=mBeginCap;
@property (readonly, nonatomic) unsigned int capCount; // @synthesize capCount=mEndCapCount;
@property (readonly, nonatomic) unsigned int capOffset; // @synthesize capOffset=mEndCapOffset;
@property (nonatomic) float crossSectionCreaseAngle; // @synthesize crossSectionCreaseAngle=mCrossSectionCreaseAngle;
@property (nonatomic) BOOL endCap; // @synthesize endCap=mEndCap;
@property (nonatomic) tvec3_17f03ce0 normalBias; // @synthesize normalBias=mNormalBias;
@property (nonatomic) float spineCreaseAngle; // @synthesize spineCreaseAngle=mSpineCreaseAngle;
@property (nonatomic) tvec3_17f03ce0 spineDirectionBias; // @synthesize spineDirectionBias=mSpineDirectionBias;

- (id).cxx_construct;
- (void).cxx_destruct;
- (const vector_d73af98f *)crossSection;
- (void)dealloc;
- (void)debug_dumpGeometryBounds;
- (void)generateArrays;
- (id)init;
- (const vector_d73af98f *)scale;
- (void)setCrossSection:(const vector_d73af98f *)arg1;
- (void)setScale:(const vector_d73af98f *)arg1;
- (void)setSpine:(const vector_7200ab52 *)arg1;
- (const vector_7200ab52 *)spine;

@end
