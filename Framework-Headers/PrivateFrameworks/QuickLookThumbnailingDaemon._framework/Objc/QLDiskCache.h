//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary, NSString, QLCacheIndexDatabase, QLCacheMMAPBlobDatabase;
@protocol QLDiskCacheDelegate;

@interface QLDiskCache : NSObject
{
    NSString *_path;
    QLCacheIndexDatabase *_indexDatabase;
    QLCacheMMAPBlobDatabase *_blobDatabase;
    NSString *_metaDataFilePath;
    NSString *_dirtyFilePath;
    NSString *_exclusivePath;
    NSString *_resetFilePath;
    NSString *_resetReasonPath;
    BOOL _dirtyForDelegate;
    NSLock *_databaseLock;
    BOOL _opened;
    NSMutableDictionary *_metaData;
    BOOL _metaDataDirty;
    long long _writingCount;
    int _exclusiveFD;
    BOOL _hasDirtyLock;
    id<QLDiskCacheDelegate> _delegate;
}

@property (weak) id<QLDiskCacheDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly) unsigned long long fileEntryCount;
@property (readonly) float fragmentation;
@property (readonly, nonatomic) BOOL hasDirtyLock; // @synthesize hasDirtyLock=_hasDirtyLock;
@property (readonly) BOOL isOpened; // @synthesize isOpened=_opened;
@property (readonly) unsigned long long maxSize;
@property (readonly) unsigned long long maxThumbnailLifeTime;
@property (strong) NSMutableDictionary *metaData; // @synthesize metaData=_metaData;
@property BOOL metaDataDirty; // @synthesize metaDataDirty=_metaDataDirty;
@property (strong) NSString *metaDataFilePath; // @synthesize metaDataFilePath=_metaDataFilePath;
@property (readonly) NSString *path; // @synthesize path=_path;
@property (readonly) unsigned long long reserveBufferCount;
@property (readonly) unsigned long long reserveBufferSize;
@property (readonly) unsigned long long size;
@property (readonly) unsigned long long thumbnailCount;
@property (readonly) long long writingCount; // @synthesize writingCount=_writingCount;

+ (id)defaultLocation;
+ (void)setCacheLocationForTesting:(id)arg1;
+ (void)setupCacheAtLocationIfNecessary:(id)arg1;
- (void).cxx_destruct;
- (id)_checkConsistency;
- (void)_cleanupDirtyLock;
- (void)_cleanupForceResetAtNextLaunch;
- (void)_close;
- (void)_closeWhatIsOpen;
- (void)_createDirtyLockInformDelegate:(BOOL)arg1;
- (unsigned long long)_deleteBlobArrayFromDatabase:(id)arg1;
- (void)_discardThumbnailDataForReset:(id)arg1;
- (BOOL)_open;
- (void)_removeDirtyLock;
- (void)_resetWithReason:(id)arg1;
- (BOOL)_setThumbnailData:(id)arg1;
- (id)blobDatabase;
- (id)checkConsistency;
- (void)checkpoint;
- (unsigned long long)cleanup;
- (unsigned long long)cleanupDeletedFiles;
- (void)close;
- (BOOL)discardReservedBuffer:(id)arg1;
- (void)discardThumbnailDataBatchForReset:(id)arg1;
- (void)do:(CDUnknownBlockType)arg1;
- (BOOL)doReading:(CDUnknownBlockType)arg1;
- (BOOL)doWriting:(CDUnknownBlockType)arg1;
- (id)enumeratorForAllFilesUbiquitousFiles:(BOOL)arg1 withExtraInfo:(BOOL)arg2;
- (id)enumeratorForAllThumbnailsWithFileIdentifier:(id)arg1;
- (id)enumeratorForThumbnailRequests:(id)arg1;
- (void)forceResetAtNextLaunch;
- (unsigned long long)freeDiskSpaceForNewThumbnails;
- (id)indexDatabase;
- (id)initWithPathLocation:(id)arg1 cacheSize:(long long)arg2 cacheThread:(id)arg3;
- (id)itemsAfterFilteringOutItemsWithMissingThumbnails:(id)arg1;
- (id)lastCrapWithDate:(id *)arg1;
- (id)lastResetWithDate:(id *)arg1;
- (id)metaDataForKey:(id)arg1;
- (void)noteRemoteThumbnailMissingForItems:(id)arg1;
- (void)noteRemoteThumbnailPresentForItems:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)open;
- (BOOL)removeCachedThumbnailsFromUninstalledFileProvidersWithRemainingFileProviderIdentifiers:(id)arg1;
- (void)removeFilesWithFileInfo:(id)arg1;
- (unsigned long long)removeThumbnailsOlderThanDate:(id)arg1;
- (id)reserveBufferForData:(id)arg1;
- (id)reserveBufferWithLength:(unsigned long long)arg1;
- (void)reset;
- (BOOL)setLastHitDateOfAllCachedThumbnailsToDate:(id)arg1;
- (void)setMetaData:(id)arg1 forKey:(id)arg2;
- (unsigned long long)sizeSumOfThumbnailsOlderThanDate:(id)arg1;
- (void)updateHitCount:(id)arg1 forFileIdentifier:(id)arg2;
- (BOOL)validateReservedBuffer:(id)arg1;
- (void)writeThumbnailDataBatch:(id)arg1;

@end

