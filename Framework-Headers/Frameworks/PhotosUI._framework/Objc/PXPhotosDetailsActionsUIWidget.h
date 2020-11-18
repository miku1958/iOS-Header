//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXActionPerformerDelegate-Protocol.h>
#import <PhotosUICore/PXActionRowTileDelegate-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>
#import <PhotosUICore/PXPhotosDataSourceChangeObserver-Protocol.h>
#import <PhotosUICore/PXReusableObjectPoolDelegate-Protocol.h>
#import <PhotosUICore/PXTileSource-Protocol.h>
#import <PhotosUICore/PXTilingControllerTransitionDelegate-Protocol.h>
#import <PhotosUICore/PXUIWidget-Protocol.h>
#import <PhotosUICore/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSArray, NSMutableSet, NSString, PHFetchResult, PXActionPerformer, PXActionRowTile, PXOneUpPresentation, PXPhotoKitAssetCollectionActionManager, PXPhotosDataSource, PXPhotosDetailsActionsSpecManager, PXPhotosDetailsContext, PXReusableObjectPool, PXSectionedSelectionManager, PXTilingController, PXUIScrollViewController, PXWidgetSpec;
@protocol PXActionPerformerDelegate, PXAnonymousView, PXTileAnimator, PXWidgetDelegate, PXWidgetUnlockDelegate;

@interface PXPhotosDetailsActionsUIWidget : NSObject <PXPhotosDataSourceChangeObserver, PXTileSource, PXTilingControllerTransitionDelegate, PXReusableObjectPoolDelegate, PXActionRowTileDelegate, PXActionPerformerDelegate, PXChangeObserver, PXPhotoLibraryUIChangeObserver, UIPopoverPresentationControllerDelegate, PXUIWidget>
{
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    BOOL _ensureTransition;
    struct {
        BOOL peopleFetchResult;
        BOOL actionManager;
        BOOL allowedActionTypes;
        BOOL performableActionTypes;
        BOOL rowHeight;
        BOOL layout;
    } _needsUpdateFlags;
    BOOL _allowRevealInMomentAction;
    BOOL _allowCreateMemoryAction;
    id<PXWidgetDelegate> _widgetDelegate;
    id<PXWidgetUnlockDelegate> _widgetUnlockDelegate;
    PXWidgetSpec *_spec;
    PXPhotosDetailsContext *_context;
    id<PXActionPerformerDelegate> _actionPerformerDelegate;
    PXTilingController *__tilingController;
    id<PXTileAnimator> __tileAnimator;
    PXUIScrollViewController *__scrollViewController;
    NSMutableSet *__tilesInUse;
    PXReusableObjectPool *__tileReusePool;
    PXPhotosDataSource *__photosDataSource;
    PHFetchResult *__peopleFetchResult;
    PXPhotoKitAssetCollectionActionManager *__assetCollectionActionManager;
    NSArray *__allowedActionTypes;
    NSArray *__performableActionTypes;
    NSMutableSet *__disabledActionTypes;
    PXPhotosDetailsActionsSpecManager *__specManager;
    PXActionRowTile *__measuringActionRowTile;
    double __rowHeight;
    PXActionPerformer *__activePerformer;
    struct CGPoint _lastNormalizedTapPosition;
}

@property (strong, nonatomic, setter=_setActivePerformer:) PXActionPerformer *_activePerformer; // @synthesize _activePerformer=__activePerformer;
@property (strong, nonatomic, setter=_setAllowedActionTypes:) NSArray *_allowedActionTypes; // @synthesize _allowedActionTypes=__allowedActionTypes;
@property (strong, nonatomic, setter=_setAssetCollectionActionManager:) PXPhotoKitAssetCollectionActionManager *_assetCollectionActionManager; // @synthesize _assetCollectionActionManager=__assetCollectionActionManager;
@property (readonly, nonatomic) NSMutableSet *_disabledActionTypes; // @synthesize _disabledActionTypes=__disabledActionTypes;
@property (readonly, nonatomic) PXActionRowTile *_measuringActionRowTile; // @synthesize _measuringActionRowTile=__measuringActionRowTile;
@property (strong, nonatomic, setter=_setPeopleFetchResult:) PHFetchResult *_peopleFetchResult; // @synthesize _peopleFetchResult=__peopleFetchResult;
@property (strong, nonatomic, setter=_setPerformableActionTypes:) NSArray *_performableActionTypes; // @synthesize _performableActionTypes=__performableActionTypes;
@property (strong, nonatomic, setter=_setPhotosDataSource:) PXPhotosDataSource *_photosDataSource; // @synthesize _photosDataSource=__photosDataSource;
@property (nonatomic, setter=_setRowHeight:) double _rowHeight; // @synthesize _rowHeight=__rowHeight;
@property (readonly, nonatomic) PXUIScrollViewController *_scrollViewController; // @synthesize _scrollViewController=__scrollViewController;
@property (readonly, nonatomic) PXPhotosDetailsActionsSpecManager *_specManager; // @synthesize _specManager=__specManager;
@property (readonly, nonatomic) id<PXTileAnimator> _tileAnimator; // @synthesize _tileAnimator=__tileAnimator;
@property (readonly, nonatomic) PXReusableObjectPool *_tileReusePool; // @synthesize _tileReusePool=__tileReusePool;
@property (readonly, nonatomic) NSMutableSet *_tilesInUse; // @synthesize _tilesInUse=__tilesInUse;
@property (readonly, nonatomic) PXTilingController *_tilingController; // @synthesize _tilingController=__tilingController;
@property (weak, nonatomic) id<PXActionPerformerDelegate> actionPerformerDelegate; // @synthesize actionPerformerDelegate=_actionPerformerDelegate;
@property (nonatomic) BOOL allowCreateMemoryAction; // @synthesize allowCreateMemoryAction=_allowCreateMemoryAction;
@property (nonatomic) BOOL allowRevealInMomentAction; // @synthesize allowRevealInMomentAction=_allowRevealInMomentAction;
@property (readonly, nonatomic) BOOL allowUserInteractionWithSubtitle;
@property (readonly, nonatomic) long long contentLayoutStyle;
@property (readonly, nonatomic) PXTilingController *contentTilingController;
@property (readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
@property (readonly, nonatomic) long long contentViewAnchoringType;
@property (strong, nonatomic) PXPhotosDetailsContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFaceModeEnabled) BOOL faceModeEnabled;
@property (readonly, nonatomic) BOOL hasContentForCurrentInput;
@property (readonly, nonatomic) BOOL hasLoadedContentData;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint lastNormalizedTapPosition; // @synthesize lastNormalizedTapPosition=_lastNormalizedTapPosition;
@property (readonly, nonatomic) NSString *localizedCaption;
@property (readonly, nonatomic) NSString *localizedDisclosureTitle;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (strong, nonatomic) PXOneUpPresentation *oneUpPresentation;
@property (nonatomic, getter=isSelecting) BOOL selecting;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (strong, nonatomic) PXWidgetSpec *spec; // @synthesize spec=_spec;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFaceMode;
@property (readonly, nonatomic) BOOL supportsSelection;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (weak, nonatomic) id<PXWidgetDelegate> widgetDelegate; // @synthesize widgetDelegate=_widgetDelegate;
@property (weak, nonatomic) id<PXWidgetUnlockDelegate> widgetUnlockDelegate; // @synthesize widgetUnlockDelegate=_widgetUnlockDelegate;

- (void).cxx_destruct;
- (id)_createNewLayout;
- (id)_extendedTraitCollection;
- (void)_handleContentSizeCategoryDidChange:(id)arg1;
- (void)_invalidateActionManager;
- (void)_invalidateAllowedActionTypes;
- (void)_invalidateLayout;
- (void)_invalidateLayoutEnsureTransition;
- (void)_invalidatePeopleFetchResult;
- (void)_invalidatePerformableActionTypes;
- (void)_invalidateRowHeight;
- (void)_loadTilingController;
- (BOOL)_needsUpdate;
- (void)_performChanges:(CDUnknownBlockType)arg1;
- (void)_setNeedsUpdate;
- (void)_updateActionManagerIfNeeded;
- (void)_updateAllowedActionTypesIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateLayoutIfNeeded;
- (void)_updatePeopleFetchResultIfNeeded;
- (void)_updatePerformableActionTypesIfNeeded;
- (void)_updateRowHeightIfNeeded;
- (void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;
- (BOOL)actionPerformer:(id)arg1 presentViewController:(id)arg2;
- (void)actionRowTileSelected:(id)arg1 tapPositionInTile:(struct CGPoint)arg2;
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (void)configureActionButtonTile:(id)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)reusableObjectPool:(id)arg1 didCreateReusableObject:(id)arg2;
- (void)reusableObjectPool:(id)arg1 didEvictReusableObject:(id)arg2;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;

@end

