//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameplayKit/GKRandomSource.h>

@interface GKLinearCongruentialRandomSource : GKRandomSource
{
    unsigned long long _seed;
}

@property (nonatomic) unsigned long long seed;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSeed:(unsigned long long)arg1;
- (unsigned long long)nextBits:(int)arg1;
- (BOOL)nextBool;
- (long long)nextInt;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1;
- (float)nextUniform;

@end

