//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCompanionResourceDirectoryEditor.h>

@class NSCache, NSMutableArray, NSMutableDictionary;

@interface NTKCompanionCustomPhotosEditor : NTKCompanionResourceDirectoryEditor
{
    NSMutableDictionary *_pickedPhotos;
    NSMutableDictionary *_newPhotos;
    NSMutableArray *_orderList;
    NSCache *_scaledImageCache;
    BOOL _previewIsValid;
}

@property (readonly, nonatomic) long long photosCount;

- (void).cxx_destruct;
- (id)_copyOrTranscodePhotosTo:(id)arg1;
- (id)_fetchAssetsForNewPhotos:(id)arg1;
- (void)_fetchAssetsForPickedPhotos;
- (void)_readPickedPhotosFrom:(id)arg1;
- (void)_reinitializeWithImageList:(id)arg1 andResourceDirectory:(id)arg2;
- (BOOL)addAssetsFromAssetList:(id)arg1;
- (BOOL)addPhotosFromUIImagePicker:(id)arg1;
- (BOOL)canChangeOriginalCropOfPhotoAtIndex:(long long)arg1;
- (void)deletePhotoAtIndex:(long long)arg1;
- (void)finalizeWithCompletion:(CDUnknownBlockType)arg1;
- (void)generateGalleryPreviewResourceDirectoryWithCompletion:(CDUnknownBlockType)arg1;
- (void)imageAndCropForPhotoAtIndex:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)imageInPhotoLibraryForPhotoAtIndex:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithResourceDirectory:(id)arg1;
- (BOOL)isPhotoInPhotoLibraryAtIndex:(long long)arg1;
- (struct CGSize)minimumNormalizedCropSizeForPhotoAtIndex:(long long)arg1;
- (void)movePhotoAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (struct CGRect)originalCropForPhotoAtIndex:(long long)arg1;
- (BOOL)setOriginalCrop:(struct CGRect)arg1 forPhotoAtIndex:(long long)arg2;

@end

