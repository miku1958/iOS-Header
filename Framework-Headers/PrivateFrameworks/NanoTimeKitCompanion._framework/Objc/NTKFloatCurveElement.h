//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMediaTimingFunction;

@interface NTKFloatCurveElement : NSObject
{
    double _floatValue;
    double _fraction;
    long long _curve;
    CAMediaTimingFunction *_timingFunction;
}

@property (nonatomic) long long curve; // @synthesize curve=_curve;
@property (nonatomic) double floatValue; // @synthesize floatValue=_floatValue;
@property (nonatomic) double fraction; // @synthesize fraction=_fraction;
@property (strong, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;

- (void).cxx_destruct;
- (id)initWithFloatValue:(double)arg1 fraction:(double)arg2;

@end
