//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIStorePageSection.h>

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>
#import <StoreKitUI/SKUIObservableScrollViewDelegate-Protocol.h>
#import <StoreKitUI/SKUIShelfPageSection-Protocol.h>
#import <StoreKitUI/SKUIShelfPageSectionConfigurationDataSource-Protocol.h>
#import <StoreKitUI/SKUIViewElementSlideshowDelegate-Protocol.h>
#import <StoreKitUI/UICollectionViewDataSource-Protocol.h>
#import <StoreKitUI/UICollectionViewDelegate-Protocol.h>

@class NSArray, NSString, SKUIShelfPageComponent, SKUIShelfPageSectionConfiguration, SKUIShelfViewElement, SKUIViewElementLayoutContext, SKUIViewElementSlideshowController;
@protocol SKUIScrollViewDelegateObserver;

@interface SKUIShelfPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIObservableScrollViewDelegate, SKUIShelfPageSectionConfigurationDataSource, SKUIViewElementSlideshowDelegate, UICollectionViewDataSource, UICollectionViewDelegate, SKUIShelfPageSection>
{
    SKUIViewElementLayoutContext *_cellLayoutContext;
    SKUIShelfPageSectionConfiguration *_configuration;
    long long _lastNeedsMoreCount;
    SKUIShelfViewElement *_shelfViewElement;
    SKUIViewElementSlideshowController *_slideshowController;
    NSArray *_viewElements;
    id<SKUIScrollViewDelegateObserver> _scrollViewDelegateObserver;
}

@property (readonly, nonatomic) SKUIShelfPageSectionConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) SKUIShelfPageComponent *pageComponent; // @dynamic pageComponent;
@property (weak, nonatomic) id<SKUIScrollViewDelegateObserver> scrollViewDelegateObserver; // @synthesize scrollViewDelegateObserver=_scrollViewDelegateObserver;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_normalizedShelfItemIndexPathFromActualIndexPath:(id)arg1;
- (void)_performDefaultSelectActionForEffectiveViewElement:(id)arg1;
- (void)_reloadViewElementProperties;
- (void)_setContext:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (long long)applyUpdateType:(long long)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)backgroundColorForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didConfirmButtonElement:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 layout:(id)arg2 willApplyLayoutAttributes:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)dealloc;
- (void)deselectItemsAnimated:(BOOL)arg1;
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithPageComponent:(id)arg1;
- (id)initWithPageComponent:(id)arg1 configuration:(id)arg2;
- (void)invalidateCachedLayoutInformation;
- (long long)numberOfCells;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (struct UIEdgeInsets)sectionContentInset;
- (void)setTopSection:(BOOL)arg1;
- (id)shelfPageSectionConfiguration:(id)arg1 viewElementAtIndex:(long long)arg2;
- (BOOL)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(BOOL)arg3;
- (void)viewElementSlideshowWillDismiss:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(id)arg3;

@end

