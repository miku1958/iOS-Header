//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameplayKit/GKCoherentNoiseSource.h>

@interface GKRidgedNoiseSource : GKCoherentNoiseSource
{
    double m_weights[30];
}

+ (id)ridgedNoiseSourceWithFrequency:(double)arg1 octaveCount:(long long)arg2 lacunarity:(double)arg3 seed:(int)arg4;
- (id)cloneModule;
- (id)init;
- (id)initWithFrequency:(double)arg1 octaveCount:(long long)arg2 lacunarity:(double)arg3 seed:(int)arg4;
- (double)valueAt: /* Error: Ran out of types for this method. */;

@end

