//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNGeometry.h>

@interface SCNBox : SCNGeometry
{
    double _boxwidth;
    double _boxheight;
    double _boxlength;
    double _boxchamferRadius;
    long long _boxwidthSegmentCount;
    long long _boxheightSegmentCount;
    long long _boxlengthSegmentCount;
    long long _boxchamferSegmentCount;
    long long _boxprimitiveType;
}

@property (nonatomic) double chamferRadius;
@property (nonatomic) long long chamferSegmentCount;
@property (nonatomic) double height;
@property (nonatomic) long long heightSegmentCount;
@property (nonatomic) double length;
@property (nonatomic) long long lengthSegmentCount;
@property (nonatomic) double width;
@property (nonatomic) long long widthSegmentCount;

+ (id)box;
+ (id)boxWithWidth:(double)arg1 height:(double)arg2 length:(double)arg3 chamferRadius:(double)arg4;
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
- (id)presentationBox;
- (id)presentationGeometry;
- (long long)primitiveType;
- (void)setPrimitiveType:(long long)arg1;

@end

