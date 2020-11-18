//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameplayKit/NSCopying-Protocol.h>

@class GKPath, MISSING_TYPE, NSArray;

@interface GKGoal : NSObject <NSCopying>
{
    int _type;
    GKPath *_path;
    NSArray *_obstacles;
    NSArray *_agents;
    double _time;
    float _angle;
    float _distance;
    float _speed;
    BOOL _forward;
}

+ (id)goalToAlignWithAgents:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3;
+ (id)goalToAvoidAgents:(id)arg1 maxPredictionTime:(double)arg2;
+ (id)goalToAvoidObstacles:(id)arg1 maxPredictionTime:(double)arg2;
+ (id)goalToCohereWithAgents:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3;
+ (id)goalToFleeAgent:(id)arg1;
+ (id)goalToFollowPath:(id)arg1 maxPredictionTime:(double)arg2 forward:(BOOL)arg3;
+ (id)goalToInterceptAgent:(id)arg1 maxPredictionTime:(double)arg2;
+ (id)goalToReachTargetSpeed:(float)arg1;
+ (id)goalToSeekAgent:(id)arg1;
+ (id)goalToSeparateFromAgents:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3;
+ (id)goalToStayOnPath:(id)arg1 maxPredictionTime:(double)arg2;
+ (id)goalToWander:(float)arg1;
- (void).cxx_destruct;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (MISSING_TYPE *)getForce:(double)arg1 agent:(id)arg2;
- (id)init;
- (id)initToAlignWithAgents:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3;
- (id)initToAvoidAgents:(id)arg1 maxPredictionTime:(double)arg2;
- (id)initToAvoidObstacles:(id)arg1 maxPredictionTime:(double)arg2;
- (id)initToCohereWithAgents:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3;
- (id)initToFleeAgent:(id)arg1;
- (id)initToFollowPath:(id)arg1 maxPredictionTime:(double)arg2 forward:(BOOL)arg3;
- (id)initToInterceptAgent:(id)arg1 maxPredictionTime:(double)arg2;
- (id)initToReachTargetSpeed:(float)arg1;
- (id)initToSeekAgent:(id)arg1;
- (id)initToSeparateFromAgents:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3;
- (id)initToStayOnPath:(id)arg1 maxPredictionTime:(double)arg2;
- (id)initToWander:(float)arg1;
- (BOOL)isTargetSpeedGoal;
- (float)speed;

@end

