//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameplayKit/GKGraph.h>

@class NSArray, NSMutableArray;

@interface GKObstacleGraph : GKGraph
{
    NSMutableArray *_sourceObstacles;
    struct GKCObstacleGraph *_cObstacleGraph;
    Class _nodeClass;
}

@property (readonly, nonatomic) float bufferRadius;
@property (readonly, nonatomic) NSArray *obstacles;

+ (id)graphWithObstacles:(id)arg1 bufferRadius:(float)arg2;
+ (id)graphWithObstacles:(id)arg1 bufferRadius:(float)arg2 nodeClass:(Class)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addObstacles:(id)arg1;
- (struct GKCObstacleGraph *)cObstacleGraph;
- (Class)classForGenericArgumentAtIndex:(unsigned long long)arg1;
- (void)connectNodeUsingObstacles:(id)arg1;
- (void)connectNodeUsingObstacles:(id)arg1 ignoringBufferRadiusOfObstacles:(id)arg2;
- (void)connectNodeUsingObstacles:(id)arg1 ignoringObstacles:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObstacles:(id)arg1 bufferRadius:(float)arg2;
- (id)initWithObstacles:(id)arg1 bufferRadius:(float)arg2 nodeClass:(Class)arg3;
- (BOOL)isConnectionLockedFromNode:(id)arg1 toNode:(id)arg2;
- (void)lockConnectionFromNode:(id)arg1 toNode:(id)arg2;
- (struct GKCGraph *)makeCGraph;
- (id)mutObstacles;
- (Class)nodeClass;
- (id)nodesForObstacle:(id)arg1;
- (void)removeAllObstacles;
- (void)removeObstacles:(id)arg1;
- (void)unlockConnectionFromNode:(id)arg1 toNode:(id)arg2;

@end

