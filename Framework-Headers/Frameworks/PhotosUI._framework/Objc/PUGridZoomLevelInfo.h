//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUGridRenderedStripDataSource-Protocol.h>
#import <PhotosUI/PUPhotosSectionHeaderViewDelegate-Protocol.h>
#import <PhotosUI/PUSectionedGridLayoutDelegate-Protocol.h>

@class NSString, PHAssetResourceQualityClass, PHCachingImageManager, PUGridRenderedStrip, PUMomentsZoomLevelManager, PUSectionedGridLayout, PUZoomableGridViewController;

__attribute__((visibility("hidden")))
@interface PUGridZoomLevelInfo : NSObject <PUGridRenderedStripDataSource, PUPhotosSectionHeaderViewDelegate, PUSectionedGridLayoutDelegate>
{
    PUGridRenderedStrip *_currentRenderedStrip;
    BOOL _useFloatingHeaderGroupName;
    BOOL _summarizeSections;
    PHCachingImageManager *_cachingImageManager;
    PUSectionedGridLayout *_collectionViewLayout;
    unsigned long long _zoomLevel;
    PUMomentsZoomLevelManager *_zoomLevelManager;
    PUGridZoomLevelInfo *_baseZoomLevelInfo;
    PUZoomableGridViewController *_zoomableGridViewController;
    double _pendingContentWidth;
    PHAssetResourceQualityClass *_qualityClass;
    long long _maxRowsPerSection;
    struct CGSize _thumbnailImageSize;
    struct CGSize _lastItemPixelSize;
}

@property (readonly, nonatomic) struct __CFString *aggregateLevelKey;
@property (readonly, nonatomic) PUGridZoomLevelInfo *baseZoomLevelInfo; // @synthesize baseZoomLevelInfo=_baseZoomLevelInfo;
@property (readonly, nonatomic) PHCachingImageManager *cachingImageManager; // @synthesize cachingImageManager=_cachingImageManager;
@property (readonly, nonatomic) long long cellFillMode;
@property (readonly, nonatomic) PUSectionedGridLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property (readonly, nonatomic) unsigned long long dateRangeFormatterPreset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct CGSize imageRequestItemSize;
@property (readonly, nonatomic) double itemContentScale;
@property (nonatomic) struct CGSize lastItemPixelSize; // @synthesize lastItemPixelSize=_lastItemPixelSize;
@property (readonly, nonatomic) long long maxRowsPerSection; // @synthesize maxRowsPerSection=_maxRowsPerSection;
@property (nonatomic) double pendingContentWidth; // @synthesize pendingContentWidth=_pendingContentWidth;
@property (strong, nonatomic) PHAssetResourceQualityClass *qualityClass; // @synthesize qualityClass=_qualityClass;
@property (readonly, nonatomic) NSString *renderedStripsElementKind;
@property (readonly, nonatomic) NSString *sectionHeaderElementKind;
@property (nonatomic) BOOL summarizeSections; // @synthesize summarizeSections=_summarizeSections;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsCollectionViewDragSource;
@property (readonly, nonatomic) struct CGSize thumbnailImageSize;
@property (readonly, nonatomic) struct CGSize thumbnailImageSize; // @synthesize thumbnailImageSize=_thumbnailImageSize;
@property (nonatomic) BOOL useFloatingHeaderGroupName;
@property (readonly, nonatomic) double zoomInDuration;
@property (readonly, nonatomic) unsigned long long zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property (readonly, nonatomic) PUMomentsZoomLevelManager *zoomLevelManager; // @synthesize zoomLevelManager=_zoomLevelManager;
@property (readonly, nonatomic) double zoomOutDuration;
@property (nonatomic) PUZoomableGridViewController *zoomableGridViewController;
@property (readonly, nonatomic) PUZoomableGridViewController *zoomableGridViewController; // @synthesize zoomableGridViewController=_zoomableGridViewController;

- (void).cxx_destruct;
- (unsigned long long)_detailViewSourceOriginWithZoomLevel:(unsigned long long)arg1;
- (void)_updateBackdropGroupNameForHeaderView:(id)arg1;
- (id)assetsToDisplayInMapForVisualSection:(long long)arg1;
- (double)cellAspectRatioHint;
- (BOOL)configureGridCell:(id)arg1 forIndexPath:(id)arg2;
- (void)configureSectionHeaderView:(id)arg1 forVisualSection:(long long)arg2;
- (BOOL)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3;
- (id)diagnosticsProviderForVisualSection:(long long)arg1;
- (void)didFinishZoomLevelTransition;
- (void)didTapHeaderView:(id)arg1;
- (void)getPhotosDataSource:(id *)arg1 displayTitleInfo:(id *)arg2 forDetailsForVisualSection:(long long)arg3;
- (void)headerView:(id)arg1 actionButtonPressed:(id)arg2;
- (id)imageDataForAsset:(id)arg1 itemContentScale:(double)arg2 imageWidth:(int *)arg3 imageHeight:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 imageDataOffset:(int *)arg8;
- (long long)imageDeliveryMode;
- (id)initWithZoomLevel:(unsigned long long)arg1 zoomLevelManager:(id)arg2 baseZoomLevelInfo:(id)arg3;
- (void)modelDidChange:(id)arg1;
- (id)newCollectionViewLayout;
- (void)prepareForTransitionFromZoomLevelInfo:(id)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3;
- (void)prepareForTransitionToZoomLevelInfo:(id)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3;
- (void)pushPhotosDetailsViewForVisualSection:(long long)arg1 animated:(BOOL)arg2;
- (void)registerReusableViewClassesForCollectionView:(id)arg1;
- (void)renderedStrip:(id)arg1 enumerateAssetsForVisualSection:(long long)arg2 inVisualItemRange:(struct _NSRange)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)renderedStrip:(id)arg1 imageDataForAsset:(id)arg2 imageWidth:(int *)arg3 imageHeight:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 imageDataOffset:(int *)arg8;
- (void)sectionedGridLayout:(id)arg1 didFinalizePrepareTransitionIsAppearing:(BOOL)arg2;
- (void)sectionedGridLayout:(id)arg1 didInvalidateWithContext:(id)arg2;
- (void)sectionedGridLayout:(id)arg1 didPrepareTransitionIsAppearing:(BOOL)arg2;
- (long long)sectionedGridLayout:(id)arg1 maximumRowsForVisualSection:(long long)arg2;
- (struct CGPoint)sectionedGridLayout:(id)arg1 targetContentOffsetForProposedUpdatesContentOffset:(struct CGPoint)arg2;
- (id)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(id)arg1;
- (BOOL)sectionedGridLayoutTransitionAutoAdjustContentOffsetEnabled:(id)arg1;
- (BOOL)shouldUseDynamicLayout;
- (BOOL)supportsEditMode;
- (BOOL)supportsIncrementalChangeNotifications;
- (void)updateForSizeChangeIfNecessary;
- (void)updateLayoutMetricsForWidth:(double)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (BOOL)wantsAssetCountsVisible;
- (BOOL)wantsAutomaticContentOffsetAdjustment;
- (BOOL)wantsCloudStatusVisible;
- (BOOL)wantsMagnifierNavigation;
- (void)willAnimateSizeTransition;
- (void)willShowMagnifiedViewController:(id)arg1;

@end

