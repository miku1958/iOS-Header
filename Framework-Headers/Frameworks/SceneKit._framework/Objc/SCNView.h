//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SceneKit/SCNSceneRenderer-Protocol.h>
#import <SceneKit/SCNTechniqueSupport-Protocol.h>

@class AVAudioEngine, AVAudioEnvironmentNode, CALayer, EAGLContext, MTLRenderPassDescriptor, NSArray, NSString, SCNCameraController, SCNDisplayLink, SCNJitterer, SCNNode, SCNRecursiveLock, SCNRenderer, SCNScene, SCNSpriteKitEventHandler, SCNTechnique, SKScene, UIColor;
@protocol MTLCommandQueue, MTLDevice, MTLRenderCommandEncoder, SCNCameraControlConfiguration, SCNEventHandler, SCNSceneRendererDelegate;

@interface SCNView : UIView <SCNSceneRenderer, SCNTechniqueSupport>
{
    double _currentSystemTime;
    double _lastUpdate;
    NSString *__ibSceneName;
    unsigned long long __ibPreferredRenderingAPI;
    unsigned int _ibNoMultisampling:1;
    unsigned long long _renderingAPI;
    unsigned int _isOpaque:1;
    unsigned int _rendersContinuously:1;
    unsigned int _firstDrawDone:1;
    unsigned int _drawOnMainThreadPending:1;
    unsigned int _viewIsOffscreen:1;
    unsigned int _appChangedColorAppearance:1;
    unsigned int _appIsDeactivated:1;
    unsigned int _autoPausedScene:1;
    unsigned int _inRenderQueueForLayerBackedGLRendering:1;
    unsigned int _disableLinearRendering:1;
    unsigned int _isInLiveResize:1;
    BOOL _isHidden;
    BOOL _didTriggerRedrawWhileRendering;
    id _delegate;
    SCNRenderer *_renderer;
    SCNScene *_scene;
    BOOL _displayLinkCreationRequested;
    BOOL _skipFramesIfNoDrawableAvailable;
    SCNDisplayLink *_displayLink;
    long long _preferredFramePerSeconds;
    CALayer *_backingLayer;
    SCNJitterer *_jitterer;
    SCNRecursiveLock *_lock;
    UIColor *_backgroundColor;
    struct CGSize _boundsSize;
    char *_snapshotImageData;
    unsigned long long _snapshotImageDataLength;
    id<SCNEventHandler> _navigationCameraController;
    SCNSpriteKitEventHandler *_spriteKitEventHandler;
    id<MTLDevice> _device;
    NSArray *_controllerGestureRecognizers;
}

@property (nonatomic) BOOL allowsCameraControl;
@property (nonatomic) unsigned long long antialiasingMode;
@property (readonly, nonatomic) AVAudioEngine *audioEngine;
@property (readonly, nonatomic) AVAudioEnvironmentNode *audioEnvironmentNode;
@property (strong, nonatomic) SCNNode *audioListener;
@property (nonatomic) BOOL autoenablesDefaultLighting;
@property (readonly, nonatomic) id<SCNCameraControlConfiguration> cameraControlConfiguration;
@property (readonly, nonatomic) unsigned long long colorPixelFormat;
@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;
@property (readonly, nonatomic) void *context;
@property (readonly, nonatomic) id<MTLRenderCommandEncoder> currentRenderCommandEncoder;
@property (readonly, nonatomic) MTLRenderPassDescriptor *currentRenderPassDescriptor;
@property (readonly, nonatomic) struct CGRect currentViewport;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long debugOptions;
@property (readonly, nonatomic) SCNCameraController *defaultCameraController;
@property (weak, nonatomic) id<SCNSceneRendererDelegate> delegate;
@property (readonly, nonatomic) unsigned long long depthPixelFormat;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<MTLDevice> device;
@property (strong, nonatomic) EAGLContext *eaglContext;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isJitteringEnabled) BOOL jitteringEnabled;
@property (nonatomic) BOOL loops;
@property (strong, nonatomic) SKScene *overlaySKScene;
@property (getter=isPlaying) BOOL playing;
@property (strong, nonatomic) SCNNode *pointOfView;
@property (nonatomic) long long preferredFramesPerSecond;
@property (readonly, nonatomic) unsigned long long renderingAPI;
@property (nonatomic) BOOL rendersContinuously;
@property (strong, nonatomic) SCNScene *scene;
@property (nonatomic) double sceneTime;
@property (nonatomic) BOOL showsStatistics;
@property (readonly, nonatomic) unsigned long long stencilPixelFormat;
@property (readonly) Class superclass;
@property (copy, nonatomic) SCNTechnique *technique;
@property (nonatomic, getter=isTemporalAntialiasingEnabled) BOOL temporalAntialiasingEnabled;
@property (nonatomic) BOOL usesReverseZ;

+ (BOOL)_isMetalSupported;
+ (id)_kvoKeysForwardedToRenderer;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)currentUIFocusEnvironment;
+ (id)deviceForOptions:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (Class)layerClass;
+ (BOOL)lowLatency;
+ (unsigned long long)renderingAPIForOptions:(id)arg1;
+ (BOOL)usesSeparateWorkGroup;
- (void)SCN_displayLinkCallback:(double)arg1;
- (const void *)__CFObject;
- (void)_adjustBackingLayerPixelFormat;
- (id)_authoringEnvironment;
- (void)_backgroundDidChange;
- (BOOL)_canJitter;
- (BOOL)_checkAndUpdateDisplayLinkStateIfNeeded;
- (void)_commonInit:(id)arg1;
- (BOOL)_controlsOwnScaleFactor;
- (void)_createDisplayLinkIfNeeded;
- (id)_defaultBackgroundColor;
- (BOOL)_disableLinearRendering;
- (void)_drawAtTime:(double)arg1;
- (BOOL)_enableARMode;
- (BOOL)_enablesDeferredShading;
- (void)_enterBackground:(id)arg1;
- (void)_enterForeground:(id)arg1;
- (double)_flipY:(double)arg1;
- (void)_flushDisplayLink;
- (struct CGRect)_focusFrameForSCNNode:(id)arg1;
- (id)_focusedItemRegionContainer;
- (id)_getFocusableNodes;
- (int)_ibPreferredRenderingAPI;
- (id)_ibSceneName;
- (BOOL)_ibWantsMultisampling;
- (void)_initializeDisplayLinkWithScreen:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_isEditor;
- (void)_jitterRedisplay;
- (long long)_preferredFocusMovementStyle;
- (id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2;
- (unsigned long long)_renderOptions;
- (double)_renderThreadPriority;
- (id)_renderingQueue;
- (void)_resetContentsScaleFactor;
- (double)_runFPSTestWithDuration:(double)arg1;
- (void)_sceneDidUpdate:(id)arg1;
- (void)_scnUpdateContentsGravity;
- (struct SCNMatrix4)_screenTransform;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (void)_selectRenderingAPIWithOptions:(id)arg1;
- (void)_setNeedsDisplay;
- (BOOL)_shouldDelegateARCompositing;
- (BOOL)_showsAuthoringEnvironment;
- (double)_superSamplingFactor;
- (BOOL)_supportsJitteringSyncRedraw;
- (void)_systemTimeAnimationStarted:(id)arg1;
- (struct CGSize)_updateBackingSize;
- (void)_updateContentsScaleFactor;
- (void)_updateOpacity;
- (void)_updateProbes:(id)arg1 withProgress:(id)arg2;
- (struct SCNVector4)_viewport;
- (BOOL)_wantsSceneRendererDelegationMessages;
- (BOOL)asynchronousResizing;
- (id)backgroundColor;
- (struct CGSize)backingSizeForBoundSize:(struct CGSize)arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)displayLayer:(id)arg1;
- (id)displayLink;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)drawableResizesAsynchronously;
- (void)encodeWithCoder:(id)arg1;
- (id)eventHandler;
- (void)eventHandlerWantsRedraw;
- (id)hitTest:(struct CGPoint)arg1 options:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTestWithSegmentFromPoint:(struct SCNVector3)arg1 toPoint:(struct SCNVector3)arg2 options:(id)arg3;
- (int)ibPreferredRenderingAPI;
- (id)ibSceneName;
- (BOOL)ibWantsMultisampling;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 options:(id)arg2;
- (BOOL)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2;
- (BOOL)isOpaque;
- (void)layoutSubviews;
- (void)lock;
- (id)navigationCameraController;
- (id)nodesInsideFrustumWithPointOfView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pause:(id)arg1;
- (void)pauseDisplayLink;
- (void)play:(id)arg1;
- (id)pointOfCulling;
- (BOOL)prepareObject:(id)arg1 shouldAbortBlock:(CDUnknownBlockType)arg2;
- (void)prepareObjects:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)presentScene:(id)arg1 withTransition:(id)arg2 incomingPointOfView:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (struct SCNVector3)projectPoint:(struct SCNVector3)arg1;
- (id)renderer;
- (void)resumeDisplayLink;
- (void)safeAreaInsetsDidChange;
- (id)scn_backingLayer;
- (BOOL)scn_inLiveResize;
- (void)scn_setBackingLayer:(id)arg1;
- (void)scn_setGestureRecognizers:(id)arg1;
- (void)scn_updateGestureRecognizers;
- (void)setAsynchronousResizing:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentScaleFactor:(double)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setDrawableResizesAsynchronously:(BOOL)arg1;
- (void)setEventHandler:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setIbPreferredRenderingAPI:(int)arg1;
- (void)setIbSceneName:(id)arg1;
- (void)setIbWantsMultisampling:(BOOL)arg1;
- (void)setNavigationCameraController:(id)arg1;
- (void)setNeedsDisplay;
- (void)setPointOfCulling:(id)arg1;
- (void)setPointOfView:(id)arg1 animate:(BOOL)arg2;
- (void)setSkipFramesIfNoDrawableAvailable:(BOOL)arg1;
- (void)set_disableLinearRendering:(BOOL)arg1;
- (void)set_enableARMode:(BOOL)arg1;
- (void)set_enablesDeferredShading:(BOOL)arg1;
- (void)set_ibPreferredRenderingAPI:(int)arg1;
- (void)set_ibSceneName:(id)arg1;
- (void)set_ibWantsMultisampling:(BOOL)arg1;
- (void)set_renderOptions:(unsigned long long)arg1;
- (void)set_screenTransform:(struct SCNMatrix4)arg1;
- (void)set_shouldDelegateARCompositing:(BOOL)arg1;
- (void)set_showsAuthoringEnvironment:(BOOL)arg1;
- (void)set_superSamplingFactor:(double)arg1;
- (void)set_wantsSceneRendererDelegationMessages:(BOOL)arg1;
- (BOOL)skipFramesIfNoDrawableAvailable;
- (id)snapshot;
- (void)stop:(id)arg1;
- (void)switchToCameraNamed:(id)arg1;
- (void)switchToNextCamera;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)unlock;
- (struct SCNVector3)unprojectPoint:(struct SCNVector3)arg1;
- (void)updateAtTime:(double)arg1;
- (void)willMoveToWindow:(id)arg1;

@end

