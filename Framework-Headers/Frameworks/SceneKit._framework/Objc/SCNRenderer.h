//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/SCNSceneRenderer-Protocol.h>
#import <SceneKit/SCNTechniqueSupport-Protocol.h>

@class AVAudioEngine, AVAudioEnvironmentNode, EAGLContext, NSLock, NSString, SCNNode, SCNRendererTransitionContext, SCNScene, SCNTechnique, SKScene, UIColor, __SKSCNRenderer;
@protocol OS_dispatch_queue, SCNRenderContext, SCNSceneRenderer, SCNSceneRendererDelegate;

@interface SCNRenderer : NSObject <SCNSceneRenderer, SCNTechniqueSupport>
{
    SCNScene *_scene;
    NSLock *_lock;
    NSObject<OS_dispatch_queue> *__renderingQueue;
    unsigned long long __antialiasingMode;
    struct {
        struct __C3DFramebuffer *frameBuffer;
        struct __C3DFramebuffer *multisamplingFrameBuffer;
        struct CGSize drawableSize;
    } _framebufferInfo;
    id _mtlTexture;
    unsigned int _shouldDeleteFramebuffer:1;
    unsigned int _pointOfViewWasSet:1;
    unsigned int _isPrivateRenderer:1;
    unsigned int _isViewPrivateRenderer:1;
    unsigned int _doingSnapshot:1;
    double _currentSceneTime;
    double _currentSystemTime;
    double _deltaTime;
    double _forceSystemTime;
    double _lastSystemTime;
    double __nextFrameTime;
    SCNRendererTransitionContext *_transitionContext;
    BOOL _playing;
    BOOL _isAnimating;
    BOOL _loops;
    id _delegate;
    struct __C3DEngineContext *_engineContext;
    unsigned long long _renderingAPI;
    struct SCNVector4 __viewport;
    EAGLContext *_glContext;
    id<SCNRenderContext> _renderContext;
    unsigned int _jitteringEnabled:1;
    unsigned int _frozen:1;
    unsigned int _delegateSupportsWillRender:1;
    unsigned int _delegateSupportsDidRender:1;
    unsigned int _delegateSupportsDidApplyAnimations:1;
    unsigned int _delegateSupportsUpdate:1;
    unsigned int _delegateSupportsDidSimulatePhysics:1;
    UIColor *_backgroundColor;
    struct C3DColor4 _c3dBackgroundColor;
    SCNNode *_pointOfView;
    SCNRenderer *_preloadRenderer;
    id<SCNSceneRenderer> _privateRendererOwner;
    SCNTechnique *_technique;
    __SKSCNRenderer *_overlayRenderer;
    id _overlayScene;
    BOOL _disableOverlays;
    BOOL _showStatistics;
    double _statisticsTimeStamp;
}

@property (readonly, nonatomic) AVAudioEngine *audioEngine;
@property (readonly, nonatomic) AVAudioEnvironmentNode *audioEnvironmentNode;
@property (strong, nonatomic) SCNNode *audioListener;
@property (nonatomic) BOOL autoenablesDefaultLighting;
@property (readonly, nonatomic) void *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long debugOptions;
@property (nonatomic) id<SCNSceneRendererDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isJitteringEnabled) BOOL jitteringEnabled;
@property (nonatomic) BOOL loops;
@property (readonly, nonatomic) double nextFrameTime;
@property (strong, nonatomic) SKScene *overlaySKScene;
@property (getter=isPlaying) BOOL playing;
@property (strong, nonatomic) SCNNode *pointOfView;
@property (readonly, nonatomic) unsigned long long renderingAPI;
@property (strong, nonatomic) SCNScene *scene;
@property (nonatomic) double sceneTime;
@property (nonatomic) BOOL showsStatistics;
@property (readonly) Class superclass;
@property (copy, nonatomic) SCNTechnique *technique;

+ (id)rendererWithContext:(id)arg1 options:(id)arg2;
+ (id)rendererWithDevice:(id)arg1 options:(id)arg2;
- (void *)__CFObject;
- (void)_acquireCurrentViewport;
- (unsigned long long)_antialiasingMode;
- (void)_attachTexture:(id)arg1;
- (id)_authoringEnvironment;
- (struct C3DColor4 *)_backgroundColorComponents;
- (void)_bindFramebuffer:(BOOL)arg1;
- (void)_clearBuffers;
- (double)_contentsScaleFactor;
- (void)_createFramebufferIfNeeded;
- (id)_defaultPOVForScene:(id)arg1;
- (void)_deleteFramebuffer;
- (void)_detachTexture:(id)arg1;
- (void)_didRenderScene:(id)arg1;
- (void)_displayLinkStatsTack;
- (void)_displayLinkStatsTick;
- (void)_draw;
- (void)_drawOverlaySceneAtTime:(double)arg1;
- (void)_drawScene:(struct __C3DScene *)arg1;
- (BOOL)_drawSceneWithLegacyRenderer:(struct __C3DScene *)arg1;
- (BOOL)_drawSceneWithNewRenderer:(struct __C3DScene *)arg1;
- (void)_drawWithJitteringPresentationMode;
- (struct __C3DEngineContext *)_engineContext;
- (id)_hitTest:(struct CGPoint)arg1 viewport:(struct CGSize)arg2 options:(id)arg3;
- (id)_initWithOptions:(id)arg1 isPrivateRenderer:(BOOL)arg2 privateRendererOwner:(id)arg3 clearsOnDraw:(BOOL)arg4 context:(void *)arg5 renderingAPI:(unsigned long long)arg6;
- (BOOL)_installContext;
- (void)_installViewport;
- (void)_invalidateFramebuffer;
- (BOOL)_isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2 viewport:(struct CGSize)arg3;
- (void)_jitterAtStep:(unsigned long long)arg1 updateMainFramebuffer:(BOOL)arg2 redisplay:(BOOL)arg3 jitterer:(id)arg4;
- (BOOL)_needsRepetitiveRedraw;
- (double)_nextFrameTime;
- (id)_nodesInsideFrustumWithPointOfView:(id)arg1 viewport:(struct CGSize)arg2;
- (void)_pause;
- (void)_play;
- (BOOL)_preloadResource:(id)arg1 abortHandler:(CDUnknownBlockType)arg2;
- (void)_prepareForTransition:(id)arg1 outgoingScene:(id)arg2 outgoingPointOfView:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_prepareSKRenderer;
- (void)_presentFramebuffer;
- (struct SCNVector3)_projectPoint:(struct SCNVector3)arg1 viewport:(struct CGSize)arg2;
- (void)_projectPoints:(struct SCNVector3 *)arg1 count:(unsigned long long)arg2 viewport:(struct CGSize)arg3;
- (void)_render;
- (void)_renderAtTime:(double)arg1;
- (void)_renderAtTime:(double)arg1 viewport:(struct CGRect)arg2 encoder:(id)arg3 passDescriptor:(id)arg4 commandQueue:(id)arg5 commandBuffer:(id)arg6;
- (void)_renderScene:(struct __C3DEngineContext *)arg1 sceneTime:(double)arg2;
- (struct __C3DRendererContext *)_rendererContext;
- (id)_renderingQueue;
- (void)_resolveAndDiscard;
- (unsigned long long)_sampleCount;
- (void)_setBackingSize:(struct CGSize)arg1;
- (void)_setSceneTime:(double)arg1;
- (id)_setupSKRendererIfNeeded;
- (BOOL)_showsAuthoringEnvironment;
- (id)_snapshotWithImageSize:(struct CGSize)arg1 backingSize:(struct CGSize)arg2;
- (void)_stop;
- (double)_systemTime;
- (void)_unbindFramebuffer;
- (struct SCNVector3)_unprojectPoint:(struct SCNVector3)arg1 viewport:(struct CGSize)arg2;
- (void)_update:(struct __C3DScene *)arg1 rendererContext:(struct __C3DRendererContext *)arg2;
- (void)_updateEngineCallbacks;
- (void)_updatePointOfView;
- (void)_updateWithSystemTime:(double)arg1;
- (struct SCNVector4)_viewport;
- (void)_willRenderScene:(id)arg1;
- (BOOL)autoAdjustCamera;
- (id)backgroundColor;
- (id)commandQueue;
- (id)currentRenderCommandEncoder;
- (id)currentRenderPassDescriptor;
- (double)currentTime;
- (void)dealloc;
- (id)device;
- (BOOL)disableOverlays;
- (BOOL)frozen;
- (id)hitTest:(struct CGPoint)arg1 options:(id)arg2;
- (id)hitTestWithSegmentFromPoint:(struct SCNVector3)arg1 toPoint:(struct SCNVector3)arg2 options:(id)arg3;
- (id)init;
- (BOOL)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2;
- (BOOL)jitteringEnabled;
- (void)lock;
- (id)nodesInsideFrustumWithPointOfView:(id)arg1;
- (BOOL)prepareObject:(id)arg1 shouldAbortBlock:(CDUnknownBlockType)arg2;
- (void)prepareObjects:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)presentScene:(id)arg1 withTransition:(id)arg2 incomingPointOfView:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)programWithNode:(id)arg1 withMaterial:(id)arg2;
- (struct SCNVector3)projectPoint:(struct SCNVector3)arg1;
- (void)render;
- (void)renderAtTime:(double)arg1;
- (void)renderAtTime:(double)arg1 viewport:(struct CGRect)arg2 commandBuffer:(id)arg3 passDescriptor:(id)arg4;
- (void)renderAtTime:(double)arg1 viewport:(struct CGRect)arg2 encoder:(id)arg3 passDescriptor:(id)arg4 commandQueue:(id)arg5;
- (void)setAutoAdjustCamera:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setDisableOverlays:(BOOL)arg1;
- (void)setFrozen:(BOOL)arg1;
- (void)setScene:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)set_antialiasingMode:(unsigned long long)arg1;
- (void)set_deltaTime:(double)arg1;
- (void)set_nextFrameTime:(double)arg1;
- (void)set_showsAuthoringEnvironment:(BOOL)arg1;
- (void)set_systemTime:(double)arg1;
- (void)set_viewport:(struct SCNVector4)arg1;
- (void)setupForDeprecatedOffscreenRenderer;
- (void)unlock;
- (struct SCNVector3)unprojectPoint:(struct SCNVector3)arg1;
- (void)updateAndDrawStatisticsIfNeeded;
- (void)updateCurrentTimeIfPlayingWithSystemTime:(double)arg1;

@end

