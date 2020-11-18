//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNPhotoPickerProviderItem.h>

@class AVTAvatarRecordImageProvider, AVTRenderingScope, AVTStickerConfiguration, CNAvatarStickerGeneratorProvider, CNPhotoPickerColorVariant, NSData, UIImage;
@protocol AVTAvatarRecord;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerAnimojiProviderItem : CNPhotoPickerProviderItem
{
    id<AVTAvatarRecord> _avatarRecord;
    AVTStickerConfiguration *_poseConfiguration;
    CNPhotoPickerColorVariant *_backgroundColorVariant;
    NSData *__originalImageData;
    NSData *__generatedImageData;
    UIImage *_loadingPlaceholderImage;
    CNAvatarStickerGeneratorProvider *_stickerGeneratorProvider;
    AVTRenderingScope *_renderingScope;
    AVTAvatarRecordImageProvider *_imageProvider;
}

@property (strong, nonatomic) NSData *_generatedImageData; // @synthesize _generatedImageData=__generatedImageData;
@property (strong, nonatomic) NSData *_originalImageData; // @synthesize _originalImageData=__originalImageData;
@property (strong, nonatomic) id<AVTAvatarRecord> avatarRecord; // @synthesize avatarRecord=_avatarRecord;
@property (strong, nonatomic) CNPhotoPickerColorVariant *backgroundColorVariant; // @synthesize backgroundColorVariant=_backgroundColorVariant;
@property (strong, nonatomic) AVTAvatarRecordImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
@property (strong, nonatomic) UIImage *loadingPlaceholderImage; // @synthesize loadingPlaceholderImage=_loadingPlaceholderImage;
@property (strong, nonatomic) AVTStickerConfiguration *poseConfiguration; // @synthesize poseConfiguration=_poseConfiguration;
@property (strong, nonatomic) AVTRenderingScope *renderingScope; // @synthesize renderingScope=_renderingScope;
@property (strong, nonatomic) CNAvatarStickerGeneratorProvider *stickerGeneratorProvider; // @synthesize stickerGeneratorProvider=_stickerGeneratorProvider;
@property (strong, nonatomic) NSData *thumbnailImageData;

- (void).cxx_destruct;
- (BOOL)allowsMoveAndScale;
- (BOOL)allowsVariants;
- (void)applyVariantEffectToFullsizeImageWithCompletion:(CDUnknownBlockType)arg1;
- (id)contactImageForMetadataStore;
- (id)copyWithColor:(id)arg1;
- (id)copyWithPoseConfiguration:(id)arg1 generatorProvider:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)createVariantsItemsWithVariantsManager:(id)arg1;
- (id)generateImageDataIfNeeded;
- (id)generateThumbnailImageDataIfNeeded;
- (unsigned long long)hash;
- (id)imageData;
- (unsigned long long)imageType;
- (id)initWithAvatarRecord:(id)arg1 imageProvider:(id)arg2 renderingScope:(id)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5;
- (id)initWithOriginalImageData:(id)arg1 cropRect:(struct CGRect)arg2;
- (id)initWithOriginalImageData:(id)arg1 cropRect:(struct CGRect)arg2 backgroundColorVariant:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)localizedVariantsTitle;
- (id)originalImageData;
- (id)renderAvatarWithBackgroundWithImage:(id)arg1;
- (id)renderAvatarWithBackgroundWithImageData:(id)arg1;
- (id)renderAvatarWithPoseWithSize:(double)arg1;
- (id)renderDefaultAvatarImage;
- (BOOL)shouldShowCaption;
- (void)updateContact:(id)arg1;
- (id)variantIdentifier;

@end
