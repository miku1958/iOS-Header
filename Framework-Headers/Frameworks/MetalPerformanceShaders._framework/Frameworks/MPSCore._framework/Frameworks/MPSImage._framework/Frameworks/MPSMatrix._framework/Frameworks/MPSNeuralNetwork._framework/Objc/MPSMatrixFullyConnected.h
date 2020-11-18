//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSMatrix/MPSMatrixBinaryKernel.h>

@protocol MTLBuffer;

@interface MPSMatrixFullyConnected : MPSMatrixBinaryKernel
{
    CDUnknownFunctionPointerType _encode;
    id<MTLBuffer> neuronAParamBuf;
    int _neuronType;
    float _neuronA;
    float _neuronB;
    float _neuronC;
    unsigned long long _sourceNumberOfFeatureVectors;
    unsigned long long _sourceInputFeatureChannels;
    unsigned long long _sourceOutputFeatureChannels;
    double _alpha;
}

@property (nonatomic) double alpha; // @synthesize alpha=_alpha;
@property (nonatomic) float neuronA; // @synthesize neuronA=_neuronA;
@property (nonatomic) float neuronB; // @synthesize neuronB=_neuronB;
@property (nonatomic) float neuronC; // @synthesize neuronC=_neuronC;
@property (nonatomic) int neuronType; // @synthesize neuronType=_neuronType;
@property (nonatomic) unsigned long long sourceInputFeatureChannels; // @synthesize sourceInputFeatureChannels=_sourceInputFeatureChannels;
@property (nonatomic) unsigned long long sourceNumberOfFeatureVectors; // @synthesize sourceNumberOfFeatureVectors=_sourceNumberOfFeatureVectors;
@property (nonatomic) unsigned long long sourceOutputFeatureChannels; // @synthesize sourceOutputFeatureChannels=_sourceOutputFeatureChannels;

+ (const struct MPSLibraryInfo *)libraryInfo;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeToCommandBuffer:(id)arg1 inputMatrix:(id)arg2 weightMatrix:(id)arg3 biasVector:(id)arg4 resultMatrix:(id)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (float)neuronParameterA;
- (float)neuronParameterB;
- (float)neuronParameterC;
- (void)setNeuronToPReLUWithParametersA:(id)arg1;
- (void)setNeuronType:(int)arg1 parameterA:(float)arg2 parameterB:(float)arg3 parameterC:(float)arg4;

@end

