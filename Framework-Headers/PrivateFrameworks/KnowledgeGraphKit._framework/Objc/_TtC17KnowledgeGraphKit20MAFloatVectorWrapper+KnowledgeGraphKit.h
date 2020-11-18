//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KnowledgeGraphKit/_TtC17KnowledgeGraphKit20MAFloatVectorWrapper.h>

#import <KnowledgeGraphKit/NSCopying-Protocol.h>
#import <KnowledgeGraphKit/NSMutableCopying-Protocol.h>

@class NSString;

@interface _TtC17KnowledgeGraphKit20MAFloatVectorWrapper (KnowledgeGraphKit) <NSCopying, NSMutableCopying>

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

+ (id)onesOfCount:(long long)arg1;
+ (id)repeatingFloat:(float)arg1 count:(long long)arg2;
+ (id)zerosOfCount:(long long)arg1;
- (id)array;
- (id)copyWithZone:(void *)arg1;
- (id)data;
- (float)dotProductWithWrapper:(id)arg1;
- (float)floatAtIndex:(long long)arg1;
- (id)initWithFloats:(const float *)arg1 count:(long long)arg2;
- (BOOL)isApproximatelyEqualTo:(id)arg1;
- (BOOL)isApproximatelyEqualTo:(id)arg1 epsilon:(float)arg2;
- (BOOL)isEqual:(id)arg1;
- (float)mean;
- (id)mutableCopyWithZone:(void *)arg1;
- (id)naturalLogarithm;
- (id)naturalLogarithmIfPositive;
- (id)sliceFromStart:(long long)arg1 toEnd:(long long)arg2;
- (float)standardDeviation;
- (float)sum;
- (float)sumOfSquares;
- (id)vectorByAddingScalar:(float)arg1;
- (id)vectorByAddingVector:(id)arg1;
- (id)vectorByDividingByScalar:(float)arg1;
- (id)vectorByElementwiseMultiplyingByWrapper:(id)arg1;
- (id)vectorByElementwiseRaisingToExponent:(float)arg1;
- (id)vectorByMultiplyingByScalar:(float)arg1;
- (id)vectorBySubtractingScalar:(float)arg1;
- (id)vectorBySubtractingVector:(id)arg1;
@end
