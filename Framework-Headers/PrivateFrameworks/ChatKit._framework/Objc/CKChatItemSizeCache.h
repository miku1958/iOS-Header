//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/IMSystemMonitorListener-Protocol.h>

@class IMDoubleLinkedList, IMScheduledUpdater, NSData, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CKChatItemSizeCache : NSObject <IMSystemMonitorListener>
{
    BOOL _test_throwExceptionDuringInflate;
    NSMutableDictionary *_cache;
    NSMutableDictionary *_chatItemGUIDToCacheKeyMap;
    IMDoubleLinkedList *_orderedKeys;
    NSObject<OS_dispatch_queue> *_cacheDiskQueue;
    IMScheduledUpdater *_evictionUpdater;
    NSString *_preferredLocalization;
    NSData *_test_cacheData;
}

@property (strong, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *cacheDiskQueue; // @synthesize cacheDiskQueue=_cacheDiskQueue;
@property (strong, nonatomic) NSMutableDictionary *chatItemGUIDToCacheKeyMap; // @synthesize chatItemGUIDToCacheKeyMap=_chatItemGUIDToCacheKeyMap;
@property (strong, nonatomic) IMScheduledUpdater *evictionUpdater; // @synthesize evictionUpdater=_evictionUpdater;
@property (strong, nonatomic) IMDoubleLinkedList *orderedKeys; // @synthesize orderedKeys=_orderedKeys;
@property (strong, nonatomic) NSString *preferredLocalization; // @synthesize preferredLocalization=_preferredLocalization;
@property (strong, nonatomic) NSData *test_cacheData; // @synthesize test_cacheData=_test_cacheData;
@property (nonatomic) BOOL test_throwExceptionDuringInflate; // @synthesize test_throwExceptionDuringInflate=_test_throwExceptionDuringInflate;

+ (id)sharedInstance;
+ (id)test_cachePath;
- (void).cxx_destruct;
- (BOOL)_boldTextEnabled;
- (void)_commonInit;
- (void)_evictIfNeeded;
- (id)_fontSizeCategory;
- (id)_generateChatItemGuidToCacheKeyMapWithCache:(id)arg1;
- (void)_inflateCache;
- (void)_invalidateCachedSizeForChatItemGUID:(id)arg1;
- (void)_invalidateSizeCacheMetricsForKey:(id)arg1;
- (void)_persistCache;
- (id)_systemVersion;
- (void)_updateKeyMap:(id)arg1 forKey:(id)arg2 sizeCacheKey:(id)arg3;
- (void)applicationWillResignActive;
- (id)cacheKeyForChatItem:(id)arg1 fittingSize:(struct CGSize)arg2;
- (BOOL)cachedSizeForChatItem:(id)arg1 size:(out struct CGSize *)arg2 textAlignmentInsets:(out struct UIEdgeInsets *)arg3 fittingSize:(struct CGSize)arg4;
- (void)dealloc;
- (id)init;
- (id)initForTestAndThrowException:(BOOL)arg1 cacheFileData:(id)arg2;
- (void)invalidateCachedSizeForChatItem:(id)arg1;
- (void)invalidateCachedSizeForGUIDPrefix:(id)arg1;
- (void)setCachedSizeForChatItem:(id)arg1 size:(struct CGSize)arg2 textAlignmentInsets:(struct UIEdgeInsets)arg3 fittingSize:(struct CGSize)arg4;
- (void)systemApplicationDidSuspend;

@end

