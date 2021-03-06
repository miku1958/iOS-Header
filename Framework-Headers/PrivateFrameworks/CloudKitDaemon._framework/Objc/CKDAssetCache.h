//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDMMCS, CKSQLitePool, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;
@protocol NSObject, OS_dispatch_queue;

@interface CKDAssetCache : NSObject
{
    BOOL _isUnitTestingAccount;
    BOOL _hasMigrated;
    BOOL _isEvictionScheduled;
    BOOL _didDrop;
    int _fileDownloadPathFd;
    CKDMMCS *_MMCS;
    CKSQLitePool *_dbPool;
    NSString *_fileDownloadPath;
    NSString *_applicationBundleID;
    NSString *_dbPath;
    NSString *_fileStagingPath;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_opQueue;
    long long _checkoutCount;
    id<NSObject> _assetHandleExpirationNotificationObserver;
    NSMutableDictionary *_volumeUUIDByVolumeIndex;
    NSMutableDictionary *_volumeIndexByVolumeUUID;
    NSMutableSet *_deferredDeletedAssetHandles;
    NSMutableDictionary *_deferredLastUsedTimeByTrackingUUID;
}

@property (weak, nonatomic) CKDMMCS *MMCS; // @synthesize MMCS=_MMCS;
@property (strong, nonatomic) NSString *applicationBundleID; // @synthesize applicationBundleID=_applicationBundleID;
@property (strong, nonatomic) id<NSObject> assetHandleExpirationNotificationObserver; // @synthesize assetHandleExpirationNotificationObserver=_assetHandleExpirationNotificationObserver;
@property (nonatomic) long long checkoutCount; // @synthesize checkoutCount=_checkoutCount;
@property (strong, nonatomic) NSString *dbPath; // @synthesize dbPath=_dbPath;
@property (readonly, nonatomic) CKSQLitePool *dbPool; // @synthesize dbPool=_dbPool;
@property (strong, nonatomic) NSMutableSet *deferredDeletedAssetHandles; // @synthesize deferredDeletedAssetHandles=_deferredDeletedAssetHandles;
@property (strong, nonatomic) NSMutableDictionary *deferredLastUsedTimeByTrackingUUID; // @synthesize deferredLastUsedTimeByTrackingUUID=_deferredLastUsedTimeByTrackingUUID;
@property (nonatomic) BOOL didDrop; // @synthesize didDrop=_didDrop;
@property (strong, nonatomic) NSString *fileDownloadPath; // @synthesize fileDownloadPath=_fileDownloadPath;
@property (nonatomic) int fileDownloadPathFd; // @synthesize fileDownloadPathFd=_fileDownloadPathFd;
@property (strong, nonatomic) NSString *fileStagingPath; // @synthesize fileStagingPath=_fileStagingPath;
@property (nonatomic) BOOL hasMigrated; // @synthesize hasMigrated=_hasMigrated;
@property BOOL isEvictionScheduled; // @synthesize isEvictionScheduled=_isEvictionScheduled;
@property (nonatomic) BOOL isUnitTestingAccount; // @synthesize isUnitTestingAccount=_isUnitTestingAccount;
@property (strong, nonatomic) NSOperationQueue *opQueue; // @synthesize opQueue=_opQueue;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) NSMutableDictionary *volumeIndexByVolumeUUID; // @synthesize volumeIndexByVolumeUUID=_volumeIndexByVolumeUUID;
@property (strong, nonatomic) NSMutableDictionary *volumeUUIDByVolumeIndex; // @synthesize volumeUUIDByVolumeIndex=_volumeUUIDByVolumeIndex;

+ (id)_sharedCachesByPath;
+ (id)_sharedCachesQueue;
+ (id)assetCacheWithApplicationBundleID:(id)arg1 assetDirectoryContext:(id)arg2 didInit:(BOOL *)arg3 error:(id *)arg4;
+ (int)openFdForDownloadPath:(id)arg1 error:(id *)arg2;
+ (void)registerExpirationForAssetHandles;
- (void).cxx_destruct;
- (unsigned long long)_clearForced:(BOOL)arg1 group:(id)arg2;
- (void)_deleteAssetHandlesAndUnregisterItemsForUnmountedAssetVolumesWithDB:(id)arg1;
- (unsigned long long)_evictDownloadedFilesEvictionInfo:(id)arg1;
- (unsigned long long)_evictDownloadedFilesWithDatabase:(id)arg1 evictionInfo:(id)arg2;
- (unsigned long long)_evictWithEvictionInfo:(id)arg1;
- (void)_expireAssetHandlesWithExpiryDate:(id)arg1 group:(id)arg2;
- (void)_expireAssetHandlesWithGroup:(id)arg1;
- (id)_getAssetHandlesForCachedButNotRegisteredMMCSItems:(id)arg1 error:(id *)arg2;
- (id)_getAssetHandlesForDownloadedMMCSItems:(id)arg1 error:(id *)arg2;
- (id)_initWithApplicationBundleID:(id)arg1 assetDirectoryContext:(id)arg2 error:(id *)arg3;
- (void)_resetAssetInflightUsingDB:(id)arg1;
- (id)_saveData:(id)arg1 error:(id *)arg2;
- (void)_scheduleEvictionForDownloadedFiles;
- (void)_scheduleExpirationForAssetHandles;
- (void)_setVolumeIndex:(id)arg1 forVolumeUUID:(id)arg2;
- (id)assetHandleWithCachedPath:(id)arg1;
- (void)cancelExpiryTimer;
- (void)checkAssetHandlesForRegisteredMMCSItems:(id)arg1;
- (void)cleanup;
- (void)clearAssetCache;
- (unsigned long long)clearForced:(BOOL)arg1;
- (unsigned long long)countAssetCacheItems;
- (void)dealloc;
- (void)deferredStopTrackingAssetHandlesByItemIDs:(id)arg1;
- (void)deferredUpdateLastTimeUsedForUUID:(id)arg1;
- (id)deviceIDForVolumeIndex:(id)arg1;
- (void)drop;
- (unsigned long long)evictAllFilesForced:(BOOL)arg1;
- (id)existingOrNewVolumeIndexForDeviceID:(id)arg1;
- (id)existingOrNewVolumeIndexForDeviceID:(id)arg1 usingDB:(id)arg2;
- (id)existingOrNewVolumeIndexForVolumeUUID:(id)arg1;
- (id)existingOrNewVolumeIndexForVolumeUUID:(id)arg1 usingDB:(id)arg2;
- (void)expireAssetHandlesIfNecessaryWithGroup:(id)arg1;
- (id)findAssetHandleForItemID:(unsigned long long)arg1 error:(id *)arg2;
- (void)forgetVolumeUUID:(id)arg1;
- (BOOL)initDatabaseWithError:(id *)arg1;
- (BOOL)parseCachedPath:(id)arg1 assetHandleUUID:(id *)arg2 assetSignature:(id *)arg3;
- (BOOL)parseCachedPath:(id)arg1 assetHandleUUIDString:(id *)arg2 assetSignatureString:(id *)arg3;
- (unsigned long long)predictedEvictedSizeForAllFilesForced:(BOOL)arg1;
- (void)scheduleUnregisterItemIDsAndDeleteAssetHandlesWithEvictionInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)scheduleUnregisterItemsAndDeleteUnregisteredAssetHandlesWithIDs:(id)arg1;
- (void)scheduleUnregisterItemsAndDeleteUnregisteredAssetHandlesWithIDs:(id)arg1 deleteUnregisteredAssetHandlesWithIDs:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setupPersistentStateAtStartup;
- (void)showAssetCache;
- (BOOL)startTrackingGetAssetHandles:(id)arg1 operationType:(long long)arg2 error:(id *)arg3;
- (BOOL)startTrackingRegisterOrPutAssetHandles:(id)arg1 operationType:(long long)arg2 error:(id *)arg3;
- (void)stopTrackingAssetHandlesByItemIDs:(id)arg1;
- (id)trackCachedButNotRegisteredMMCSItems:(id)arg1 error:(id *)arg2;
- (id)trackDownloadedData:(id)arg1 signature:(id)arg2 error:(id *)arg3;
- (id)trackDownloadedMMCSItems:(id)arg1 error:(id *)arg2;
- (void)unregisterDeferredItemIDs:(id)arg1 andDeleteAssetHandles:(id)arg2 usingDB:(id)arg3;
- (void)unregisterItemIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)updateAssetHandlesForChunkedMMCSItems:(id)arg1 error:(id *)arg2;
- (BOOL)updateAssetHandlesForGetMMCSItems:(id)arg1 error:(id *)arg2;
- (BOOL)updateAssetHandlesForPutMMCSItems:(id)arg1 error:(id *)arg2;
- (id)updateAssetHandlesForRegisteredMMCSItems:(id)arg1 error:(id *)arg2;
- (void)updateDeferredLastAccessTimeForUUIDsUsingDB:(id)arg1;
- (id)volumeUUIDWithVolumeIndex:(id)arg1;

@end

