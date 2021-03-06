//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary;

@interface SCNPhysicsShape : NSObject <NSCopying, NSSecureCoding>
{
    id _referenceObject;
    NSDictionary *_options;
    NSArray *_transforms;
    void *_cachedObject;
    struct btCollisionShape *_collisionShape;
}

@property (readonly, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) id sourceObject; // @synthesize sourceObject=_referenceObject;
@property (readonly, nonatomic) NSArray *transforms;

+ (id)defaultShapeForGeometry:(id)arg1;
+ (id)shapeWithGeometry:(id)arg1 options:(id)arg2;
+ (id)shapeWithNode:(id)arg1 options:(id)arg2;
+ (id)shapeWithShapes:(id)arg1 transforms:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void)_customDecodingOfSCNPhysicsShape:(id)arg1;
- (void)_customEncodingOfSCNPhysicsShape:(id)arg1;
- (struct btCollisionShape *)_handle;
- (void)_setTransforms:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCachedObject:(void *)arg1 options:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithContent:(id)arg1 options:(id)arg2;
- (id)referenceObject;
- (void)setReferenceObject:(id)arg1;

@end

