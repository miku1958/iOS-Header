//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>

#import <PhotoLibraryServices/PLAssetsdSyncServiceProtocol-Protocol.h>

@class NSObject, NSString, PLFileSystemAssetImporter, PLLibraryServicesManager, PLXPCTransaction;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface PLAssetsdSyncService : PLAbstractLibraryServicesManagerService <PLAssetsdSyncServiceProtocol>
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_group> *_updateGroup;
    PLXPCTransaction *_libraryTransaction;
    PLFileSystemAssetImporter *_importer;
    PLLibraryServicesManager *_libraryServicesManager;
    BOOL _didFinalizeRestore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addAsset:(id)arg1 toAlbumsForUUID:(id)arg2;
- (void)_cleanupAlbumMetadataAsideFilesAfterRestore;
- (id)_fileRestoreExclusionPaths;
- (void)_finalizeOTARestoreEndedAndRecreateAlbums:(BOOL)arg1;
- (void)_linkPathsAside:(id)arg1;
- (id)_readRestoreAlbumMetadataForAlbum:(id)arg1;
- (void)_recoverAsideFiles:(id)arg1;
- (void)_updatePendingCountForMissingAsset:(id)arg1;
- (void)_updateRestoredAssetWithUUID:(id)arg1 paths:(id)arg2 fixAddedDate:(BOOL)arg3;
- (void)finalizeOTARestoreRecreatingAlbums:(BOOL)arg1;
- (id)initWithLibraryServicesManager:(id)arg1;
- (void)updateRestoredAssetWithUUID:(id)arg1 paths:(id)arg2 fixAddedDate:(BOOL)arg3;

@end
