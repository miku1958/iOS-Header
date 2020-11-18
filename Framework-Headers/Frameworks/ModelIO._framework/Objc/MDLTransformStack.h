//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLTransformComponent-Protocol.h>
#import <ModelIO/NSCopying-Protocol.h>

@class CAAnimation, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface MDLTransformStack : NSObject <NSCopying, MDLTransformComponent>
{
    BOOL _resetsTransform;
    NSMutableArray *_transformOps;
    NSMutableDictionary *_animatedValues;
}

@property (strong, nonatomic) NSMutableDictionary *animatedValues; // @synthesize animatedValues=_animatedValues;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSArray *keyTimes;
@property (nonatomic) CDStruct_14d5dc5e matrix;
@property (readonly, nonatomic) double maximumTime;
@property (readonly, nonatomic) double minimumTime;
@property (nonatomic) BOOL resetsTransform; // @synthesize resetsTransform=_resetsTransform;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CAAnimation *transformAnimation;
@property (copy, nonatomic) NSMutableArray *transformOps; // @synthesize transformOps=_transformOps;

+ (CDStruct_14d5dc5e)globalTransformWithObject:(id)arg1 atTime:(double)arg2;
+ (CDStruct_14d5dc5e)localTransformWithObject:(id)arg1 atTime:(double)arg2;
- (void).cxx_destruct;
- (id)addMatrixOp:(id)arg1 inverse:(BOOL)arg2;
- (id)addRotateOp:(id)arg1 order:(unsigned long long)arg2 inverse:(BOOL)arg3;
- (id)addRotateXOp:(id)arg1 inverse:(BOOL)arg2;
- (id)addRotateYOp:(id)arg1 inverse:(BOOL)arg2;
- (id)addRotateZOp:(id)arg1 inverse:(BOOL)arg2;
- (id)addScaleOp:(id)arg1 inverse:(BOOL)arg2;
- (id)addTranslateOp:(id)arg1 inverse:(BOOL)arg2;
- (id)animatedMatrix4x4WithName:(id)arg1 shouldCreateIfMissing:(BOOL)arg2;
- (id)animatedScalarWithName:(id)arg1 shouldCreateIfMissing:(BOOL)arg2;
- (id)animatedValueWithName:(id)arg1;
- (id)animatedVector3WithName:(id)arg1 shouldCreateIfMissing:(BOOL)arg2;
- (id)animatedVector4WithName:(id)arg1 shouldCreateIfMissing:(BOOL)arg2;
- (void)clearTransformStack;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (CDStruct_14d5dc5e)double4x4AtTime:(double)arg1;
- (CDStruct_14d5dc5e)float4x4AtTime:(double)arg1;
- (id)init;
- (CDStruct_14d5dc5e)localTransformAtTime:(double)arg1;
- (void)setLocalTransform:(CDStruct_14d5dc5e)arg1;
- (void)setLocalTransform:(CDStruct_14d5dc5e)arg1 forTime:(double)arg2;

@end
