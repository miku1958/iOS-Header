//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUI/PUTilingViewTileSource-Protocol.h>
#import <PhotosUI/PUTilingViewTileTransitionDelegate-Protocol.h>
#import <PhotosUI/PXLivePhotoTrimScrubberFilmStripView-Protocol.h>
#import <PhotosUI/UIScrollViewDelegate-Protocol.h>

@class AVAsset, AVVideoComposition, NSArray, NSObject, NSString, PUFilmstripDataSource, PUFilmstripMediaProvider, PUTileViewAnimator, PUTilingView, UIImage;
@protocol OS_dispatch_queue;

@interface PUFilmstripView : UIView <PXLivePhotoTrimScrubberFilmStripView, PUTilingViewTileSource, PUTilingViewTileTransitionDelegate, UIScrollViewDelegate>
{
    BOOL _needsUpdateThumbnailAspectRatio;
    BOOL _needsUpdateDataSource;
    BOOL _needsUpdateLayout;
    BOOL _needsUpdateGeneratedPlaceholder;
    NSObject<OS_dispatch_queue> *_placeholderGenerationQueue;
    PUTileViewAnimator *_animator;
    BOOL _generatesPlaceholderImage;
    BOOL _useContentAspectRatio;
    AVAsset *_asset;
    AVVideoComposition *_videoComposition;
    UIImage *_placeholderImage;
    NSArray *_indicatorInfos;
    PUTilingView *__tilingView;
    PUFilmstripMediaProvider *__mediaProvider;
    PUFilmstripDataSource *__dataSource;
    double __thumbnailAspectRatio;
    UIImage *_generatedPlaceholderImage;
    struct CGRect _visibleRect;
}

@property (strong, nonatomic, setter=_setDataSource:) PUFilmstripDataSource *_dataSource; // @synthesize _dataSource=__dataSource;
@property (strong, nonatomic, setter=_setMediaProvider:) PUFilmstripMediaProvider *_mediaProvider; // @synthesize _mediaProvider=__mediaProvider;
@property (nonatomic, setter=_setThumbnailAspectRatio:) double _thumbnailAspectRatio; // @synthesize _thumbnailAspectRatio=__thumbnailAspectRatio;
@property (readonly, nonatomic) PUTilingView *_tilingView; // @synthesize _tilingView=__tilingView;
@property (copy, nonatomic) AVAsset *asset;
@property (copy, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIImage *generatedPlaceholderImage; // @synthesize generatedPlaceholderImage=_generatedPlaceholderImage;
@property (nonatomic) BOOL generatesPlaceholderImage; // @synthesize generatesPlaceholderImage=_generatesPlaceholderImage;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *indicatorInfos; // @synthesize indicatorInfos=_indicatorInfos;
@property (strong, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useContentAspectRatio;
@property (nonatomic) BOOL useContentAspectRatio; // @synthesize useContentAspectRatio=_useContentAspectRatio;
@property (copy, nonatomic) AVVideoComposition *videoComposition;
@property (copy, nonatomic) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property (nonatomic) struct CGRect visibleRect;
@property (nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;

- (void).cxx_destruct;
- (id)_filmstripLayout;
- (void)_invalidateDataSource;
- (void)_invalidateGeneratedPlaceholderImage;
- (void)_invalidateLayout;
- (void)_invalidateMediaProvider;
- (void)_invalidateThumbnailAspectRatio;
- (BOOL)_isMediaProviderValid;
- (void)_releaseAVObjects;
- (void)_setNeedsUpdate;
- (void)_updateDataSourceIfNeeded;
- (void)_updateGeneratedPlaceholderImageIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateLayoutIfNeeded;
- (void)_updateMediaProviderPlaceholderImage;
- (void)_updateThumbnailAspectRatioIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)reloadThumbnails;
- (void)setLivePhotoTrimScrubberThumbnail:(id)arg1;
- (id)tilingView:(id)arg1 dataSourceConverterForTransitionFromLayout:(id)arg2 toLayout:(id)arg3;
- (id)tilingView:(id)arg1 tileControllerWithIndexPath:(id)arg2 kind:(id)arg3 dataSource:(id)arg4;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForChangeFromFrame:(struct CGRect)arg2 toFrame:(struct CGRect)arg3 duration:(double)arg4;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForTransitionFromLayout:(id)arg2 toLayout:(id)arg3 withContext:(id)arg4;

@end
