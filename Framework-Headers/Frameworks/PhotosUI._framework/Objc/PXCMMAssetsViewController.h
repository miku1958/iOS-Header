//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXCMMComponentViewController.h>

#import <PhotosUICore/PXActionPerformerDelegate-Protocol.h>
#import <PhotosUICore/PXAssetsSceneDelegate-Protocol.h>
#import <PhotosUICore/PXCMMBannerTileControllerDelegate-Protocol.h>
#import <PhotosUICore/PXCMMEngineDrivenLayoutDelegate-Protocol.h>
#import <PhotosUICore/PXCMMFooterViewModelActionDelegate-Protocol.h>
#import <PhotosUICore/PXCMMProgressBannerViewLayoutDelegate-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXContextualNotificationDelegate-Protocol.h>
#import <PhotosUICore/PXOneUpPresentationDelegate-Protocol.h>
#import <PhotosUICore/PXPhotosGlobalFooterViewDelegate-Protocol.h>
#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>
#import <PhotosUICore/PXSwipeSelectionManagerDelegate-Protocol.h>
#import <PhotosUICore/PXTileSource-Protocol.h>

@class NSArray, NSMutableSet, NSSet, NSString, PXAssetReference, PXBasicTileAnimator, PXCMMBannerTileController, PXCMMFooterViewModel, PXCMMProgressBannerView, PXCMMSendBackBannerView, PXCMMSendBackSuggestionSource, PXCMMSpec, PXCMMSpecManager, PXContextualNotification, PXLayoutGenerator, PXMomentShareStatusPresentation, PXOneUpPresentation, PXPhotosGlobalFooterView, PXSectionedLayoutEngine, PXSwipeSelectionManager, PXTilingController, PXUIAssetsScene, PXUIScrollViewController, PXUITapGestureRecognizer, PXUpdater, UILongPressGestureRecognizer;
@protocol PXCMMAssetsViewControllerDelegate;

@interface PXCMMAssetsViewController : PXCMMComponentViewController <PXAssetsSceneDelegate, PXTileSource, PXCMMEngineDrivenLayoutDelegate, PXSwipeSelectionManagerDelegate, PXChangeObserver, PXOneUpPresentationDelegate, PXCMMBannerTileControllerDelegate, PXScrollViewControllerObserver, PXPhotosGlobalFooterViewDelegate, PXCMMFooterViewModelActionDelegate, PXContextualNotificationDelegate, PXActionPerformerDelegate, PXCMMProgressBannerViewLayoutDelegate>
{
    PXUpdater *_updater;
    PXLayoutGenerator *_layoutGenerator;
    PXSectionedLayoutEngine *_layoutEngine;
    BOOL _layoutAnimationsGloballyDisabled;
    PXUIScrollViewController *_scrollViewController;
    PXBasicTileAnimator *_tileAnimator;
    PXTilingController *_tilingController;
    PXUIAssetsScene *_sceneController;
    PXCMMProgressBannerView *_progressBannerView;
    NSArray *_progressBannerViewConstraints;
    PXUITapGestureRecognizer *_tapSelectionGesture;
    PXSwipeSelectionManager *_swipeSelectionManager;
    PXUITapGestureRecognizer *_layoutTransitionGesture;
    UILongPressGestureRecognizer *_longPressGesture;
    PXAssetReference *_navigatedAssetReference;
    PXCMMSpecManager *_specManager;
    PXCMMSpec *_spec;
    PXMomentShareStatusPresentation *_momentShareStatusPresentationForFooter;
    PXCMMFooterViewModel *_statusFooterViewModel;
    PXPhotosGlobalFooterView *_measuringStatusFooterView;
    PXCMMBannerTileController *_measuringBannerTile;
    PXCMMSendBackBannerView *_measuringSendBackBannerView;
    PXMomentShareStatusPresentation *_momentShareStatusPresentationForPoster;
    NSMutableSet *_inUseTiles;
    struct CGSize _knownReferenceSize;
    BOOL _needsToPerformInitialSelection;
    PXCMMSendBackSuggestionSource *_sendBackSuggestionSource;
    PXContextualNotification *_sendBackNotification;
    BOOL _sendBackNotificationWasDiscarded;
    BOOL _sendBackNotificationWasTapped;
    BOOL _receivingActionButtonWasTapped;
    BOOL _didIncrementNumberOfPresentableSendBacks;
    BOOL _didIncrementNumberOfPresentedSendBacks;
    BOOL _isWaitingForSendBackPresentationConfirmationTimeout;
    unsigned long long _sendBackPresentationConfirmationGeneration;
    struct {
        BOOL shouldShowAddMoreButton;
        BOOL didTapAddMoreButton;
        BOOL oneUpPresentation;
    } _delegateRespondsTo;
    BOOL _actionInProgress;
    BOOL _userSelectionEnabled;
    id<PXCMMAssetsViewControllerDelegate> _delegate;
    long long __layoutType;
    NSSet *__hiddenAssetReferences;
    struct UIEdgeInsets _contentInset;
}

@property (strong, nonatomic) NSSet *_hiddenAssetReferences; // @synthesize _hiddenAssetReferences=__hiddenAssetReferences;
@property (nonatomic) long long _layoutType; // @synthesize _layoutType=__layoutType;
@property (readonly, nonatomic) PXOneUpPresentation *_oneUpPresentation;
@property (nonatomic, getter=isActionInProgress) BOOL actionInProgress; // @synthesize actionInProgress=_actionInProgress;
@property (nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXCMMAssetsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL userSelectionEnabled; // @synthesize userSelectionEnabled=_userSelectionEnabled;

- (void).cxx_destruct;
- (unsigned long long)_additionalTileCount;
- (BOOL)_areAllNotCopiedAssetsSelected;
- (long long)_assetImportStateAtIndexPath:(struct PXSimpleIndexPath)arg1 withDataSource:(id)arg2;
- (struct PXSimpleIndexPath)_assetIndexPathAtLocation:(struct CGPoint)arg1 padding:(struct UIEdgeInsets)arg2;
- (struct PXSimpleIndexPath)_assetIndexPathAtLocation:(struct CGPoint)arg1 padding:(struct UIEdgeInsets)arg2 kind:(unsigned long long)arg3;
- (id)_assetReferenceAtPoint:(struct CGPoint)arg1 padding:(struct UIEdgeInsets)arg2;
- (double)_bannerHeightFromReferenceSize:(struct CGSize)arg1;
- (BOOL)_canShowSendBackSuggestion;
- (void)_checkSendBackPresentationStatus;
- (void)_configureBannerTile:(id)arg1;
- (void)_configureLayout:(id)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)_createAddButton;
- (id)_createBannerTileController;
- (id)_createNewLayout;
- (id)_createNewLayoutGeneratorWithReferenceSize:(struct CGSize)arg1;
- (id)_createOverlayTileView;
- (id)_createPosterTileController;
- (id)_createSectionHeaderController;
- (id)_createSendBackBannerView;
- (id)_createSendBackFooter;
- (id)_createStatusFooter;
- (id)_createStatusTileView;
- (void)_deselectAllAssets;
- (void)_didFindPresentableSendBack;
- (void)_didPresentSendBack;
- (void)_handleLongPress:(id)arg1;
- (void)_handleSendBackPresentationConfirmationTimeoutForGeneration:(unsigned long long)arg1;
- (void)_handleTap:(id)arg1;
- (double)_headerHeightFromReferenceSize:(struct CGSize)arg1 insets:(struct UIEdgeInsets)arg2;
- (id)_indexPathsForAssetReferences:(id)arg1 inDataSource:(id)arg2;
- (void)_invalidateLayoutGenerator;
- (void)_invokeSendBackAction;
- (BOOL)_isAssetAlreadyImportedAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (BOOL)_isAssetAlreadyImportedAtIndexPath:(struct PXSimpleIndexPath)arg1 withEngineDrivenLayout:(id)arg2;
- (BOOL)_isSendBackBannerViewContentsAtAllVisible;
- (BOOL)_isSendBackBannerViewContentsFullyVisible;
- (struct CGSize)_maximumThumbnailSize;
- (void)_performInitialSelectionIfNeeded;
- (void)_performTilingChangeWithoutAnimationTransition:(CDUnknownBlockType)arg1;
- (void)_preferredContentSizeChanged:(id)arg1;
- (double)_progressBannerViewLayoutHeight;
- (void)_scheduleLayout;
- (void)_selectAllAssets;
- (void)_selectCuratedAssets;
- (void)_selectNonCopiedAssets;
- (void)_selectionModeDidChange;
- (double)_sendBackFooterHeightFromReferenceSize:(struct CGSize)arg1;
- (void)_setHiddenAssetReferences:(id)arg1;
- (void)_setLayoutType:(long long)arg1;
- (BOOL)_shouldShowOneUpActions;
- (BOOL)_shouldShowProgressBanner;
- (double)_statusFooterHeightFromReferenceSize:(struct CGSize)arg1 insets:(struct UIEdgeInsets)arg2;
- (void)_toggleAssetSelectionAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (void)_transitionLayoutGesture:(id)arg1;
- (void)_updateAssetsScene;
- (void)_updateGestures;
- (void)_updateLayoutEngine;
- (void)_updatePlaceholder;
- (void)_updateProgressBannerViewConstraints;
- (void)_updateProgressBannerViewVisibility;
- (void)_updateSelectionEnabled;
- (void)_updateSelectionIfNeeded;
- (void)_updateSendBackNotification;
- (void)_updateStyle;
- (BOOL)actionPerformer:(id)arg1 dismissViewController:(struct NSObject *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)actionPerformer:(id)arg1 presentViewController:(struct NSObject *)arg2;
- (void)addButtonTapped:(id)arg1;
- (id)assetsScene:(id)arg1 layoutForDataSource:(id)arg2;
- (id)assetsScene:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (struct CGRect)contextualNotification:(id)arg1 containingFrameInCoordinateSpace:(id)arg2;
- (void)contextualNotificationDidAppear:(id)arg1;
- (void)contextualNotificationDidDisappear:(id)arg1;
- (void)contextualNotificationWasDiscarded:(id)arg1;
- (void)contextualNotificationWasTapped:(id)arg1;
- (void)didPerformDeletionActionForFooterViewModel:(id)arg1;
- (void)didTapActionButtonInBannerTileController:(id)arg1;
- (double)engineDrivenLayout:(id)arg1 aspectRatioForItemAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (long long)engineDrivenLayout:(id)arg1 assetStatusAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (struct CGRect)engineDrivenLayout:(id)arg1 contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath)arg2 forAspectRatio:(double)arg3;
- (BOOL)engineDrivenLayout:(id)arg1 shouldShowDimmingOverlayAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (BOOL)engineDrivenLayout:(id)arg1 shouldShowStatusBadgeAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (void)engineDrivenLayoutReferenceSizeDidChange:(id)arg1;
- (id)initWithSession:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;
- (void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;
- (long long)oneUpPresentationActionContext:(id)arg1;
- (id)oneUpPresentationActionManager:(id)arg1;
- (id)oneUpPresentationActionManagerForPreviewing:(id)arg1;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (id)oneUpPresentationImportStatusManager:(id)arg1;
- (id)oneUpPresentationInitialAssetReference:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (void)photosGlobalFooterView:(id)arg1 presentViewController:(id)arg2;
- (id)preferredContainerViewForContextualNotification:(id)arg1;
- (void)presentSendBackNotification;
- (void)progressBannerViewLayoutHeightDidChange:(id)arg1;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (struct PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathAtLocation:(struct CGPoint)arg2;
- (struct PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathClosestAboveLocation:(struct CGPoint)arg2;
- (struct PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathClosestLeadingLocation:(struct CGPoint)arg2;
- (BOOL)swipeSelectionManager:(id)arg1 shouldSelectItemAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (void)swipeSelectionManagerAutomaticallyTransitionToMultiSelectMode:(id)arg1;
- (BOOL)swipeSelectionManagerIsInMultiSelectMode:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end
