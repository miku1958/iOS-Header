//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNArithmetic.h>

@interface MPSNNCompare : MPSCNNArithmetic
{
    float _threshold;
    unsigned long long _comparisonType;
}

@property (nonatomic) unsigned long long comparisonType; // @synthesize comparisonType=_comparisonType;
@property (nonatomic) float threshold; // @synthesize threshold=_threshold;

- (id)initWithDevice:(id)arg1;

@end
