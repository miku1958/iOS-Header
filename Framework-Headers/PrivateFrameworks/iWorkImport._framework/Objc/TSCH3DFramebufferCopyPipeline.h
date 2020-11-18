//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DFramebufferTransformPipeline.h>

@class NSArray, TSCH3DResource;

__attribute__((visibility("hidden")))
@interface TSCH3DFramebufferCopyPipeline : TSCH3DFramebufferTransformPipeline
{
    NSArray *mEffects;
    TSCH3DResource *mVertices;
    TSCH3DResource *mTexcoords;
    struct RenderState mRenderState;
    tmat4x4_3074befe mTransform;
    box_0260e9b3 mTargetViewport;
    BOOL mWipeTarget;
    tvec4_ac57c72d mWipeColor;
    CDUnknownBlockType mUpdateShaderEffectsStatesBlock;
}

@property (copy, nonatomic) NSArray *effects; // @synthesize effects=mEffects;
@property (nonatomic) struct RenderState renderState; // @synthesize renderState=mRenderState;
@property (nonatomic) box_0260e9b3 targetViewport; // @synthesize targetViewport=mTargetViewport;
@property (strong, nonatomic) TSCH3DResource *texcoords; // @synthesize texcoords=mTexcoords;
@property (nonatomic) tmat4x4_3074befe transform; // @synthesize transform=mTransform;
@property (copy, nonatomic) CDUnknownBlockType updateShaderEffectsStatesBlock; // @synthesize updateShaderEffectsStatesBlock=mUpdateShaderEffectsStatesBlock;
@property (strong, nonatomic) TSCH3DResource *vertices; // @synthesize vertices=mVertices;
@property (nonatomic) tvec4_ac57c72d wipeColor; // @synthesize wipeColor=mWipeColor;
@property (nonatomic) BOOL wipeTarget; // @synthesize wipeTarget=mWipeTarget;

- (id).cxx_construct;
- (void)dealloc;
- (id)initWithProcessor:(id)arg1 session:(id)arg2;
- (void)transformFramebuffer;
- (void)updateShaderEffectsStates;

@end

