//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNConvolutionNode.h>

@interface MPSCNNFullyConnectedNode : MPSCNNConvolutionNode
{
}

+ (id)nodeWithSource:(id)arg1 weights:(id)arg2;
- (Class)gradientClass;
- (id)initWithSource:(id)arg1 weights:(id)arg2;
- (struct FilterGraphNode *)newFilterNode;

@end

