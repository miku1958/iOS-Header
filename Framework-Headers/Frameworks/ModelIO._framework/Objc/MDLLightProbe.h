//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ModelIO/MDLLight.h>

@class MDLTexture, MISSING_TYPE, NSData, NSMutableData;
@protocol MDLTransformComponent;

@interface MDLLightProbe : MDLLight
{
    MDLTexture *_reflectiveTexture;
    MDLTexture *_irradianceTexture;
    NSMutableData *_sphericalHarmonicsCoefficients;
    id<MDLTransformComponent> _transform;
    unsigned long long _sphericalHarmonicsLevel;
}

@property (readonly, strong, nonatomic) MDLTexture *irradianceTexture; // @synthesize irradianceTexture=_irradianceTexture;
@property (readonly, strong, nonatomic) MDLTexture *reflectiveTexture; // @synthesize reflectiveTexture=_reflectiveTexture;
@property (readonly, copy, nonatomic) NSData *sphericalHarmonicsCoefficients;
@property (readonly, nonatomic) unsigned long long sphericalHarmonicsLevel; // @synthesize sphericalHarmonicsLevel=_sphericalHarmonicsLevel;

+ (MISSING_TYPE *)calculateIrradianceGradientUsingSamples:(MISSING_TYPE **)arg1 ofSize:(unsigned long long)arg2 fromSH:(id)arg3 withLevel:(unsigned long long)arg4;
+ (id)lightProbeWithTextureSize:(long long)arg1 forLocation:(id)arg2 lightsToConsider:(id)arg3 objectsToConsider:(id)arg4 reflectiveCubemap:(id)arg5 irradianceCubemap:(id)arg6;
+ (struct CGColor *)sampleSHAt:(id)arg1 usingCoefficients:(unsigned long long)arg2 withLevel: /* Error: Ran out of types for this method. */;
- (void).cxx_destruct;
- (void)generateIrradianceTextureFromReflective;
- (void)generateSphericalHarmonicsFromIrradiance:(unsigned long long)arg1;
- (id)initWithReflectiveTexture:(id)arg1 irradianceTexture:(id)arg2;
- (void)setSphericalHarmonicsCoefficients:(id)arg1;
- (void)setTransform:(id)arg1;
- (id)transform;

@end
