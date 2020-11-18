//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TimeSync/NSCopying-Protocol.h>

@interface TSMTIEMaskElement : NSObject <NSCopying>
{
    double _a;
    double _b;
    double _lowerLimit;
    double _upperLimit;
}

@property (readonly, nonatomic) double a; // @synthesize a=_a;
@property (readonly, nonatomic) double b; // @synthesize b=_b;
@property (readonly, nonatomic) double lowerLimit; // @synthesize lowerLimit=_lowerLimit;
@property (readonly, nonatomic) double upperLimit; // @synthesize upperLimit=_upperLimit;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoefficient:(double)arg1 offset:(double)arg2 lowerLimit:(double)arg3 upperLimit:(double)arg4;
- (id)initWithDictionary:(id)arg1;

@end

