//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameplayKit/GKNoiseModifier.h>

__attribute__((visibility("hidden")))
@interface GKClampNoiseModifier : GKNoiseModifier
{
    double _lowerBound;
    double _upperBound;
}

- (id)cloneModule;
- (id)init;
- (id)initWithInputModuleCount:(unsigned long long)arg1;
- (id)initWithLowerBound:(double)arg1 upperBound:(double)arg2;
- (int)requiredInputModuleCount;
- (double)valueAt: /* Error: Ran out of types for this method. */;

@end

