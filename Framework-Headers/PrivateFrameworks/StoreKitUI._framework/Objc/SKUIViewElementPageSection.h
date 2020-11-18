//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIStorePageSection.h>

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>

@class NSString, SKUICollectionViewCell, SKUIViewElementLayoutContext;
@protocol SKUIViewElementView;

@interface SKUIViewElementPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate>
{
    Class _cellClass;
    struct UIEdgeInsets _cellContentInset;
    SKUIViewElementLayoutContext *_cellLayoutContext;
    double _firstSectionTopInset;
    SKUICollectionViewCell<SKUIViewElementView> *_lastCell;
    BOOL _rendersWithPerspective;
    NSString *_reuseIdentifier;
    double _sectionBottomInset;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_reloadViewElementProperties;
- (void)_requestCellLayout;
- (BOOL)_showsImageReflection;
- (BOOL)_stretchesToFitCollectionViewBounds;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (long long)applyUpdateType:(long long)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)backgroundColorForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (BOOL)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;
- (BOOL)collectionViewShouldSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (double)contentInsetAdjustmentForCollectionView:(id)arg1;
- (long long)defaultItemPinningStyle;
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;
- (void)expandEditorialForLabelElement:(id)arg1 indexPath:(id)arg2;
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithPageComponent:(id)arg1;
- (long long)numberOfCells;
- (struct UIEdgeInsets)pinningContentInsetForItemAtIndexPath:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (id)previewViewControllerForIndexPath:(id)arg1;
- (BOOL)previewsSupportedForIndexPath:(id)arg1;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;
- (struct UIEdgeInsets)sectionContentInset;
- (BOOL)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(BOOL)arg3;
- (void)willAppearInContext:(id)arg1;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

