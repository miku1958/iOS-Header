//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNConvolutionNode.h>

@class MPSCNNConvolutionGradientStateNode;

@interface MPSCNNConvolutionTransposeNode : MPSCNNConvolutionNode
{
}

@property (readonly, nonatomic) MPSCNNConvolutionGradientStateNode *convolutionGradientState;

+ (id)nodeWithSource:(id)arg1 convolutionGradientState:(id)arg2 weights:(id)arg3;
+ (id)nodeWithSource:(id)arg1 convolutionState:(id)arg2 weights:(id)arg3;
- (id)convolutionState;
- (id)initWithSource:(id)arg1 convolutionGradientState:(id)arg2 weights:(id)arg3;
- (id)initWithSource:(id)arg1 convolutionState:(id)arg2 weights:(id)arg3;
- (struct FilterGraphNode *)newFilterNode;

@end
