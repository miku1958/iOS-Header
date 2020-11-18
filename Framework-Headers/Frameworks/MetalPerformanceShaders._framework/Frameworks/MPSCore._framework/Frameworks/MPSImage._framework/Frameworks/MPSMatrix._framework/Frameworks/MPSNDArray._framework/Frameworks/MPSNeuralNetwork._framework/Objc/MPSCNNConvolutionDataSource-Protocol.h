//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/NSCopying-Protocol.h>
#import <MPSNeuralNetwork/NSObject-Protocol.h>

@class MISSING_TYPE, MPSCNNConvolutionDescriptor, MPSCNNConvolutionGradientState, MPSCNNConvolutionWeightsAndBiasesState, NSString;
@protocol MTLCommandBuffer, MTLDevice;

@protocol MPSCNNConvolutionDataSource <NSCopying, NSObject>
- (float *)biasTerms;
- (unsigned int)dataType;
- (MPSCNNConvolutionDescriptor *)descriptor;
- (NSString *)label;
- (BOOL)load;
- (void)purge;
- (void *)weights;

@optional
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id<MTLDevice>)arg2;
- (float *)lookupTableForUInt8Kernel;
- (MISSING_TYPE **)rangesForUInt8Kernel;
- (MPSCNNConvolutionWeightsAndBiasesState *)updateWithCommandBuffer:(id<MTLCommandBuffer>)arg1 gradientState:(MPSCNNConvolutionGradientState *)arg2 sourceState:(MPSCNNConvolutionWeightsAndBiasesState *)arg3;
- (BOOL)updateWithGradientState:(MPSCNNConvolutionGradientState *)arg1 sourceState:(MPSCNNConvolutionWeightsAndBiasesState *)arg2;
- (unsigned int)weightsLayout;
- (unsigned int)weightsQuantizationType;
@end
