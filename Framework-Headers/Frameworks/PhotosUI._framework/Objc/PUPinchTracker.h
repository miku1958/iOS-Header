//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PUValueFilter;

__attribute__((visibility("hidden")))
@interface PUPinchTracker : NSObject
{
    struct CGPoint _initialCenter;
    struct CGSize _initialSize;
    struct CGAffineTransform _initialTransform;
    struct CGAffineTransform _initialTransformInverse;
    BOOL _didSetInitialPinchValues;
    struct CGPoint _initialPinchCenter;
    double _initialPinchDistance;
    double _initialPinchAngle;
    struct CGPoint _initialPinchOrigin;
    PUValueFilter *_pinchRotationValueFilter;
    BOOL _allowTrackingOutside;
    CDUnknownBlockType _updateHandler;
    double _rotationHysteresisDegrees;
}

@property (nonatomic) BOOL allowTrackingOutside; // @synthesize allowTrackingOutside=_allowTrackingOutside;
@property (nonatomic) double rotationHysteresisDegrees; // @synthesize rotationHysteresisDegrees=_rotationHysteresisDegrees;
@property (copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;

- (void).cxx_destruct;
- (void)_transformPinchLocation1:(struct CGPoint)arg1 location2:(struct CGPoint)arg2 intoCenter:(struct CGPoint *)arg3 distance:(double *)arg4 angle:(double *)arg5;
- (id)init;
- (id)initWithInitialCenter:(struct CGPoint)arg1 initialSize:(struct CGSize)arg2 initialTransform:(struct CGAffineTransform)arg3;
- (void)setPinchLocation1:(struct CGPoint)arg1 location2:(struct CGPoint)arg2;

@end

