//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNConvolutionGradientState.h>

@class MPSCNNConvolutionTranspose;

@interface MPSCNNConvolutionTransposeGradientState : MPSCNNConvolutionGradientState
{
    MPSCNNConvolutionTranspose *_convolutionTranspose;
    MPSCNNConvolutionGradientState *_convolutionGradientState;
    long long _kernelOffsetX;
    long long _kernelOffsetY;
}

@property (readonly, nonatomic) MPSCNNConvolutionGradientState *convolutionGradientState; // @synthesize convolutionGradientState=_convolutionGradientState;
@property (readonly, strong, nonatomic) MPSCNNConvolutionTranspose *convolutionTranspose; // @synthesize convolutionTranspose=_convolutionTranspose;

+ (id)temporaryStateWithCommandBuffer:(id)arg1 resourceList:(id)arg2 convolutionTranspose:(id)arg3 convolutionGradientState:(id)arg4;
+ (id)temporaryStateWithCommandBuffer:(id)arg1 resourceList:(id)arg2 convolutionTranspose:(id)arg3 convolutionGradientState:(id)arg4 weightsLayout:(unsigned int)arg5;
- (id)convolution;
- (void)dealloc;
- (id)debugDescription;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 forKernel:(id)arg3 suggestedDescriptor:(id)arg4;
- (id)initWithDevice:(id)arg1 resourceList:(id)arg2 convolution:(id)arg3;
- (id)initWithDevice:(id)arg1 resourceList:(id)arg2 convolution:(id)arg3 weightsLayout:(unsigned int)arg4;
- (id)initWithDevice:(id)arg1 resourceList:(id)arg2 convolutionTranspose:(id)arg3 convolutionGradientState:(id)arg4;
- (id)initWithDevice:(id)arg1 resourceList:(id)arg2 convolutionTranspose:(id)arg3 convolutionGradientState:(id)arg4 weightsLayout:(unsigned int)arg5;
- (id)initWithResource:(id)arg1;
- (id)initWithResource:(id)arg1 weightsLayout:(unsigned int)arg2;
- (unsigned long long)sourceHeight;
- (unsigned long long)sourceWidth;

@end
