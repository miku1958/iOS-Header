//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BusinessChatService/BCSBatchable-Protocol.h>
#import <BusinessChatService/BCSCacheClearing-Protocol.h>
#import <BusinessChatService/BCSConfigCacheSkipping-Protocol.h>
#import <BusinessChatService/BCSConfigCaching-Protocol.h>
#import <BusinessChatService/BCSItemCacheSkipping-Protocol.h>
#import <BusinessChatService/BCSItemCaching-Protocol.h>
#import <BusinessChatService/BCSShardCacheQueryable-Protocol.h>
#import <BusinessChatService/BCSShardCacheSkipping-Protocol.h>

@class NSString;
@protocol BCSItemCaching><BCSLinkItemCacheClearing, BCSShardCacheQueryable;

@interface BCSCacheManager : NSObject <BCSCacheClearing, BCSConfigCaching, BCSConfigCacheSkipping, BCSShardCacheQueryable, BCSShardCacheSkipping, BCSItemCaching, BCSItemCacheSkipping, BCSBatchable>
{
    id<BCSShardCacheQueryable> _shardCache;
    id<BCSItemCaching><BCSLinkItemCacheClearing> _itemCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<BCSItemCaching><BCSLinkItemCacheClearing> itemCache; // @synthesize itemCache=_itemCache;
@property (strong, nonatomic) id<BCSShardCacheQueryable> shardCache; // @synthesize shardCache=_shardCache;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearExpiredCacheItemsForType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginBatch;
- (void)clearCachesForLinkItemsAssociatedWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearCachesForType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearExpiredCachesForType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)configItemForType:(long long)arg1;
- (long long)countOfExpiredShardsOfType:(long long)arg1;
- (long long)countOfShardsOfType:(long long)arg1;
- (void)deleteConfigItemForType:(long long)arg1;
- (void)deleteExpiredConfigItemForType:(long long)arg1;
- (void)deleteExpiredItemsOfType:(long long)arg1;
- (void)deleteExpiredShardItemsOfType:(long long)arg1;
- (void)deleteItemMatching:(id)arg1;
- (void)deleteItemsOfType:(long long)arg1;
- (void)deleteShardItemMatching:(id)arg1;
- (void)deleteShardItemsOfType:(long long)arg1;
- (void)endBatch;
- (id)initWithShardCache:(id)arg1 itemCache:(id)arg2;
- (id)itemMatching:(id)arg1;
- (id)shardItemMatching:(id)arg1;
- (BOOL)shouldSkipCacheForConfigItemOfType:(long long)arg1;
- (BOOL)shouldSkipCacheForItemOfType:(long long)arg1;
- (BOOL)shouldSkipCacheForShardItemOfType:(long long)arg1;
- (void)updateConfigItem:(id)arg1 withType:(long long)arg2;
- (void)updateItem:(id)arg1 withItemIdentifier:(id)arg2;
- (void)updateShardItem:(id)arg1 withShardIdentifier:(id)arg2;

@end
