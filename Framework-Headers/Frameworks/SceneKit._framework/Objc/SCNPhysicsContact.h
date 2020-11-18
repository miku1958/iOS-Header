//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCNNode;

@interface SCNPhysicsContact : NSObject
{
    SCNNode *_nodeA;
    SCNNode *_nodeB;
    struct SCNVector3 _contactPoint;
    struct SCNVector3 _contactNormal;
    double _collisionImpulse;
    double _distance;
    double _fraction;
    long long _updateCount;
}

@property (readonly, nonatomic) double collisionImpulse;
@property (readonly, nonatomic) struct SCNVector3 contactNormal;
@property (readonly, nonatomic) struct SCNVector3 contactPoint;
@property (readonly, nonatomic) SCNNode *nodeA;
@property (readonly, nonatomic) SCNNode *nodeB;
@property (readonly, nonatomic) double penetrationDistance;
@property (readonly, nonatomic) double sweepTestFraction;

+ (id)_contactWithManifold:(const struct btPersistentManifold *)arg1 index:(long long)arg2;
- (void)_fillNodeA:(id)arg1 nodeB:(id)arg2;
- (void)_fillNodeA:(id)arg1 nodeB:(id)arg2 contactPoint:(struct SCNVector3)arg3 collisionImpulse:(struct SCNVector3)arg4 distance:(double)arg5 hitFraction:(double)arg6;
- (void)_prepareUpdate;
- (void)_setupWithManifold:(const struct btPersistentManifold *)arg1 index:(long long)arg2 point:(const struct btManifoldPoint *)arg3;
- (BOOL)_shouldPostUpdate;
- (void)dealloc;
- (id)description;

@end

