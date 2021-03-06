//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class AssetCollectionInfo, MSASAssetCollection, NSArray, NSDictionary, NSMutableArray, NSString;

@interface PLCloudSharedAssetSaveJob : PLCloudSharingJob
{
    BOOL _replacingOriginalWithDerivative;
    AssetCollectionInfo *_currentAssetCollectionInfo;
    NSMutableArray *_pendingDownloadNotifications;
    BOOL _isVideo;
    BOOL _isPhotoIris;
    NSString *_currentFilePath;
    NSString *_currentCloudAssetGUID;
    unsigned long long _currentCloudAssetMediaAssetType;
    NSString *_cloudAlbumGUID;
    NSString *_cloudPersonID;
    MSASAssetCollection *_currentCloudAssetCollection;
    NSArray *_assetCollectionInfos;
    NSArray *_cloudAssetGUIDsToDelete;
    long long _jobType;
    NSDictionary *_mstreamdInfoDictionary;
}

@property (strong, nonatomic) NSArray *assetCollectionInfos; // @synthesize assetCollectionInfos=_assetCollectionInfos;
@property (strong, nonatomic) NSString *cloudAlbumGUID; // @synthesize cloudAlbumGUID=_cloudAlbumGUID;
@property (strong, nonatomic) NSArray *cloudAssetGUIDsToDelete; // @synthesize cloudAssetGUIDsToDelete=_cloudAssetGUIDsToDelete;
@property (strong, nonatomic) NSString *cloudPersonID; // @synthesize cloudPersonID=_cloudPersonID;
@property (strong, nonatomic) MSASAssetCollection *currentCloudAssetCollection; // @synthesize currentCloudAssetCollection=_currentCloudAssetCollection;
@property (strong, nonatomic) NSString *currentCloudAssetGUID; // @synthesize currentCloudAssetGUID=_currentCloudAssetGUID;
@property (nonatomic) unsigned long long currentCloudAssetMediaAssetType; // @synthesize currentCloudAssetMediaAssetType=_currentCloudAssetMediaAssetType;
@property (strong, nonatomic) NSString *currentFilePath; // @synthesize currentFilePath=_currentFilePath;
@property (nonatomic) BOOL isPhotoIris; // @synthesize isPhotoIris=_isPhotoIris;
@property (nonatomic) BOOL isVideo; // @synthesize isVideo=_isVideo;
@property (nonatomic) long long jobType; // @synthesize jobType=_jobType;
@property (strong, nonatomic) NSDictionary *mstreamdInfoDictionary; // @synthesize mstreamdInfoDictionary=_mstreamdInfoDictionary;

+ (id)_dcimDirectoryForFileURL:(id)arg1;
+ (BOOL)_lightweightReimportCacheDirectoryExists;
+ (id)_lightweightReimportPhotoCloudSharingAlbumInfoForAlbumWithCloudGUID:(id)arg1 cloudPersonID:(id)arg2;
+ (void)assetsdProcessMetadataForAssetCollections:(id)arg1 inAlbum:(id)arg2 personID:(id)arg3 info:(id)arg4 libraryServicesManager:(id)arg5;
+ (void)deleteCloudSharedAssetsWithCloudGUIDs:(id)arg1 info:(id)arg2;
+ (void)downloadPendingAssetsForPersonID:(id)arg1 info:(id)arg2;
+ (id)newCloudSharedAssetSaveJobFromAProcessThatIsNotAssetsd;
+ (id)nextDCIMSaveFileURLForCloudPersonID:(id)arg1 cloudAlbumGUID:(id)arg2 fileExtension:(id)arg3 assetUUID:(id)arg4;
+ (id)pathForInFlightAssetCollectionWithGUID:(id)arg1 mediaAssetType:(unsigned long long)arg2;
+ (void)processMetadataForAssetCollections:(id)arg1 inAlbum:(id)arg2 personID:(id)arg3 info:(id)arg4;
+ (void)replaceRecentlyUploadedOriginalWithDerivativeForCollection:(id)arg1 inAlbum:(id)arg2 personID:(id)arg3;
+ (void)saveCloudSharedAssetAtPath:(id)arg1 forAssetCollection:(id)arg2 mediaAssetType:(unsigned long long)arg3 albumGUID:(id)arg4 personID:(id)arg5 info:(id)arg6 shouldPrioritize:(BOOL)arg7;
- (void).cxx_destruct;
- (void)_addDownloadNotification:(id)arg1;
- (id)_createPlaceHolderInSharedAlbum:(id)arg1;
- (void)_incrementDerivativesCount:(long long)arg1 thumbnailsCount:(long long)arg2;
- (unsigned long long)_insertionIndexForAsset:(id)arg1 inAlbum:(id)arg2;
- (BOOL)_parseISO6709String:(id)arg1 outLatitude:(double *)arg2 outLongitude:(double *)arg3;
- (void)_performSaveTransactionAndWaitOnLibrary:(id)arg1 transaction:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_prefetchLimitForDerivatives:(long long *)arg1 thumbnails:(long long *)arg2;
- (void)_processInFlightCommentsForAsset:(id)arg1 inAlbum:(id)arg2 inPhotoLibrary:(id)arg3;
- (BOOL)_processInflightAsset:(id)arg1 mediaAssetType:(unsigned long long)arg2;
- (BOOL)_processSaveAssetWithPlaceholderKind:(short)arg1 withAssetDataFilePath:(id)arg2;
- (void)_updateAsset:(id)arg1 withImageFileURL:(id)arg2;
- (void)_updatePhotoIrisPropertiesIfNecessaryForAsset:(id)arg1 inManagedObjectContext:(id)arg2;
- (short)attemptLightweightReimportAssetData;
- (long long)daemonOperation;
- (void)dealloc;
- (id)description;
- (void)encodeToXPCObject:(id)arg1;
- (void)executeDaemonOperationDeleteAssetJobType;
- (void)executeDaemonOperationDownloadPendingAssetsJobType;
- (void)executeDaemonOperationReplaceRecentlyUploadedOriginalJobType;
- (void)executeDaemonOperationSaveAssetJobType;
- (void)executeDaemonOperationSaveAssetMetadataForCollectionsJobType;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (id)initWithAssetsdClient:(id)arg1;
- (BOOL)isProcessingThumbnail;
- (short)placeHolderKindFromAssetMetadataType:(unsigned long long)arg1;
- (void)run;
- (void)runDaemonSide;
- (void)setupSaveAssetMetadataForCollectionsJobForAssetCollections:(id)arg1 album:(id)arg2 personID:(id)arg3 info:(id)arg4;

@end

