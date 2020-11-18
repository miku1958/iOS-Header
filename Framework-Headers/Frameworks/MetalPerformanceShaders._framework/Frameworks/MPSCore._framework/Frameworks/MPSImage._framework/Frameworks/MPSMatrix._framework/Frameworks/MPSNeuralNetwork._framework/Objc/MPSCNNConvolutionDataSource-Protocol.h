//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/NSObject-Protocol.h>

@class MISSING_TYPE, MPSCNNConvolutionDescriptor, MPSCNNConvolutionGradientState, MPSCNNConvolutionWeightsAndBiasesState, NSString;
@protocol MTLCommandBuffer;

@protocol MPSCNNConvolutionDataSource <NSObject>
- (float *)biasTerms;
- (unsigned int)dataType;
- (MPSCNNConvolutionDescriptor *)descriptor;
- (NSString *)label;
- (BOOL)load;
- (void)purge;
- (void *)weights;

@optional
- (float *)lookupTableForUInt8Kernel;
- (MISSING_TYPE **)rangesForUInt8Kernel;
- (MPSCNNConvolutionWeightsAndBiasesState *)updateWithCommandBuffer:(id<MTLCommandBuffer>)arg1 gradientState:(MPSCNNConvolutionGradientState *)arg2 sourceState:(MPSCNNConvolutionWeightsAndBiasesState *)arg3;
- (BOOL)updateWithGradientState:(MPSCNNConvolutionGradientState *)arg1 sourceState:(MPSCNNConvolutionWeightsAndBiasesState *)arg2;
@end
