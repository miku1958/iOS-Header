//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUTileViewController.h>

#import <PhotosUI/PUAssetViewModelChangeObserver-Protocol.h>
#import <PhotosUI/PUImageRequesterObserver-Protocol.h>

@class CALayer, NSData, NSDate, NSString, NSURL, PUAssetViewModel, PUImageRequester, PUMediaProvider, PXImageLayerModulator, PXImageModulationManager, UIColor, UIImage, UIImageView;
@protocol PLTileableLayer, PUDisplayAsset;

__attribute__((visibility("hidden")))
@interface PUImageTileViewController : PUTileViewController <PUImageRequesterObserver, PUAssetViewModelChangeObserver>
{
    BOOL _animatesImageAppearance;
    BOOL _shouldUseFullsizeImageData;
    BOOL _imageIsFullQuality;
    BOOL __needsUpdateImage;
    BOOL __needsUpdateImageLayerModulator;
    BOOL __needsUpdateImageLayerModulatorInput;
    BOOL __needsUpdateImageView;
    BOOL __needsUpdateFullsizeImageMetadata;
    BOOL __needsUpdateFullsizeTiledLayer;
    BOOL _needsUpdateTargetSize;
    BOOL __isDisplayingFullQualityImage;
    BOOL _shouldUsePenultimateVersionForNextImageUpdate;
    BOOL _canUseFullsizeTiledLayer;
    BOOL _requiresFullQualityImage;
    float _gainMapValue;
    PUAssetViewModel *_assetViewModel;
    id<PUDisplayAsset> _asset;
    PUMediaProvider *_mediaProvider;
    PXImageModulationManager *_imageModulationManager;
    UIColor *_placeholderColor;
    UIImageView *__imageView;
    NSData *__fullsizeImageData;
    NSURL *__fullsizeImageURL;
    long long __fullsizeImageOrientation;
    CALayer<PLTileableLayer> *__fullsizeTiledLayer;
    long long __assetLoadingStage;
    NSDate *__assetLoadingStartDate;
    PUImageRequester *__imageRequester;
    PXImageLayerModulator *_imageLayerModulator;
    UIImage *_image;
    struct CGImage *_gainMapImage;
    struct CGSize __targetSize;
    struct CGSize __fullsizeImageUntransformedSize;
    struct CGSize __fullsizeImageSize;
}

@property (nonatomic, setter=_setAssetLoadingStage:) long long _assetLoadingStage; // @synthesize _assetLoadingStage=__assetLoadingStage;
@property (strong, nonatomic, setter=_setAssetLoadingStartDate:) NSDate *_assetLoadingStartDate; // @synthesize _assetLoadingStartDate=__assetLoadingStartDate;
@property (strong, nonatomic, setter=_setFullsizeImageData:) NSData *_fullsizeImageData; // @synthesize _fullsizeImageData=__fullsizeImageData;
@property (nonatomic, setter=_setFullsizeImageOrientation:) long long _fullsizeImageOrientation; // @synthesize _fullsizeImageOrientation=__fullsizeImageOrientation;
@property (nonatomic, setter=_setFullsizeImageSize:) struct CGSize _fullsizeImageSize; // @synthesize _fullsizeImageSize=__fullsizeImageSize;
@property (strong, nonatomic, setter=_setFullsizeImageURL:) NSURL *_fullsizeImageURL; // @synthesize _fullsizeImageURL=__fullsizeImageURL;
@property (nonatomic, setter=_setFullsizeImageUntransformedSize:) struct CGSize _fullsizeImageUntransformedSize; // @synthesize _fullsizeImageUntransformedSize=__fullsizeImageUntransformedSize;
@property (strong, nonatomic, setter=_setFullsizeTiledLayer:) CALayer<PLTileableLayer> *_fullsizeTiledLayer; // @synthesize _fullsizeTiledLayer=__fullsizeTiledLayer;
@property (strong, nonatomic, setter=_setImageRequester:) PUImageRequester *_imageRequester; // @synthesize _imageRequester=__imageRequester;
@property (readonly, nonatomic) UIImageView *_imageView; // @synthesize _imageView=__imageView;
@property (nonatomic, setter=_setDisplayingFullQualityImage:) BOOL _isDisplayingFullQualityImage; // @synthesize _isDisplayingFullQualityImage=__isDisplayingFullQualityImage;
@property (nonatomic, setter=_setNeedsUpdateFullsizeImageMetadata:) BOOL _needsUpdateFullsizeImageMetadata; // @synthesize _needsUpdateFullsizeImageMetadata=__needsUpdateFullsizeImageMetadata;
@property (nonatomic, setter=_setNeedsUpdateFullsizeTiledLayer:) BOOL _needsUpdateFullsizeTiledLayer; // @synthesize _needsUpdateFullsizeTiledLayer=__needsUpdateFullsizeTiledLayer;
@property (nonatomic, setter=_setNeedsUpdateImage:) BOOL _needsUpdateImage; // @synthesize _needsUpdateImage=__needsUpdateImage;
@property (nonatomic, setter=_setNeedsUpdateImageLayerModulator:) BOOL _needsUpdateImageLayerModulator; // @synthesize _needsUpdateImageLayerModulator=__needsUpdateImageLayerModulator;
@property (nonatomic, setter=_setNeedsUpdateImageLayerModulatorInput:) BOOL _needsUpdateImageLayerModulatorInput; // @synthesize _needsUpdateImageLayerModulatorInput=__needsUpdateImageLayerModulatorInput;
@property (nonatomic, setter=_setNeedsUpdateImageView:) BOOL _needsUpdateImageView; // @synthesize _needsUpdateImageView=__needsUpdateImageView;
@property (nonatomic, setter=_setTargetSize:) struct CGSize _targetSize; // @synthesize _targetSize=__targetSize;
@property (nonatomic) BOOL animatesImageAppearance; // @synthesize animatesImageAppearance=_animatesImageAppearance;
@property (strong, nonatomic) id<PUDisplayAsset> asset; // @synthesize asset=_asset;
@property (strong, nonatomic) PUAssetViewModel *assetViewModel; // @synthesize assetViewModel=_assetViewModel;
@property (nonatomic) BOOL canUseFullsizeTiledLayer; // @synthesize canUseFullsizeTiledLayer=_canUseFullsizeTiledLayer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) struct CGImage *gainMapImage; // @synthesize gainMapImage=_gainMapImage;
@property (readonly, nonatomic) BOOL gainMapImageIsAvailable;
@property (readonly, nonatomic) float gainMapValue; // @synthesize gainMapValue=_gainMapValue;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property (readonly, nonatomic) BOOL imageIsFullQuality; // @synthesize imageIsFullQuality=_imageIsFullQuality;
@property (strong, nonatomic) PXImageLayerModulator *imageLayerModulator; // @synthesize imageLayerModulator=_imageLayerModulator;
@property (strong, nonatomic) PXImageModulationManager *imageModulationManager; // @synthesize imageModulationManager=_imageModulationManager;
@property (strong, nonatomic) PUMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property (nonatomic) BOOL needsUpdateTargetSize; // @synthesize needsUpdateTargetSize=_needsUpdateTargetSize;
@property (copy, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property (nonatomic) BOOL requiresFullQualityImage; // @synthesize requiresFullQualityImage=_requiresFullQualityImage;
@property (nonatomic) BOOL shouldUseFullsizeImageData; // @synthesize shouldUseFullsizeImageData=_shouldUseFullsizeImageData;
@property (nonatomic, setter=_setShouldUsePenultimateVersionForNextImageUpdate:) BOOL shouldUsePenultimateVersionForNextImageUpdate; // @synthesize shouldUsePenultimateVersionForNextImageUpdate=_shouldUsePenultimateVersionForNextImageUpdate;
@property (readonly) Class superclass;

+ (id)_supportedZoomImageFormats;
- (void).cxx_destruct;
- (void)_cancelAllImageRequests;
- (void)_handleAssetViewModel:(id)arg1 didChange:(id)arg2;
- (void)_handleShouldReloadAssetMediaNotification:(id)arg1;
- (void)_invalidate;
- (void)_invalidateFullsizeImageMetadata;
- (void)_invalidateFullsizeTiledLayer;
- (void)_invalidateImage;
- (void)_invalidateImageLayerModulator;
- (void)_invalidateImageLayerModulatorInput;
- (void)_invalidateImageView;
- (void)_invalidateTargetSize;
- (BOOL)_needsUpdate;
- (void)_setAssetWithoutUpdateIfNeeded:(id)arg1;
- (void)_setImage:(id)arg1 isFullQuality:(BOOL)arg2;
- (void)_updateAssetLoadingStage;
- (void)_updateFullsizeImageMetadataIfNeeded;
- (void)_updateFullsizeTiledLayerIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateImageIfNeeded;
- (void)_updateImageLayerModulatorIfNeeded;
- (void)_updateImageLayerModulatorInputIfNeeded;
- (void)_updateImageViewIfNeeded;
- (void)_updateReadyForDisplay;
- (void)_updateTargetSizeIfNeeded;
- (void)applyLayoutInfo:(id)arg1;
- (void)assetDidChange;
- (void)assetViewModelDidChange;
- (void)becomeReusable;
- (void)dealloc;
- (void)didChangeVisibleRect;
- (id)generateAssetTransitionInfo;
- (void)imageRequester:(id)arg1 didChange:(id)arg2;
- (id)loadView;
- (void)setEdgeAntialiasingEnabled:(BOOL)arg1;
- (void)setGainMapImage:(struct CGImage *)arg1;
- (void)setGainMapValue:(float)arg1;
- (void)setPreloadedImage:(id)arg1;
- (BOOL)shouldAvoidInPlaceSnapshottedFadeOut;
- (struct CGSize)targetSizeForProposedTargetSize:(struct CGSize)arg1;
- (void)updateModulator;
- (void)updateModulatorInputs;
- (void)updateMutableImageLayerModulator:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (BOOL)wantsVisibleRectChanges;

@end

