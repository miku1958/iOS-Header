//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KnowledgeGraphKit/_TtC17KnowledgeGraphKit20MAFloatMatrixWrapper.h>

@class NSString;

@interface _TtC17KnowledgeGraphKit20MAFloatMatrixWrapper (KnowledgeGraphKit)

@property (nonatomic, readonly) long long columns;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) long long rows;

+ (id)onesWithRows:(long long)arg1 columns:(long long)arg2;
+ (id)repeatingWithElement:(float)arg1 rows:(long long)arg2 columns:(long long)arg3;
+ (id)wrapperWithData:(id)arg1 rows:(long long)arg2 columns:(long long)arg3;
+ (id)zerosWithRows:(long long)arg1 columns:(long long)arg2;
- (id)array;
- (id)copyWithZone:(void *)arg1;
- (id)data;
- (float)floatAtRow:(long long)arg1 column:(long long)arg2;
- (id)initWithFloats:(const float *)arg1 rows:(long long)arg2 columns:(long long)arg3;
- (BOOL)isApproximatelyEqualTo:(id)arg1;
- (BOOL)isApproximatelyEqualTo:(id)arg1 epsilon:(float)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)matrixByAddingScalar:(float)arg1;
- (id)matrixBySubtractingMatrix:(id)arg1;
- (id)matrixBySubtractingScalar:(float)arg1;
- (float)mean;
- (id)meanAlongAxis:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(void *)arg1;
- (id)row:(long long)arg1;
- (float)sum;
- (id)sumAlongAxis:(unsigned long long)arg1;
- (float)sumOfSquares;
@end

