//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ICMusicSubscriptionStatusCache : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_persistenceQueue;
    NSMutableDictionary *_dsidToSubscriptionStatusResponse;
}

+ (id)sharedCache;
- (void).cxx_destruct;
- (void)_getUserIdentityCacheKeyForRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleSubscriptionStatusChangedDistributedNotification:(id)arg1;
- (id)_init;
- (void)_loadPersistedCacheWithCompletion:(CDUnknownBlockType)arg1;
- (void)_persistCachePostingGlobalNotification:(BOOL)arg1;
- (void)_postLocalChangeNotification;
- (void)dealloc;
- (void)getCachedSubscriptionStatusResponseForRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setCachedSubscriptionStatusResponse:(id)arg1 forRequestContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setCachedSubscriptionStatusResponseNeedsReloadForAllRequestContextsWithCompletion:(CDUnknownBlockType)arg1;
- (void)setCachedSubscriptionStatusResponseNeedsReloadForRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

