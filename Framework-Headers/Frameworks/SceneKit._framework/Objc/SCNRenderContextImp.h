//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SceneKit/SCNRenderContext-Protocol.h>

@class NSDictionary, NSString, SCNRenderTargetRegistry;
@protocol SCNResourceManager;

@interface SCNRenderContextImp : NSObject <SCNRenderContext>
{
    struct C3DColor4 _rendererPremultipliedBackgroundColor;
    long long _currentFrameIndex;
    struct __C3DEngineStats *__engineStats;
    SCNRenderTargetRegistry *_renderTargetRegistry;
    double _superSamplingFactor;
    struct SCNMatrix4 _screenTransform;
    BOOL _needSuperSampling;
    BOOL enablesDeferredShading;
    BOOL collectsCompilationErrors;
    BOOL wantsWideGamut;
    BOOL disableLinearRendering;
    BOOL isOpaque;
    double contentScaleFactor;
    long long pendingGPUFrameCount;
    long long sampleCount;
    unsigned long long debugOptions;
}

@property (nonatomic) BOOL collectsCompilationErrors; // @synthesize collectsCompilationErrors;
@property (readonly, nonatomic) NSDictionary *compilationErrors;
@property (nonatomic) double contentScaleFactor; // @synthesize contentScaleFactor;
@property (readonly, nonatomic) long long currentFrameIndex;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long debugOptions; // @synthesize debugOptions;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableLinearRendering; // @synthesize disableLinearRendering;
@property (nonatomic) BOOL enablesDeferredShading; // @synthesize enablesDeferredShading;
@property (readonly, nonatomic) unsigned int features;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isOpaque; // @synthesize isOpaque;
@property (readonly, nonatomic) long long pendingGPUFrameCount; // @synthesize pendingGPUFrameCount;
@property (readonly, nonatomic) int profile;
@property (readonly, nonatomic) SCNRenderTargetRegistry *renderTargetRegistry; // @synthesize renderTargetRegistry=_renderTargetRegistry;
@property (readonly, nonatomic) id<SCNResourceManager> resourceManager;
@property (nonatomic) long long sampleCount; // @synthesize sampleCount;
@property (nonatomic) struct SCNMatrix4 screenTransform;
@property (nonatomic) BOOL showsAuthoringEnvironment;
@property (nonatomic) double superSamplingFactor;
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsWideGamut; // @synthesize wantsWideGamut;

- (void)beginDeferredLighting;
- (void)beginFrame:(id)arg1;
- (BOOL)beginRenderPass:(struct __C3DFXPass *)arg1 parameters:(CDStruct_42085215)arg2;
- (struct __C3DMeshElement *)createVolatileMeshElementOfType:(BOOL)arg1 primitiveCount:(long long)arg2 bytesPerIndex:(long long)arg3;
- (void)dealloc;
- (void)drawFullScreenQuadForPass:(struct __C3DFXPass *)arg1;
- (void)drawRenderElement:(struct __C3DRendererElement *)arg1 withPass:(struct __C3DFXPass *)arg2;
- (void)drawWireframeOverlayForElements:(CDStruct_d65e47c4 *)arg1 range:(CDStruct_912cb5d2)arg2 store:(struct __C3DRendererElementStore *)arg3;
- (void)endDeferredLighting;
- (void)endFrameWaitingUntilCompleted:(BOOL)arg1;
- (void)endRenderPass;
- (id)init;
- (BOOL)mapVolatileMesh:(struct __C3DMesh *)arg1 verticesCount:(long long)arg2;
- (id)newRenderTargetWithDescription:(CDStruct_fd8065c6 *)arg1 size:(unsigned long long)arg2 arrayLength: /* Error: Ran out of types for this method. */;
- (void)popDebugGroup;
- (void)processRendererElement:(struct __C3DRendererElement *)arg1 engineIterationContext:(CDStruct_256c7a3c *)arg2;
- (void)processRendererElements:(CDStruct_d65e47c4 *)arg1 count:(unsigned int)arg2 engineIterationContext:(CDStruct_256c7a3c *)arg3;
- (void)pushDebugGroup:(id)arg1;
- (void)renderBackground:(struct __C3DEffectSlot *)arg1 engineContext:(struct __C3DEngineContext *)arg2;
- (void)renderLight:(struct __C3DNode *)arg1 lightType:(int)arg2 lightData:(struct __C3DLightRuntimeData *)arg3;
- (void)renderMesh:(struct __C3DMesh *)arg1 meshElement:(struct __C3DMeshElement *)arg2 withProgram:(struct __C3DFXProgram *)arg3 engineContext:(struct __C3DEngineContext *)arg4 transform:(union C3DMatrix4x4)arg5 color:(const struct C3DColor4 *)arg6 rasterizerStates:(struct __C3DRasterizerStates *)arg7 blendState:(struct __C3DBlendStates *)arg8 texture:(struct __C3DImage *)arg9 depthBias:(BOOL)arg10;
- (void)renderVideoBackground:(struct __C3DImageProxy *)arg1 engineContext:(struct __C3DEngineContext *)arg2;
- (void)setRendererPremultipliedBackgroundColor:(struct C3DColor4)arg1;
- (void)startProcessingRendererElementsWithEngineIterationContext:(CDStruct_256c7a3c *)arg1;
- (struct __C3DEngineStats *)stats;
- (void)stopProcessingRendererElements;
- (BOOL)supportsFeatureSet:(unsigned long long)arg1;
- (id)textureForEffectSlot:(struct __C3DEffectSlot *)arg1;
- (void)unmapVolatileMesh:(struct __C3DMesh *)arg1 modifiedVerticesCount:(long long)arg2;
- (void)unmapVolatileMeshElement:(struct __C3DMeshElement *)arg1;

@end

