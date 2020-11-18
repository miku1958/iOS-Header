//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class AssetCollectionInfo, MSASAssetCollection, NSArray, NSDictionary, NSString;

@interface PLCloudSharedAssetSaveJob : PLCloudSharingJob
{
    BOOL _replacingOriginalWithDerivative;
    AssetCollectionInfo *_currentAssetCollectionInfo;
    BOOL _isVideo;
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
@property (nonatomic) BOOL isVideo; // @synthesize isVideo=_isVideo;
@property (nonatomic) long long jobType; // @synthesize jobType=_jobType;
@property (strong, nonatomic) NSDictionary *mstreamdInfoDictionary; // @synthesize mstreamdInfoDictionary=_mstreamdInfoDictionary;

+ (id)_dcimDirectoryForFileURL:(id)arg1;
+ (BOOL)_lightweightReimportCacheDirectoryExists;
+ (id)_lightweightReimportPhotoCloudSharingAlbumInfoForAlbumWithCloudGUID:(id)arg1 cloudPersonID:(id)arg2;
+ (void)deleteCloudSharedAssetsWithCloudGUIDs:(id)arg1 info:(id)arg2;
+ (void)downloadPendingAssetsForPersonID:(id)arg1 info:(id)arg2;
+ (id)nextDCIMSaveFileURLForCloudPersonID:(id)arg1 cloudAlbumGUID:(id)arg2 fileExtension:(id)arg3;
+ (id)pathForInFlightAssetCollectionWithGUID:(id)arg1 mediaAssetType:(unsigned long long)arg2;
+ (id)placeholderImageProperties;
+ (void)processMetadataForAssetCollections:(id)arg1 inAlbum:(id)arg2 personID:(id)arg3 info:(id)arg4;
+ (void)replaceRecentlyUploadedOriginalWithDerivativeForCollection:(id)arg1 inAlbum:(id)arg2 personID:(id)arg3;
+ (void)saveCloudSharedAssetAtPath:(id)arg1 forAssetCollection:(id)arg2 mediaAssetType:(unsigned long long)arg3 albumGUID:(id)arg4 personID:(id)arg5 info:(id)arg6 shouldPrioritize:(BOOL)arg7;
- (BOOL)_createPlaceHolderInSharedAlbum:(id)arg1;
- (unsigned long long)_insertionIndexForAsset:(id)arg1 inAlbum:(id)arg2;
- (BOOL)_parseISO6709String:(id)arg1 outLatitude:(double *)arg2 outLongitude:(double *)arg3;
- (void)_processInFlightCommentsForAsset:(id)arg1 inAlbum:(id)arg2 inPhotoLibrary:(id)arg3;
- (BOOL)_processSaveAssetWithPlaceholderKind:(short)arg1 withAssetDataFilePath:(id)arg2;
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
- (id)init;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (BOOL)isProcessingThumbnail;
- (short)placeHolderKindFromAssetMetadataType:(unsigned long long)arg1;
- (void)run;
- (void)runDaemonSide;
- (void)saveJobAssetWithPlaceholderKind:(short)arg1;

@end

