//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SceneKit/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSURL, SCNAuthoringEnvironment, SCNMaterialProperty, SCNNode, SCNPhysicsWorld, SCNSceneSource;

@interface SCNScene : NSObject <NSSecureCoding>
{
    struct __C3DScene *_scene;
    SCNSceneSource *_sceneSource;
    SCNPhysicsWorld *_physicsWorld;
    SCNNode *_rootNode;
    SCNNode *_layerRootNode[4];
    SCNMaterialProperty *_background;
    SCNMaterialProperty *_environment;
    NSMutableDictionary *_userAttributes;
    double _fogStartDistance;
    double _fogEndDistance;
    double _fogDensityExponent;
    id _fogColor;
    BOOL _paused;
    NSURL *_sourceURL;
    BOOL _pausedForEditing;
    SCNAuthoringEnvironment *_authoringEnvironment;
}

@property (readonly, nonatomic) SCNMaterialProperty *background;
@property (strong, nonatomic) id fogColor;
@property (nonatomic) double fogDensityExponent;
@property (nonatomic) double fogEndDistance;
@property (nonatomic) double fogStartDistance;
@property (readonly, nonatomic) SCNMaterialProperty *lightingEnvironment;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (readonly, nonatomic) SCNPhysicsWorld *physicsWorld;
@property (readonly, nonatomic) SCNNode *rootNode;

+ (id)_indexPathForNode:(id)arg1;
+ (BOOL)canImportFileExtension:(id)arg1;
+ (BOOL)canImportFileUTI:(id)arg1;
+ (SEL)jsConstructor;
+ (id)scene;
+ (id)sceneNamed:(id)arg1;
+ (id)sceneNamed:(id)arg1 inDirectory:(id)arg2 options:(id)arg3;
+ (id)sceneNamed:(id)arg1 options:(id)arg2;
+ (id)sceneWithData:(id)arg1 atIndex:(long long)arg2 options:(id)arg3;
+ (id)sceneWithData:(id)arg1 options:(id)arg2;
+ (id)sceneWithMDLAsset:(id)arg1;
+ (id)sceneWithMDLAsset:(id)arg1 options:(id)arg2;
+ (id)sceneWithSceneRef:(struct __C3DScene *)arg1;
+ (id)sceneWithURL:(id)arg1 atIndex:(long long)arg2 options:(id)arg3;
+ (id)sceneWithURL:(id)arg1 options:(id)arg2;
+ (id)sceneWithURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)supportedFileUTIsForExport;
+ (id)supportedFileUTIsForImport;
+ (BOOL)supportsSecureCoding;
- (const void *)__CFObject;
- (void)_customDecodingOfSCNScene:(id)arg1;
- (void)_customEncodingOfSCNScene:(id)arg1;
- (void)_didDecodeSCNScene:(id)arg1;
- (void)_didEncodeSCNScene:(id)arg1;
- (id)_exportAsMovieOperationWithDestinationURL:(id)arg1 size:(struct CGSize)arg2 attributes:(id)arg3 delegate:(id)arg4 didEndSelector:(SEL)arg5 userInfo:(void *)arg6;
- (id)_nodeWithIndexPath:(id)arg1;
- (id)_physicsWorldCreateIfNeeded:(BOOL)arg1;
- (void)_resetSceneTimeRange;
- (void)_scaleSceneBy:(double)arg1;
- (id)_scenes;
- (void)_setRootNode:(id)arg1;
- (void)_setSourceURL:(id)arg1;
- (id)_subnodeFromIndexPath:(id)arg1;
- (void)_syncObjCModel;
- (void)addParticleSystem:(id)arg1 withTransform:(struct SCNMatrix4)arg2;
- (void)addSceneAnimation:(id)arg1 forKey:(id)arg2 target:(id)arg3;
- (id)attributeForKey:(id)arg1;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)copyAnimationChannelForKeyPath:(id)arg1 property:(id)arg2;
- (void)dealloc;
- (id)debugQuickLookObject;
- (id)debugQuickLookObjectWithPointOfView:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)endTime;
- (id)exportAsMovieOperationWithDestinationURL:(id)arg1 size:(struct CGSize)arg2 attributes:(id)arg3 delegate:(id)arg4 didEndSelector:(SEL)arg5 userInfo:(void *)arg6;
- (double)frameRate;
- (id)init;
- (id)initForJavascript:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSceneRef:(struct __C3DScene *)arg1;
- (BOOL)isPausedForEditing;
- (BOOL)isPausedOrPausedByInheritance;
- (void)lock;
- (id)particleSystems;
- (float)playbackSpeed;
- (void)removeAllParticleSystems;
- (void)removeParticleSystem:(id)arg1;
- (id)root;
- (id)rootNodeForLayer:(int)arg1;
- (id)scene;
- (struct __C3DScene *)sceneRef;
- (id)sceneSource;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)setEndTime:(double)arg1;
- (void)setFrameRate:(double)arg1;
- (void)setPausedForEditing:(BOOL)arg1;
- (void)setPlaybackSpeed:(float)arg1;
- (void)setRootNode:(id)arg1;
- (void)setRootNode:(id)arg1 forLayer:(int)arg2;
- (void)setSceneSource:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setUpAxis:(struct SCNVector3)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (double)startTime;
- (void)unlock;
- (struct SCNVector3)upAxis;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)writeToURL:(id)arg1 options:(id)arg2;
- (BOOL)writeToURL:(id)arg1 options:(id)arg2 delegate:(id)arg3 progressHandler:(CDUnknownBlockType)arg4;

@end

