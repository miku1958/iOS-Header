//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@protocol MPSCNNBatchNormalizationDataSource;

@interface MPSCNNBatchNormalizationNode : MPSNNFilterNode
{
    id<MPSCNNBatchNormalizationDataSource> _dataSource;
    unsigned long long _flags;
}

@property (nonatomic) unsigned long long flags; // @synthesize flags=_flags;

+ (id)nodeWithSource:(id)arg1 dataSource:(id)arg2;
- (BOOL)calculateStatistics;
- (void)dealloc;
- (Class)gradientClass;
- (id)initWithSource:(id)arg1 dataSource:(id)arg2;
- (struct FilterGraphNode *)newFilterNode;
- (id)resultStates;
- (id)sourceStates;

@end

