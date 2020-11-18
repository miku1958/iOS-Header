//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNGeometry.h>

@interface SCNCapsule : SCNGeometry
{
    double _capsulecapRadius;
    double _capsuleheight;
    long long _capsuleheightSegmentCount;
    long long _capsuleradialSegmentCount;
    long long _capsulecapSegmentCount;
    long long _capsuleprimitiveType;
}

@property (nonatomic) double capRadius;
@property (nonatomic) long long capSegmentCount;
@property (nonatomic) double height;
@property (nonatomic) long long heightSegmentCount;
@property (nonatomic) long long radialSegmentCount;

+ (id)capsuleWithCapRadius:(double)arg1 height:(double)arg2;
+ (BOOL)supportsSecureCoding;
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
- (id)presentationCapsule;
- (id)presentationGeometry;
- (long long)primitiveType;
- (void)setPrimitiveType:(long long)arg1;

@end

