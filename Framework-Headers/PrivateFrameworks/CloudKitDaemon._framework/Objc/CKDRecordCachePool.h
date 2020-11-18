//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CKDRecordCachePool : NSObject
{
    NSMutableDictionary *_pools;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_recordExpiryQueue;
}

@property (strong, nonatomic) NSMutableDictionary *pools; // @synthesize pools=_pools;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *recordExpiryQueue; // @synthesize recordExpiryQueue=_recordExpiryQueue;

+ (void)performWithClientContext:(id)arg1 scope:(long long)arg2 block:(CDUnknownBlockType)arg3;
+ (id)sharedPool;
- (void).cxx_destruct;
- (id)_poolForContext:(id)arg1;
- (void)_purgeRecordCachesForApplicationContainerPaths:(id)arg1 expiryDate:(id)arg2;
- (id)acquireCacheWithContext:(id)arg1 scope:(long long)arg2;
- (id)init;
- (void)releaseCache:(id)arg1;

@end

