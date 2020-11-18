//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DGeometry.h>

@class TSCH3DNormalDirectionMapper;

__attribute__((visibility("hidden")))
@interface TSCH3DPieWedgeGeometry : TSCH3DGeometry
{
    float mStartAngle;
    float mEndAngle;
    long long mAngleSteps;
    long long mRadiusSteps;
    long long mBevelEdgeSteps;
    float mRadius;
    float mBottomZ;
    float mTopZ;
    long long mCapOffset;
    long long mCapCount;
    TSCH3DNormalDirectionMapper *mNormalDirectionMapper;
}

@property (nonatomic) long long angleSteps; // @synthesize angleSteps=mAngleSteps;
@property (nonatomic) long long bevelEdgeSteps; // @synthesize bevelEdgeSteps=mBevelEdgeSteps;
@property (nonatomic) float bottomZ; // @synthesize bottomZ=mBottomZ;
@property (readonly, nonatomic) long long capCount; // @synthesize capCount=mCapCount;
@property (readonly, nonatomic) long long capOffset; // @synthesize capOffset=mCapOffset;
@property (nonatomic) float endAngle; // @synthesize endAngle=mEndAngle;
@property (readonly, nonatomic) TSCH3DNormalDirectionMapper *normalDirectionMapper; // @synthesize normalDirectionMapper=mNormalDirectionMapper;
@property (nonatomic) float radius; // @synthesize radius=mRadius;
@property (nonatomic) long long radiusSteps; // @synthesize radiusSteps=mRadiusSteps;
@property (nonatomic) float startAngle; // @synthesize startAngle=mStartAngle;
@property (nonatomic) float topZ; // @synthesize topZ=mTopZ;

- (float)bevelHeight;
- (void)dealloc;
- (void)generateArrays;
- (void)generateRoundedTop:(vector_ec52ae8c *)arg1 radiusArray:(vector_ec52ae8c *)arg2;
- (int)geometryCount;
- (id)init;
- (BOOL)isFullCircle;
- (void)p_generateAngles:(vector_ec52ae8c *)arg1;
- (void)p_generateBevelCoordinates:(vector_45b393db *)arg1 andAngles:(vector_ec52ae8c *)arg2 radiusArray:(const vector_ec52ae8c *)arg3 topArray:(const vector_ec52ae8c *)arg4;
- (id)selectionKnobPositions;

@end

