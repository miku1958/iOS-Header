//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class CAAnimation, MDLObject, NSArray, NSDictionary, NSString, SCNAction, SCNAudioPlayer, SCNCamera, SCNGeometry, SCNLight, SCNMorpher, SCNNode, SCNParticleSystem, SCNPhysicsBody, SCNPhysicsField, SCNSkinner;
@protocol SCNNodeRendererDelegate;

@protocol SCNNodeJSExport <JSExport>

@property (readonly, nonatomic) NSArray *audioPlayers;
@property (strong, nonatomic) SCNCamera *camera;
@property (nonatomic) BOOL castsShadow;
@property (nonatomic) unsigned long long categoryBitMask;
@property (readonly, nonatomic) NSArray *childNodes;
@property (copy) NSArray *constraints;
@property (nonatomic) struct SCNVector3 eulerAngles;
@property (copy, nonatomic) NSArray *filters;
@property (strong, nonatomic) SCNGeometry *geometry;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (strong, nonatomic) SCNLight *light;
@property (strong, nonatomic) SCNMorpher *morpher;
@property (nonatomic) long long movabilityHint;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) double opacity;
@property (nonatomic) struct SCNVector4 orientation;
@property (readonly, nonatomic) SCNNode *parentNode;
@property (readonly) NSArray *particleSystems;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (strong, nonatomic) SCNPhysicsBody *physicsBody;
@property (strong, nonatomic) SCNPhysicsField *physicsField;
@property (nonatomic) struct SCNMatrix4 pivot;
@property (nonatomic) struct SCNVector3 position;
@property (readonly, nonatomic) SCNNode *presentationNode;
@property (nonatomic) id<SCNNodeRendererDelegate> rendererDelegate;
@property (nonatomic) long long renderingOrder;
@property (nonatomic) struct SCNVector4 rotation;
@property (nonatomic) struct SCNVector3 scale;
@property (strong, nonatomic) SCNSkinner *skinner;
@property (nonatomic) struct SCNMatrix4 transform;
@property (readonly, nonatomic) struct SCNVector3 worldFront;
@property (nonatomic) struct SCNVector4 worldOrientation;
@property (nonatomic) struct SCNVector3 worldPosition;
@property (readonly, nonatomic) struct SCNVector3 worldRight;
@property (readonly, nonatomic) struct SCNMatrix4 worldTransform;
@property (readonly, nonatomic) struct SCNVector3 worldUp;

+ (struct SCNVector3)localFront;
+ (struct SCNVector3)localRight;
+ (struct SCNVector3)localUp;
+ (id)node;
+ (SCNNode *)nodeWithGeometry:(SCNGeometry *)arg1;
+ (id)nodeWithMDLObject:(MDLObject *)arg1;
- (SCNAction *)actionForKey:(NSString *)arg1;
- (void)addAnimation:(CAAnimation *)arg1 forKey:(NSString *)arg2;
- (void)addAudioPlayer:(SCNAudioPlayer *)arg1;
- (void)addChildNode:(SCNNode *)arg1;
- (void)addParticleSystem:(SCNParticleSystem *)arg1;
- (CAAnimation *)animationForKey:(NSString *)arg1;
- (NSArray *)animationKeys;
- (SCNNode *)childNodeWithName:(NSString *)arg1;
- (SCNNode *)childNodeWithName:(NSString *)arg1 recursively:(BOOL)arg2;
- (NSArray *)childNodesPassingTest:(BOOL (^)(SCNNode *, BOOL *))arg1;
- (id)clone;
- (struct SCNVector3)convertPosition:(struct SCNVector3)arg1 fromNode:(SCNNode *)arg2;
- (struct SCNVector3)convertPosition:(struct SCNVector3)arg1 toNode:(SCNNode *)arg2;
- (struct SCNMatrix4)convertTransform:(struct SCNMatrix4)arg1 fromNode:(SCNNode *)arg2;
- (struct SCNMatrix4)convertTransform:(struct SCNMatrix4)arg1 toNode:(SCNNode *)arg2;
- (struct SCNVector3)convertVector:(struct SCNVector3)arg1 fromNode:(SCNNode *)arg2;
- (struct SCNVector3)convertVector:(struct SCNVector3)arg1 toNode:(SCNNode *)arg2;
- (id)copy;
- (void)enumerateChildNodesUsingBlock:(void (^)(SCNNode *, BOOL *))arg1;
- (void)enumerateHierarchyUsingBlock:(void (^)(SCNNode *, BOOL *))arg1;
- (id)flattenedClone;
- (id)getBoundingBox;
- (id)getBoundingSphere;
- (BOOL)hasActions;
- (NSArray *)hitTestWithSegmentFromPoint:(struct SCNVector3)arg1 toPoint:(struct SCNVector3)arg2 options:(NSDictionary *)arg3;
- (void)insertChildNode:(SCNNode *)arg1 atIndex:(unsigned long long)arg2;
- (void)localRotateBy:(struct SCNVector4)arg1;
- (void)localTranslateBy:(struct SCNVector3)arg1;
- (void)lookAt:(struct SCNVector3)arg1;
- (void)lookAt:(struct SCNVector3)arg1 up:(struct SCNVector3)arg2 localFront:(struct SCNVector3)arg3;
- (void)pauseAnimationForKey:(NSString *)arg1;
- (void)removeActionForKey:(NSString *)arg1;
- (void)removeAllActions;
- (void)removeAllAnimations;
- (void)removeAllAudioPlayers;
- (void)removeAllParticleSystems;
- (void)removeAnimationForKey:(NSString *)arg1;
- (void)removeAudioPlayer:(SCNAudioPlayer *)arg1;
- (void)removeFromParentNode;
- (void)removeParticleSystem:(SCNParticleSystem *)arg1;
- (void)replaceChildNode:(SCNNode *)arg1 with:(SCNNode *)arg2;
- (void)resumeAnimationForKey:(NSString *)arg1;
- (void)rotateBy:(struct SCNVector4)arg1 aroundTarget:(struct SCNVector3)arg2;
- (void)runAction:(SCNAction *)arg1;
- (void)runAction:(SCNAction *)arg1 completionHandler:(void (^)(void))arg2;
- (void)runAction:(SCNAction *)arg1 forKey:(NSString *)arg2;
- (void)runAction:(SCNAction *)arg1 forKey:(NSString *)arg2 completionHandler:(void (^)(void))arg3;
- (void)setValue:(id)arg1 forKey:(NSString *)arg2;
- (void)setValue:(id)arg1 forKeyPath:(NSString *)arg2;
- (void)setWorldTransform:(struct SCNMatrix4)arg1;
- (id)valueForKey:(NSString *)arg1;
- (id)valueForKeyPath:(NSString *)arg1;
@end

