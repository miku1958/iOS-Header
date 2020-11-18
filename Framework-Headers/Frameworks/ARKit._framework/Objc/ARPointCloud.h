//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/NSSecureCoding-Protocol.h>

@class MISSING_TYPE;

@interface ARPointCloud : NSObject <NSSecureCoding>
{
    vector_1cb3ea33 _pointsVector;
    vector_7984f87c _identifiersVector;
    vector_7584168e _vergenceAngleCosinesVector;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) const unsigned long long *identifiers;
@property (readonly, nonatomic) const MISSING_TYPE **points;

+ (id)concatPointClouds:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_hitTestPointFromOrigin:(float)arg1 withDirection:maximumAngle: /* Error: Ran out of types for this method. */;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPointsVector:(const struct vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))>> *)arg1 identifiersVector:(const vector_7984f87c *)arg2;
- (id)initWithPointsVector:(const struct vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))>> *)arg1 identifiersVector:(const vector_7984f87c *)arg2 vergenceAngleCosinesVector:(const vector_7584168e *)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)pointCloudByApplyingTransform:(CDStruct_14d5dc5e)arg1;
- (id)pointCloudByApplyingTransform:(CDStruct_14d5dc5e)arg1 minimumVergenceAngleCosine:(float)arg2;
- (const float *)vergenceAngleCosines;

@end

