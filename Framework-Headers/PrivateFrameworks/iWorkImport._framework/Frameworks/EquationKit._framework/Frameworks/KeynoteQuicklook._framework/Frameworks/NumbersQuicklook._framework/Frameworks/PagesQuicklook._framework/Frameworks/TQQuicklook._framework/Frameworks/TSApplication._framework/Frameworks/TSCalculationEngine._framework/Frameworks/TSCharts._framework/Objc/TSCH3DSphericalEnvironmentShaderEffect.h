//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCH3DShaderEffect.h>

@class NSArray, TSCH3DTexturePool;

@interface TSCH3DSphericalEnvironmentShaderEffect : TSCH3DShaderEffect
{
    NSArray *mMaterials;
    TSCH3DTexturePool *mPool;
}

+ (id)effectWithMaterials:(id)arg1 pool:(id)arg2;
+ (Class)stateClass;
- (void)addVariables:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWithMaterials:(id)arg1 pool:(id)arg2;
- (void)injectCommonShaderInto:(id)arg1 context:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)textureVariablesArray;
- (void)updateState:(id)arg1 effectsStates:(id)arg2;
- (void)uploadData:(id)arg1 effectsStates:(id)arg2;

@end

