//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MPSNeuralNetwork/NSCopying-Protocol.h>
#import <MPSNeuralNetwork/NSSecureCoding-Protocol.h>

@class MPSParallelRandomMTGP32State;

@interface MPSCNNDropoutRandomState : NSObject <NSCopying, NSSecureCoding>
{
    MPSParallelRandomMTGP32State *_rngState;
}

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSeed:(unsigned long long)arg1;

@end
