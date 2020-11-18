//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet, NSString, NSURL;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface FCBlobFileCache : NSObject
{
    BOOL _currentlyEnqueuedCacheSizeEnforcement;
    long long _countLimit;
    NSURL *_cacheDirectory;
    NSString *_identifier;
    long long _currentSize;
    NSObject<OS_dispatch_queue> *_storageQueue;
    NSObject<OS_dispatch_queue> *_touchQueue;
    NSObject<OS_dispatch_group> *_cacheSizeEnforcementThrottlingGroup;
    NSMutableOrderedSet *_keys;
    NSMutableDictionary *_keysToItems;
}

@property (copy, nonatomic) NSURL *cacheDirectory; // @synthesize cacheDirectory=_cacheDirectory;
@property (strong, nonatomic) NSObject<OS_dispatch_group> *cacheSizeEnforcementThrottlingGroup; // @synthesize cacheSizeEnforcementThrottlingGroup=_cacheSizeEnforcementThrottlingGroup;
@property long long countLimit; // @synthesize countLimit=_countLimit;
@property (nonatomic) long long currentSize; // @synthesize currentSize=_currentSize;
@property BOOL currentlyEnqueuedCacheSizeEnforcement; // @synthesize currentlyEnqueuedCacheSizeEnforcement=_currentlyEnqueuedCacheSizeEnforcement;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSMutableOrderedSet *keys; // @synthesize keys=_keys;
@property (strong, nonatomic) NSMutableDictionary *keysToItems; // @synthesize keysToItems=_keysToItems;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *storageQueue; // @synthesize storageQueue=_storageQueue;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *touchQueue; // @synthesize touchQueue=_touchQueue;

+ (void)clearCacheForIdentifier:(id)arg1 cacheDirectory:(id)arg2;
- (void).cxx_destruct;
- (void)_clearCache;
- (void)_enforceCacheSize;
- (void)_enqueueCacheSizeEnforcement;
- (void)_insertItemInMemory:(id)arg1 forKey:(id)arg2;
- (void)_loadItemsFromCacheState;
- (BOOL)_removeFileWithKey:(id)arg1 error:(id *)arg2;
- (void)_removeItemInMemoryForKey:(id)arg1;
- (void)_touchItemForKey:(id)arg1;
- (void)clearCache;
- (void)dataForKey:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)enforceCacheSize;
- (void)hasDataForKey:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithIdentifier:(id)arg1 cacheDirectory:(id)arg2 error:(id *)arg3;
- (void)removeDataForKey:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setData:(id)arg1 forKey:(id)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)touchDataForKey:(id)arg1;

@end
