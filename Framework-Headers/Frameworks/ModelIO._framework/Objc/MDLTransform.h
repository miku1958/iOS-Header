//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLTransformComponent-Protocol.h>
#import <ModelIO/NSCopying-Protocol.h>

@class CAAnimation, MISSING_TYPE, NSArray, NSString;

@interface MDLTransform : NSObject <NSCopying, MDLTransformComponent>
{
    struct MDLAffineTransform _transform;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSArray *keyTimes;
@property (nonatomic) CDStruct_14d5dc5e matrix;
@property (readonly, nonatomic) double maximumTime;
@property (readonly, nonatomic) double minimumTime;
@property (nonatomic) BOOL resetsTransform;
@property (nonatomic) MISSING_TYPE *rotation;
@property (nonatomic) MISSING_TYPE *scale;
@property (nonatomic) MISSING_TYPE *shear;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CAAnimation *transformAnimation;
@property (nonatomic) MISSING_TYPE *translation;

+ (CDStruct_14d5dc5e)globalTransformWithObject:(id)arg1 atTime:(double)arg2;
+ (CDStruct_14d5dc5e)localTransformWithObject:(id)arg1 atTime:(double)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithIdentity;
- (id)initWithMatrix:(CDStruct_14d5dc5e)arg1;
- (id)initWithMatrix:(CDStruct_14d5dc5e)arg1 resetsTransform:(BOOL)arg2;
- (id)initWithTransformComponent:(id)arg1;
- (id)initWithTransformComponent:(id)arg1 resetsTransform:(BOOL)arg2;
- (CDStruct_14d5dc5e)localTransformAtTime:(double)arg1;
- (MISSING_TYPE *)rotationAtTime:(double)arg1;
- (CDStruct_14d5dc5e)rotationMatrixAtTime:(double)arg1;
- (MISSING_TYPE *)scaleAtTime:(double)arg1;
- (void)setIdentity;
- (void)setLocalTransform:(CDStruct_14d5dc5e)arg1;
- (void)setLocalTransform:(CDStruct_14d5dc5e)arg1 forTime:(double)arg2;
- (void)setMatrix:(CDStruct_14d5dc5e)arg1 forTime:(double)arg2;
- (void)setRotation:(double)arg1 forTime: /* Error: Ran out of types for this method. */;
- (void)setScale:(double)arg1 forTime: /* Error: Ran out of types for this method. */;
- (void)setShear:(double)arg1 forTime: /* Error: Ran out of types for this method. */;
- (void)setTranslation:(double)arg1 forTime: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)shearAtTime:(double)arg1;
- (MISSING_TYPE *)translationAtTime:(double)arg1;

@end

