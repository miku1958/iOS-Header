//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNGeometry.h>

@interface SCNTorus : SCNGeometry
{
    double _torusringRadius;
    double _toruspipeRadius;
    double _torusradialSpan;
    long long _torusringSegmentCount;
    long long _toruspipeSegmentCount;
    long long _torusprimitiveType;
}

@property (nonatomic) double pipeRadius;
@property (nonatomic) long long pipeSegmentCount;
@property (nonatomic) double ringRadius;
@property (nonatomic) long long ringSegmentCount;

+ (BOOL)supportsSecureCoding;
+ (id)torusWithRingRadius:(double)arg1 pipeRadius:(double)arg2;
- (struct __C3DGeometry *)__createCFObject;
- (void)_setupObjCModelFrom:(id)arg1;
- (void)_syncObjCModel:(struct __C3DParametricGeometry *)arg1;
- (id)copy;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)getBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;
- (BOOL)getBoundingSphereCenter:(struct SCNVector3 *)arg1 radius:(double *)arg2;
- (id)init;
- (id)initPresentationParametricGeometryWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg1;
- (id)presentationGeometry;
- (id)presentationTorus;
- (long long)primitiveType;
- (double)radialSpan;
- (void)setPrimitiveType:(long long)arg1;
- (void)setRadialSpan:(double)arg1;

@end
