//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUPhotoPickerAbstractExtensionContext.h>

#import <PhotosUI/PUPhotoPickerHostService-Protocol.h>
#import <PhotosUI/PUPhotoPickerRemoteService-Protocol.h>

@class NSObject, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PUPhotoPickerExtensionContext : PUPhotoPickerAbstractExtensionContext <PUPhotoPickerRemoteService, PUPhotoPickerHostService>
{
    NSObject<OS_dispatch_queue> *_multipleMediaIsolationQueue;
    NSOperationQueue *_multipleMediaConversionConcurrentQueue;
    NSString *_temporaryDirectoryInHost;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSOperationQueue *multipleMediaConversionConcurrentQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *multipleMediaIsolationQueue;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *temporaryDirectoryInHost; // @synthesize temporaryDirectoryInHost=_temporaryDirectoryInHost;

- (void).cxx_destruct;
- (id)_copyPathToTempDirectoryIfNeeded:(id)arg1;
- (id)_copyUrlToTempDirectoryIfNeeded:(id)arg1;
- (void)_createPhotoPickerInfoDictionaryFromInfoDictionary:(id)arg1 appendTo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleLivePhotoImageUrlFetch:(id)arg1 appendTo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleLivePhotoVideoUrlFetch:(id)arg1 appendTo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleMutlipleMediaCompletion:(id)arg1;
- (id)_host;
- (void)_photoPickerInfoDictionaryFromUIImagePickerControllerInfoDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_photosMediaDirectoryURL;
- (void)_removeItemAtURLIfNeeded:(id)arg1;
- (void)_saveImageURLForLivePhoto:(id)arg1 fileURL:(id)arg2 appendTo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_saveVideoURLForLivePhoto:(id)arg1 fileURL:(id)arg2 appendTo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)cancelPhotoPicker;
- (void)didDisplayPhotoPickerPreview;
- (void)didDisplayPhotoPickerSourceType:(id)arg1;
- (void)didSelectMediaWithInfoDictionary:(id)arg1;
- (void)didSelectMultipleMediaItemsWithInfoDictionaries:(id)arg1;
- (void)dismissCurrentViewControllerFromPhotoPickerAnimated:(id)arg1;
- (void)displayActionTypeDescription:(id)arg1;
- (void)displayActionWithType:(id)arg1;
- (void)displaySecondaryActionWithType:(id)arg1;
- (void)initiatePhotoPickerSelection;
- (void)invalidatePhotoPickerHostServices;
- (void)invalidatePhotoPickerRemoteServices;
- (void)performAppearanceUpdateUsingPhotoPickerAppearanceDictionary:(id)arg1;
- (void)performPhotoPickerPreviewOfFirstAsset;
- (void)performTraitCollectionUpdateUsingData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestViewControllerFromPhotoPickerWithRequestIdentifier:(id)arg1;
- (void)requestedViewControllerOptionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setPhotoPickerNavigationBarHidden:(id)arg1;
- (void)setPhotoPickerViewControllerPrompt:(id)arg1;
- (void)setPhotoPickerViewControllerTitle:(id)arg1;

@end

