//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIStorePageSection.h>

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>
#import <StoreKitUI/SKUIItemStateCenterObserver-Protocol.h>
#import <StoreKitUI/SKUIObservableScrollViewDelegate-Protocol.h>
#import <StoreKitUI/SKUIShelfPageSection-Protocol.h>
#import <StoreKitUI/SKUIShelfPageSectionConfigurationDataSource-Protocol.h>
#import <StoreKitUI/UICollectionViewDataSource-Protocol.h>
#import <StoreKitUI/UICollectionViewDelegate-Protocol.h>

@class NSString, SKUIDynamicPageSectionIndexMapper, SKUIShelfPageComponent, SKUIShelfPageSectionConfiguration, SKUIShelfViewElement, SKUIViewElementLayoutContext, SKUIViewElementTextLayoutCache;
@protocol SKUIDynamicShelfViewElement, SKUIEntityProviding, SKUIScrollViewDelegateObserver;

@interface SKUIDynamicShelfPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIItemStateCenterObserver, SKUIObservableScrollViewDelegate, SKUIShelfPageSectionConfigurationDataSource, UICollectionViewDataSource, UICollectionViewDelegate, SKUIShelfPageSection>
{
    SKUIViewElementLayoutContext *_cellLayoutContext;
    SKUIShelfPageSectionConfiguration *_configuration;
    SKUIDynamicPageSectionIndexMapper *_dynamicPageSectionIndexMapper;
    SKUIShelfViewElement<SKUIDynamicShelfViewElement> *_dynamicShelfViewElement;
    id<SKUIEntityProviding> _entityProvider;
    SKUIViewElementTextLayoutCache *_labelLayoutCache;
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
- (void)_reloadViewElementProperties;
- (void)_setContext:(id)arg1;
- (id)_viewElementForEntityAtGlobalIndex:(long long)arg1;
- (long long)applyUpdateType:(long long)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)backgroundColorForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didConfirmButtonElement:(id)arg2 withClickInfo:(id)arg3 forItemAtIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 layout:(id)arg2 willApplyLayoutAttributes:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (void)dealloc;
- (void)deselectItemsAnimated:(BOOL)arg1;
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;
- (id)initWithPageComponent:(id)arg1;
- (id)initWithPageComponent:(id)arg1 configuration:(id)arg2;
- (void)invalidateCachedLayoutInformation;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (long long)numberOfCells;
- (id)relevantEntityProviders;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (struct UIEdgeInsets)sectionContentInset;
- (void)setSectionIndex:(long long)arg1;
- (void)setTopSection:(BOOL)arg1;
- (id)shelfPageSectionConfiguration:(id)arg1 viewElementAtIndex:(long long)arg2;
- (void)willAppearInContext:(id)arg1;
- (void)willHideInContext:(id)arg1;

@end

