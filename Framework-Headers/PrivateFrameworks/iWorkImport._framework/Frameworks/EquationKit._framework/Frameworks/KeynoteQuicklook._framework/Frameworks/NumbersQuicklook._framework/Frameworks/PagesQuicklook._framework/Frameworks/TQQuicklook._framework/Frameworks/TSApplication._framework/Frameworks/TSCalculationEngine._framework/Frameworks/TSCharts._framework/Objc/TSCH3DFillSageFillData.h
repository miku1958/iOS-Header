//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSCharts/TSCH3DSageFillData-Protocol.h>

@class NSMutableArray, TSCH3DFill;

@interface TSCH3DFillSageFillData : NSObject <TSCH3DSageFillData>
{
    TSCH3DFill *mFill;
    NSMutableArray *mTextures;
    NSMutableArray *mTextureBlendModes;
}

+ (id)dataWithFill:(id)arg1;
- (void)dealloc;
- (struct Color)diffuse;
- (unsigned long long)diffuseCount;
- (id)diffuseMaterial;
- (struct Color)emissive;
- (id)environment;
- (id)fillSetIdentifier;
- (id)initWithFill:(id)arg1;
- (BOOL)isLayerEnabledForIndex:(unsigned long long)arg1;
- (long long)layerBlendModeForIndex:(unsigned long long)arg1;
- (unsigned long long)layerCount;
- (BOOL)layerIsEnvironmentMapForIndex:(unsigned long long)arg1;
- (id)layerLightenPercentageForIndex:(unsigned long long)arg1;
- (float)layerRotationForIndex:(unsigned long long)arg1;
- (float)layerScaleForIndex:(unsigned long long)arg1;
- (int)layerTilingModeForIndex:(unsigned long long)arg1;
- (id)lightingModel;
- (id)materialAtIndex:(unsigned long long)arg1;
- (unsigned long long)modulateCount;
- (id)modulateMaterial;
- (float)opacity;
- (void)p_addMaterial:(id)arg1 blendMode:(long long)arg2;
- (id)phongMaterials;
- (float)shininess;
- (struct Color)specular;
- (id)textureForIndex:(unsigned long long)arg1;

@end

