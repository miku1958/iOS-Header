//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@protocol MPSCNNBatchNormalizationDataSource;

@interface MPSCNNBatchNormalization : MPSCNNKernel
{
    struct MPSAutoBuffer *_gamma;
    struct MPSAutoBuffer *_beta;
    struct MPSAutoBuffer *_meanDS;
    struct MPSAutoBuffer *_varDS;
    id<MPSCNNBatchNormalizationDataSource> _dataSource;
    BOOL _stateNeedsToLoad;
    float _epsilon;
    unsigned long long _numberOfFeatureChannels;
}

@property (readonly, strong, nonatomic) id<MPSCNNBatchNormalizationDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (nonatomic) float epsilon; // @synthesize epsilon=_epsilon;
@property (readonly, nonatomic) unsigned long long numberOfFeatureChannels; // @synthesize numberOfFeatureChannels=_numberOfFeatureChannels;

+ (const struct MPSLibraryInfo *)libraryInfo;
- (void)dealloc;
- (id)debugDescription;
- (struct NSArray *)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2 batchNormalizationState:(id)arg3;
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2 batchNormalizationState:(id)arg3 destinationImages:(struct NSArray *)arg4;
- (id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 batchNormalizationState:(id)arg3;
- (void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 batchNormalizationState:(id)arg3 destinationImage:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 dataSource:(id)arg2;
- (BOOL)isResultStateReusedAcrossBatch;
- (void)reloadDataSource:(id)arg1;
- (void)reloadGammaAndBetaWithCommandBuffer:(id)arg1 gammaAndBetaState:(id)arg2;
- (id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3;
- (id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4;

@end

