//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIStorePageSection.h>

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>
#import <StoreKitUI/SKUIEmbeddedMediaViewDelegate-Protocol.h>
#import <StoreKitUI/SKUIItemStateCenterObserver-Protocol.h>
#import <StoreKitUI/SKUIMissingItemDelegate-Protocol.h>
#import <StoreKitUI/SKUIProductPageOverlayDelegate-Protocol.h>

@class NSMapTable, NSMutableIndexSet, NSString, SKUIClientContext, SKUILockupComponent, SKUIMissingItemLoader, SKUIProductPageOverlayController, SKUIRowComponent;

@interface SKUIRowSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIEmbeddedMediaViewDelegate, SKUIItemStateCenterObserver, SKUIMissingItemDelegate, SKUIProductPageOverlayDelegate>
{
    SKUIClientContext *_clientContext;
    NSMapTable *_columnViews;
    NSMapTable *_componentArtworkRequestIDs;
    NSMapTable *_editorialLayouts;
    NSMutableIndexSet *_expandedEditorialIndexes;
    NSMapTable *_galleryViewControllers;
    NSMapTable *_countdownViewControllers;
    BOOL _isPad;
    double _landscapeCellContentHeight;
    SKUIMissingItemLoader *_missingItemLoader;
    SKUIProductPageOverlayController *_overlayController;
    SKUILockupComponent *_overlaySourceComponent;
    double _portraitCellContentHeight;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) SKUIRowComponent *pageComponent; // @dynamic pageComponent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_cellContentHeightForRowWidth:(double)arg1;
- (id)_columnViews;
- (double)_columnWidthForColumnIndex:(long long)arg1 rowWidth:(double)arg2;
- (struct UIEdgeInsets)_edgeInsetsForColumnIndex:(long long)arg1;
- (id)_editorialLayoutForEditorial:(id)arg1 columnIndex:(long long)arg2;
- (id)_editorialLayoutForLockup:(id)arg1 columnIndex:(long long)arg2;
- (void)_enumerateLockupsWithBlock:(CDUnknownBlockType)arg1;
- (void)_expandEditorialComponent:(id)arg1 columnIndex:(long long)arg2;
- (double)_heightForArtwork:(id)arg1 columnIndex:(long long)arg2 rowWidth:(double)arg3;
- (double)_heightForComponent:(id)arg1 columnIndex:(double)arg2 rowWidth:(double)arg3;
- (double)_heightForCountdownComponent:(id)arg1 columnIndex:(long long)arg2 rowWidth:(double)arg3;
- (double)_heightForEditorialComponent:(id)arg1 columnIndex:(long long)arg2 rowWidth:(double)arg3;
- (double)_heightForGalleryComponent:(id)arg1 columnIndex:(long long)arg2 rowWidth:(double)arg3;
- (double)_heightForLockupComponent:(id)arg1 columnIndex:(long long)arg2 rowWidth:(double)arg3;
- (double)_heightForMediaComponent:(id)arg1 columnIndex:(long long)arg2 rowWidth:(double)arg3;
- (id)_imageConsumerWithItem:(id)arg1 lockupSize:(long long)arg2;
- (double)_interColumnSpacing;
- (void)_loadImagesForGalleryComponent:(id)arg1 columnIndex:(long long)arg2;
- (id)_lockupImageForComponent:(id)arg1;
- (id)_lockupPlaceholderForComponent:(id)arg1;
- (struct SKUILockupStyle)_lockupStyleForComponent:(id)arg1 columnIndex:(long long)arg2;
- (id)_missingItemLoader;
- (id)_newSizeToFitArtworkRequestWithArtwork:(id)arg1 columnIndex:(long long)arg2;
- (id)_newViewWithMediaComponent:(id)arg1;
- (id)_overlaySourceCell;
- (id)_popSourceViewForOverlayController:(id)arg1;
- (void)_reloadEditorialCell:(id)arg1 forComponent:(id)arg2 columnIndex:(long long)arg3;
- (void)_reloadEditorialLockupCell:(id)arg1 forComponent:(id)arg2 columnIndex:(long long)arg3;
- (void)_reloadLockupCell:(id)arg1 forComponent:(id)arg2 columnIndex:(long long)arg3;
- (void)_reloadView:(id)arg1 forMediaComponent:(id)arg2 columnIndex:(long long)arg3;
- (void)_selectGalleryComponent:(id)arg1 columnIndex:(long long)arg2;
- (void)_selectLockupComponent:(id)arg1 columnIndex:(long long)arg2;
- (void)_selectMediaComponent:(id)arg1 columnIndex:(long long)arg2;
- (void)_setPositionForClickEvent:(id)arg1 elementIndex:(long long)arg2;
- (id)_viewControllerForCountdownComponent:(id)arg1;
- (id)_viewControllerForGalleryComponent:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)backgroundColorForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)clickEventWithItem:(id)arg1 elementName:(id)arg2 index:(long long)arg3;
- (void)collectionViewDidConfirmItemOfferAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;
- (void)invalidateCachedLayoutInformation;
- (id)itemOfferClickEventWithItem:(id)arg1 elementName:(id)arg2 index:(long long)arg3;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)itemStateCenterRestrictionsChanged:(id)arg1;
- (void)mediaView:(id)arg1 playbackStateDidChange:(long long)arg2;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;
- (long long)numberOfCells;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (id)productPageOverlay:(id)arg1 flipSourceViewToDismissItem:(id)arg2;
- (id)productPageOverlay:(id)arg1 flipSourceViewToPresentItem:(id)arg2;
- (void)productPageOverlayDidDismiss:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (void)willHideInContext:(id)arg1;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

