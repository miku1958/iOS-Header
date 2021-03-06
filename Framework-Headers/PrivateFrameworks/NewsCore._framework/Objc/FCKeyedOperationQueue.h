//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSOrderedSet;
@protocol FCKeyedOperationQueueDelegate, OS_dispatch_group, OS_dispatch_queue;

@interface FCKeyedOperationQueue : NSObject
{
    BOOL _suspended;
    id<FCKeyedOperationQueueDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_executionQueue;
    NSMutableOrderedSet *_mutableKeyQueue;
    NSMutableSet *_keysForExecutingOperations;
    long long _maxConcurrentOperationCount;
    NSMutableDictionary *_cancelHandlersByKey;
    NSObject<OS_dispatch_group> *_operationExecutionGroup;
}

@property (strong, nonatomic) NSMutableDictionary *cancelHandlersByKey; // @synthesize cancelHandlersByKey=_cancelHandlersByKey;
@property (weak, nonatomic) id<FCKeyedOperationQueueDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *executionQueue; // @synthesize executionQueue=_executionQueue;
@property (copy, nonatomic) NSOrderedSet *keyQueue;
@property (strong, nonatomic) NSMutableSet *keysForExecutingOperations; // @synthesize keysForExecutingOperations=_keysForExecutingOperations;
@property (nonatomic) long long maxConcurrentOperationCount; // @synthesize maxConcurrentOperationCount=_maxConcurrentOperationCount;
@property (strong, nonatomic) NSMutableOrderedSet *mutableKeyQueue; // @synthesize mutableKeyQueue=_mutableKeyQueue;
@property (strong, nonatomic) NSObject<OS_dispatch_group> *operationExecutionGroup; // @synthesize operationExecutionGroup=_operationExecutionGroup;
@property (nonatomic, getter=isSuspended) BOOL suspended; // @synthesize suspended=_suspended;

- (void).cxx_destruct;
- (void)_cancelOperationsIfNeeded;
- (void)_enqueueOperationIfNeeded;
- (id)init;
- (id)initWithDelegate:(id)arg1 maxConcurrentOperationCount:(long long)arg2;
- (void)notifyWhenAllOperationsAreFinishedUsingBlock:(CDUnknownBlockType)arg1;

@end

