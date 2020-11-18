//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoFoundation/PFDispatchQueueExtension.h>

@interface PFDispatchQueueStatisticsExtension : PFDispatchQueueExtension
{
    _Atomic unsigned long long _enqueuedCount;
    _Atomic unsigned long long _maxEnqueuedCount;
    _Atomic unsigned long long _executingCount;
    _Atomic unsigned long long _completedCount;
    _Atomic unsigned long long _executionTime;
    _Atomic unsigned long long _maxExecutionTime;
    _Atomic unsigned long long _maxWaitTime;
    _Atomic unsigned long long _totalWaitTime;
    unsigned long long _maxEnqueuedCountTrigger;
    unsigned long long _maxExecutionTimeTrigger;
    unsigned long long _maxWaitTimeTrigger;
    unsigned long long _lastLogTime;
}

- (BOOL)_shouldLog;
- (BOOL)_updateMaximum:(_Atomic unsigned long long *)arg1 value:(unsigned long long)arg2;
- (void)blockCompletedAfterWait:(unsigned long long)arg1 executionTime:(unsigned long long)arg2 queue:(id)arg3;
- (void)blockEnqueued:(id)arg1;
- (Class)blockInfoClass;
- (unsigned long long)completedCount;
- (id)description;
- (unsigned long long)enqueuedCount;
- (unsigned long long)executingCount;
- (unsigned long long)executionTime;
- (id)init;
- (void)installOnQueue:(id)arg1;
- (unsigned long long)maxEnqueuedCount;
- (void)maxEnqueuedCountIncreased:(id)arg1;
- (unsigned long long)maxExecutionTime;
- (void)maxExecutionTimeIncreased:(id)arg1;
- (unsigned long long)maxWaitTime;
- (void)maxWaitTimeIncreased:(id)arg1;
- (id)newBlockInfo;
- (void)queue:(id)arg1 didDequeue:(id)arg2 skipExecution:(CDUnknownBlockType)arg3;
- (void)queue:(id)arg1 didExecute:(id)arg2;
- (void)queue:(id)arg1 skippedExecuting:(id)arg2;
- (void)queue:(id)arg1 willEnqueueAsync:(id)arg2 when:(CDUnknownBlockType)arg3;
- (void)queue:(id)arg1 willEnqueueSync:(id)arg2;
- (void)queue:(id)arg1 willExecute:(id)arg2;
- (unsigned long long)totalWaitTime;

@end

