//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, SKUILayoutCacheDelegate;

@interface SKUILayoutCache : NSObject
{
    NSMutableArray *_batchedRequests;
    id<SKUILayoutCacheDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_layouts;
    NSMutableArray *_requests;
}

@property (weak, nonatomic) id<SKUILayoutCacheDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (void)_addLayoutBatch:(id)arg1;
- (void)_layoutRequestsInRange:(struct _NSRange)arg1;
- (void)_populateCache;
- (struct _NSRange)addLayoutRequests:(id)arg1;
- (void)commitLayoutRequests;
- (id)init;
- (id)layoutForIndex:(long long)arg1;
- (id)layoutForIndex:(long long)arg1 forced:(BOOL)arg2;
- (struct _NSRange)populateCacheWithLayoutRequests:(id)arg1;

@end

