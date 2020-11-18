//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLNoiseStrategy-Protocol.h>

@class NSString;

@interface PMLDiffPrivacyNoiseStrategy : NSObject <PMLNoiseStrategy>
{
    unsigned long long _seed;
    BOOL _inplaceNorm;
    int _maxIterations;
    float _minimumMagnitude;
    CDStruct_cd4a7bf5 _noiseScaleFactors;
    long long _noiseMechanism;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property int maxIterations; // @synthesize maxIterations=_maxIterations;
@property float minimumMagnitude; // @synthesize minimumMagnitude=_minimumMagnitude;
@property long long noiseMechanism; // @synthesize noiseMechanism=_noiseMechanism;
@property CDStruct_cd4a7bf5 noiseScaleFactors; // @synthesize noiseScaleFactors=_noiseScaleFactors;
@property (readonly) Class superclass;

+ (id)gaussianNoiseWithScaleFactor:(float)arg1 minimumMagnitude:(float)arg2 seed:(int)arg3;
- (void)addNoiseToSparseMatrix:(id)arg1;
- (void)addNoiseToSparseVector:(id)arg1;
- (id)createDefaultSampler;
- (id)createSamplerByName:(id)arg1;
- (id)initWithMaxIterationCount:(int)arg1 noiseScaleFactors:(CDStruct_cd4a7bf5)arg2 minimumMagnitude:(float)arg3 noiseMechanism:(long long)arg4 inplaceNorm:(BOOL)arg5;
- (id)initWithMaxIterationCount:(int)arg1 noiseScaleFactors:(CDStruct_cd4a7bf5)arg2 minimumMagnitude:(float)arg3 seed:(int)arg4 noiseMechanism:(long long)arg5 inplaceNorm:(BOOL)arg6;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (struct _PMLPreNoiseScaleFactorAndNoiseSampler)samplerWithScaleFactorFor:(id)arg1 usingNorm:(BOOL)arg2;
- (float)scaleAndAddNoiseToDenseVector:(id)arg1 usingNorm:(BOOL)arg2;
- (id)toPlistWithChunks:(id)arg1;

@end

