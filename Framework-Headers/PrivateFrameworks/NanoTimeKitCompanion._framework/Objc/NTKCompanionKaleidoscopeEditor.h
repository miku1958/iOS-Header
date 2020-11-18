//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCompanionResourceDirectoryEditor.h>

@class NTKPhoto, PHAsset, UIImage;

@interface NTKCompanionKaleidoscopeEditor : NTKCompanionResourceDirectoryEditor
{
    NTKPhoto *_pickedPhoto;
    UIImage *_pickedImage;
    PHAsset *_newAsset;
    UIImage *_newImage;
}

@property (readonly, nonatomic) long long photosCount;

+ (id)_fetchAssetForPhoto:(id)arg1;
- (void).cxx_destruct;
- (void)_readPickedPhoto;
- (void)_reinitializeWithPhoto:(id)arg1 image:(id)arg2;
- (void)finalizeWithCompletion:(CDUnknownBlockType)arg1;
- (void)generateGalleryPreviewResourceDirectoryWithCompletion:(CDUnknownBlockType)arg1;
- (void)imageForPhotoWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithResourceDirectory:(id)arg1 forDevice:(id)arg2;
- (void)setAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setPhoto:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setRawImage:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

