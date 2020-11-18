//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLKDevice, NSString;

@interface NTKCompanionResourceDirectoryEditor : NSObject
{
    BOOL _resourceDirectoryIsHardLink;
    CLKDevice *_device;
    NSString *_resourceDirectory;
    long long _state;
    NSString *_galleryPreviewResourceDirectory;
}

@property (readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property (strong, nonatomic) NSString *galleryPreviewResourceDirectory; // @synthesize galleryPreviewResourceDirectory=_galleryPreviewResourceDirectory;
@property (strong, nonatomic) NSString *resourceDirectory; // @synthesize resourceDirectory=_resourceDirectory;
@property (nonatomic) long long state; // @synthesize state=_state;

+ (id)_createResourceDirectoryWithAsset:(id)arg1 forDevice:(id)arg2 previewOnly:(BOOL)arg3;
+ (id)_cropAndScaleUIImage:(id)arg1 cropRect:(struct CGRect)arg2 outputSize:(struct CGSize)arg3;
+ (void)_imageDataForAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)_linkPhoto:(id)arg1 to:(id)arg2 previewOnly:(BOOL)arg3;
+ (id)_scaleImage:(id)arg1 toLongestEdgeInPixels:(double)arg2;
+ (unsigned long long)_subsampleFactorForScale:(double)arg1;
+ (id)_subsampledImageWithData:(id)arg1 orientation:(long long)arg2 subsampleFactor:(unsigned long long)arg3;
+ (id)_transcodeAsset:(id)arg1 withCrop:(struct CGRect)arg2 into:(id)arg3 previewOnly:(BOOL)arg4;
+ (BOOL)_transcodeIrisVideoOf:(id)arg1 forPhoto:(id)arg2 withCrop:(struct CGRect)arg3 into:(id)arg4 previewOnly:(BOOL)arg5;
+ (BOOL)_transcodeStillImageOf:(id)arg1 forPhoto:(id)arg2 withCrop:(struct CGRect)arg3 into:(id)arg4;
+ (id)_videoAssetOf:(id)arg1;
+ (struct CGSize)_watchPhotoImageSize;
+ (struct CGSize)_watchPhotoVideoSize;
+ (id)_writeAsset:(id)arg1 image:(id)arg2 withImageCrop:(struct CGRect)arg3 to:(id)arg4;
- (void).cxx_destruct;
- (void)_deleteResourceDirectoryHardLinkIfNecessary;
- (void)dealloc;
- (void)finalizeWithCompletion:(CDUnknownBlockType)arg1;
- (void)generateGalleryPreviewResourceDirectoryWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithResourceDirectory:(id)arg1 forDevice:(id)arg2;

@end

