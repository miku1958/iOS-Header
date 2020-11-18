//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SceneKit/SCNSceneRenderer-Protocol.h>
#import <SceneKit/SCNTechniqueSupport-Protocol.h>

@class AVAudioEngine, AVAudioEnvironmentNode, EAGLContext, NSArray, NSRecursiveLock, NSString, SCNDisplayLink, SCNEventHandler, SCNJitterer, SCNNode, SCNRenderer, SCNScene, SCNSpriteKitEventHandler, SCNTechnique, SKScene, UIColor;
@protocol SCNSceneRendererDelegate;

@interface SCNView : UIView <SCNSceneRenderer, SCNTechniqueSupport>
{
    double _currentSystemTime;
    double _lastUpdate;
    NSString *__ibSceneName;
    unsigned long long __ibPreferredRenderingAPI;
    unsigned int _ibNoMultisampling:1;
    unsigned long long _renderingAPI;
    unsigned int _allowsBrowsing:1;
    unsigned int _isOpaque:1;
    unsigned int _firstDrawDone:1;
    unsigned int _drawOnMainThreadPending:1;
    unsigned int _appIsDeactivated:1;
    unsigned int _viewIsOffscreen:1;
    unsigned int _backingSizeDidChange:1;
    id _delegate;
    SCNRenderer *_renderer;
    SCNScene *_scene;
    SCNDisplayLink *__displayLink;
    long long _preferredFramePerSeconds;
    SCNJitterer *_jitterer;
    NSRecursiveLock *_lock;
    UIColor *_backgroundColor;
    char *_snapshotImageData;
    unsigned long long _snapshotImageDataLength;
    SCNEventHandler *_eventHandler;
    SCNSpriteKitEventHandler *_spriteKitEventHandler;
    NSArray *_controllerGestureRecognizers;
}

@property (nonatomic) BOOL allowsCameraControl;
@property (nonatomic) unsigned long long antialiasingMode;
@property (readonly, nonatomic) AVAudioEngine *audioEngine;
@property (readonly, nonatomic) AVAudioEnvironmentNode *audioEnvironmentNode;
@property (strong, nonatomic) SCNNode *audioListener;
@property (nonatomic) BOOL autoenablesDefaultLighting;
@property (readonly, nonatomic) void *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long debugOptions;
@property (nonatomic) id<SCNSceneRendererDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) EAGLContext *eaglContext;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isJitteringEnabled) BOOL jitteringEnabled;
@property (nonatomic) BOOL loops;
@property (strong, nonatomic) SKScene *overlaySKScene;
@property (getter=isPlaying) BOOL playing;
@property (strong, nonatomic) SCNNode *pointOfView;
@property (nonatomic) long long preferredFramesPerSecond;
@property (readonly, nonatomic) unsigned long long renderingAPI;
@property (strong, nonatomic) SCNScene *scene;
@property (nonatomic) double sceneTime;
@property (nonatomic) BOOL showsStatistics;
@property (readonly) Class superclass;
@property (copy, nonatomic) SCNTechnique *technique;

+ (BOOL)_isMetalSupported;
+ (id)_kvoKeysForwardedToRenderer;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (Class)layerClass;
+ (unsigned long long)renderingAPIForOptions:(id)arg1;
- (const void *)__CFObject;
- (id)_authoringEnvironment;
- (BOOL)_canJitter;
- (BOOL)_checkAndUpdateDisplayLinkStateIfNeeded;
- (void)_commonInit:(id)arg1;
- (BOOL)_controlsOwnScaleFactor;
- (id)_defaultBackgroundColor;
- (id)_displayLink;
- (void)_drawAtTime:(double)arg1;
- (BOOL)_enablesDeferredShading;
- (void)_enterBackground:(id)arg1;
- (void)_enterForeground:(id)arg1;
- (double)_flipY:(double)arg1;
- (void)_flushDisplayLink;
- (int)_ibPreferredRenderingAPI;
- (id)_ibSceneName;
- (BOOL)_ibWantsMultisampling;
- (BOOL)_isEditor;
- (void)_jitterRedisplay;
- (double)_runFPSTestWithDuration:(double)arg1;
- (void)_sceneBackgroundDidChange:(id)arg1;
- (void)_sceneDidUpdate:(id)arg1;
- (void)_selectRenderingAPIWithOptions:(id)arg1;
- (void)_setGestureRecognizers:(id)arg1;
- (void)_setNeedsDisplay;
- (BOOL)_showsAuthoringEnvironment;
- (BOOL)_supportsJitteringSyncRedraw;
- (void)_systemTimeAnimationStarted:(id)arg1;
- (void)_updateGestureRecognizers;
- (void)_updateOpacity;
- (void)_updateProbes:(id)arg1 withProgress:(id)arg2;
- (id)backgroundColor;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)displayLayer:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
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
- (void)lock;
- (id)nodesInsideFrustumWithPointOfView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pause:(id)arg1;
- (void)pauseDisplayLink;
- (void)play:(id)arg1;
- (BOOL)prepareObject:(id)arg1 shouldAbortBlock:(CDUnknownBlockType)arg2;
- (void)prepareObjects:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)presentScene:(id)arg1 withTransition:(id)arg2 incomingPointOfView:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (struct SCNVector3)projectPoint:(struct SCNVector3)arg1;
- (id)renderer;
- (void)resumeDisplayLink;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentScaleFactor:(double)arg1;
- (void)setEventHandler:(id)arg1;
- (void)setIbPreferredRenderingAPI:(int)arg1;
- (void)setIbSceneName:(id)arg1;
- (void)setIbWantsMultisampling:(BOOL)arg1;
- (void)setPointOfView:(id)arg1 animate:(BOOL)arg2;
- (void)set_enablesDeferredShading:(BOOL)arg1;
- (void)set_ibPreferredRenderingAPI:(int)arg1;
- (void)set_ibSceneName:(id)arg1;
- (void)set_ibWantsMultisampling:(BOOL)arg1;
- (void)set_showsAuthoringEnvironment:(BOOL)arg1;
- (id)snapshot;
- (void)stop:(id)arg1;
- (void)switchToCameraNamed:(id)arg1;
- (void)switchToNextCamera;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)unlock;
- (struct SCNVector3)unprojectPoint:(struct SCNVector3)arg1;
- (void)willMoveToWindow:(id)arg1;

@end

