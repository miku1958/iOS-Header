//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoFoundation/PFDispatchQueueExtension.h>

#import <PhotoFoundation/PFPriorityEnqueuing-Protocol.h>

@class NSArray, NSMutableArray, PFDispatchQueue, PFSerialQueue;

@interface PFPriorityQueueExtension : PFDispatchQueueExtension <PFPriorityEnqueuing>
{
    PFDispatchQueue *_executionQueue;
    PFDispatchQueue *_serializer;
    unsigned long long _lastScheduledPriority;
    NSArray *_priorityLevels;
    NSMutableArray *_emptyNotifications;
    unsigned long long *_scheduledCount;
    PFSerialQueue *_schedulingQueue;
    unsigned long long _qosBlockCount[6];
    BOOL _queueSuspended;
    unsigned long long _schedulingSuspendCount;
    BOOL _performsConcurrentScheduling;
}

- (void).cxx_destruct;
- (void)_scheduleBlock:(id)arg1;
- (void)_scheduleNextBlock;
- (void)dealloc;
- (void)enqueueEmptyNotification:(CDUnknownBlockType)arg1;
- (void)enqueueWithPriority:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)enqueueWithPriority:(unsigned long long)arg1 qos:(unsigned int)arg2 block:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithPriorityLevels:(unsigned long long)arg1 concurrentScheduling:(BOOL)arg2;
- (void)installOnQueue:(id)arg1;
- (void)queue:(id)arg1 didExecute:(id)arg2;
- (id)queue:(id)arg1 receivedDispatchAsync:(CDUnknownBlockType)arg2;
- (void)queue:(id)arg1 skippedExecuting:(id)arg2;
- (void)queueDidSuspend:(id)arg1;
- (void)queueWillResume:(id)arg1;
- (void)resumeScheduling;
- (unsigned long long)schedulingLimitForPriorityLevel:(unsigned long long)arg1;
- (void)suspendScheduling;

@end
