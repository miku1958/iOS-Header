//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@interface MPSCNNPooling : MPSCNNKernel
{
}

+ (const struct MPSLibraryInfo *)libraryInfo:(struct MPSDevice *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)debugDescription;
- (id)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2;
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationImages:(id)arg3;
- (id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2;
- (void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationImage:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3;
- (id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 strideInPixelsX:(unsigned long long)arg4 strideInPixelsY:(unsigned long long)arg5;
- (id)newPlugin;
- (void)setKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 strideInPixelsX:(unsigned long long)arg3 strideInPixelsY:(unsigned long long)arg4;

@end

