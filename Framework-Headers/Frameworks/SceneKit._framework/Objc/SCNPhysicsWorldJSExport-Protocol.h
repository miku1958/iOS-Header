//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class NSArray, NSDictionary, SCNPhysicsBehavior, SCNPhysicsBody, SCNPhysicsShape;
@protocol SCNPhysicsContactDelegate;

@protocol SCNPhysicsWorldJSExport <JSExport>

@property (readonly, nonatomic) NSArray *allBehaviors;
@property id<SCNPhysicsContactDelegate> contactDelegate;
@property (nonatomic) struct SCNVector3 gravity;
@property (nonatomic) double speed;
@property (nonatomic) double timeStep;

- (void)addBehavior:(SCNPhysicsBehavior *)arg1;
- (NSArray *)contactTestBetweenBody:(SCNPhysicsBody *)arg1 andBody:(SCNPhysicsBody *)arg2 options:(NSDictionary *)arg3;
- (NSArray *)contactTestWithBody:(SCNPhysicsBody *)arg1 options:(NSDictionary *)arg2;
- (NSArray *)convexSweepTestWithShape:(SCNPhysicsShape *)arg1 fromTransform:(struct SCNMatrix4)arg2 toTransform:(struct SCNMatrix4)arg3 options:(NSDictionary *)arg4;
- (NSArray *)rayTestWithSegmentFromPoint:(struct SCNVector3)arg1 toPoint:(struct SCNVector3)arg2 options:(NSDictionary *)arg3;
- (void)removeAllBehaviors;
- (void)removeBehavior:(SCNPhysicsBehavior *)arg1;
- (void)updateCollisionPairs;
@end

