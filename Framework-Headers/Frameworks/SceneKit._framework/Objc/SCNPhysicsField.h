//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>

@class SCNNode, SCNPhysicsWorld;

@interface SCNPhysicsField : NSObject <NSCopying, NSSecureCoding>
{
    struct SCNVector3 _halfExtent;
    double _strength;
    double _falloffExponent;
    double _minimumDistance;
    BOOL _active;
    long long _scope;
    BOOL _usesEllipsoidalExtent;
    BOOL _exclusive;
    struct SCNVector3 _offset;
    struct SCNVector3 _direction;
    unsigned long long _categoryBitMask;
    SCNPhysicsWorld *_world;
    SCNNode *_node;
    struct c3dPhysicsField *_field;
}

@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) unsigned long long categoryBitMask;
@property (nonatomic) struct SCNVector3 direction;
@property (nonatomic, getter=isExclusive) BOOL exclusive;
@property (nonatomic) double falloffExponent;
@property (nonatomic) struct SCNVector3 halfExtent;
@property (nonatomic) double minimumDistance;
@property (nonatomic) struct SCNVector3 offset;
@property (nonatomic) long long scope;
@property (nonatomic) double strength;
@property (nonatomic) BOOL usesEllipsoidalExtent;

+ (double)_displayScaleFactor;
+ (void)_setDisplayScaleFactor:(double)arg1;
+ (id)customFieldWithEvaluationBlock:(CDUnknownBlockType)arg1;
+ (id)dragField;
+ (id)electricField;
+ (id)field;
+ (id)linearGravityField;
+ (id)magneticField;
+ (id)noiseFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2;
+ (id)radialGravityField;
+ (id)springField;
+ (BOOL)supportsSecureCoding;
+ (id)turbulenceFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2;
+ (id)vortexField;
- (void)_commonInit;
- (struct c3dPhysicsField *)_createField;
- (struct c3dPhysicsField *)_handle;
- (id)_owner;
- (void)_removeOwner;
- (void)_setOwner:(id)arg1;
- (void)_setWorld:(id)arg1;
- (void)_setupCommonProperties;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (struct SCNVector3)evalAtLocation:(struct SCNVector3)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)supportsDirection;
- (BOOL)supportsOffset;

@end

