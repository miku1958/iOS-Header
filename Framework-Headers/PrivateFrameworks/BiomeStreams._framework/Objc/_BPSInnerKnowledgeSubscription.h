//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BiomePubSub/BPSSubscription.h>

@class _DKEventQuery;
@protocol BPSSubscriber, _DKKnowledgeQuerying;

@interface _BPSInnerKnowledgeSubscription : BPSSubscription
{
    struct os_unfair_lock_s _lock;
    BOOL _recursion;
    id<BPSSubscriber> _downstream;
    id<_DKKnowledgeQuerying> _knowledgeStore;
    _DKEventQuery *_query;
    long long _pendingDemand;
    id _next;
    long long _offset;
}

@property (strong, nonatomic) id<BPSSubscriber> downstream; // @synthesize downstream=_downstream;
@property (strong, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
@property (strong, nonatomic) id next; // @synthesize next=_next;
@property (nonatomic) long long offset; // @synthesize offset=_offset;
@property (nonatomic) long long pendingDemand; // @synthesize pendingDemand=_pendingDemand;
@property (strong, nonatomic) _DKEventQuery *query; // @synthesize query=_query;
@property (nonatomic) BOOL recursion; // @synthesize recursion=_recursion;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithQuery:(id)arg1 downstream:(id)arg2 store:(id)arg3;
- (void)requestDemand:(long long)arg1;
- (id)upstreamSubscriptions;

@end

