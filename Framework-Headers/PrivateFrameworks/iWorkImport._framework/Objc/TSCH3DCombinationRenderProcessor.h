//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DRetargetRenderProcessor.h>

@class NSIndexSet, TSCH3DShaderEffects, TSCH3DShaderEffectsStates;

__attribute__((visibility("hidden")))
@interface TSCH3DCombinationRenderProcessor : TSCH3DRetargetRenderProcessor
{
    NSIndexSet *mEnabled;
    struct StateStack<glm::detail::tmat4x4<float>, 8> mTransformStack;
    tmat4x4_3074befe mProjection;
    BOOL mTransformChanged;
    BOOL mProjectionChanged;
    StateStack_2a9a65b0 mObjectStateStack;
    struct StateStack<TSCH3D::RenderState, 10> mRenderStateStack;
    TSCH3DShaderEffects *mEffects;
    TSCH3DShaderEffectsStates *mShaderEffectsStates;
}

@property (readonly, nonatomic) BOOL projectionChanged; // @synthesize projectionChanged=mProjectionChanged;
@property (readonly, nonatomic) BOOL transformChanged; // @synthesize transformChanged=mTransformChanged;

+ (id)processorWithOriginal:(id)arg1 enableTypes:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)copyProjectionInto:(tmat4x4_3074befe *)arg1;
- (void)copyTransformInto:(tmat4x4_3074befe *)arg1;
- (tmat4x4_3074befe *)currentTransform;
- (id)effects;
- (id)effectsStates;
- (id)initWithOriginal:(id)arg1;
- (id)initWithOriginal:(id)arg1 enableTypes:(id)arg2;
- (BOOL)matrixEnabled;
- (void)multiply:(tmat4x4_3074befe *)arg1;
- (BOOL)objectStateEnabled;
- (StateStack_2a9a65b0 *)objectStateStack;
- (void)popMatrix;
- (void)popRenderState;
- (void)popState;
- (void)projection:(tmat4x4_3074befe *)arg1;
- (tmat4x4_3074befe *)projectionTransform;
- (void)pushMatrix;
- (void)pushRenderState;
- (void)pushState;
- (struct RenderState)renderState;
- (BOOL)renderStateEnabled;
- (void)replace:(tmat4x4_3074befe *)arg1;
- (void)resetBuffers;
- (void)resetTransformChangeFlags;
- (void)scale:(tvec3_17f03ce0 *)arg1;
- (void)setRenderState:(const struct RenderState *)arg1;
- (BOOL)shaderEnabled;
- (void)translate:(tvec3_17f03ce0 *)arg1;

@end

