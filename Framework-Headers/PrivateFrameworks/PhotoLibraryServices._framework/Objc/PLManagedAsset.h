//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

#import <PhotoLibraryServices/PLMomentAssetData_Private-Protocol.h>
#import <PhotoLibraryServices/UIActivityItemSource-Protocol.h>
#import <PhotoLibraryServices/_PLImageLoadingAsset-Protocol.h>

@class CLLocation, NSArray, NSData, NSDate, NSDictionary, NSError, NSManagedObject, NSNumber, NSObject, NSOrderedSet, NSSet, NSString, NSURL, PLAdditionalAssetAttributes, PLCloudFeedAssetsEntry, PLCloudMaster, PLMoment, UIImage;
@protocol NSCopying, PLCloudSharedAlbumProtocol;

@interface PLManagedAsset : PLManagedObject <UIActivityItemSource, PLMomentAssetData_Private, _PLImageLoadingAsset>
{
    BOOL _didPrepareForDeletion;
    BOOL _isRegisteredForChanges;
    BOOL _needsMomentUpdate;
    BOOL _disableDupeAnalysis;
    BOOL _disableFileSystemPersistency;
    BOOL _didLoadReverseGeo;
    BOOL _isLocatedAtHome;
    BOOL _setCustomCreationDate;
    BOOL _setCustomLocation;
    NSString *_reverseGeoDescription;
    CLLocation *_cachedLocation;
    NSURL *cachedNonPersistedVideoPlaybackURL;
    NSDate *cachedNonPersistedVideoPlaybackURLExpiration;
    NSError *cachedNonPersistedVideoPlaybackURLError;
    UIImage *inflightImageInMemory;
    NSString *inflightImagePath;
    UIImage *inflightIndexSheetImage;
    NSDictionary *inflightMetadata;
}

@property (strong, nonatomic) NSDate *addedDate; // @dynamic addedDate;
@property (strong, nonatomic) PLAdditionalAssetAttributes *additionalAttributes; // @dynamic additionalAttributes;
@property (readonly, strong, nonatomic) NSDate *adjustmentTimestamp; // @dynamic adjustmentTimestamp;
@property (strong, nonatomic) NSOrderedSet *adjustments; // @dynamic adjustments;
@property (strong, nonatomic) NSSet *albumOrders; // @dynamic albumOrders;
@property (strong, nonatomic) NSSet *albums; // @dynamic albums;
@property (strong, nonatomic) NSSet *albumsBeingCustomKeyAssetFor; // @dynamic albumsBeingCustomKeyAssetFor;
@property (strong, nonatomic) NSSet *albumsBeingKeyAssetFor; // @dynamic albumsBeingKeyAssetFor;
@property (strong, nonatomic) NSSet *albumsBeingSecondaryKeyAssetFor; // @dynamic albumsBeingSecondaryKeyAssetFor;
@property (strong, nonatomic) NSSet *albumsBeingTertiaryKeyAssetFor; // @dynamic albumsBeingTertiaryKeyAssetFor;
@property (readonly, copy, nonatomic) NSSet *allFileURLs;
@property (readonly, copy, nonatomic) NSArray *allUniformTypeIdentifiers;
@property (readonly, nonatomic) BOOL allowsWallpaperEditing;
@property (readonly, strong, nonatomic) NSURL *assetURL;
@property (nonatomic) int avalanchePickType; // @dynamic avalanchePickType;
@property (strong, nonatomic) NSString *avalancheUUID; // @dynamic avalancheUUID;
@property (strong, nonatomic) CLLocation *cachedLocation; // @synthesize cachedLocation=_cachedLocation;
@property (strong, nonatomic) NSURL *cachedNonPersistedVideoPlaybackURL; // @synthesize cachedNonPersistedVideoPlaybackURL;
@property (strong, nonatomic) NSError *cachedNonPersistedVideoPlaybackURLError; // @synthesize cachedNonPersistedVideoPlaybackURLError;
@property (strong, nonatomic) NSDate *cachedNonPersistedVideoPlaybackURLExpiration; // @synthesize cachedNonPersistedVideoPlaybackURLExpiration;
@property (strong, nonatomic) NSString *cloudAssetGUID; // @dynamic cloudAssetGUID;
@property (readonly, strong, nonatomic) NSString *cloudAssetGUID;
@property (strong, nonatomic) NSString *cloudBatchID; // @dynamic cloudBatchID;
@property (strong, nonatomic) NSDate *cloudBatchPublishDate; // @dynamic cloudBatchPublishDate;
@property (strong, nonatomic) NSString *cloudCollectionGUID; // @dynamic cloudCollectionGUID;
@property (strong, nonatomic) NSOrderedSet *cloudComments; // @dynamic cloudComments;
@property (strong, nonatomic) NSNumber *cloudDownloadRequests; // @dynamic cloudDownloadRequests;
@property (strong, nonatomic) PLCloudFeedAssetsEntry *cloudFeedAssetsEntry; // @dynamic cloudFeedAssetsEntry;
@property (nonatomic) BOOL cloudHasCommentsByMe; // @dynamic cloudHasCommentsByMe;
@property (nonatomic) BOOL cloudHasCommentsConversation; // @dynamic cloudHasCommentsConversation;
@property (nonatomic) BOOL cloudHasUnseenComments; // @dynamic cloudHasUnseenComments;
@property (nonatomic) BOOL cloudIsDeletable; // @dynamic cloudIsDeletable;
@property (nonatomic) BOOL cloudIsMyAsset; // @dynamic cloudIsMyAsset;
@property (strong, nonatomic) NSDate *cloudLastViewedCommentDate; // @dynamic cloudLastViewedCommentDate;
@property (nonatomic) short cloudLocalState; // @dynamic cloudLocalState;
@property (strong, nonatomic) PLCloudMaster *cloudMaster;
@property (readonly, nonatomic) NSString *cloudOwnerEmail;
@property (readonly, nonatomic) NSString *cloudOwnerFirstName;
@property (readonly, nonatomic) NSString *cloudOwnerFullName;
@property (strong, nonatomic) NSString *cloudOwnerHashedPersonID; // @dynamic cloudOwnerHashedPersonID;
@property (readonly, nonatomic) NSString *cloudOwnerLastName;
@property (nonatomic) short cloudPlaceholderKind; // @dynamic cloudPlaceholderKind;
@property (strong, nonatomic) NSSet *cloudResources;
@property (strong, nonatomic) NSDate *cloudServerPublishDate; // @dynamic cloudServerPublishDate;
@property (readonly, nonatomic) id<PLCloudSharedAlbumProtocol> cloudShareAlbum;
@property (nonatomic) BOOL complete; // @dynamic complete;
@property (strong, nonatomic) NSString *creatorBundleID;
@property (strong, nonatomic) NSString *customCollectionName;
@property (strong, nonatomic) NSString *customCollectionUUID;
@property (strong, nonatomic) NSString *customMomentName;
@property (strong, nonatomic) NSString *customMomentUUID;
@property (strong, nonatomic) NSDate *dateCreated; // @dynamic dateCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSString *directory; // @dynamic directory;
@property (nonatomic) BOOL disableDupeAnalysis; // @synthesize disableDupeAnalysis=_disableDupeAnalysis;
@property (nonatomic) BOOL disableFileSystemPersistency; // @synthesize disableFileSystemPersistency=_disableFileSystemPersistency;
@property (nonatomic) double duration; // @dynamic duration;
@property (strong, nonatomic) NSString *editorBundleID;
@property unsigned long long effectiveThumbnailIndex;
@property (readonly, strong, nonatomic) NSData *embeddedThumbnailData;
@property (nonatomic) short embeddedThumbnailHeight;
@property (nonatomic) int embeddedThumbnailLength;
@property (nonatomic) int embeddedThumbnailOffset;
@property (nonatomic) short embeddedThumbnailWidth;
@property (nonatomic) long long externalUsageIntent;
@property (strong, nonatomic) NSData *faceRegions;
@property (strong, nonatomic) NSSet *faces; // @dynamic faces;
@property (nonatomic) BOOL favorite; // @dynamic favorite;
@property (readonly, copy, nonatomic) NSString *fileExtension;
@property (readonly, copy, nonatomic) NSSet *filePathsWithoutThumbs;
@property (readonly, copy, nonatomic) NSURL *fileURLForLargeThumbnailFile;
@property (readonly, copy, nonatomic) NSURL *fileURLForPrebakedLandscapeScrubberThumbnails;
@property (readonly, copy, nonatomic) NSURL *fileURLForPrebakedPortraitScrubberThumbnails;
@property (readonly, copy, nonatomic) NSURL *fileURLForThumbnailFile;
@property (strong, nonatomic) NSString *filename; // @dynamic filename;
@property (nonatomic) CDStruct_c3b9c2ee gpsCoordinate;
@property (nonatomic) BOOL hasAdjustments; // @dynamic hasAdjustments;
@property (readonly, nonatomic) BOOL hasEmbeddedThumbnail;
@property (readonly) unsigned long long hash;
@property (nonatomic) short height; // @dynamic height;
@property (nonatomic) BOOL hidden; // @dynamic hidden;
@property (nonatomic) short highDynamicRangeType; // @dynamic highDynamicRangeType;
@property (nonatomic) struct CGSize imageSize;
@property (strong, nonatomic) NSString *importSessionID;
@property (readonly, strong, nonatomic) UIImage *inflightImage;
@property (strong, nonatomic) UIImage *inflightImageInMemory; // @synthesize inflightImageInMemory;
@property (strong, nonatomic) NSString *inflightImagePath; // @synthesize inflightImagePath;
@property (strong, nonatomic) UIImage *inflightIndexSheetImage; // @synthesize inflightIndexSheetImage;
@property (strong, nonatomic) NSDictionary *inflightMetadata; // @synthesize inflightMetadata;
@property (readonly, nonatomic) BOOL isAudio;
@property (readonly, nonatomic) BOOL isCloudPhotoLibraryAsset;
@property (readonly, nonatomic) BOOL isCloudSharedAsset;
@property (readonly, nonatomic) BOOL isHDVideo;
@property (nonatomic) BOOL isInFlight;
@property (readonly, nonatomic) BOOL isJPEG;
@property (readonly, nonatomic) BOOL isMogul;
@property (readonly, nonatomic) BOOL isPhoto;
@property (readonly, nonatomic) BOOL isPhotoIris;
@property (readonly, nonatomic) BOOL isPhotoIrisPlaceholder;
@property (readonly, nonatomic) BOOL isPhotoStreamPhoto;
@property (nonatomic, setter=setSearchDataValid:) BOOL isSearchDataValid;
@property (readonly, nonatomic) BOOL isStreamedVideo;
@property (readonly, nonatomic) BOOL isUsedByiPhoto;
@property (readonly, nonatomic) BOOL isVideo;
@property (nonatomic) short kind; // @dynamic kind;
@property (nonatomic) short kindSubtype; // @dynamic kindSubtype;
@property (strong, nonatomic) NSDate *lastSharedDate; // @dynamic lastSharedDate;
@property (strong, nonatomic) NSOrderedSet *likeComments; // @dynamic likeComments;
@property (strong, nonatomic) NSOrderedSet *likeComments; // @dynamic likeComments;
@property (strong, nonatomic) CLLocation *location;
@property (strong, nonatomic) NSData *locationData; // @dynamic locationData;
@property (nonatomic) int locationHash;
@property (strong, nonatomic) NSString *longDescription;
@property (readonly, copy, nonatomic) NSURL *mainFileURL;
@property (strong, nonatomic) NSString *mediaGroupUUID; // @dynamic mediaGroupUUID;
@property (strong, nonatomic) NSDate *modificationDate; // @dynamic modificationDate;
@property (strong, nonatomic) PLMoment *moment; // @dynamic moment;
@property (nonatomic) BOOL needsMomentUpdate; // @synthesize needsMomentUpdate=_needsMomentUpdate;
@property (nonatomic) short orientation; // @dynamic orientation;
@property (strong, nonatomic) PLManagedAsset *originalAsset;
@property (strong, nonatomic) NSString *originalAssetsUUID;
@property (strong, nonatomic) NSString *originalFilename;
@property (nonatomic) int originalFilesize;
@property (strong, nonatomic) NSData *originalHash;
@property (nonatomic) short originalHeight;
@property (nonatomic) short originalOrientation;
@property (strong, nonatomic) NSString *originalPath;
@property (nonatomic) short originalWidth;
@property (readonly, copy, nonatomic) NSString *pathForAdjustmentDirectory;
@property (readonly, copy, nonatomic) NSString *pathForLargeDisplayableImageFile;
@property (readonly, copy, nonatomic) NSString *pathForLargeThumbnailFile;
@property (readonly, copy, nonatomic) NSString *pathForLegacySlalomRegionsArchive;
@property (readonly, copy, nonatomic) NSString *pathForMediumThumbnailFile;
@property (readonly, copy, nonatomic) NSString *pathForMetadataDirectory;
@property (readonly, copy, nonatomic) NSString *pathForOriginalFile;
@property (readonly, copy, nonatomic) NSString *pathForPrebakedLandscapeScrubberThumbnails;
@property (readonly, copy, nonatomic) NSString *pathForPrebakedPortraitScrubberThumbnails;
@property (readonly, copy, nonatomic) NSString *pathForPrebakedWildcatThumbnailsFile;
@property (readonly, copy, nonatomic) NSString *pathForTrimmedVideoFile;
@property (readonly, copy, nonatomic) NSString *pathForVideoFile;
@property (readonly, copy, nonatomic) NSString *pathForVideoPreviewFile;
@property (readonly, copy, nonatomic) NSString *pathForXMPFile;
@property (readonly, nonatomic) CDStruct_198678f7 photoIrisStillDisplayTime;
@property (readonly, nonatomic) CDStruct_198678f7 photoIrisVideoDuration;
@property (strong, nonatomic) NSData *placeAnnotationData;
@property (strong, nonatomic) NSString *publicGlobalUUID;
@property (strong, nonatomic) NSData *reverseLocationData;
@property (nonatomic) BOOL reverseLocationDataIsValid;
@property (nonatomic) short savedAssetType; // @dynamic savedAssetType;
@property (strong, nonatomic) NSData *searchCategoryData;
@property (strong, nonatomic) NSManagedObject *searchData; // @dynamic searchData;
@property (strong, nonatomic) CLLocation *shiftedLocation;
@property (nonatomic) BOOL shiftedLocationIsValid;
@property (strong, nonatomic) NSSet *sidecarFiles; // @dynamic sidecarFiles;
@property (nonatomic) double sortToken; // @dynamic sortToken;
@property (readonly, copy, nonatomic) NSArray *sortedSidecarFiles;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *textBadgeString;
@property (nonatomic) int thumbnailIndex; // @dynamic thumbnailIndex;
@property (strong, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned long long totalCommentsCount;
@property (strong, nonatomic) NSDate *trashedDate; // @dynamic trashedDate;
@property (nonatomic) short trashedState; // @dynamic trashedState;
@property (strong, nonatomic) NSString *uniformTypeIdentifier; // @dynamic uniformTypeIdentifier;
@property (readonly, strong, nonatomic) NSObject<NSCopying> *uniqueObjectID;
@property (nonatomic) BOOL userCloudSharedLiked;
@property (strong, nonatomic) id uuid; // @dynamic uuid;
@property (nonatomic) short visibilityState; // @dynamic visibilityState;
@property (readonly, strong, nonatomic) UIImage *wallpaperFullScreenImage;
@property (nonatomic) short width; // @dynamic width;

+ (unsigned long long)CPLAssetHDRTypeFromPLPhotoHDRType:(short)arg1;
+ (short)PLPhotoHDRTypeFromCPLAssetHDRType:(unsigned long long)arg1;
+ (id)URLForMetadataWithExtension:(id)arg1 forMediaInMainDirectory:(id)arg2 withFilename:(id)arg3;
+ (id)_assetsWithCloudAssetUUIDs:(id)arg1 inLibrary:(id)arg2 fetchLimit:(unsigned long long)arg3;
+ (short)_correctedOrientation:(short)arg1;
+ (id)_dataFromCPLPlaceAnnotation:(id)arg1;
+ (id)_insertAssetIntoPhotoLibrary:(id)arg1 mainFileURL:(id)arg2 savedAssetType:(short)arg3 replacementUUID:(id)arg4 imageSource:(struct CGImageSource **)arg5 imageData:(id *)arg6 isPlaceholder:(BOOL)arg7 deleteFileOnFailure:(BOOL)arg8;
+ (BOOL)_isPlayableVideoCloudResource:(id)arg1;
+ (BOOL)_isPlayableVideoUTI:(struct __CFString *)arg1;
+ (long long)_locationDataFormat:(id)arg1;
+ (id)_newPathAndDateDictionariesByAssetUUIDFromFetchResults:(id)arg1;
+ (id)_placeAnnotationFromAnnotationData:(id)arg1;
+ (id)_ptpCalendar;
+ (id)_ptpEventInfoIsolationQueue;
+ (id)_resourceForQualityClass:(unsigned short)arg1 onAsset:(id)arg2;
+ (id)_supportedAssetTypesForUpload;
+ (id)abbreviatedMetadataDirectoryForDirectory:(id)arg1;
+ (long long)adjustmentBaseVersionFromImageFormat:(int)arg1;
+ (long long)adjustmentBaseVersionFromPFAdjustmentsBaseVersion:(long long)arg1;
+ (id)allCloudSharedAssetsInLibrary:(id)arg1;
+ (id)assetBaseFilenameForAdjustmentFilePath:(id)arg1;
+ (short)assetTypeFromUniformTypeIdentifier:(id)arg1;
+ (BOOL)assetTypeIsSupportedForUpload:(short)arg1;
+ (id)assetWithCloudAssetUUID:(id)arg1 inLibrary:(id)arg2;
+ (id)assetWithObjectID:(id)arg1 inLibrary:(id)arg2;
+ (id)assetWithObjectID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)assetWithUUID:(id)arg1 inLibrary:(id)arg2;
+ (id)assetWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)assetsByCloudAssetUUID:(id)arg1 inLibrary:(id)arg2;
+ (id)assetsLibraryURLWithUUID:(id)arg1 extension:(id)arg2;
+ (id)assetsToRetryInLibrary:(id)arg1 limit:(unsigned long long)arg2;
+ (id)assetsToUploadInitiallyInLibrary:(id)arg1 limit:(unsigned long long)arg2;
+ (id)assetsWithCloudAssetUUIDs:(id)arg1 inLibrary:(id)arg2;
+ (id)assetsWithSavedAssetType:(short)arg1 inManagedObjectContext:(id)arg2;
+ (id)assetsWithUUIDs:(id)arg1 inLibrary:(id)arg2;
+ (id)assetsWithUUIDs:(id)arg1 includePendingChanges:(BOOL)arg2 inLibrary:(id)arg3;
+ (id)baseSearchIndexPredicate;
+ (id)bestCreationDateForAssetAtURL:(id)arg1 modificationDate:(id *)arg2 creationDateString:(id *)arg3;
+ (id)cloudAssetsInLibrary:(id)arg1;
+ (id)cloudSharedAssetsWithGUIDs:(id)arg1 inLibrary:(id)arg2;
+ (id)convertKey:(unsigned long long)arg1 toBases:(id)arg2;
+ (unsigned long long)countUsedAssetsWithKind:(short)arg1 excludeTrashed:(BOOL)arg2 excludeInvisible:(BOOL)arg3 excludeCloudShared:(BOOL)arg4 inManagedObjectContext:(id)arg5;
+ (id)createCloudPhotoLibraryAssetWithAssetRecord:(id)arg1 withCloudMaster:(id)arg2 inLibrary:(id)arg3;
+ (void)createMastersInLibrary:(id)arg1;
+ (id)createPTPEventKeyForImportSessionID:(id)arg1 createDate:(id)arg2 filename:(id)arg3 value:(id)arg4;
+ (id)dcfCompliantNameForFilename:(id)arg1 createDate:(id)arg2 size:(int)arg3;
+ (id)dcfFormatChecker;
+ (id)diagnosticFilePathForMainFilePath:(id)arg1;
+ (struct CGSize)dimensionsForAVAsset:(id)arg1;
+ (struct CGSize)dimensionsForVideoAtURL:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)eventInfoForPTP;
+ (id)extensionForFullsizeThumbnailFile;
+ (id)extensionForLargeThumbnailFile;
+ (id)extensionForMediumThumbnailFile;
+ (void)extractDirectory:(id *)arg1 andFilename:(id *)arg2 fromMainFileURL:(id)arg3;
+ (int)feedEntryThumbnailFormat;
+ (id)fetchPredicateForLegacyRequiredResourcesLocallyAvailable;
+ (id)fileURLFromAssetURL:(id)arg1 photoLibrary:(id)arg2;
+ (void)fixupCloudPhotoLibraryAsset:(id)arg1 withCloudMaster:(id)arg2 inLibrary:(id)arg3;
+ (int)formatForThumbnailGeneration;
+ (int)fullSizeImageFormat;
+ (BOOL)guaranteedFlashOffForAssetAtURL:(id)arg1;
+ (int)imageFormatFromAdjustmentBaseVersion:(long long)arg1;
+ (id)incompleteAssetsInManagedObjectContext:(id)arg1;
+ (int)indexSheetBakedFormat;
+ (int)indexSheetUnbakedFormat;
+ (id)insertAssetIntoPhotoLibrary:(id)arg1 mainFileURL:(id)arg2 savedAssetType:(short)arg3 replacementUUID:(id)arg4 imageSource:(struct CGImageSource **)arg5 imageData:(id *)arg6;
+ (id)insertAssetIntoPhotoLibrary:(id)arg1 mainFileURL:(id)arg2 savedAssetType:(short)arg3 replacementUUID:(id)arg4 imageSource:(struct CGImageSource **)arg5 imageData:(id *)arg6 isPlaceholder:(BOOL)arg7 deleteFileOnFailure:(BOOL)arg8;
+ (id)insertInManagedObjectContext:(id)arg1;
+ (BOOL)isOrphanedMediaGroupUUID:(id)arg1;
+ (BOOL)isValidFileExtensionForImport:(id)arg1;
+ (id)keyPathsForValuesAffectingGpsCoordinate;
+ (id)keyPathsForValuesAffectingImageSize;
+ (id)keyPathsForValuesAffectingIsJPEG;
+ (id)keyPathsForValuesAffectingIsPhotoStreamPhoto;
+ (int)landscapeScrubberThumbnailFormat;
+ (int)largestNonJPEGThumbnailFormat;
+ (id)listOfSyncedProperties;
+ (CDStruct_c3b9c2ee)locationFromAVAsset:(id)arg1;
+ (void)markAssetAsRecentlyUsed:(id)arg1;
+ (int)masterThumbnailFormat;
+ (id)newImagePropertiesFromImageSource:(struct CGImageSource *)arg1;
+ (id)newLocationDataFromLocation:(id)arg1;
+ (id)newLocationFromLocationData:(id)arg1 timestampIfMissing:(id)arg2;
+ (unsigned long long)numberOfCPLSupportedAssetsOfKind:(short)arg1 inPhotoLibrary:(id)arg2 includingTrashedSinceDate:(id)arg3;
+ (unsigned long long)numberOfCPLSupportedAssetsOfKind:(short)arg1 trashedSinceDate:(id)arg2 inPhotoLibrary:(id)arg3;
+ (unsigned long long)numberOfPushedAssetsInPhotoLibrary:(id)arg1;
+ (unsigned long long)numberOfUnpushedAssetsOfKind:(short)arg1 inPhotoLibrary:(id)arg2;
+ (id)pathAndDateDictionariesForAllIncompleteAssetsInManagedObjectContext:(id)arg1;
+ (id)pathForAdjustmentDirectoryWithMutationsDirectory:(id)arg1;
+ (id)pathForMutationsDirectoryWithDirectory:(id)arg1 filename:(id)arg2;
+ (id)persistedRecentlyUsedGUIDS;
+ (long long)pfAdjustmentsBaseVersionFromAdjustmentBaseVersion:(long long)arg1;
+ (id)photoFromAssetURL:(id)arg1 photoLibrary:(id)arg2;
+ (id)photoFromAssetURL:(id)arg1 photoLibrary:(id)arg2 sidecar:(id *)arg3;
+ (int)portraitScrubberThumbnailFormat;
+ (int)posterThumbnailFormat;
+ (id)predicateForSupportedAssetTypesForUpload;
+ (id)preferredFileExtensionForType:(id)arg1;
+ (id)ptpAssetIDForEventAndFilenameKey:(id)arg1;
+ (void)ptpResetEventAndFilenameMapping;
+ (void)ptpSetAssetIDForEventAndFilenameKey:(id)arg1 value:(id)arg2;
+ (id)recentlyUsedGUIDsPath;
+ (void)resetAssetsForCloudInLibrary:(id)arg1 hardReset:(BOOL)arg2;
+ (struct CGSize)sizeOfImageAtURL:(id)arg1 outOrientation:(short *)arg2;
+ (id)sortedCloudSharedAssetsWithPlaceholderKind:(short)arg1 ascending:(BOOL)arg2 inLibrary:(id)arg3;
+ (int)thumbnailFormat;
+ (unsigned long long)totalSizeOfUnpushedOriginalsInPhotoLibrary:(id)arg1;
+ (id)uniformTypeIdentifierFromPathExtension:(id)arg1 assetType:(short)arg2;
+ (id)uuidFromAssetURL:(id)arg1;
+ (id)uuidFromAssetURL:(id)arg1 fileExtension:(id *)arg2 sidecarIndex:(id *)arg3;
+ (int)wildcatIndexSheetFormat;
+ (int)wildcatPhotoScrubberFormat;
+ (int)wildcatStackFormat;
- (unsigned long long)CPLResourceTypeFromImageFormat:(int)arg1;
- (unsigned long long)CPLResourceTypeFromVideoFormat:(int)arg1;
- (void)_addSidecarFromResource:(id)arg1 inManagedObjectContext:(id)arg2;
- (void)_appendAssetTextDataToAsset:(id)arg1;
- (void)_appendDateCreatedToAsset:(id)arg1 dateFormatter:(id)arg2;
- (void)_appendGEODataToAsset:(id)arg1;
- (void)_appendKeywords:(id)arg1 toAsset:(id)arg2;
- (void)_appendPersonNamesToAsset:(id)arg1;
- (void)_asyncGenerateRenderImageFileWithSize:(struct CGSize)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 adjustmentDataBlob:(id)arg4 originalImageFilePath:(id)arg5 originalImageEXIFOrientation:(long long)arg6 renderedImageFilePath:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (int)_avalancheTypeFromCplBurstFlags:(unsigned long long)arg1;
- (void)_cleanSubstandardFile;
- (id)_compactDebugDescription;
- (void)_computePreCropThumbnailSize:(struct CGSize *)arg1 andPostCropSize:(struct CGSize *)arg2 forOrientedOriginalSize:(struct CGSize)arg3 andCroppedSize:(struct CGSize)arg4 isLargeThumbnail:(BOOL)arg5;
- (void)_copyResourceFileFrom:(id)arg1 to:(id)arg2;
- (unsigned long long)_cplAdjustmentSourceTypeFromPLAdjustmentBaseVersion:(long long)arg1;
- (id)_cplMasterFromCloudMaster:(id)arg1 withCPLResources:(id)arg2;
- (id)_cplMasterResourcesFromCloudMaster:(id)arg1 includeFile:(BOOL)arg2;
- (id)_createCPLResourceFromResourcePath:(id)arg1 withResourceType:(unsigned long long)arg2 uniformTypeIdentifier:(id)arg3 itemIdentifier:(id)arg4;
- (id)_createImageResourceForResourceType:(unsigned long long)arg1 withPreviewImagePath:(id)arg2 itemIdentifier:(id)arg3 forMaster:(BOOL)arg4;
- (id)_createJPEGResourcesFromFullSizeJPEGPath:(id)arg1 withItemIdentifier:(id)arg2 forMaster:(BOOL)arg3;
- (id)_createJPEGResourcesFromFullSizeJPEGPath:(id)arg1 withItemIdentifier:(id)arg2 forMaster:(BOOL)arg3 forResourceTypes:(id)arg4;
- (void)_createPhotoResourcesForMaster:(id)arg1 intoMasterResources:(id)arg2;
- (void)_createTHMFileWithPreviewImage:(id)arg1 thumbnailImage:(id)arg2;
- (id)_createVideoResourceFromVideoURL:(id)arg1 withResourceType:(unsigned long long)arg2 itemIdentifier:(id)arg3 applyVideoAdjustments:(BOOL)arg4 forMaster:(BOOL)arg5;
- (id)_createVideoResourceFromVideoURL:(id)arg1 withResourceType:(unsigned long long)arg2 itemIdentifier:(id)arg3 applyVideoAdjustments:(BOOL)arg4 forMaster:(BOOL)arg5 forPhotoIris:(BOOL)arg6;
- (void)_createVideoResourcesForMaster:(id)arg1 intoMasterResources:(id)arg2;
- (void)_debugPrintAdjustmentState;
- (id)_generatePosterFrameForVideoAtURL:(id)arg1 withResourceType:(unsigned long long)arg2 itemIdentifier:(id)arg3 forMaster:(BOOL)arg4;
- (id)_generateVideoResourcesFromURL:(id)arg1 withIdentifier:(id)arg2 shouldGenerateVideoDerivatives:(BOOL)arg3 forMaster:(BOOL)arg4;
- (void)_getLargestAvailableDataRepresentation:(id *)arg1 type:(id *)arg2;
- (BOOL)_hasFFCDimensions;
- (BOOL)_hasPanoramaDimensions;
- (BOOL)_hasScreenshotDimensions;
- (BOOL)_hasScreenshotMetadata;
- (id)_highDynamicRangeTypeDescription;
- (id)_imageDataForThumbGeneration;
- (id)_insertResource:(id)arg1 forOtherDuplicatedAssetInMaster:(id)arg2 inPhotoLibrary:(id)arg3;
- (BOOL)_isResourceAvailableForResourceType:(unsigned long long)arg1 outResource:(id *)arg2;
- (BOOL)_isResourceType:(unsigned long long)arg1 inResources:(id)arg2;
- (BOOL)_isSavedAssetTypeValid:(short)arg1;
- (BOOL)_isValidUTI:(id)arg1 forService:(id)arg2;
- (id)_kindDescription;
- (void)_loadReverseGeoIfNeeded;
- (id)_localResourcePathForResource:(id)arg1;
- (BOOL)_location:(id)arg1 isEqualToLocationForUpdating:(id)arg2;
- (id)_mediaGroupUUIDForPersistence;
- (id)_mediaGroupUUIDFromPersistence:(id)arg1;
- (BOOL)_migrateKeyedArchiverAdjustmentsToPropertyListSerializationFormat;
- (BOOL)_migrateLegacySLMAdjustments;
- (void)_migrateResourcePathForMaster:(id)arg1;
- (BOOL)_needToSetModificationDate:(id)arg1;
- (id)_newLocationFromFileURL:(id)arg1;
- (long long)_plAdjustmentBaseVersionFromCPLAdjustmentSourceType:(unsigned long long)arg1;
- (id)_prettyDescription;
- (id)_savedAssetTypeDescription;
- (id)_searchDataCreateIfNeeded;
- (id)_serializedPropertyDataFromFilter:(id)arg1;
- (void)_setAdjustmentDataBlob:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 baseVersion:(long long)arg4 editorBundleID:(id)arg5 renderedContentURL:(id)arg6 penultimateRenderedJPEGData:(id)arg7 isSubstandardRender:(BOOL)arg8 fullSizeRenderSize:(struct CGSize)arg9 shouldUpdateAttributes:(BOOL)arg10 useSecureMove:(BOOL)arg11 removeFileOnSuccess:(BOOL)arg12 inManagedObjectContext:(id)arg13;
- (BOOL)_setDefaultSlowMotionAdjustments;
- (void)_setLocationFromCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)_settingsDictionaryFromFilter:(id)arg1;
- (id)_settingsDictionaryFromFilters:(id)arg1 inputImageExtent:(struct CGRect)arg2;
- (id)_sidecarFileMatchingUTI:(struct __CFString *)arg1 requireExactMatch:(BOOL)arg2 requireSort:(BOOL)arg3;
- (struct CGSize)_targetSizeForInputSize:(struct CGSize)arg1 maxPixelSize:(unsigned long long)arg2;
- (void)_updateAssetSubtypeForCPLAssetChange:(id)arg1;
- (void)_updateAssetSubtypeFromCPLAssetSubtype:(unsigned long long)arg1;
- (void)_updateBurstFlagsForCPLAssetChange:(id)arg1;
- (void)_updateOriginalResourceChoice;
- (id)_videoComplementDerivativeResourcesForMaster:(id)arg1;
- (id)_videoComplementResource;
- (id)_videoMetadata;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)addAdjustment;
- (void)addComment:(id)arg1;
- (id)addFaceWithRelativeRect:(struct CGRect)arg1 identifier:(short)arg2 albumUUID:(id)arg3;
- (id)addedDateData;
- (id)adjustedPathForCPLResourceType:(unsigned long long)arg1;
- (id)adjustmentsXMPRepresentation;
- (id)allFileExtensions;
- (void)applyPropertiesChangeToCPLAssetChange:(id)arg1 withMasterID:(id)arg2 inLibrary:(id)arg3;
- (void)applyPropertiesFromAssetChange:(id)arg1 inLibrary:(id)arg2;
- (void)applyPropertiesFromCloudMaster:(id)arg1;
- (void)applyResourceChangeToCPLAsset:(id)arg1 withIdentifier:(id)arg2 forChangeType:(unsigned long long)arg3 inLibrary:(id)arg4;
- (void)applyResourcesFromAssetChange:(id)arg1 inLibrary:(id)arg2;
- (void)applyTrashedState:(short)arg1;
- (double)aspectRatio;
- (id)assetURLForSidecarFile:(id)arg1;
- (id)assetURLWithExtension:(id)arg1;
- (id)assetsLibraryURL;
- (id)avalanchePickDescription;
- (BOOL)avalanchePickTypeIsVisible;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (void)awakeFromSnapshotEvents:(unsigned long long)arg1;
- (BOOL)becomePhotoIrisWithMediaGroupUUID:(id)arg1 videoURL:(id)arg2 videoDuration:(CDStruct_198678f7)arg3 stillDisplayTime:(CDStruct_198678f7)arg4 createSidecar:(BOOL)arg5;
- (unsigned long long)bestResourceTypeForAdjustedFingerPrint;
- (id)calculateReturnPathForForceLarge:(BOOL)arg1 forceUpgradeFromSubstandardIfNecessary:(BOOL)arg2 outImageType:(long long *)arg3;
- (id)cameraMake;
- (BOOL)canMoveToTrash;
- (BOOL)canPerformEditOperation:(unsigned long long)arg1;
- (int)cloudCommentsStatusForOwnedAsset:(BOOL)arg1;
- (BOOL)cloudHasSameOwnerAsAsset:(id)arg1;
- (id)cloudResourceForQualityClass:(unsigned short)arg1;
- (id)cloudResourceForResourceType:(unsigned long long)arg1;
- (long long)cloudSharedAssetPlaceholderKind;
- (long long)compareToAsset:(id)arg1;
- (BOOL)couldBeStoredInDCIM;
- (id)cplAssetChangeWithMasterID:(id)arg1 withChangeType:(unsigned long long)arg2 inLibrary:(id)arg3;
- (unsigned long long)cplAssetSubtypeFromPLAssetSubtype:(short)arg1;
- (unsigned long long)cplBurstFlagsFromPLAvalancheType:(int)arg1;
- (id)cplMasterChangeInLibrary:(id)arg1 forceUpdateForVideo:(BOOL)arg2;
- (id)cplRelationsForAssetInLibrary:(id)arg1;
- (id)cplResourceForResourceType:(unsigned long long)arg1;
- (void)createMasterIfNecessaryInLibrary:(id)arg1;
- (void)createMasterResourcesIn:(id)arg1 inManagedObjectContext:(id)arg2;
- (BOOL)createNewResourcesIn:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)createResourcesForAssetInPhotoLibrary:(id)arg1;
- (id)createResourcesForMaster:(id)arg1 inPhotoLibrary:(id)arg2;
- (id)dateCreatedData;
- (void)dealloc;
- (id)debugFilename;
- (id)decodedFaceRegions;
- (id)deduplicatedCloudMasterResources;
- (void)delete;
- (void)deleteComment:(id)arg1;
- (void)deleteFromDatabaseOnly;
- (void)deleteFromDatabaseOnlyWithReason:(id)arg1;
- (void)deleteWithReason:(id)arg1;
- (id)descriptionForResources;
- (id)descriptionForSidecarFiles;
- (void)didSave;
- (void)didSetCustomDateCreated;
- (void)didSetCustomLocation;
- (void)didTurnIntoFault;
- (void)enumerateUserVisibleResourcesWithBlock:(CDUnknownBlockType)arg1;
- (id)existingCloudMaster;
- (id)faceWithIdentifier:(short)arg1;
- (id)fileURLForAdjustedLargeThumbnailFile;
- (id)fileURLForAdjustedMediumThumbnailFile;
- (id)fileURLForFullsizeRenderImage;
- (id)fileURLForFullsizeRenderVideo;
- (id)fileURLForMediumThumbnailFile;
- (id)fileURLForMetadataWithExtension:(id)arg1;
- (id)fileURLForNonAdjustedLargeThumbnailFile;
- (id)fileURLForNonAdjustedMediumThumbnailFile;
- (id)filteredImage:(id)arg1 withCIContext:(id)arg2;
- (void)generateAndUpdateThumbnailsWithPreviewImage:(id)arg1 thumbnailImage:(id)arg2 fromImageSource:(struct CGImageSource *)arg3 imageData:(id)arg4 thumbnailDataByFormatID:(struct __CFDictionary *)arg5 updateExistingLargePreview:(BOOL)arg6;
- (void)generateLargeThumbnailFileIfNecessary;
- (void)generateThumbnailsWithImageSource:(struct CGImageSource *)arg1 imageData:(id)arg2 updateExistingLargePreview:(BOOL)arg3 allowMediumPreview:(BOOL)arg4 outSmallThumbnail:(id *)arg5 outLargeThumbnail:(id *)arg6;
- (void)getFileURL:(id *)arg1 originalFilename:(id *)arg2 uti:(id *)arg3 forSidecarMatchingUTI:(id)arg4 requireExactMatch:(BOOL)arg5;
- (void)getSearchIndexContents:(id)arg1 dateFormatter:(id)arg2 keywords:(id)arg3;
- (id)globalUUID;
- (BOOL)hasFullDerivativesSet;
- (BOOL)hasGPS;
- (BOOL)hasJustBeenHidden;
- (BOOL)hasJustBeenShown;
- (BOOL)hasLegacyAdjustments;
- (BOOL)hasLegacyRequiredResourcesLocallyAvailable;
- (BOOL)hasOriginalFile;
- (id)imageProperties;
- (id)imageWithFormat:(int)arg1;
- (id)imageWithFormat:(int)arg1 outImageProperties:(const struct __CFDictionary **)arg2;
- (void)incrementUploadAttempts;
- (id)indexSheetImage;
- (BOOL)isAvalanchePhoto;
- (BOOL)isAvalancheStackPhoto;
- (BOOL)isCloudPlaceholder;
- (BOOL)isDeletableFromAssetsLibrary;
- (BOOL)isEditable;
- (BOOL)isEditableFromAssetsLibrary;
- (BOOL)isFavorite;
- (BOOL)isInTrash;
- (BOOL)isIncludedInCloudFeeds;
- (BOOL)isIncludedInMoments;
- (BOOL)isInterestingForAvalanche;
- (BOOL)isLocatedAtCoordinates:(CDStruct_c3b9c2ee)arg1;
- (BOOL)isLocatedAtHome;
- (BOOL)isPanorama;
- (BOOL)isPartOfBurst;
- (BOOL)isPlayableVideo;
- (BOOL)isRAW;
- (BOOL)isRAWOnly;
- (BOOL)isRAWPlusJPEG;
- (BOOL)isResourceAvailableForResourceType:(unsigned long long)arg1;
- (BOOL)isSavedPhotosAsset;
- (BOOL)isTimelapsePlaceholder;
- (BOOL)isValidTypeForPersistence;
- (id)itemIdentifier;
- (id)largestAvailableDataRepresentationAndType:(id *)arg1;
- (id)lastUploadAttemptDate;
- (id)lensModel;
- (id)managedAssetForPhotoLibrary:(id)arg1;
- (void)markCloudResourceOfType:(unsigned long long)arg1 asLocallyAvailable:(BOOL)arg2;
- (id)masterFingerPrintCacheIfNecessaryAndAdjustedFingerPrint:(id *)arg1 error:(id *)arg2;
- (BOOL)migrateLegacyPhotoAdjustments;
- (BOOL)migrateLegacyVideoAdjustments;
- (BOOL)migrateLocationDataIfNeededAfterOTARestore:(BOOL)arg1;
- (id)mutableAdjustments;
- (id)mutableAlbumsBeingCustomKeyAssetFor;
- (id)mutableAlbumsBeingKeyAssetFor;
- (id)mutableAlbumsBeingSecondaryKeyAssetFor;
- (id)mutableAlbumsBeingTertiaryKeyAssetFor;
- (id)mutableSidecarFiles;
- (id)newFullScreenImage:(const struct __CFDictionary **)arg1;
- (id)newFullSizeImage;
- (id)newLowResolutionFullScreenImage;
- (id)nonAdjustedPathForCPLResourceType:(unsigned long long)arg1;
- (long long)originalImageOrientation;
- (unsigned long long)originalResourceChoice;
- (id)pasteBoardRepresentation;
- (id)pathForAdjustedFullsizeImageFile;
- (id)pathForAdjustedLargeSizeImageFile;
- (id)pathForAdjustedLargeThumbnailFile;
- (id)pathForAdjustedMediumThumbnailFile;
- (id)pathForAdjustedMediumVideoFile;
- (id)pathForAdjustedSmallVideoFile;
- (id)pathForAdjustmentDataFile;
- (id)pathForAdjustmentFile;
- (id)pathForCPLResourceType:(unsigned long long)arg1 adjusted:(BOOL)arg2;
- (id)pathForDiagnosticFile;
- (id)pathForFullsizeImageFile;
- (id)pathForFullsizeRenderImageFile;
- (id)pathForFullsizeRenderVideoFile;
- (id)pathForLargeSizeImageFile;
- (id)pathForMediaMetadataFile;
- (id)pathForMetadataWithExtension:(id)arg1;
- (id)pathForMutationsDirectory;
- (id)pathForNonAdjustedFullsizeImageFile;
- (id)pathForNonAdjustedLargeSizeImageFile;
- (id)pathForNonAdjustedLargeThumbnailFile;
- (id)pathForNonAdjustedMediumThumbnailFile;
- (id)pathForNonAdjustedMediumVideoFile;
- (id)pathForNonAdjustedSmallVideoFile;
- (id)pathForPenultimateFullsizeRenderImageFile;
- (id)pathForSideCarImageFile;
- (id)pathForSubstandardFullsizeRenderImageFile;
- (id)pathForVideoComplementFile;
- (id)pathToOriginalVideoFile;
- (void)persistMetadataToFilesystem;
- (id)photoIrisSidecarIgnoringSubtype:(BOOL)arg1;
- (id)pictureTransferProtocolInformationWithAlbumsObjectIDs:(id)arg1;
- (id)pl_photoLibrary;
- (void)prepareForDeletion;
- (void)registerForChanges;
- (void)removeLegacyAdjustments;
- (id)reservedPathForLargeDisplayableImageFileForceLarge:(BOOL)arg1 forceUpgradeFromSubstandardIfNecessary:(BOOL)arg2 outImageType:(long long *)arg3;
- (id)resourceForQualityClass:(unsigned short)arg1;
- (id)reverseGeoDescription;
- (void)revertToOriginal;
- (void)setAdjustmentDataBlob:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 baseVersion:(long long)arg4 editorBundleID:(id)arg5 renderedContentURL:(id)arg6 penultimateRenderedJPEGData:(id)arg7;
- (void)setAdjustmentDataBlob:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 baseVersion:(long long)arg4 editorBundleID:(id)arg5 renderedContentURL:(id)arg6 penultimateRenderedJPEGData:(id)arg7 isSubstandardRender:(BOOL)arg8 fullSizeRenderSize:(struct CGSize)arg9 shouldUpdateAttributes:(BOOL)arg10 inManagedObjectContext:(id)arg11;
- (void)setAdjustmentDataBlob:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 baseVersion:(long long)arg4 editorBundleID:(id)arg5 renderedContentURL:(id)arg6 penultimateRenderedJPEGData:(id)arg7 useSecureMove:(BOOL)arg8;
- (BOOL)setAttributesFromMainFileURL:(id)arg1 fullSizeRenderURL:(id)arg2 savedAssetType:(short)arg3 isPlaceholder:(BOOL)arg4 overwriteOriginalProperties:(BOOL)arg5 imageSource:(struct CGImageSource **)arg6 imageData:(id *)arg7;
- (BOOL)setCameraCaptureDeviceFromImageProperties:(id)arg1;
- (void)setCustomMetadataWithPersistedFileSystemAttributes;
- (BOOL)setDefaultAdjustmentsIfNecessary;
- (void)setFaceRegionsFromImageMetadata:(struct CGImageMetadata *)arg1;
- (void)setHDRFlagFromImageProperties:(id)arg1;
- (void)setLastUploadAttemptDate:(id)arg1;
- (void)setLocationFromImageProperties:(id)arg1;
- (void)setOriginalResourceChoice:(unsigned long long)arg1;
- (void)setOriginalSizeAndOrientationFromImageProperties:(id)arg1;
- (void)setPhotoIrisPropertiesFromImageProperties:(id)arg1;
- (void)setSavedAssetTypeFromImageProperties:(id)arg1;
- (void)setSizeAndOrientationFromImageProperties:(id)arg1;
- (void)setThumbnailDataFromImageProperties:(id)arg1;
- (void)setUniformTypeIdentifierFromPathExtension:(id)arg1;
- (void)setUploadAttempts:(short)arg1;
- (BOOL)setVideoInfoFromFileAtURL:(id)arg1 fullSizeRenderURL:(id)arg2 overwriteOriginalProperties:(BOOL)arg3;
- (id)shortenedFilePath;
- (id)supportingResourcesForQualityClass:(unsigned short)arg1;
- (BOOL)supportsCloudUpload;
- (void)synchronizeWithPersistedFileSystemAttributes;
- (void)synchronouslyFetchAdjustmentDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)synchronouslyGenerateFullsizeRenderImageIfNecessaryAtPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (struct CGSize)targetSizeForInputSize:(struct CGSize)arg1 maxPixelSize:(unsigned long long)arg2;
- (id)thumbnailIdentifier;
- (void)unregisterForChanges;
- (void)updateAdjustmentsWithAdjustmentMetadata:(id)arg1;
- (void)updateAdjustmentsWithFiltersAndIdentifiers:(id)arg1;
- (void)updateAssetKindFromUniformTypeIdentifier;
- (BOOL)updateKindSubtypeIfScreenshot;
- (void)updatePanoramosity;
- (short)uploadAttempts;
- (id)userAddCloudSharedCommentWithText:(id)arg1;
- (void)userDeleteCloudSharedComment:(id)arg1;
- (void)userReadAllCloudSharedComments;
- (id)userVisibleCloudResourceOfType:(unsigned long long)arg1;
- (BOOL)validateForInsert:(id *)arg1;
- (BOOL)validateForUpdate:(id *)arg1;
- (BOOL)visibilityStateIsEqualToState:(short)arg1;
- (void)willSave;
- (void)willTurnIntoFault;

@end

