//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameplayKit/GKCoherentNoiseSource.h>

@interface GKPerlinNoiseSource : GKCoherentNoiseSource
{
    double _persistence;
}

@property (nonatomic) double persistence; // @synthesize persistence=_persistence;

+ (id)perlinNoiseSourceWithFrequency:(double)arg1 octaveCount:(long long)arg2 persistence:(double)arg3 lacunarity:(double)arg4 seed:(int)arg5;
- (struct Module *)__newModule;
- (id)init;
- (id)initWithFrequency:(double)arg1 octaveCount:(long long)arg2 persistence:(double)arg3 lacunarity:(double)arg4 seed:(int)arg5;

@end

