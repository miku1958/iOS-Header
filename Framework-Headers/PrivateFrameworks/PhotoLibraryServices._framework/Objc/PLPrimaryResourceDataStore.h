//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLResourceDataStore.h>

#import <PhotoLibraryServices/PLResourceDataStore-Protocol.h>

@class NSMutableDictionary, NSString, NSURL, PLCloudPhotoLibraryManager;

@interface PLPrimaryResourceDataStore : PLResourceDataStore <PLResourceDataStore>
{
    NSMutableDictionary *_inflightCPLDownloadTaskIdentifiersByRequestID;
    NSMutableDictionary *_pendingCPLDownloadShouldRunByRequestID;
    struct os_unfair_lock_s _lock;
    NSURL *_resourceDirectoryURL;
    PLCloudPhotoLibraryManager *_cplManager;
}

@property (strong, nonatomic) PLCloudPhotoLibraryManager *cplManager; // @synthesize cplManager=_cplManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSURL *resourceDirectoryURL; // @synthesize resourceDirectoryURL=_resourceDirectoryURL;
@property (readonly) Class superclass;

+ (BOOL)isMasterThumbRecipeID:(unsigned int)arg1;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;
+ (unsigned int)masterThumbRecipeID;
+ (unsigned int)storeID;
+ (id)supportedRecipes;
- (void).cxx_destruct;
- (void)_downloadCPLResourceForAsset:(id)arg1 resourceType:(unsigned long long)arg2 options:(id)arg3 taskDidBeginHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_expectedFilePathForMasterThumbnailForAsset:(id)arg1;
- (void)_handleCPLDownloadCompleteWithAssetObjectID:(id)arg1 resourceObjectID:(id)arg2 managedObjectContext:(id)arg3;
- (BOOL)canStoreExternalResource:(id)arg1;
- (BOOL)canStreamResource:(id)arg1;
- (void)cancelLocalAvailabilityChangeRequest:(unsigned long long)arg1;
- (id)descriptionForSubtype:(long long)arg1;
- (id)init;
- (id)keyFromKeyStruct:(const void *)arg1;
- (id)name;
- (unsigned long long)requestLocalAvailabilityChange:(short)arg1 forResource:(id)arg2 asset:(id)arg3 inContext:(id)arg4 options:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)requestRemoteAvailabilityChange:(short)arg1 forResource:(id)arg2 asset:(id)arg3 inContext:(id)arg4 options:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)requestStreamingURLForResource:(id)arg1 asset:(id)arg2 inContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)resourceDataForKey:(id)arg1 assetID:(id)arg2;
- (id)resourceURLForKey:(id)arg1 assetID:(id)arg2;
- (BOOL)storeExternalResource:(id)arg1 forAsset:(id)arg2 inContext:(id)arg3 options:(id)arg4 error:(id *)arg5 resultingResource:(id *)arg6;
- (void)transitional_reconsiderLocalAvailabilityBasedOnExistingLocationOfCPLResource:(id)arg1 givenFilePath:(id)arg2;
- (id)updateDerivativeResourcesForAsset:(id)arg1 forLifecycleEvent:(unsigned int)arg2;
- (BOOL)videoResource:(id)arg1 matchesOrExceedsQualityLevel:(unsigned int)arg2;
- (id)virtualResourcesForAsset:(id)arg1;

@end

