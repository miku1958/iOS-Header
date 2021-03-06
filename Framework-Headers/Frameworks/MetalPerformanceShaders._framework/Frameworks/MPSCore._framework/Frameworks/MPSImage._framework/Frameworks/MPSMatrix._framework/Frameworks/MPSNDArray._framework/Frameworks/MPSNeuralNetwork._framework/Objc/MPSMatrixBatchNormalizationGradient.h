//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSMatrix/MPSMatrixBinaryKernel.h>

@interface MPSMatrixBatchNormalizationGradient : MPSMatrixBinaryKernel
{
    int _neuronType;
    float _neuronA;
    float _neuronB;
    float _neuronC;
    float _epsilon;
    unsigned long long _sourceNumberOfFeatureVectors;
    unsigned long long _sourceInputFeatureChannels;
}

@property (nonatomic) float epsilon; // @synthesize epsilon=_epsilon;
@property (nonatomic) float neuronA; // @synthesize neuronA=_neuronA;
@property (nonatomic) float neuronB; // @synthesize neuronB=_neuronB;
@property (nonatomic) float neuronC; // @synthesize neuronC=_neuronC;
@property (nonatomic) int neuronType; // @synthesize neuronType=_neuronType;
@property (nonatomic) unsigned long long sourceInputFeatureChannels; // @synthesize sourceInputFeatureChannels=_sourceInputFeatureChannels;
@property (nonatomic) unsigned long long sourceNumberOfFeatureVectors; // @synthesize sourceNumberOfFeatureVectors=_sourceNumberOfFeatureVectors;

+ (const struct MPSLibraryInfo *)libraryInfo:(struct MPSDevice *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeToCommandBuffer:(id)arg1 gradientMatrix:(id)arg2 inputMatrix:(id)arg3 meanVector:(id)arg4 varianceVector:(id)arg5 gammaVector:(id)arg6 betaVector:(id)arg7 resultGradientForDataMatrix:(id)arg8 resultGradientForGammaVector:(id)arg9 resultGradientForBetaVector:(id)arg10;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (float)neuronParameterA;
- (float)neuronParameterB;
- (float)neuronParameterC;
- (void)setNeuronType:(int)arg1 parameterA:(float)arg2 parameterB:(float)arg3 parameterC:(float)arg4;

@end

