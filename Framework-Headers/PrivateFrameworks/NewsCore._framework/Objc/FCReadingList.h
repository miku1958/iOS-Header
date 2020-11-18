//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCPrivateDataController.h>

#import <NewsCore/FCOfflineArticleContributing-Protocol.h>
#import <NewsCore/FCOperationThrottlerDelegate-Protocol.h>

@class FCCloudContext, FCMTWriterLock, FCObservable, NSMutableDictionary, NSString;
@protocol FCOperationThrottler;

@interface FCReadingList : FCPrivateDataController <FCOperationThrottlerDelegate, FCOfflineArticleContributing>
{
    FCObservable *_articleIDsToDownload;
    long long _articleDownloadOptions;
    NSMutableDictionary *_entriesByArticleID;
    FCCloudContext *_cloudContext;
    id<FCOperationThrottler> _articleIDsAvailableForOfflineReadingUpdateThrottler;
    FCMTWriterLock *_itemsLock;
}

@property (readonly, nonatomic) long long articleDownloadOptions; // @synthesize articleDownloadOptions=_articleDownloadOptions;
@property (strong, nonatomic) id<FCOperationThrottler> articleIDsAvailableForOfflineReadingUpdateThrottler; // @synthesize articleIDsAvailableForOfflineReadingUpdateThrottler=_articleIDsAvailableForOfflineReadingUpdateThrottler;
@property (readonly, nonatomic) FCObservable *articleIDsToDownload; // @synthesize articleIDsToDownload=_articleIDsToDownload;
@property (strong, nonatomic) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSMutableDictionary *entriesByArticleID; // @synthesize entriesByArticleID=_entriesByArticleID;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) FCMTWriterLock *itemsLock; // @synthesize itemsLock=_itemsLock;
@property (readonly) Class superclass;

+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (id)desiredKeys;
+ (id)localStoreFilename;
+ (unsigned long long)localStoreVersion;
+ (BOOL)requiresBatchedSync;
+ (BOOL)requiresHighPriorityFirstSync;
+ (BOOL)requiresPushNotificationSupport;
- (void).cxx_destruct;
- (void)_addedArticleIDs:(id)arg1 removedArticleIDs:(id)arg2 eventInitiationLevel:(long long)arg3;
- (id)_allEntriesInReadingList;
- (id)_allSortedEntriesInReadingList;
- (void)_fetchArticleIDsAvailableForOfflineReadingWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)_maxCountOfArticlesAvailableOfflineWithConfiguration:(id)arg1;
- (id)_readingListEntryForArticleID:(id)arg1;
- (void)addArticleToReadingList:(id)arg1;
- (void)addArticleToReadingList:(id)arg1 eventInitiationLevel:(long long)arg2 origin:(unsigned long long)arg3;
- (void)addObserver:(id)arg1;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1;
- (id)allNonConsumedArticleIDs;
- (id)allNonConsumedArticleIDsIntersectingSet:(id)arg1;
- (id)allSortedArticleIDsInReadingList;
- (BOOL)canHelpRestoreZoneName:(id)arg1;
- (unsigned long long)countOfAllArticlesSavedOutsideOfNewsSince:(id)arg1;
- (id)dateArticleWasAdded:(id)arg1;
- (void)expressInterestInOfflineArticlesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;
- (BOOL)isArticleOnReadingList:(id)arg1;
- (void)loadLocalCachesFromStore;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(CDUnknownBlockType)arg2;
- (void)prepareToContributeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)recordsForRestoringZoneName:(id)arg1;
- (void)removeArticleFromReadingList:(id)arg1;
- (void)removeObserver:(id)arg1;
- (BOOL)shouldHideHeadline:(id)arg1;

@end
