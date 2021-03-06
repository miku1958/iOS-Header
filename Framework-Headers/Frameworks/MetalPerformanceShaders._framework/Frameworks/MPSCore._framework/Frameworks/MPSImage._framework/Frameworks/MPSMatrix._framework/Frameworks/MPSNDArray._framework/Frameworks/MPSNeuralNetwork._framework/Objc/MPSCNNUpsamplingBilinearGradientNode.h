//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNGradientFilterNode.h>

@interface MPSCNNUpsamplingBilinearGradientNode : MPSNNGradientFilterNode
{
    double _scaleFactorX;
    double _scaleFactorY;
}

@property (readonly, nonatomic) double scaleFactorX; // @synthesize scaleFactorX=_scaleFactorX;
@property (readonly, nonatomic) double scaleFactorY; // @synthesize scaleFactorY=_scaleFactorY;

+ (id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 scaleFactorX:(double)arg4 scaleFactorY:(double)arg5;
- (id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2;
- (id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 scaleFactorX:(double)arg4 scaleFactorY:(double)arg5;
- (struct FilterGraphNode *)newFilterNode;

@end

