//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/PLPhotoBakedThumbnailsDelegate-Protocol.h>

@class NSCountedSet, NSMutableArray, NSMutableDictionary, NSRecursiveLock, PLXPCTransaction;

@interface PLImageWriter : NSObject <PLPhotoBakedThumbnailsDelegate>
{
    NSMutableArray *_highPriorityJobs;
    NSCountedSet *_unfinishedHighPriorityJobs;
    unsigned long long _highPrioritySequentialJobCount;
    NSMutableArray *_lowPriorityJobs;
    NSCountedSet *_unfinishedLowPriorityJobs;
    NSRecursiveLock *_jobsLock;
    int _unfinishedJobCount;
    int _jobQueueAvailabilityToken;
    BOOL _writerThreadRunning;
    BOOL _databaseIsCorrupt;
    PLXPCTransaction *_transaction;
    NSMutableDictionary *_inProgressAvalancheFds;
}

+ (void)decorateThumbnail:(id)arg1 inContext:(struct CGContext *)arg2;
+ (void)decorateThumbnailInRect:(struct CGRect)arg1 size:(struct CGSize)arg2 duration:(id)arg3 inContext:(struct CGContext *)arg4 format:(int)arg5;
+ (BOOL)setAdjustmentsForNewPhoto:(id)arg1 withEffectFilterName:(id)arg2 filteredImagePath:(id)arg3 isSubstandardRender:(BOOL)arg4;
+ (id)sharedWriter;
- (void)_decorateThumbnail:(id)arg1;
- (void)_decrementJobCount:(id)arg1;
- (void)_enablePhotoStreamJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_fetchPhotoAssetForMediaGroupUUID:(id)arg1 moc:(id)arg2;
- (id)_fetchPhotoAssetForUUID:(id)arg1 moc:(id)arg2;
- (void)_handleAvalancheCrashRecovery:(id)arg1;
- (void)_handlePhotoIrisCrashRecoveryForPhotoIndicatorFiles:(id)arg1;
- (void)_handlePhotoIrisCrashRecoveryForVideos:(id)arg1;
- (void)_incrementJobCount:(id)arg1;
- (BOOL)_isHighPriorityJob:(id)arg1;
- (void)_photoIrisPairingDidSucceed:(BOOL)arg1 fileIndicatorPath:(id)arg2 photoAsset:(id)arg3 photoLibrary:(id)arg4;
- (void)_postJobQueueNotificationIsAvailable:(BOOL)arg1;
- (void)_processAutodeleteEmptyAlbumJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processAvalancheJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processAvalanchesValidationJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processBatchImageJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processCrashRecoveryJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processDaemonJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processDeletePhotoStreamAssetsWithUUIDs:(id)arg1 withReason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_processDeletePhotoStreamDataJob:(id)arg1 withReason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_processImageJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processImportImageJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processIngestedSyncedAssetJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processJob:(id)arg1;
- (void)_processReenqueueAssetUUIDsToPhotoStreamJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processSavePhotoStreamImageToCameraRollJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processSyncedVideoSaveJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processVideoJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processVideoSaveJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_removeInProgressExtendedAttributesForFileAtURL:(id)arg1;
- (void)_removeTransientKeys:(id)arg1;
- (void)_setAdjustmentsForNewVideo:(id)arg1 withAdjustmentsDictionary:(id)arg2;
- (BOOL)_transferVideoIncomingPathToVideoDestinationPath:(id)arg1 shouldRemoveIncoming:(BOOL *)arg2 error:(id *)arg3;
- (void)_writerThread;
- (id)cameraAssetPathForNewAssetWithExtension:(id)arg1;
- (BOOL)canEnqueueJob:(id)arg1;
- (void)dealloc;
- (void)decorateThumbnail:(id)arg1 inContext:(struct CGContext *)arg2;
- (BOOL)enqueueJob:(id)arg1;
- (id)init;
- (id)pathForNewAssetPathAtAlbumDirectoryPath:(id)arg1 assetType:(unsigned int)arg2 extension:(id)arg3;
- (void)setAvalancheInProgress:(BOOL)arg1 uuid:(id)arg2;
- (id)uuidFromIncomingFilename:(id)arg1;

@end

