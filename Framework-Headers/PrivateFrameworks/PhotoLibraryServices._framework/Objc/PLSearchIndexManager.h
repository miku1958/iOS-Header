//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCountedSet, NSDictionary, NSString, PLClientServerTransaction, PLKeywordManager, PLPhotoLibrary, PLSearchIndexDateFormatter, PLThrottleTimer, PSIDatabase;
@protocol OS_dispatch_queue;

@interface PLSearchIndexManager : NSObject
{
    PLSearchIndexDateFormatter *_dateFormatter;
    PLKeywordManager *_keywordManager;
    PLPhotoLibrary *_photoLibrary;
    PSIDatabase *_db;
    PLThrottleTimer *_throttleTimer;
    PLClientServerTransaction *_serverTransaction;
    NSString *_searchIndexDirectory;
    NSDictionary *_searchMetadata;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_uuidsToProcess;
    BOOL _receivedUpdatesWhileIndexing;
    BOOL _hasScheduledCloseIndex;
    BOOL _hasValidSearchIndex;
    BOOL _isTrackingRebuild;
    long long _rebuildReason;
    long long _updateState;
    BOOL __indexing;
    CDUnknownBlockType __inqAfterIndexingDidIterate;
    NSCountedSet *__pauseReasons;
}

@property (getter=_isIndexing, setter=_setIndexing:) BOOL _indexing; // @synthesize _indexing=__indexing;
@property (copy, nonatomic, setter=_setInqAfterIndexingDidIterate:) CDUnknownBlockType _inqAfterIndexingDidIterate; // @synthesize _inqAfterIndexingDidIterate=__inqAfterIndexingDidIterate;
@property (readonly, copy, nonatomic) NSCountedSet *_pauseReasons; // @synthesize _pauseReasons=__pauseReasons;
@property (readonly) unsigned long long enqueuedUUIDsCount;
@property (readonly, getter=isIndexingPaused) BOOL indexingPaused;

+ (id)_databasePathInDirectory:(id)arg1;
+ (id)_defaultDatabaseDirectory;
+ (id)defaultDatabasePath;
+ (id)fetchAlbumUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)fetchAlbumsWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)fetchAssetUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)fetchAssetsWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)fetchMemoriesWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)fetchMemoryUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)sharedInstance;
- (id)_cxindexProgressPath;
- (id)_dbMetadataPath;
- (id)_dbPath;
- (void)_inqAddUpdatesWithUUIDs:(id)arg1 forKey:(id)arg2;
- (void)_inqCloseIndexIfAbleOrForce:(BOOL)arg1 isDelete:(BOOL)arg2;
- (void)_inqCloseSearchIndexAndDelete:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_inqDropClientServerTransactionIfNeeded;
- (void)_inqEndTrackingRebuildIfNeeded;
- (void)_inqEndTrackingUpdateIfNeeded;
- (unsigned long long)_inqEnqueuedUUIDsCountForceLoad:(BOOL)arg1;
- (void)_inqEnsurePhotoLibraryExists;
- (void)_inqEnsureSearchIndexExists;
- (void)_inqEnsureSearchMetadataExists;
- (void)_inqEnsureSearchProgressExists;
- (BOOL)_inqHasValidSearchIndex;
- (BOOL)_inqIsIndexingPaused;
- (void)_inqResetSearchIndexWithReason:(long long)arg1 dropCompletion:(CDUnknownBlockType)arg2;
- (void)_inqResumeIndexingIfNeeded;
- (void)_inqScheduleCloseIndexIfNeeded;
- (void)_inqSetIndexingPaused:(BOOL)arg1 reason:(id)arg2;
- (void)_inqStartTrackingRebuildWithReason:(long long)arg1;
- (void)_inqStartTrackingUpdateIfAble;
- (void)_inqTakeClientServerTransactionIfNeeded;
- (void)_inqTrackTransitionFromUpdateScheduledToUpdatingIfAble;
- (BOOL)_inqUpdateLocale;
- (BOOL)_inqUpdateMetadata:(id)arg1 forKey:(id)arg2 logMessage:(id)arg3;
- (BOOL)_inqUpdateSceneTaxonomySHA:(id)arg1;
- (void)_localeDidChange:(id)arg1;
- (id)_oldDbPath;
- (void)_onQueueAsync:(CDUnknownBlockType)arg1;
- (void)_onQueueAsyncWithDelay:(double)arg1 perform:(CDUnknownBlockType)arg2;
- (void)_onQueueSync:(CDUnknownBlockType)arg1;
- (BOOL)_removeFileAtPath:(id)arg1 description:(id)arg2;
- (void)_setIndexingPaused:(BOOL)arg1 synchronously:(BOOL)arg2 reason:(id)arg3;
- (void)_throttleTimerFire:(id)arg1;
- (id)_updatesAfterConvertingDetectedFacesToAssetsInUpdates:(id)arg1;
- (id)_updatesAfterConvertingPersonsToAssetsInUpdates:(id)arg1;
- (id)_uuidsToRemoveFromUUIDsToProcess:(id)arg1;
- (void)applyUpdates:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)closeSearchIndexWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)dropSearchIndexWithCompletion:(CDUnknownBlockType)arg1;
- (void)ensureSearchIndexExists;
- (id)initWithSearchIndexDirectory:(id)arg1;
- (void)pauseIndexingWithReason:(id)arg1;
- (void)registerSceneTaxonomySHA:(id)arg1;
- (void)resetSearchIndexWithReason:(long long)arg1 dropCompletion:(CDUnknownBlockType)arg2;
- (void)unpauseIndexingWithReason:(id)arg1;

@end

