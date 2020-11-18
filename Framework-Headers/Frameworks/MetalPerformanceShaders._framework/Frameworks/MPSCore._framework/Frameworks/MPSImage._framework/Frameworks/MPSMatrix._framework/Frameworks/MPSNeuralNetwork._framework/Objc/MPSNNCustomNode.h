//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@protocol MPSNNCustomKernelProvider;

@interface MPSNNCustomNode : MPSNNFilterNode
{
    id<MPSNNCustomKernelProvider> _provider;
}

+ (id)nodeWithSource:(id)arg1 provider:(id)arg2;
+ (id)nodeWithSources:(id)arg1 provider:(id)arg2;
+ (id)nodeWithSources:(id)arg1 sourceStates:(id)arg2 provider:(id)arg3;
- (void)dealloc;
- (id)debugDescription;
- (id)initWithSource:(id)arg1 provider:(id)arg2;
- (id)initWithSources:(id)arg1 provider:(id)arg2;
- (id)initWithSources:(id)arg1 sourceStates:(id)arg2 provider:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (struct FilterGraphNode *)newFilterNode;

@end
