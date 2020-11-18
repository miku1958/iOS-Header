//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/NSObject-Protocol.h>

@class AVAudioEngine, AVAudioEnvironmentNode, NSArray, NSDictionary, SCNNode, SCNScene, SKScene, SKTransition;
@protocol SCNSceneRendererDelegate;

@protocol SCNSceneRenderer <NSObject>

@property (readonly, nonatomic) AVAudioEngine *audioEngine;
@property (readonly, nonatomic) AVAudioEnvironmentNode *audioEnvironmentNode;
@property (strong, nonatomic) SCNNode *audioListener;
@property (nonatomic) BOOL autoenablesDefaultLighting;
@property (readonly, nonatomic) void *context;
@property (nonatomic) unsigned long long debugOptions;
@property (weak, nonatomic) id<SCNSceneRendererDelegate> delegate;
@property (nonatomic, getter=isJitteringEnabled) BOOL jitteringEnabled;
@property (nonatomic) BOOL loops;
@property (strong, nonatomic) SKScene *overlaySKScene;
@property (getter=isPlaying) BOOL playing;
@property (strong, nonatomic) SCNNode *pointOfView;
@property (readonly, nonatomic) unsigned long long renderingAPI;
@property (strong, nonatomic) SCNScene *scene;
@property (nonatomic) double sceneTime;
@property (nonatomic) BOOL showsStatistics;

- (NSArray *)hitTest:(struct CGPoint)arg1 options:(NSDictionary *)arg2;
- (BOOL)isNodeInsideFrustum:(SCNNode *)arg1 withPointOfView:(SCNNode *)arg2;
- (NSArray *)nodesInsideFrustumWithPointOfView:(SCNNode *)arg1;
- (BOOL)prepareObject:(id)arg1 shouldAbortBlock:(BOOL (^)(void))arg2;
- (void)prepareObjects:(NSArray *)arg1 withCompletionHandler:(void (^)(BOOL))arg2;
- (void)presentScene:(SCNScene *)arg1 withTransition:(SKTransition *)arg2 incomingPointOfView:(SCNNode *)arg3 completionHandler:(void (^)(void))arg4;
- (struct SCNVector3)projectPoint:(struct SCNVector3)arg1;
- (struct SCNVector3)unprojectPoint:(struct SCNVector3)arg1;
@end

