//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPCCurvePoint : NSObject
{
    double _x;
    double _y;
    double _roundness;
    double _smoothness;
    struct CGPoint _leftTangentPoint;
    struct CGPoint _rightTangentPoint;
}

@property struct CGPoint CGPoint;
@property struct CGPoint leftTangentPoint; // @synthesize leftTangentPoint=_leftTangentPoint;
@property struct CGPoint rightTangentPoint; // @synthesize rightTangentPoint=_rightTangentPoint;
@property double roundness; // @synthesize roundness=_roundness;
@property double smoothness; // @synthesize smoothness=_smoothness;
@property double x; // @synthesize x=_x;
@property double y; // @synthesize y=_y;

+ (id)pointWithCGPoint:(struct CGPoint)arg1;
+ (id)pointWithX:(double)arg1 y:(double)arg2;
- (id)initWithX:(double)arg1 y:(double)arg2;

@end

