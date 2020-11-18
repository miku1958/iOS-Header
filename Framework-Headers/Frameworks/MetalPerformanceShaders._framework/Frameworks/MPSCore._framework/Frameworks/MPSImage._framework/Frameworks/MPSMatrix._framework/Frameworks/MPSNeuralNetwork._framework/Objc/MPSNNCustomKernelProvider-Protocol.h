//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/NSCopying-Protocol.h>
#import <MPSNeuralNetwork/NSObject-Protocol.h>
#import <MPSNeuralNetwork/NSSecureCoding-Protocol.h>

@class MPSImage, MPSImageDescriptor, MPSNNCustomKernel, MPSNNCustomKernelParameters, NSArray, NSString;

@protocol MPSNNCustomKernelProvider <NSObject, NSSecureCoding, NSCopying>

@property (readonly, nonatomic) BOOL isBackwards;

- (unsigned long long)maxSourceImageCount;
- (MPSNNCustomKernelParameters *)parametersForBatchKernel:(MPSNNCustomKernel *)arg1 sourceImages:(NSArray *)arg2 sourceStates:(NSArray *)arg3 destinationImage:(struct NSArray *)arg4 prefetch:(BOOL)arg5;
- (MPSNNCustomKernelParameters *)parametersForKernel:(MPSNNCustomKernel *)arg1 sourceImages:(NSArray *)arg2 sourceStates:(NSArray *)arg3 destinationImage:(MPSImage *)arg4 prefetch:(BOOL)arg5;

@optional
- (MPSImageDescriptor *)destinationImageDescriptorForKernel:(MPSNNCustomKernel *)arg1 sourceImages:(NSArray *)arg2 sourceStates:(NSArray *)arg3 paddingMethod:(unsigned long long)arg4 suggestedDescriptor:(MPSImageDescriptor *)arg5;
- (CDStruct_14f26992)dilationRateAtIndex:(unsigned long long)arg1;
- (CDStruct_14f26992)kernelSizeAtIndex:(unsigned long long)arg1;
- (NSString *)label;
- (unsigned long long)options;
- (CDStruct_14f26992)strideInPixelsAtIndex:(unsigned long long)arg1;
@end
