//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/NSCopying-Protocol.h>
#import <MPSNeuralNetwork/NSObject-Protocol.h>

@class MPSCNNNormalizationGammaAndBetaState, NSArray, NSCoder, NSString;
@protocol MTLCommandBuffer, MTLDevice;

@protocol MPSCNNGroupNormalizationDataSource <NSObject, NSCopying>

@property (readonly, nonatomic) unsigned long long numberOfFeatureChannels;
@property (nonatomic) unsigned long long numberOfGroups;

- (float *)beta;
- (float *)gamma;
- (NSString *)label;

@optional
+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id<MTLDevice>)arg2;
- (void)encodeWithCoder:(NSCoder *)arg1;
- (float)epsilon;
- (id)initWithCoder:(NSCoder *)arg1;
- (MPSCNNNormalizationGammaAndBetaState *)updateGammaAndBetaWithCommandBuffer:(id<MTLCommandBuffer>)arg1 groupNormalizationStateBatch:(NSArray *)arg2;
- (BOOL)updateGammaAndBetaWithGroupNormalizationStateBatch:(NSArray *)arg1;
@end

