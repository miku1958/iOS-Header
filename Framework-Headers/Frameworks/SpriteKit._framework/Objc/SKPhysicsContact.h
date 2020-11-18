//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SKPhysicsBody;

@interface SKPhysicsContact : NSObject
{
    SKPhysicsBody *_bodyA;
    SKPhysicsBody *_bodyB;
    double _collisionImpulse;
    struct CGPoint _contactPoint;
    struct CGVector _contactNormal;
}

@property (readonly, nonatomic) SKPhysicsBody *bodyA; // @synthesize bodyA=_bodyA;
@property (readonly, nonatomic) SKPhysicsBody *bodyB; // @synthesize bodyB=_bodyB;
@property (readonly, nonatomic) double collisionImpulse; // @synthesize collisionImpulse=_collisionImpulse;
@property (readonly, nonatomic) struct CGVector contactNormal; // @synthesize contactNormal=_contactNormal;
@property (readonly, nonatomic) struct CGPoint contactPoint; // @synthesize contactPoint=_contactPoint;

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;

@end
