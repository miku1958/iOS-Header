//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <KnowledgeGraphKit/NSCopying-Protocol.h>
#import <KnowledgeGraphKit/NSMutableCopying-Protocol.h>

@class _TtC17KnowledgeGraphKit20MAFloatVectorWrapper;

@interface MAFloatVector : NSObject <NSCopying, NSMutableCopying>
{
    _TtC17KnowledgeGraphKit20MAFloatVectorWrapper *_wrapper;
}

@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) _TtC17KnowledgeGraphKit20MAFloatVectorWrapper *wrapper; // @synthesize wrapper=_wrapper;

+ (id)meanVectorWithFloatVectors:(id)arg1;
+ (id)onesOfCount:(long long)arg1;
+ (id)vectorRepeatingFloat:(float)arg1 count:(long long)arg2;
+ (Class)wrapperClass;
+ (id)zerosOfCount:(long long)arg1;
- (void).cxx_destruct;
- (BOOL)_isArrayOfFloats:(id)arg1;
- (id)array;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)data;
- (id)debugDescription;
- (id)description;
- (float)dotProductWithVector:(id)arg1;
- (float)floatAtIndex:(long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArray:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithFloats:(const float *)arg1 count:(long long)arg2;
- (id)initWithWrapper:(id)arg1;
- (BOOL)isApproximatelyEqualTo:(id)arg1;
- (BOOL)isApproximatelyEqualTo:(id)arg1 epsilon:(float)arg2;
- (BOOL)isEqual:(id)arg1;
- (float)mean;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)sliceFromStart:(long long)arg1 toEnd:(long long)arg2;
- (float)standardDeviation;
- (float)sum;
- (float)sumOfSquares;
- (id)vectorByAddingScalar:(float)arg1;
- (id)vectorByAddingVector:(id)arg1;
- (id)vectorByAppendingArray:(id)arg1;
- (id)vectorByAppendingDoubles:(const double *)arg1 count:(long long)arg2;
- (id)vectorByAppendingFloat:(float)arg1;
- (id)vectorByAppendingFloats:(const float *)arg1 count:(long long)arg2;
- (id)vectorByAppendingVector:(id)arg1;
- (id)vectorByDividingByScalar:(float)arg1;
- (id)vectorByElementwiseMultiplyingByVector:(id)arg1;
- (id)vectorByElementwiseNaturalLogarithm;
- (id)vectorByElementwiseNaturalLogarithmIfPositive;
- (id)vectorByElementwiseRaisingToExponent:(float)arg1;
- (id)vectorByMultiplyingByScalar:(float)arg1;
- (id)vectorBySubtractingScalar:(float)arg1;
- (id)vectorBySubtractingVector:(id)arg1;

@end

