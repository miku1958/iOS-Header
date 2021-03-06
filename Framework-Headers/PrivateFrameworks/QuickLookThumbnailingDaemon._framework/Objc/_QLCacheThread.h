//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLookThumbnailingDaemon/QLDiskCacheDelegate-Protocol.h>

@class NSLock, NSOperationQueue, NSString, QLCacheCleanUpDatabaseThread, QLDiskCache, QLDiskCacheQueryOperation, QLMemoryCache, QLServerThread;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface _QLCacheThread : NSObject <QLDiskCacheDelegate>
{
    QLCacheCleanUpDatabaseThread *_cleanUpDatabaseThread;
    NSOperationQueue *_diskCacheQueryOperationQueue;
    NSOperationQueue *_memoryCacheQueryOperationQueue;
    QLDiskCacheQueryOperation *_currentDiskCacheQueryOperation;
    QLDiskCache *_diskCache;
    QLMemoryCache *_memoryCache;
    NSLock *_modeLock;
    BOOL _serverThreadIsIdle;
    unsigned long long _currentMode;
    unsigned long long _missedCount;
    unsigned long long _hitCount;
    NSObject<OS_dispatch_source> *_lowDiskSpaceSource;
    NSObject<OS_dispatch_queue> *_lowDiskSpaceSourceQueue;
    BOOL _lowDiskSpace;
    BOOL _waitingForCleanup;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSObject<OS_dispatch_queue> *_writeCoalesceQueue;
    CDUnknownBlockType _writeBlocks[10];
    CDUnknownBlockType _cleanupBlocks[10];
    NSObject<OS_dispatch_source> *_drainTimer;
    NSObject<OS_os_transaction> *_writeTransaction;
    QLServerThread *_serverThread;
}

@property (strong) QLCacheCleanUpDatabaseThread *cleanUpDatabaseThread; // @synthesize cleanUpDatabaseThread=_cleanUpDatabaseThread;
@property (strong) QLDiskCacheQueryOperation *currentDiskCacheQueryOperation; // @synthesize currentDiskCacheQueryOperation=_currentDiskCacheQueryOperation;
@property (readonly) unsigned long long currentMode; // @synthesize currentMode=_currentMode;
@property (readonly) QLDiskCache *diskCache; // @synthesize diskCache=_diskCache;
@property (strong) NSOperationQueue *diskCacheQueryOperationQueue; // @synthesize diskCacheQueryOperationQueue=_diskCacheQueryOperationQueue;
@property unsigned long long hitCount; // @synthesize hitCount=_hitCount;
@property (readonly) BOOL lowDiskSpace; // @synthesize lowDiskSpace=_lowDiskSpace;
@property (strong) NSObject<OS_dispatch_source> *lowDiskSpaceSource; // @synthesize lowDiskSpaceSource=_lowDiskSpaceSource;
@property (strong) NSObject<OS_dispatch_queue> *lowDiskSpaceSourceQueue; // @synthesize lowDiskSpaceSourceQueue=_lowDiskSpaceSourceQueue;
@property (readonly) QLMemoryCache *memoryCache; // @synthesize memoryCache=_memoryCache;
@property unsigned long long missedCount; // @synthesize missedCount=_missedCount;
@property (readonly) NSString *modeDescription;
@property (strong) NSLock *modeLock; // @synthesize modeLock=_modeLock;
@property (weak) QLServerThread *serverThread; // @synthesize serverThread=_serverThread;
@property BOOL serverThreadIsIdle; // @synthesize serverThreadIsIdle=_serverThreadIsIdle;
@property (nonatomic) BOOL shouldRemoveThumbnailsForDeletedFiles;
@property BOOL waitingForCleanup; // @synthesize waitingForCleanup=_waitingForCleanup;

+ (long long)defaultCacheSize;
- (void).cxx_destruct;
- (void)_addThumbnailRequestIntoDiskCacheQueryQueue:(id)arg1;
- (id)_allThumbnailsEnumerateWithEnumerator:(id)arg1;
- (void)_cleanUpDatabaseDone;
- (void)_destroyDrainTimer;
- (void)_dispatchThumbnailRequestInServerThread:(id)arg1;
- (void)_drainPendingBlocks;
- (void)_drainPendingBlocksNow;
- (void)_registerMachPortForLowDiskSpaceNotification;
- (void)_scheduleBlockDrain;
- (void)_scheduledDrainPendingBlocks;
- (void)_sendThumbnailData:(id)arg1 forThumbnailRequest:(id)arg2;
- (void)_setLowDiskSpace:(BOOL)arg1;
- (void)_setMode:(unsigned long long)arg1;
- (BOOL)_shouldQuitCleanUpDatabaseModeForMode:(unsigned long long)arg1;
- (BOOL)_shouldQuitClosedModeForMode:(unsigned long long)arg1;
- (BOOL)_shouldQuitLowSpaceModeForMode:(unsigned long long)arg1;
- (BOOL)_shouldQuitPauseModeForMode:(unsigned long long)arg1;
- (BOOL)_shouldQuitResetingModeForMode:(unsigned long long)arg1;
- (BOOL)_shouldQuitWorkingModeForMode:(unsigned long long)arg1;
- (void)_thumbnailHasBeenCancelled:(id)arg1;
- (void)_unregisterMachPortForLowDiskSpaceNotification;
- (void)_unscheduleBlockDrain;
- (void)_updateLowDisk;
- (void)_updateMode;
- (void)_waitForEndOfDatabaseCleanup;
- (void)_willStartCleanUpDatabaseModeFromMode:(unsigned long long)arg1;
- (void)_willStartClosedModeFromMode:(unsigned long long)arg1;
- (void)_willStartLowSpaceModeFromMode:(unsigned long long)arg1;
- (void)_willStartPauseModeFromMode:(unsigned long long)arg1;
- (void)_willStartResetingModeFromMode:(unsigned long long)arg1;
- (void)_willStartWorkingModeFromMode:(unsigned long long)arg1;
- (BOOL)addNoThumbnailIntoCache:(id)arg1;
- (BOOL)addThumbnailIntoCache:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bitsPerComponent:(unsigned long long)arg4 bitsPerPixel:(unsigned long long)arg5 bytesPerRow:(unsigned long long)arg6 bitmapInfo:(unsigned int)arg7 bitmapData:(id)arg8 metadata:(id)arg9 flavor:(int)arg10 contentRect:(struct CGRect)arg11 badgeType:(unsigned long long)arg12 externalGeneratorDataHash:(unsigned long long)arg13;
- (BOOL)addThumbnailRequest:(id)arg1;
- (id)allThumbnailsForFPItemID:(id)arg1;
- (id)allThumbnailsForFileIdentifier:(id)arg1;
- (id)allThumbnailsForIno:(unsigned long long)arg1 fsid:(struct fsid)arg2;
- (id)allThumbnailsInfo;
- (id)cacheInfo;
- (void)closeCache;
- (id)contentDescriptionForURL:(struct __CFURL *)arg1;
- (void)databaseCorruptionDetected;
- (void)enqueueWriting:(CDUnknownBlockType)arg1;
- (void)exitImmediately;
- (void)forceCommit;
- (void)forceCommitAndClose;
- (unsigned long long)hitToSaveCount;
- (id)initWithServerThread:(id)arg1 cacheSize:(long long)arg2 location:(id)arg3;
- (BOOL)isCacheOpened;
- (BOOL)isIdle;
- (id)itemsAfterFilteringOutItemsWithMissingThumbnails:(id)arg1;
- (void)noteRemoteThumbnailMissingForItems:(id)arg1;
- (void)noteRemoteThumbnailPresentForItems:(id)arg1;
- (void)openCache;
- (void)prepareToExit;
- (long long)purgeOnMountPoint:(id)arg1 withUrgency:(int)arg2 beforeDate:(id)arg3;
- (long long)purgeableSpaceOnMountPoint:(id)arg1 withUrgency:(int)arg2 beforeDate:(id)arg3;
- (BOOL)removeCachedThumbnailsFromUninstalledFileProvidersWithRemainingFileProviderIdentifiers:(id)arg1;
- (void)reset;
- (void)serverIsIdle;
- (void)serverIsWorking;
- (BOOL)setLastHitDateOfAllCachedThumbnailsToDate:(id)arg1;
- (void)startWriting;
- (void)stopWriting;
- (unsigned long long)thumbnailInMemoryToSaveCount;
- (void)updateMode;

@end

