//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet;
@protocol PLThumbPersistenceManager;

@interface PLThumbnailManager : NSObject
{
    NSMutableDictionary *_thumbManagersByFormat;
    id<PLThumbPersistenceManager> _lastUsedThumbManager;
    int _lastUsedThumbManagerFormatID;
    NSLock *_thumbManagersLock;
    NSMutableSet *_previouslyRequestedThumbnailFixOIDs;
    NSMutableSet *_requestedThumbnailFixAssets;
    NSMutableArray *_alreadyFailedAssetObjectIDsForRebuild;
    NSLock *_fixLock;
    id _observerToken;
}

@property (strong, nonatomic) id observerToken; // @synthesize observerToken=_observerToken;
@property (readonly, strong, nonatomic) NSMutableDictionary *thumbManagersByFormat; // @synthesize thumbManagersByFormat=_thumbManagersByFormat;

+ (id)_allPossibleThumbnailFormatIDs;
+ (id)_allowedForCameraPreviewWellPredicate;
+ (BOOL)_cameraPreviewWellMetadataLoadAndUpdateIfNeeded:(id *)arg1;
+ (id)_cameraPreviewWellMetadataQueue;
+ (BOOL)_compareAsset:(id)arg1 toMetadata:(id)arg2;
+ (int)_configurationThumbnailFormat;
+ (int)_configurationThumbnailVersion;
+ (id)_fetchCameraPreviewWellMetadata;
+ (void)_refetchAndSaveCameraPreviewWellImage;
+ (void)_saveCameraPreviewWellImage:(struct CGImage *)arg1 assetUUID:(id)arg2;
+ (int)_supportedThumbnailFormatIDFromGeneralFormatID:(int)arg1;
+ (BOOL)_thumbnailChangeContainsOnlyTableDeprecationsFromVersion:(int)arg1 toVersion:(int)arg2 fromFormat:(int)arg3 toFormat:(int)arg4;
+ (void)_updateCameraPreviewWellMetadataFromAsset:(id)arg1;
+ (void)addRebuildThumbnailsRequest;
+ (BOOL)assetIsAllowedForCameraPreviewWell:(id)arg1;
+ (BOOL)assetIsCameraPreviewWellAsset:(id)arg1;
+ (id)cameraPreviewWellAssetUUIDFromPersistedFile;
+ (id)cameraPreviewWellImageQueue;
+ (BOOL)cameraPreviewWellSupportedOnCurrentDevice;
+ (id)defaultThumbnailManager;
+ (id)defaultThumbnailsDirectory;
+ (id)defaultThumbnailsDirectoryV2;
+ (void)handleRebuildThumbnailRequestPersistentFailure;
+ (BOOL)hasDeprecationsOnly;
+ (BOOL)hasExceededRebuildThumbnailRequestLimit;
+ (BOOL)hasRebuildThumbnailsRequest;
+ (BOOL)hasThumbnailVersionMismatch;
+ (BOOL)isMissingThumbnailTables;
+ (BOOL)isRebuildingThumbnails;
+ (void)rebuildAllMissingThumbnails;
+ (void)refetchAndSaveCameraPreviewWellImageIfNecessaryForAssetDidSave:(id)arg1;
+ (void)removeObsoleteMetadata;
+ (void)removeRebuildThumbnailsRequest:(const char *)arg1;
+ (void)removeThumbnailTablesUnsupportedOnly:(BOOL)arg1;
+ (void)resetThumbnails;
+ (void)saveCameraPreviewWellImageForAsset:(id)arg1;
+ (id)supportedThumbnailFormatIDs;
+ (id)supportedThumbnailFormatIDsForDeviceConfiguration:(id)arg1;
+ (id)supportedThumbnailFormats;
+ (int)thumbnailVersionCurrent;
+ (BOOL)useImageTableForFormat:(int)arg1;
- (id)_dataForAsset:(id)arg1 format:(int)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 imageDataOffset:(int *)arg8 imageDataFormat:(int *)arg9;
- (id)_dataForInFlightAsset:(id)arg1 format:(int)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 imageDataOffset:(int *)arg8;
- (void)_discardAlreadyFailedAssetObjectIDsForRebuild;
- (void)_horse_setThumbnailsForPhoto:(id)arg1 withImage:(id)arg2;
- (long long)_rebuildAssetThumbnailsWithLimit:(int)arg1 error:(id *)arg2;
- (id)_tableDescriptions;
- (id)_thumbManagerForFormatID:(int)arg1;
- (id)beginThumbnailSafePropertyUpdatesOnAsset:(id)arg1;
- (BOOL)copyThumbnailsFromAsset:(id)arg1 toAsset:(id)arg2;
- (id)dataForPhoto:(id)arg1 format:(int)arg2 allowPlaceholder:(BOOL)arg3 width:(int *)arg4 height:(int *)arg5 bytesPerRow:(int *)arg6 dataWidth:(int *)arg7 dataHeight:(int *)arg8 imageDataOffset:(int *)arg9;
- (void)dealloc;
- (void)deleteThumbnailsWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 uuid:(id)arg3;
- (void)discardCachedThumbnailDownscalerContexts;
- (void)endThumbnailSafePropertyUpdatesOnAsset:(id)arg1 withToken:(id)arg2;
- (id)init;
- (id)newThumbnailForAsset:(id)arg1 format:(id)arg2;
- (id)placeholderDataForFormat:(int)arg1 photoImageSize:(struct CGSize)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 imageDataOffset:(int *)arg8;
- (struct __CFDictionary *)placeholderThumbnailDataByFormatID;
- (id)preheatItemSourceForFormatID:(int)arg1;
- (void)setThumbnails:(struct __CFDictionary *)arg1 forPhoto:(id)arg2;
- (void)setThumbnailsForPhoto:(id)arg1 withImage:(id)arg2;
- (id)thumbnailJPEGPathForPhoto:(id)arg1;

@end
