//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoFoundation/PFConcurrentQueueClass.h>

@class NSMutableArray, PFSerialQueue;

@interface PFLimitedConcurrencyQueueClass : PFConcurrentQueueClass
{
    NSMutableArray *_slotQueues;
    unsigned long long _concurrencyLimit;
    PFSerialQueue *_serializer;
    NSMutableArray *_availableSlots;
    BOOL _usesBarrierBlocks;
    unsigned long long _suspendCount;
}

- (void).cxx_destruct;
- (void)_allocateAllSlotQueues;
- (id)_allocateOneSlotQueue;
- (id)_extensionsForTargetingQueue;
- (void)_setupConcurrencyLimit:(unsigned long long)arg1;
- (id)checkoutAvailableSlot;
- (unsigned long long)concurrencyLimit;
- (void)dispatchAfter:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchAsync:(CDUnknownBlockType)arg1;
- (void)dispatchAsyncWithQOS:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchBarrierAsync:(CDUnknownBlockType)arg1;
- (void)dispatchBarrierAsyncWithQOS:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchBarrierSync:(CDUnknownBlockType)arg1;
- (void)dispatchGroup:(id)arg1 async:(CDUnknownBlockType)arg2;
- (void)dispatchGroup:(id)arg1 notify:(CDUnknownBlockType)arg2;
- (void)dispatchSync:(CDUnknownBlockType)arg1;
- (void)dropOneSlotQueue;
- (void)enqueueDelayedDrop;
- (void)resume;
- (void)slotQueueMightBeUnused:(id)arg1;
- (void)suspend;

@end

