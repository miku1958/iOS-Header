//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAEAGLLayer, MISSING_TYPE, NSData, NSMapTable, NSMutableDictionary, NSObject, SKDisplayLink, SKScene, SKTransition;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, SKViewDelegate;

@interface SKView : UIView
{
    struct SKCStats _currentStats;
    struct SKCStats _nextStats;
    struct SKCStats _frameStats;
    struct SKCRenderer *_renderer;
    MISSING_TYPE *_viewScale;
    MISSING_TYPE *_viewTranslation;
    shared_ptr_2ce53ef7 _framebuffer;
    shared_ptr_bb77cfd9 _frameBufferColorTexture;
    shared_ptr_bb77cfd9 _frameBufferDepthStencilTexture;
    unsigned int _colorRenderBuffer;
    unsigned int _depthStencilRenderBuffer;
    struct shared_ptr<jet_fence> _renderFence;
    CAEAGLLayer *_eaglLayer;
    BOOL _needsInitialUpdate;
    BOOL _didRunOnce;
    BOOL _viewFramebufferIsValid;
    MISSING_TYPE *_viewFramebufferPixelSize;
    BOOL _isBackgrounded;
    BOOL _allowsTransparency;
    BOOL _priorResignActivePausedState;
    unsigned long long _frameInterval;
    unsigned long long _preferredFramesPerSecond;
    SKDisplayLink *_displayLink;
    NSObject<OS_dispatch_queue> *_updateQueue;
    double _timePreviousUpdate;
    BOOL _prefersLowPowerGPU;
    BOOL _usesAsyncUpdateQueue;
    BOOL _hasRenderedOnce;
    BOOL _hasRenderedForCurrentUpdate;
    BOOL _disableInput;
    BOOL _mouseIsDown;
    BOOL _rightMouseIsDown;
    SKTransition *_transition;
    SKScene *_nextScene;
    SKScene *_scene;
    BOOL _paused;
    NSData *_spriteArrayHint;
    NSMutableDictionary *_viewRenderOptions;
    NSMapTable *_touchMap;
    float _prevBackingScaleFactor;
    CDUnknownBlockType _dynamicRenderBlock;
    NSObject<OS_dispatch_queue> *_renderQueue;
    NSObject<OS_dispatch_semaphore> *_renderSemaphore;
    int _queuedFrameCount;
    double _prevVsyncRenderTime;
    double _prevRenderTime;
    NSObject<SKViewDelegate> *_delegate;
    struct SKCRenderer *__layerBackedRenderer;
    NSMutableDictionary *__info;
    double _physicsDebugStrokeWidth;
    struct CGSize _pixelSize;
}

@property (strong, nonatomic) NSMutableDictionary *_info; // @synthesize _info=__info;
@property struct SKCRenderer *_layerBackedRenderer; // @synthesize _layerBackedRenderer=__layerBackedRenderer;
@property (nonatomic) BOOL allowsTransparency;
@property (nonatomic, getter=isAsynchronous) BOOL asynchronous;
@property (weak, nonatomic) NSObject<SKViewDelegate> *delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL disableStencilBuffers;
@property (nonatomic) long long frameInterval;
@property (nonatomic) BOOL ignoresSiblingOrder;
@property (readonly) NSMutableDictionary *options;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) double physicsDebugStrokeWidth; // @synthesize physicsDebugStrokeWidth=_physicsDebugStrokeWidth;
@property (readonly, nonatomic) struct CGSize pixelSize; // @synthesize pixelSize=_pixelSize;
@property (nonatomic) float preferredFrameRate;
@property (nonatomic) long long preferredFramesPerSecond;
@property (readonly, nonatomic) SKScene *scene;
@property (nonatomic) BOOL shouldCullNonVisibleNodes;
@property (nonatomic) BOOL showsDrawCount;
@property (nonatomic) BOOL showsFPS;
@property (nonatomic) BOOL showsFields;
@property (nonatomic) BOOL showsNodeCount;
@property (nonatomic) BOOL showsPhysics;
@property (nonatomic) BOOL showsQuadCount;

+ (Class)layerClass;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)CBApplicationDidBecomeActive;
- (void)CBApplicationWillResignActive;
- (void)_commonInit;
- (void)_endFrameStats;
- (void)_ensureRenderer;
- (id)_focusedItemRegionContainer;
- (double)_fps;
- (unsigned long long)_getEffectivePreferredFramesPerSecond;
- (id)_getPerformanceStats;
- (float)_getViewContentsScale;
- (void)_ibSetSceneName:(id)arg1;
- (long long)_preferredFocusMovementStyle;
- (id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2;
- (void)_renderContent;
- (void)_renderSynchronouslyForTime:(double)arg1 preRender:(CDUnknownBlockType)arg2 postRender:(CDUnknownBlockType)arg3;
- (void)_renderToIOSurfaceID:(unsigned int)arg1 scaleFactor:(float)arg2 asynchronous:(BOOL)arg3 preRender:(CDUnknownBlockType)arg4 postRender:(CDUnknownBlockType)arg5;
- (BOOL)_renderUpdateEnabled;
- (void)_reshape;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (void)_setUpdateQueue:(id)arg1;
- (BOOL)_shouldRenderForTime:(double)arg1;
- (void)_showAllStats;
- (BOOL)_showsCPUStats;
- (BOOL)_showsGPUStats;
- (int)_spriteRenderCount;
- (int)_spriteSubmitCount;
- (void)_update:(double)arg1;
- (BOOL)_usesAsyncUpdateQueue;
- (double)_viewScale;
- (struct CGPoint)_viewTranslation;
- (void)_vsyncRenderForTime:(double)arg1 preRender:(CDUnknownBlockType)arg2 postRender:(CDUnknownBlockType)arg3;
- (double)alphaValue;
- (id)archiveToFile:(id)arg1;
- (id)captureToFile:(id)arg1;
- (struct SKCRenderer *)chooseViewRenderer;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromScene:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toScene:(id)arg2;
- (void)dealloc;
- (id)debugHierarchyAdditionalGroupingIDs;
- (id)debugHierarchyObjectsInGroupWithID:(id)arg1 outOptions:(id *)arg2;
- (id)debugHierarchyPropertyDescriptions;
- (void)debugPrint;
- (void)didMoveToWindow;
- (void)drawRect:(struct CGRect)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getRenderOptions;
- (struct SKCNode *)getRootNode;
- (CDStruct_14d5dc5e)getViewTransform;
- (MISSING_TYPE *)getViewport;
- (BOOL)hasValidViewFramebuffer;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 updateQueue:(id)arg2;
- (BOOL)isOpaque;
- (void)layoutSubviews;
- (shared_ptr_2ce53ef7)nextFramebuffer;
- (void)notifyWillRenderContent;
- (void)onInit;
- (void)presentScene:(id)arg1;
- (void)presentScene:(id)arg1 transition:(id)arg2;
- (void)remakeFramebuffer;
- (void)remakeFramebuffer:(double)arg1;
- (void)renderContent;
- (void)renderForTime:(double)arg1 shouldBlock:(BOOL)arg2;
- (void)renderToIOSurfaceID:(unsigned int)arg1 withScaleFactor:(double)arg2;
- (void)runOnce;
- (void)setDynamicRenderBlock:(CDUnknownBlockType)arg1;
- (void)setUpRenderCallback;
- (void)set_renderUpdateEnabled:(BOOL)arg1;
- (void)set_showsCPUStats:(BOOL)arg1;
- (void)set_showsGPUStats:(BOOL)arg1;
- (void)set_usesAsyncUpdateQueue:(BOOL)arg1;
- (void)set_viewScale:(double)arg1;
- (void)set_viewTranslation:(struct CGPoint)arg1;
- (id)snapshot;
- (void)startRenderCallbacks;
- (void)stopRenderCallbacks;
- (id)textureFromNode:(id)arg1;
- (id)textureFromNode:(id)arg1 crop:(struct CGRect)arg2;
- (id)textureFromNode:(id)arg1 withOptions:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)willRenderContent;
- (void)writeContentsToPNG:(id)arg1;

@end

