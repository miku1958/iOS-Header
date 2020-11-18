//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ModelIO/MDLComponent-Protocol.h>

@class MDLObject, NSArray;

@protocol MDLTransformComponent <MDLComponent>

@property (readonly, copy, nonatomic) NSArray *keyTimes;
@property (nonatomic) CDStruct_14d5dc5e matrix;
@property (readonly, nonatomic) double maximumTime;
@property (readonly, nonatomic) double minimumTime;
@property (nonatomic) BOOL resetsTransform;


@optional
+ (CDStruct_14d5dc5e)globalTransformWithObject:(MDLObject *)arg1 atTime:(double)arg2;
- (CDStruct_14d5dc5e)localTransformAtTime:(double)arg1;
- (void)setLocalTransform:(CDStruct_14d5dc5e)arg1;
- (void)setLocalTransform:(CDStruct_14d5dc5e)arg1 forTime:(double)arg2;
@end

