//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class MDLAsset, NSArray, NSDictionary, NSString, NSURL, SCNMaterialProperty, SCNNode, SCNParticleSystem, SCNPhysicsWorld;
@protocol SCNSceneExportDelegate;

@protocol SCNSceneJSExport <JSExport>

@property (readonly, nonatomic) SCNMaterialProperty *background;
@property (nonatomic) double endTime;
@property (strong, nonatomic) id fogColor;
@property (nonatomic) double fogDensityExponent;
@property (nonatomic) double fogEndDistance;
@property (nonatomic) double fogStartDistance;
@property (nonatomic) double frameRate;
@property (readonly, nonatomic) SCNMaterialProperty *lightingEnvironment;
@property (readonly) NSArray *particleSystems;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (readonly, nonatomic) SCNPhysicsWorld *physicsWorld;
@property (readonly, nonatomic) SCNNode *rootNode;
@property (nonatomic) double startTime;

+ (id)scene;
+ (id)sceneNamed:(NSString *)arg1;
+ (id)sceneNamed:(NSString *)arg1 inDirectory:(NSString *)arg2 options:(NSDictionary *)arg3;
+ (id)sceneWithMDLAsset:(MDLAsset *)arg1;
+ (id)sceneWithURL:(NSURL *)arg1 options:(NSDictionary *)arg2 error:(id *)arg3;
- (void)addParticleSystem:(SCNParticleSystem *)arg1 withTransform:(struct SCNMatrix4)arg2;
- (id)attributeForKey:(NSString *)arg1;
- (void)removeAllParticleSystems;
- (void)removeParticleSystem:(SCNParticleSystem *)arg1;
- (void)setAttribute:(id)arg1 forKey:(NSString *)arg2;
- (void)setValue:(id)arg1 forKey:(NSString *)arg2;
- (void)setValue:(id)arg1 forKeyPath:(NSString *)arg2;
- (id)valueForKey:(NSString *)arg1;
- (id)valueForKeyPath:(NSString *)arg1;
- (BOOL)writeToURL:(NSURL *)arg1 options:(NSDictionary *)arg2 delegate:(id<SCNSceneExportDelegate>)arg3 progressHandler:(void (^)(float, NSError *, BOOL *))arg4;
@end

