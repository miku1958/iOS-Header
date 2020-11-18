//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLMorphDeformerComponent-Protocol.h>
#import <ModelIO/NSCopying-Protocol.h>

@class MDLAnimatedScalarArray, NSArray, NSData, NSString;

@interface MDLMorphDeformer : NSObject <NSCopying, MDLMorphDeformerComponent>
{
    NSArray *_targetShapes;
    MDLAnimatedScalarArray *_weights;
    NSData *_targetWeights;
    NSData *_targetCounts;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSArray *shapeSetTargetCounts;
@property (readonly, nonatomic) NSArray *shapeSetTargetWeights;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSData *targetCounts; // @synthesize targetCounts=_targetCounts;
@property (readonly, nonatomic) NSArray *targetShapes; // @synthesize targetShapes=_targetShapes;
@property (strong, nonatomic) NSData *targetWeights; // @synthesize targetWeights=_targetWeights;
@property (strong, nonatomic) MDLAnimatedScalarArray *weights; // @synthesize weights=_weights;

- (void).cxx_destruct;
- (unsigned long long)copyShapeSetTargetCountsInto:(unsigned int *)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)copyShapeSetTargetWeightsInto:(float *)arg1 maxCount:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOther:(id)arg1;
- (id)initWithTargetShapes:(id)arg1 shapeSetTargetWeights:(const float *)arg2 count:(unsigned long long)arg3 shapeSetTargetCounts:(const unsigned int *)arg4 count:(unsigned long long)arg5;
- (id)initWithTargetShapes:(id)arg1 shapeSetTargetWeights:(id)arg2 shapeSetTargetCounts:(id)arg3;

@end
