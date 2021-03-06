//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNGradientFilterNode.h>

#import <MPSNeuralNetwork/MPSNNTrainableNode-Protocol.h>

@class NSString;
@protocol MPSCNNConvolutionDataSource;

@interface MPSCNNConvolutionGradientNode : MPSNNGradientFilterNode <MPSNNTrainableNode>
{
    id<MPSCNNConvolutionDataSource> _weights;
    unsigned long long _trainingStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long trainingStyle; // @synthesize trainingStyle=_trainingStyle;
@property (readonly, nonatomic) id<MPSCNNConvolutionDataSource> weights; // @synthesize weights=_weights;

+ (id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 convolutionGradientState:(id)arg3 weights:(id)arg4;
- (void)dealloc;
- (id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2;
- (id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 convolutionGradientState:(id)arg3 weights:(id)arg4;
- (id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 weights:(id)arg4;
- (struct FilterGraphNode *)newFilterNode;

@end

