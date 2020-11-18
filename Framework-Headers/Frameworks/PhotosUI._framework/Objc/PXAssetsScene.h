//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXAssetsDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXReusableObjectPoolDelegate-Protocol.h>
#import <PhotosUICore/PXTileSource-Protocol.h>
#import <PhotosUICore/PXTilingControllerScrollDelegate-Protocol.h>
#import <PhotosUICore/PXTilingControllerTransitionDelegate-Protocol.h>

@class NSMutableArray, NSString, PXAssetBadgeManager, PXAssetsDataSource, PXAssetsDataSourceManager, PXAssetsTilingLayout, PXMediaProvider, PXReusableObjectPool, PXScrollViewSpeedometer, PXSectionedSelectionManager, PXTilingController;
@protocol PXAssetsSceneDelegate;

@interface PXAssetsScene : NSObject <PXReusableObjectPoolDelegate, PXAssetsDataSourceManagerObserver, PXChangeObserver, PXTileSource, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate>
{
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    BOOL _hasScheduledUpdate;
    struct {
        BOOL layout;
    } _needsUpdateFlags;
    struct {
        BOOL respondsToTileIdentifierConverterForChange;
        BOOL respondsToWillTransitionToDataSource;
        BOOL respondsToDidTransitionToDataSource;
        BOOL respondsToTransitionAnimationCoordinatorForChange;
    } _delegateFlags;
    BOOL _isAskingForTileIdentifierConverter;
    BOOL _isAskingForTransitionAnimationCoordinator;
    BOOL _animatesContent;
    id<PXAssetsSceneDelegate> _delegate;
    PXTilingController *_tilingController;
    PXMediaProvider *_mediaProvider;
    PXAssetsDataSourceManager *_dataSourceManager;
    PXSectionedSelectionManager *_selectionManager;
    PXAssetBadgeManager *_badgeManager;
    PXScrollViewSpeedometer *_scrollSpeedometer;
    PXReusableObjectPool *_viewTileReusePool;
    PXAssetsDataSource *__dataSource;
    NSMutableArray *__anchors;
}

@property (readonly, nonatomic) NSMutableArray *_anchors; // @synthesize _anchors=__anchors;
@property (strong, nonatomic, setter=_setDataSource:) PXAssetsDataSource *_dataSource; // @synthesize _dataSource=__dataSource;
@property (nonatomic) BOOL animatesContent; // @synthesize animatesContent=_animatesContent;
@property (readonly, nonatomic) PXAssetBadgeManager *badgeManager; // @synthesize badgeManager=_badgeManager;
@property (readonly, nonatomic) PXAssetsTilingLayout *currentLayout;
@property (readonly, nonatomic) PXAssetsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXAssetsSceneDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PXMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property (readonly, nonatomic) PXScrollViewSpeedometer *scrollSpeedometer; // @synthesize scrollSpeedometer=_scrollSpeedometer;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager; // @synthesize selectionManager=_selectionManager;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXAssetsTilingLayout *targetLayout;
@property (readonly, nonatomic) PXTilingController *tilingController; // @synthesize tilingController=_tilingController;
@property (readonly, nonatomic) PXReusableObjectPool *viewTileReusePool; // @synthesize viewTileReusePool=_viewTileReusePool;

- (void).cxx_destruct;
- (void)_configureLayout:(id)arg1;
- (void)_invalidateLayout;
- (void)_saveAnchorAsset;
- (void)_updateDataSourceIfNeeded;
- (void)_updateLayoutIfNeeded;
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (void)dealloc;
- (void)didTransitionToDataSource:(id)arg1;
- (id)init;
- (id)initWithTilingController:(id)arg1 mediaProvider:(id)arg2 dataSourceManager:(id)arg3 delegate:(id)arg4;
- (id)initWithTilingController:(id)arg1 mediaProvider:(id)arg2 dataSourceManager:(id)arg3 selectionManager:(id)arg4 delegate:(id)arg5;
- (BOOL)needsUpdate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (BOOL)providesTileForIdentifier:(struct PXTileIdentifier)arg1;
- (id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1;
- (void)setNeedsUpdate;
- (struct CGPoint)tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2;
- (struct CGPoint)tilingController:(id)arg1 targetVisibleOriginForLayout:(id)arg2 proposedVisibleOrigin:(struct CGPoint)arg3;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;
- (void)transitionToLayout:(id)arg1;
- (void)updateIfNeeded;
- (void)willTransitionToDataSource:(id)arg1;

@end

