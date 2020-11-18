//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/SGDHarvestQueue.h>

@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SGDHarvestQueueInMemory : SGDHarvestQueue
{
    unsigned long long _limit;
    double _ttl;
    long long _itemIdCounter;
    NSMutableArray *_items;
    NSObject<OS_dispatch_queue> *_queue;
    SGDHarvestQueue *_other;
}

@property (readonly, nonatomic) SGDHarvestQueue *other; // @synthesize other=_other;

- (void).cxx_destruct;
- (void)_deleteWithItemId:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_flushWithIndexLockedAsync:(unsigned long long)arg1;
- (void)_flushWithItemIdLockedAsync:(long long)arg1;
- (long long)_indexOfItemWithIdLocked:(long long)arg1;
- (void)_popCallback:(CDUnknownBlockType)arg1 where:(CDUnknownBlockType)arg2 or:(CDUnknownBlockType)arg3;
- (void)_sortLocked;
- (void)addItemWithSourceKey:(id)arg1 messageId:(id)arg2 highPriority:(BOOL)arg3 item:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)close;
- (unsigned long long)count;
- (void)countHighPriorityItems:(unsigned long long *)arg1 lowPriorityItems:(unsigned long long *)arg2;
- (void)deleteAllItemsDangerously;
- (id)initWithLimit:(unsigned long long)arg1 ttl:(double)arg2 flushingToQueue:(id)arg3;
- (void)pop:(CDUnknownBlockType)arg1;
- (void)popByItemId:(long long)arg1 callback:(CDUnknownBlockType)arg2;
- (void)popBySourceKey:(id)arg1 messageId:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)popHighPriority:(CDUnknownBlockType)arg1;
- (void)writePermafail:(id)arg1;

@end
