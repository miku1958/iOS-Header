//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIVectorOperatable-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInterpolatedColor : NSObject <UIVectorOperatable>
{
    struct {
        double h;
        double s;
        double b;
        double a;
    } _color;
    double _epsilon;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)epsilon;
+ (id)valueWithCGColor:(struct CGColor *)arg1;
+ (id)valueWithUIColor:(id)arg1;
+ (id)zero;
- (id)addVector:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGColor *)getCGColor;
- (id)getNSValue;
- (id)getUIColor;
- (id)getValue;
- (id)initWithDecomposedColor:(CDStruct_d2b197d1)arg1;
- (id)initWithDecomposedColor:(CDStruct_d2b197d1)arg1 epsilon:(double)arg2;
- (void)integrateWithVelocity:(id)arg1 target:(id)arg2 intermediateTarget:(id)arg3 intermediateTargetVelocity:(id)arg4 parameters:(CDStruct_9e265dec)arg5 state:(CDStruct_289c5ec3)arg6 delta:(double)arg7;
- (id)interpolateTo:(id)arg1 progress:(double)arg2;
- (BOOL)isApproximatelyEqualTo:(id)arg1;
- (BOOL)isApproximatelyEqualTo:(id)arg1 withinEpsilon:(id)arg2;
- (BOOL)isUndefined;
- (id)multiplyByScalar:(double)arg1;
- (id)multiplyByVector:(id)arg1;
- (void)reinitWithVector:(id)arg1;

@end

