//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSADEVValue : NSObject
{
    double _observationInterval;
    double _adev;
}

@property (readonly, nonatomic) double adev; // @synthesize adev=_adev;
@property (readonly, nonatomic) double observationInterval; // @synthesize observationInterval=_observationInterval;

- (id)description;
- (id)initWithObservationInterval:(double)arg1 andADEV:(double)arg2;

@end

