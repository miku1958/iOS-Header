//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@protocol MPSCNNInstanceNormalizationDataSource;

@interface MPSCNNInstanceNormalization : MPSCNNKernel
{
    struct MPSAutoBuffer *_gamma;
    struct MPSAutoBuffer *_beta;
    id<MPSCNNInstanceNormalizationDataSource> _dataSource;
    unsigned long long _numberOfFeatureChannels;
    float _epsilon;
}

@property (readonly, strong, nonatomic) id<MPSCNNInstanceNormalizationDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (nonatomic) float epsilon; // @synthesize epsilon=_epsilon;

+ (const struct MPSLibraryInfo *)libraryInfo;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 dataSource:(id)arg2;
- (void)reloadDataSource:(id)arg1;
- (void)reloadGammaAndBetaWithCommandBuffer:(id)arg1 gammaAndBetaState:(id)arg2;
- (id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3;
- (id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4;

@end
