//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetsLibraryServices/PLPhotoLibraryPathManagerCore.h>

@class NSString, PLImportFileManager;

@interface PLPhotoLibraryPathManagerDCIM : PLPhotoLibraryPathManagerCore
{
    unsigned int _persistedAlbumDataDirectoryExists;
    NSString *_photoDataDirectory;
    NSString *_photoDataCachesDirectory;
    NSString *_photoDataSearchDirectory;
    NSString *_dcimDirectory;
    NSString *_cplAssetsDirectory;
    NSString *_cmmAssetsDirectory;
    NSString *_journalsDirectory;
    NSString *_projectsDirectory;
    NSString *_changeStoreDatabasePath;
    NSString *_thumbnailsDirectory;
    NSString *_thumbnailsV2Directory;
    BOOL _assetAlbumOrderStructurePathCreated;
    PLImportFileManager *_importFileManager;
}

@property (strong, nonatomic) PLImportFileManager *importFileManager; // @synthesize importFileManager=_importFileManager;

+ (id)systemLibraryPathManager;
- (void).cxx_destruct;
- (id)addToPath:(id)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)assetBaseFilenameForAdjustmentFilePath:(id)arg1;
- (id)convertPhotoLibraryPathType:(unsigned char)arg1;
- (id)createPathsForNewLibraries;
- (id)externalDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)getImportFileManager;
- (id)iTunesPhotosLastSyncMetadataFilePath;
- (id)iTunesPhotosSyncCurrentLibraryUUIDPath;
- (id)iTunesPhotosSyncDirectory;
- (id)iTunesPhotosSyncMetadataFilePath;
- (id)iTunesSyncedAssetMetadataThumbnailsDirectory;
- (id)iTunesSyncedAssetSmallThumbnailsDirectory;
- (id)iTunesSyncedAssetsDirectory;
- (id)iTunesSyncedFaceAlbumThumbnailsDirectory;
- (id)iTunesSyncedFaceDataDirectory;
- (id)initWithLibraryURL:(id)arg1;
- (id)pathToAssetAlbumOrderStructure;
- (id)pathToAssetsToAlbumsMapping;
- (id)pathsForClientAccess:(id)arg1;
- (id)pathsForExternalWriters;
- (id)pathsForPermissionCheck;
- (id)pathsGroupedByAssetBasePathFromFilePaths:(id)arg1;
- (id)persistedAlbumDataDirectoryCreateIfNeeded:(BOOL)arg1 error:(id *)arg2;
- (id)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)photoMetadataDirectory;
- (id)photoMetadataDirectoryForMediaInMainDirectory:(id)arg1;
- (id)photoMutationsDirectory;
- (id)photosDatabasePath;
- (id)privateCacheDirectoryWithSubType:(unsigned char)arg1;
- (id)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)syncInfoPath;

@end
