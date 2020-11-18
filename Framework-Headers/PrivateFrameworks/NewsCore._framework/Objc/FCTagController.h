//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCAppConfigurationObserving-Protocol.h>
#import <NewsCore/FCOperationThrottlerDelegate-Protocol.h>
#import <NewsCore/FCTagsFetchOperationDelegate-Protocol.h>

@class FCAppConfiguration, FCAssetManager, FCCKDatabase, FCOperationThrottler, FCTagRecordSource, FCTagsSearchOperation, NSCache, NSMutableDictionary, NSString;

@interface FCTagController : NSObject <FCTagsFetchOperationDelegate, FCAppConfigurationObserving, FCOperationThrottlerDelegate>
{
    FCCKDatabase *_contentDatabase;
    FCAssetManager *_assetManager;
    FCTagRecordSource *_tagRecordSource;
    FCAppConfiguration *_appConfiguration;
    NSCache *_fastCache;
    FCTagsSearchOperation *_topicSearchOperation;
    FCTagsSearchOperation *_channelSearchOperation;
    FCOperationThrottler *_tagPrefetchThrottler;
    NSMutableDictionary *_prefetchedTags;
}

@property (strong, nonatomic) FCAppConfiguration *appConfiguration; // @synthesize appConfiguration=_appConfiguration;
@property (strong, nonatomic) FCAssetManager *assetManager; // @synthesize assetManager=_assetManager;
@property (strong, nonatomic) FCTagsSearchOperation *channelSearchOperation; // @synthesize channelSearchOperation=_channelSearchOperation;
@property (strong, nonatomic) FCCKDatabase *contentDatabase; // @synthesize contentDatabase=_contentDatabase;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSCache *fastCache; // @synthesize fastCache=_fastCache;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableDictionary *prefetchedTags; // @synthesize prefetchedTags=_prefetchedTags;
@property (nonatomic) BOOL shouldPrefetchGlobalTags;
@property (readonly) Class superclass;
@property (strong, nonatomic) FCOperationThrottler *tagPrefetchThrottler; // @synthesize tagPrefetchThrottler=_tagPrefetchThrottler;
@property (strong, nonatomic) FCTagRecordSource *tagRecordSource; // @synthesize tagRecordSource=_tagRecordSource;
@property (strong, nonatomic) FCTagsSearchOperation *topicSearchOperation; // @synthesize topicSearchOperation=_topicSearchOperation;

+ (BOOL)isTagAllowed:(id)arg1;
+ (BOOL)isTagAllowedInContentStoreFront:(id)arg1;
- (void).cxx_destruct;
- (id)_cachedTagForTagID:(id)arg1;
- (id)_cachedTagsForTagIDs:(id)arg1;
- (void)_fetchTagForTagID:(id)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_fetchTagsForTagIDs:(id)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)appConfigurationDidChange:(id)arg1;
- (id)cachedTagForID:(id)arg1;
- (id)cachedTagsForIDs:(id)arg1;
- (void)dealloc;
- (void)fetchChannelsForSearchString:(id)arg1 batchSize:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)fetchOperationForTagsWithIDs:(id)arg1;
- (id)fetchOperationForTagsWithIDs:(id)arg1 includeChildren:(BOOL)arg2;
- (void)fetchTagForTagID:(id)arg1 maximumCachedAge:(double)arg2 qualityOfService:(long long)arg3 callbackQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)fetchTagForTagID:(id)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)fetchTagsForTagIDs:(id)arg1 callbackQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchTagsForTagIDs:(id)arg1 maximumCachedAge:(double)arg2 qualityOfService:(long long)arg3 callbackQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)fetchTagsForTagIDs:(id)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)fetchTopicsForSearchString:(id)arg1 batchSize:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithContentDatabase:(id)arg1 assetManager:(id)arg2 tagRecordSource:(id)arg3 appConfiguration:(id)arg4;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(CDUnknownBlockType)arg2;
- (void)refreshTagsBasedOnAgeForTagIDs:(id)arg1;
- (void)saveTagsToCache:(id)arg1;
- (void)tagsFetchOperation:(id)arg1 didFetchTagsByID:(id)arg2;
- (id)tagsForTagIDs:(id)arg1;
- (id)tagsForTagIDs:(id)arg1 maximumCachedAge:(double)arg2 predicate:(CDUnknownBlockType)arg3;
- (id)tagsForTagIDs:(id)arg1 predicate:(CDUnknownBlockType)arg2;

@end

