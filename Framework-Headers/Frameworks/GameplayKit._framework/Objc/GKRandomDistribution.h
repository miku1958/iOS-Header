//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameplayKit/GKRandom-Protocol.h>

@protocol GKRandom;

@interface GKRandomDistribution : NSObject <GKRandom>
{
    id<GKRandom> _source;
    long long _lowest;
    long long _highest;
}

@property (readonly, nonatomic) long long highestValue; // @synthesize highestValue=_highest;
@property (readonly, nonatomic) long long lowestValue; // @synthesize lowestValue=_lowest;
@property (readonly, nonatomic) unsigned long long numberOfPossibleOutcomes;

+ (id)d20;
+ (id)d6;
+ (id)distributionForDieWithSideCount:(long long)arg1;
+ (id)distributionWithLowestValue:(long long)arg1 highestValue:(long long)arg2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3;
- (BOOL)nextBool;
- (long long)nextInt;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1;
- (float)nextUniform;

@end

