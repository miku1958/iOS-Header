//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BiomePubSub/BPSSubscription.h>

@class BMStoreEnumerator, NSString;
@protocol BPSSubscriber;

@interface _BPSInnerBiomeSubscription : BPSSubscription
{
    BMStoreEnumerator *_enumerator;
    struct os_unfair_lock_s _lock;
    id<BPSSubscriber> _downstream;
    long long _pendingDemand;
    BOOL _recursion;
    NSString *_streamId;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithStreamDatastoreReader:(id)arg1 bookmark:(id)arg2 downstream:(id)arg3 streamId:(id)arg4;
- (id)initWithStreamDatastoreReader:(id)arg1 startTime:(double)arg2 downstream:(id)arg3 streamId:(id)arg4;
- (id)initWithStreamEnumerator:(id)arg1 downstream:(id)arg2 streamId:(id)arg3;
- (id)newBookmark;
- (void)requestDemand:(long long)arg1;
- (id)upstreamSubscriptions;

@end

