//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNBinaryArithmeticNode.h>

@interface MPSNNComparisonNode : MPSNNBinaryArithmeticNode
{
    unsigned long long _comparisonType;
}

@property (nonatomic) unsigned long long comparisonType; // @synthesize comparisonType=_comparisonType;

- (Class)gradientClass;
- (struct FilterGraphNode *)newFilterNode;

@end

