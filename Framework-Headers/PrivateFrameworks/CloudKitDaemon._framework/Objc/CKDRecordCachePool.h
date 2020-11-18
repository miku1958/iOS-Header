//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CKDRecordCachePool : NSObject
{
    NSMutableDictionary *_pools;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_expiryTimer;
}

@property (strong, nonatomic) NSObject<OS_dispatch_source> *expiryTimer; // @synthesize expiryTimer=_expiryTimer;
@property (strong, nonatomic) NSMutableDictionary *pools; // @synthesize pools=_pools;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

+ (void)performWithClientContext:(id)arg1 scope:(long long)arg2 block:(CDUnknownBlockType)arg3;
+ (id)sharedPool;
- (void).cxx_destruct;
- (id)_poolForContext:(id)arg1;
- (void)_purgeRecordCachesForApplicationContainerPaths:(id)arg1 expiryDate:(id)arg2;
- (id)acquireCacheWithContext:(id)arg1 scope:(long long)arg2;
- (void)clearAllCachesForContext:(id)arg1;
- (id)init;
- (void)releaseCache:(id)arg1;

@end
