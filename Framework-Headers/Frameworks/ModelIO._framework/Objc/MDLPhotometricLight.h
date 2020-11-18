//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ModelIO/MDLPhysicallyPlausibleLight.h>

@class MDLTexture, NSData, NSMutableData;

@interface MDLPhotometricLight : MDLPhysicallyPlausibleLight
{
    struct RTIESLight *_iesLight;
    NSMutableData *_sphericalHarmonicsCoefficients;
    MDLTexture *_lightCubeMap;
    unsigned long long _sphericalHarmonicsLevel;
}

@property (readonly, strong, nonatomic) MDLTexture *lightCubeMap; // @synthesize lightCubeMap=_lightCubeMap;
@property (readonly, copy, nonatomic) NSData *sphericalHarmonicsCoefficients;
@property (readonly, nonatomic) unsigned long long sphericalHarmonicsLevel; // @synthesize sphericalHarmonicsLevel=_sphericalHarmonicsLevel;

- (void).cxx_destruct;
- (id)_computeSceneKitRenderingTexture:(unsigned long long)arg1;
- (float)computeInnerAngle;
- (void)computeLumens;
- (struct CGColor *)evaluatedColorFromSHVector: /* Error: Ran out of types for this method. */;
- (void)generateCubemapFromLight:(unsigned long long)arg1;
- (void)generateSphericalHarmonicsFromLight:(unsigned long long)arg1;
- (id)initWithIESProfile:(id)arg1;
- (void)setSphericalHarmonicsCoefficients:(id)arg1;

@end

