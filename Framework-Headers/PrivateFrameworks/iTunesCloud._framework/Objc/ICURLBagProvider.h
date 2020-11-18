//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ICURLBagProvider : NSObject
{
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_persistenceQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_pendingOperationsForCacheKey;
}

+ (id)sharedBagProvider;
- (void).cxx_destruct;
- (id)_cacheFilePath;
- (void)_fetchBagForRequestContext:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_getCacheKeyForRequestContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;
- (void)_loadCache;
- (void)_saveCache;
- (void)dealloc;
- (void)getBagForRequestContext:(id)arg1 forceRefetch:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)getBagForRequestContext:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (void)invalidateCache;

@end
