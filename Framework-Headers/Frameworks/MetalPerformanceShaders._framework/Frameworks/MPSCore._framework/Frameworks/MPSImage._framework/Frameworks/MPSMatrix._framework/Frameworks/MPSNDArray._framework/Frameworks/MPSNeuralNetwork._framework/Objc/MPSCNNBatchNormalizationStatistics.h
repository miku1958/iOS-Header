//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@interface MPSCNNBatchNormalizationStatistics : MPSCNNKernel
{
}

+ (const struct MPSLibraryInfo *)libraryInfo:(struct MPSDevice *)arg1;
- (BOOL)appendBatchBarrier;
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 batchNormalizationState:(id)arg3;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (BOOL)isResultStateReusedAcrossBatch;
- (unsigned long long)maxBatchSize;

@end
