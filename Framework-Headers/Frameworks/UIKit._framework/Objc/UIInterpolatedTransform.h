//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIVectorOperatable-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInterpolatedTransform : NSObject <UIVectorOperatable>
{
    CDStruct_e79446ac _transform;
    double _rotationEpsilon;
    double _scaleEpsilon;
    double _translationEpsilon;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)epsilon;
+ (id)valueWithCATransform3D:(struct CATransform3D)arg1;
+ (id)valueWithCATransform3D:(struct CATransform3D)arg1 rotationEpsilon:(double)arg2 scaleEpsilon:(double)arg3 translationEpsilon:(double)arg4;
+ (id)valueWithDecomposedTransform:(CDStruct_e79446ac)arg1;
+ (id)valueWithDecomposedTransform:(CDStruct_e79446ac)arg1 rotationEpsilon:(double)arg2 scaleEpsilon:(double)arg3 translationEpsilon:(double)arg4;
+ (id)zero;
- (id)addVector:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getNSValue;
- (id)getValue;
- (void)integrateWithVelocity:(id)arg1 target:(id)arg2 intermediateTarget:(id)arg3 intermediateTargetVelocity:(id)arg4 parameters:(CDStruct_9e265dec)arg5 state:(CDStruct_289c5ec3)arg6 delta:(double)arg7;
- (id)interpolateTo:(id)arg1 progress:(double)arg2;
- (BOOL)isApproximatelyEqualTo:(id)arg1;
- (BOOL)isApproximatelyEqualTo:(id)arg1 withinEpsilon:(id)arg2;
- (BOOL)isUndefined;
- (id)multiplyByScalar:(double)arg1;
- (id)multiplyByVector:(id)arg1;
- (void)reinitWithVector:(id)arg1;

@end

