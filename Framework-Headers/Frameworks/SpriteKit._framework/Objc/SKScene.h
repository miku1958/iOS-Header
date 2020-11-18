//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/SKEffectNode.h>

@class AVAudioEngine, AVAudioEnvironmentNode, NSMapTable, NSMutableArray, PKPhysicsWorld, SKCameraNode, SKNode, SKPhysicsBody, SKPhysicsWorld, SKView, UIColor;
@protocol SKSceneDelegate;

@interface SKScene : SKEffectNode
{
    double _lastUpdate;
    double _pausedTime;
    struct CGRect _visibleRect;
    NSMapTable *_touchMap;
    NSMutableArray *_allChildenWithConstraints;
    struct CGRect _bounds;
    BOOL _isSetup;
    BOOL _usesExplicitUpdate;
    BOOL _usesExplicitRender;
    SKPhysicsBody *_scenePinBody;
    id _view;
    struct SKCSceneNode *_skcSceneNode;
    SKNode *_listener;
    AVAudioEngine *_audioEngine;
    BOOL __needsUpdate;
    BOOL __needsRender;
    SKPhysicsWorld *_physicsWorld;
    SKCameraNode *_camera;
    id<SKSceneDelegate> _delegate;
    AVAudioEnvironmentNode *_avAudioEnvironmentNode;
    PKPhysicsWorld *__pkPhysicsWorld;
}

@property BOOL _needsRender; // @synthesize _needsRender=__needsRender;
@property BOOL _needsUpdate; // @synthesize _needsUpdate=__needsUpdate;
@property (strong, nonatomic) PKPhysicsWorld *_pkPhysicsWorld; // @synthesize _pkPhysicsWorld=__pkPhysicsWorld;
@property BOOL _usesExplicitRender;
@property BOOL _usesExplicitUpdate;
@property (nonatomic) struct CGPoint anchorPoint;
@property (readonly, strong, nonatomic) AVAudioEngine *audioEngine;
@property (strong, nonatomic) AVAudioEnvironmentNode *avAudioEnvironmentNode; // @synthesize avAudioEnvironmentNode=_avAudioEnvironmentNode;
@property (strong, nonatomic) UIColor *backgroundColor;
@property (weak, nonatomic) SKCameraNode *camera; // @synthesize camera=_camera;
@property (weak, nonatomic) id<SKSceneDelegate> delegate; // @synthesize delegate=_delegate;
@property (weak, nonatomic) SKNode *listener;
@property (readonly, nonatomic) SKPhysicsWorld *physicsWorld; // @synthesize physicsWorld=_physicsWorld;
@property (nonatomic) long long scaleMode;
@property (nonatomic) struct CGSize size;
@property (readonly, weak, nonatomic) SKView *view;
@property (nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
@property (nonatomic) struct CGPoint visibleRectCenter;
@property (nonatomic) struct CGSize visibleRectSize;

+ (id)sceneWithContentsOfFile:(id)arg1;
+ (id)sceneWithContentsOfFile:(id)arg1 size:(struct CGSize)arg2;
+ (id)sceneWithSize:(struct CGSize)arg1;
- (void).cxx_destruct;
- (void)_didMakeBackingNode;
- (void)_didMoveToView:(id)arg1;
- (id)_getFocusNodes;
- (BOOL)_hasConstraints;
- (BOOL)_isDirty;
- (struct SKCNode *)_makeBackingNode;
- (void)_notifyNextDirtyState;
- (id)_parentFocusEnvironment;
- (void)_registerConstraintsForNode:(id)arg1;
- (void)_removeConstraintsForNode:(id)arg1;
- (void)_setBackgroundContentsWithBuffer:(struct __CVBuffer *)arg1;
- (void)_setDirty;
- (void)_setNeedsRender;
- (void)_setNeedsUpdate;
- (void)_update:(double)arg1;
- (void)_willMoveFromView:(id)arg1;
- (void)checkAudioEngine;
- (struct CGPoint)convertPointFromParent:(struct CGPoint)arg1;
- (struct CGPoint)convertPointFromView:(struct CGPoint)arg1;
- (struct CGPoint)convertPointToParent:(struct CGPoint)arg1;
- (struct CGPoint)convertPointToView:(struct CGPoint)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)debugHierarchyPropertyDescriptions;
- (id)debugHierarchyValueForPropertyWithName:(id)arg1;
- (id)description;
- (void)didApplyConstraints;
- (void)didChangeSize:(struct CGSize)arg1;
- (void)didContinueContact:(id)arg1;
- (void)didEvaluateActions;
- (void)didFinishUpdate;
- (void)didMoveToView:(id)arg1;
- (void)didSimulatePhysics;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect)frame;
- (void)handleAVAudioEngineInterruption:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1;
- (struct CGPoint)position;
- (void)sceneDidLoad;
- (void)setPaused:(BOOL)arg1;
- (void)setPosition:(struct CGPoint)arg1;
- (void)setScale:(double)arg1;
- (void)setXScale:(double)arg1;
- (void)setYScale:(double)arg1;
- (void)setZPosition:(double)arg1;
- (void)setZRotation:(double)arg1;
- (void)set_anchorPoint:(struct CGPoint)arg1;
- (void)update:(double)arg1;
- (void)willMoveFromView:(id)arg1;
- (void)willRenderContent;
- (double)xScale;
- (double)yScale;
- (double)zPosition;
- (double)zRotation;

@end
