//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameplayKit/GKObstacle.h>

@class MISSING_TYPE;

@interface GKCircleObstacle : GKObstacle
{
    struct SphericalObstacle _obstacle;
}

@property (nonatomic) MISSING_TYPE *position;
@property (nonatomic) float radius;

+ (id)obstacleWithRadius:(float)arg1;
- (id).cxx_construct;
- (id)init;
- (id)initWithRadius:(float)arg1;
- (struct Obstacle *)obstacle;

@end

