//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXRelatedWidget.h>

#import <PhotosUICore/PXDiagnosticsEnvironment-Protocol.h>
#import <PhotosUICore/PXReusableObjectPoolDelegate-Protocol.h>
#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>
#import <PhotosUICore/PXTilingControllerPreheatHandler-Protocol.h>
#import <PhotosUICore/PXTilingControllerZoomAnimationCoordinatorDelegate-Protocol.h>
#import <PhotosUICore/PXUIWidget-Protocol.h>
#import <PhotosUICore/UIGestureRecognizerDelegate-Protocol.h>

@class NSMutableSet, NSObject, NSString, PXOneUpPresentation, PXPhotoKitUIMediaProvider, PXPhotosDetailsContext, PXReusableObjectPool, PXSectionedSelectionManager, PXTilingController, PXTouchingUIGestureRecognizer, PXUITapGestureRecognizer, PXWidgetSpec, _PXUIRelatedPreviewOrbContext;
@protocol PXAnonymousView, PXWidgetDelegate, PXWidgetEditingDelegate, PXWidgetUnlockDelegate;

@interface PXUIRelatedWidget : PXRelatedWidget <PXReusableObjectPoolDelegate, UIGestureRecognizerDelegate, PXScrollViewControllerObserver, PXTilingControllerZoomAnimationCoordinatorDelegate, PXTilingControllerPreheatHandler, PXUIWidget, PXDiagnosticsEnvironment>
{
    BOOL _userInteractionEnabled;
    PXReusableObjectPool *__tileReusePool;
    NSMutableSet *__tilesInUse;
    PXPhotoKitUIMediaProvider *__mediaProvider;
    PXUITapGestureRecognizer *__tapGestureRecognizer;
    PXTouchingUIGestureRecognizer *__touchGestureRecognizer;
    _PXUIRelatedPreviewOrbContext *__previewOrbContext;
}

@property (readonly, nonatomic) PXPhotoKitUIMediaProvider *_mediaProvider; // @synthesize _mediaProvider=__mediaProvider;
@property (strong, nonatomic, setter=_setPreviewOrbContext:) _PXUIRelatedPreviewOrbContext *_previewOrbContext; // @synthesize _previewOrbContext=__previewOrbContext;
@property (readonly, nonatomic) PXUITapGestureRecognizer *_tapGestureRecognizer; // @synthesize _tapGestureRecognizer=__tapGestureRecognizer;
@property (readonly, nonatomic) PXReusableObjectPool *_tileReusePool; // @synthesize _tileReusePool=__tileReusePool;
@property (readonly, nonatomic) NSMutableSet *_tilesInUse; // @synthesize _tilesInUse=__tilesInUse;
@property (readonly, nonatomic) PXTouchingUIGestureRecognizer *_touchGestureRecognizer; // @synthesize _touchGestureRecognizer=__touchGestureRecognizer;
@property (readonly, nonatomic) BOOL allowUserInteractionWithSubtitle;
@property (readonly, nonatomic) long long contentLayoutStyle;
@property (readonly, nonatomic) PXTilingController *contentTilingController;
@property (readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
@property (readonly, nonatomic) long long contentViewAnchoringType;
@property (strong, nonatomic) PXPhotosDetailsContext *context;
@property (readonly, nonatomic) BOOL cursorInteractionEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) double extraSpaceNeededAtContentBottom;
@property (nonatomic, getter=isFaceModeEnabled) BOOL faceModeEnabled;
@property (readonly, nonatomic) BOOL hasContentForCurrentInput;
@property (readonly, nonatomic) BOOL hasLoadedContentData;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isInEditMode;
@property (readonly, nonatomic) NSString *localizedCaption;
@property (readonly, nonatomic) NSString *localizedDisclosureTitle;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) struct CGSize maxVisibleSizeInEditMode;
@property (strong, nonatomic) PXOneUpPresentation *oneUpPresentation;
@property (nonatomic, getter=isSelecting) BOOL selecting;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (strong, nonatomic) PXWidgetSpec *spec;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFaceMode;
@property (readonly, nonatomic) BOOL supportsSelection;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property (readonly, nonatomic) BOOL wantsFocus;
@property (weak, nonatomic) id<PXWidgetDelegate> widgetDelegate;
@property (weak, nonatomic) id<PXWidgetEditingDelegate> widgetEditingDelegate;
@property (weak, nonatomic) id<PXWidgetUnlockDelegate> widgetUnlockDelegate;

- (void).cxx_destruct;
- (struct PXSimpleIndexPath)_assetIndexPathAtLocation:(struct CGPoint)arg1 padding:(struct UIEdgeInsets)arg2;
- (id)_assetsBySizeWithTileIdentifiers:(const struct PXTileIdentifier *)arg1 withGeometries:(const struct PXTileGeometry *)arg2 count:(unsigned long long)arg3;
- (void)_getImageRequester:(id *)arg1 title:(id *)arg2 subtitle:(id *)arg3 forRelatedEntry:(id)arg4 mediaProvider:(id)arg5;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)_handleTouchGestureRecognizer:(id)arg1;
- (id)_photosDetailsViewControllerForRelatedEntry:(id)arg1 options:(unsigned long long)arg2;
- (void)_registerTileClass:(Class)arg1 forReuseIdentifier:(long long)arg2;
- (id)_relatedEntryAtLocationOfGestureRecognizer:(id)arg1;
- (id)_relatedEntryAtPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (id)_scrollViewController;
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (void)commitPreviewViewController:(id)arg1;
- (BOOL)containsPoint:(struct CGPoint)arg1 forCoordinateSpace:(id)arg2;
- (id)createTileAnimator;
- (void)environmentDidUpdateFocusInContext:(id)arg1;
- (id)extendedTraitCollection;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)imageViewBasicTileForPreviewingAtPoint:(struct CGPoint)arg1;
- (id)init;
- (void)installGestureRecognizers;
- (void)loadContentData;
- (void)prepareForInteractiveTransition:(id)arg1;
- (id)previewViewControllerAtLocation:(struct CGPoint)arg1 fromSourceView:(id)arg2;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (id)regionOfInterestForContext:(id)arg1;
- (void)reusableObjectPool:(id)arg1 didCreateReusableObject:(id)arg2;
- (void)reusableObjectPool:(id)arg1 didEvictReusableObject:(id)arg2;
- (void)reusableObjectPool:(id)arg1 objectBecameReusable:(id)arg2;
- (void)reusableObjectPool:(id)arg1 objectPreparedForReuse:(id)arg2;
- (void)scrollViewControllerDidBeginScrolling:(id)arg1;
- (void)startPreheatingTilesForIdentifiers:(const struct PXTileIdentifier *)arg1 withGeometries:(const struct PXTileGeometry *)arg2 count:(unsigned long long)arg3 context:(void *)arg4;
- (void)stopPreheatingTilesForIdentifiers:(const struct PXTileIdentifier *)arg1 withGeometries:(const struct PXTileGeometry *)arg2 count:(unsigned long long)arg3 context:(void *)arg4;
- (void)tilingControllerZoomAnimationCoordinator:(id)arg1 enumerateTilesToAnimateInLayerWithType:(long long)arg2 layout:(id)arg3 zoomAnimationContext:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (id)zoomAnimationCoordinatorForContext:(id)arg1;

@end

