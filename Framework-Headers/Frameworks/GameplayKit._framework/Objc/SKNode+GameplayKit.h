//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/SKNode.h>

@class GKEntity;

@interface SKNode (GameplayKit)

@property (weak, nonatomic) GKEntity *entity;

+ (id)obstaclesFromNodeBounds:(id)arg1;
+ (id)obstaclesFromNodePhysicsBodies:(id)arg1;
+ (id)obstaclesFromSpriteTextures:(id)arg1 accuracy:(float)arg2;
@end

