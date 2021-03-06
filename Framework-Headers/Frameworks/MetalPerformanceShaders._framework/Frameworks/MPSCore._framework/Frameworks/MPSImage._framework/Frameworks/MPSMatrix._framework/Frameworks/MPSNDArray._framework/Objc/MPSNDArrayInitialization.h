//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNDArray/MPSNDArrayMultiaryKernel.h>

@class MPSParallelRandom, MPSParallelRandomDistributionDescriptor;

@interface MPSNDArrayInitialization : MPSNDArrayMultiaryKernel
{
    MPSParallelRandomDistributionDescriptor *_distribution;
    MPSParallelRandom *_generator;
    unsigned long long _seed;
    float _constantValue;
}

+ (const struct MPSLibraryInfo *)libraryInfo:(struct MPSDevice *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)dealloc;
- (void)encodeToCommandBuffer:(id)arg1 destinationArray:(id)arg2;
- (id)encodeToCommandBuffer:(id)arg1 destinationDescriptor:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 sourceCount:(unsigned long long)arg2;
- (unsigned long long)kernelDimensionalityForDestinationArray:(id)arg1;
- (unsigned long long)kernelDimensionalityForSourceArrays:(id)arg1;

@end

