//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/NSCopying-Protocol.h>
#import <ARKit/NSSecureCoding-Protocol.h>

@class MISSING_TYPE;

@interface ARCamera : NSObject <NSSecureCoding, NSCopying>
{
    long long _trackingState;
    long long _trackingStateReason;
    unsigned long long _lensType;
    long long _devicePosition;
    struct CGSize _imageResolution;
    MISSING_TYPE *_tangentialDistortion;
    MISSING_TYPE *_radialDistortion;
    CDStruct_8e0628e6 _intrinsics;
    CDStruct_14d5dc5e _transform;
}

@property (nonatomic) long long devicePosition; // @synthesize devicePosition=_devicePosition;
@property (readonly, nonatomic) MISSING_TYPE *eulerAngles;
@property (nonatomic) struct CGSize imageResolution; // @synthesize imageResolution=_imageResolution;
@property (nonatomic) CDStruct_8e0628e6 intrinsics; // @synthesize intrinsics=_intrinsics;
@property (nonatomic) unsigned long long lensType; // @synthesize lensType=_lensType;
@property (readonly, nonatomic) CDStruct_14d5dc5e projectionMatrix;
@property (nonatomic) MISSING_TYPE *radialDistortion; // @synthesize radialDistortion=_radialDistortion;
@property (nonatomic) MISSING_TYPE *tangentialDistortion; // @synthesize tangentialDistortion=_tangentialDistortion;
@property (nonatomic) long long trackingState; // @synthesize trackingState=_trackingState;
@property (nonatomic) long long trackingStateReason; // @synthesize trackingStateReason=_trackingStateReason;
@property (nonatomic) CDStruct_14d5dc5e transform; // @synthesize transform=_transform;

+ (BOOL)supportsSecureCoding;
- (id)_description:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugQuickLookObject;
- (id)description;
- (CDStruct_14d5dc5e)displayCenterTransform;
- (void)encodeWithCoder:(id)arg1;
- (struct CGPoint)focalLength;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntrinsics:(CDStruct_8e0628e6)arg1 imageResolution:(struct CGSize)arg2;
- (BOOL)isEqual:(id)arg1;
- (struct CGPoint)principalPoint;
- (struct CGPoint)projectPoint:(long long)arg1 orientation:(struct CGSize)arg2 viewportSize: /* Error: Ran out of types for this method. */;
- (CDStruct_14d5dc5e)projectionMatrixForOrientation:(long long)arg1 viewportSize:(struct CGSize)arg2 zNear:(double)arg3 zFar:(double)arg4;
- (MISSING_TYPE *)unprojectPoint:(struct CGPoint)arg1 ontoPlaneWithTransform:(CDStruct_14d5dc5e)arg2 orientation:(long long)arg3 viewportSize:(struct CGSize)arg4;
- (CDStruct_14d5dc5e)viewMatrixForOrientation:(long long)arg1;

@end

