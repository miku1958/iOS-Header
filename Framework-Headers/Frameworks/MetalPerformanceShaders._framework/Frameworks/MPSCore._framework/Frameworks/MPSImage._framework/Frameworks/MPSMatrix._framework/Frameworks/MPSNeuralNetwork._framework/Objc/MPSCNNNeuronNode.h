//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSCNNNeuronNode : MPSNNFilterNode
{
    int _type;
    float _a;
    float _b;
    float _c;
}

@property (readonly, nonatomic) float a; // @synthesize a=_a;
@property (readonly, nonatomic) float b; // @synthesize b=_b;
@property (readonly, nonatomic) float c; // @synthesize c=_c;

- (id)debugDescription;
- (id)initWithSource:(id)arg1 type:(int)arg2 a:(float)arg3 b:(float)arg4 c:(float)arg5;
- (BOOL)isEqual:(id)arg1;

@end

