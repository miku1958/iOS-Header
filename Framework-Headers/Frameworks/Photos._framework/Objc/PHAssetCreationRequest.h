//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHAssetChangeRequest.h>

#import <Photos/PHInsertChangeRequest-Protocol.h>

@class NSDictionary, NSManagedObjectID, NSMutableArray, NSMutableDictionary, NSString, PHAssetCreationPhotoStreamPublishingRequest, PHAssetResourceBag, PHChangeRequestHelper;

@interface PHAssetCreationRequest : PHAssetChangeRequest <PHInsertChangeRequest>
{
    NSMutableArray *_assetResources;
    PHAssetResourceBag *_assetResourceBag;
    NSMutableDictionary *_movedFiles;
    BOOL _duplicateAllowsPrivateMetadata;
    BOOL _shouldCreateScreenshot;
    BOOL _duplicateLivePhotoAsStill;
    PHAssetCreationPhotoStreamPublishingRequest *__photoStreamPublishingRequest;
    NSString *_duplicateAssetIdentifier;
    CDStruct_1b6d18a9 _duplicateStillSourceTime;
}

@property (readonly, nonatomic) NSDictionary *_movedFiles;
@property (strong, nonatomic, setter=_setPhotoStreamPublishingRequest:) PHAssetCreationPhotoStreamPublishingRequest *_photoStreamPublishingRequest; // @synthesize _photoStreamPublishingRequest=__photoStreamPublishingRequest;
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property (readonly, nonatomic) NSString *clientName;
@property (readonly, nonatomic) int clientProcessID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, setter=_setDuplicateAllowsPrivateMetadata:) BOOL duplicateAllowsPrivateMetadata;
@property (strong, nonatomic, setter=_setDuplicateAssetIdentifier:) NSString *duplicateAssetIdentifier; // @synthesize duplicateAssetIdentifier=_duplicateAssetIdentifier;
@property (nonatomic, setter=_setDuplicateLivePhotoAsStill:) BOOL duplicateLivePhotoAsStill; // @synthesize duplicateLivePhotoAsStill=_duplicateLivePhotoAsStill;
@property (nonatomic, setter=_setDuplicateStillSourceTime:) CDStruct_1b6d18a9 duplicateStillSourceTime; // @synthesize duplicateStillSourceTime=_duplicateStillSourceTime;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PHChangeRequestHelper *helper;
@property (readonly, nonatomic) NSString *managedEntityName;
@property (readonly, getter=isNew) BOOL new;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (nonatomic, getter=_shouldCreateScreenshot, setter=_setShouldCreateScreenshot:) BOOL shouldCreateScreenshot;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uuid;

+ (BOOL)_createAssetFromImageData:(id)arg1 imageType:(id)arg2 uuid:(id)arg3 error:(id *)arg4;
+ (id)_creationRequestForAssetUsingUUID:(id)arg1;
+ (BOOL)canGenerateUUIDWithoutEntitlements;
+ (id)creationRequestForAsset;
+ (id)creationRequestForAssetCopyFromAsset:(id)arg1;
+ (id)creationRequestForAssetCopyFromAsset:(id)arg1 stillSourceTime:(CDStruct_1b6d18a9)arg2;
+ (id)creationRequestForAssetCopyStillPhotoFromLivePhotoAsset:(id)arg1 stillSourceTime:(CDStruct_1b6d18a9)arg2;
+ (id)creationRequestForAssetFromImage:(id)arg1;
+ (id)creationRequestForAssetFromImageAtFileURL:(id)arg1;
+ (id)creationRequestForAssetFromImageData:(id)arg1;
+ (id)creationRequestForAssetFromImageData:(id)arg1 usingUUID:(id)arg2;
+ (id)creationRequestForAssetFromScreenshotImage:(id)arg1;
+ (id)creationRequestForAssetFromVideoAtFileURL:(id)arg1;
+ (id)creationRequestForAssetFromVideoComplementBundle:(id)arg1;
+ (BOOL)supportsAssetResourceTypes:(id)arg1;
- (void).cxx_destruct;
- (void)_addResourceWithType:(long long)arg1 data:(id)arg2 orFileURL:(id)arg3 options:(id)arg4;
- (void)_copyMetadataFromAsset:(id)arg1;
- (BOOL)_createAssetAsAdjusted:(id)arg1 fromValidatedResources:(id)arg2 error:(id *)arg3;
- (BOOL)_createAssetAsPhotoIris:(id)arg1 fromValidatedResources:(id)arg2 error:(id *)arg3;
- (BOOL)_createAssetFromValidatedResources:(id)arg1 uuid:(id)arg2 photoLibrary:(id)arg3 error:(id *)arg4;
- (BOOL)_createRAWSidecarForAsset:(id)arg1 fromValidatedResources:(id)arg2 photoLibrary:(id)arg3 error:(id *)arg4;
- (void)_didMoveFileFromURL:(id)arg1 toURL:(id)arg2;
- (id)_duplicatedAssetResourcesFromAsset:(id)arg1 stillSourceTime:(CDStruct_1b6d18a9)arg2 flattenLivePhotoIntoStillPhoto:(BOOL)arg3 error:(id *)arg4;
- (id)_exifPropertiesFromSourceImageDataExifProperties:(id)arg1;
- (id)_managedAssetFromData:(id)arg1 imageUTIType:(id)arg2 photoLibrary:(id)arg3 getImageSource:(struct CGImageSource **)arg4 imageData:(id *)arg5;
- (long long)_mediaTypeForCreatedAsset;
- (BOOL)_populateDuplicatingAssetCreationRequest:(id)arg1 error:(id *)arg2;
- (void)_resetMovedFiles;
- (BOOL)_restoreMovedFilesOnFailure;
- (id)_secureMove:(BOOL)arg1 assetResource:(id)arg2 error:(id *)arg3;
- (id)_secureMove:(BOOL)arg1 fileAtURL:(id)arg2 toURL:(id)arg3 error:(id *)arg4;
- (void)_updateMutationsForDuplicatingPrivateMetadataFromAsset:(id)arg1;
- (void)addResourceWithType:(long long)arg1 data:(id)arg2 options:(id)arg3;
- (void)addResourceWithType:(long long)arg1 fileURL:(id)arg2 options:(id)arg3;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (id)initForNewObject;
- (id)initForNewObjectWithUUID:(id)arg1;
- (id)initWithHelper:(id)arg1;
- (id)initWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (id)placeholderForCreatedAsset;
- (BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;

@end
