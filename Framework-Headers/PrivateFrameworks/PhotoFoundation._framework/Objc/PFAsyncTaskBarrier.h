//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCondition, NSString;

@interface PFAsyncTaskBarrier : NSObject
{
    NSString *_label;
    long long _remainingTaskCount;
    CDUnknownBlockType _completionBlock;
    NSArray *_errors;
    NSCondition *_conditionLock;
}

@property (readonly) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property (readonly) NSCondition *conditionLock; // @synthesize conditionLock=_conditionLock;
@property (strong) NSArray *errors; // @synthesize errors=_errors;
@property (readonly) NSString *label; // @synthesize label=_label;
@property (readonly) long long remainingTaskCount; // @synthesize remainingTaskCount=_remainingTaskCount;

- (void).cxx_destruct;
- (void)changeRemainingTaskCount:(long long)arg1;
- (id)description;
- (void)executeCriticalBlock:(CDUnknownBlockType)arg1;
- (id)initWithLabel:(id)arg1 taskCount:(long long)arg2;
- (id)initWithLabel:(id)arg1 taskCount:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setRemainingTaskCount:(long long)arg1;
- (void)taskCompleted;
- (void)taskCompletedWithCriticalBlock:(CDUnknownBlockType)arg1;
- (void)taskCompletedWithError:(id)arg1;
- (void)taskCompletedWithError:(id)arg1 criticalBlock:(CDUnknownBlockType)arg2;
- (void)taskCompletedWithErrors:(id)arg1;
- (void)taskCompletedWithErrors:(id)arg1 criticalBlock:(CDUnknownBlockType)arg2;
- (void)waitUntilCompleted;
- (void)waitUntilCompletedOrError;

@end

