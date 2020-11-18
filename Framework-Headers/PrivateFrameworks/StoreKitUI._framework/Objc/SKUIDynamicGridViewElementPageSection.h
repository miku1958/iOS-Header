//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIStorePageSection.h>

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>
#import <StoreKitUI/SKUICollectionDOMFeatureTargetting-Protocol.h>
#import <StoreKitUI/SKUIGridViewElementPageSectionConfigurationDataSource-Protocol.h>

@class CPLRUDictionary, NSMutableDictionary, NSString, SKUIDynamicPageSectionIndexMapper, SKUIGridComponent, SKUIGridViewElementPageSectionConfiguration, SKUIMutableIntegerValue, SKUIViewElement, SKUIViewElementLayoutContext, SKUIViewElementTextLayoutCache, _SKUIDynamicGridSizeCacheKey;
@protocol SKUIEntityProviding;

@interface SKUIDynamicGridViewElementPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIGridViewElementPageSectionConfigurationDataSource, SKUICollectionDOMFeatureTargetting>
{
    SKUIViewElementLayoutContext *_cellLayoutContext;
    SKUIGridViewElementPageSectionConfiguration *_configuration;
    SKUIDynamicPageSectionIndexMapper *_dynamicPageSectionIndexMapper;
    BOOL _editing;
    id<SKUIEntityProviding> _entityProvider;
    CPLRUDictionary *_globalIndexToEntityValueProviderValueCache;
    CPLRUDictionary *_globalIndexToTemplateViewElementCache;
    SKUIViewElement *_independentlySizedViewElement;
    SKUIViewElementTextLayoutCache *_labelLayoutCache;
    long long _minimumEntityCountForSections;
    _SKUIDynamicGridSizeCacheKey *_reusableSizeCacheKey;
    SKUIMutableIntegerValue *_reusableGlobalIndexIntegerValue;
    unsigned long long *_sectionHeaderGlobalIndices;
    unsigned long long _numberOfSections;
    BOOL _showsSectionHeaders;
    NSMutableDictionary *_sizeCacheKeyToCachedCellSize;
    NSMutableDictionary *_templateViewElementsCache;
    BOOL _usesSizingEntityValueProvider;
    struct {
        unsigned int respondsToSectionEntityValueProviderAtIndex:1;
    } _entityProviderFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEditing) BOOL editing;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) SKUIGridComponent *pageComponent; // @dynamic pageComponent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dynamicGridViewElement;
- (long long)_entityGlobalIndexForGlobalIndex:(long long)arg1 returningSection:(out long long *)arg2;
- (id)_entityValueProviderForGlobalIndex:(long long)arg1 sectionIndex:(long long *)arg2;
- (void)_enumerateVisibleCellsUsingBlock:(CDUnknownBlockType)arg1;
- (long long)_globalIndexForEntityGlobalIndex:(long long)arg1;
- (void)_invalidateCellSizeCache;
- (id)_itemTemplateViewElementForEntityValueProvider:(id)arg1;
- (void)_reloadEntityProperties;
- (void)_reloadViewElementProperties;
- (void)_reloadVisibleCellsAnimated:(BOOL)arg1;
- (void)_resetLayoutProperties;
- (id)_sectionTemplateViewElementForEntityValueProvider:(id)arg1;
- (void)_setContext:(id)arg1;
- (id)_templateViewElementsForType:(id)arg1 mode:(id)arg2;
- (BOOL)_updateShowsSectionHeaders;
- (void)_updateStyleProperties;
- (id)_viewElementAtGlobalIndex:(long long)arg1;
- (long long)applyUpdateType:(long long)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)backgroundColorForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (void)collectionViewDidConfirmButtonElement:(id)arg1 withClickInfo:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (void)dealloc;
- (void)deselectItemsAnimated:(BOOL)arg1;
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;
- (void)gridViewElementPageSectionConfiguration:(id)arg1 configurePosition:(inout long long *)arg2 forItemAtIndexPath:(id)arg3;
- (id)gridViewElementPageSectionConfiguration:(id)arg1 viewElementForIndexPath:(id)arg2;
- (id)indexPathsForPinningItems;
- (id)initWithPageComponent:(id)arg1;
- (void)invalidateCachedLayoutInformation;
- (long long)numberOfCells;
- (struct UIEdgeInsets)pinningContentInsetForItemAtIndexPath:(id)arg1;
- (long long)pinningStyleForItemAtIndexPath:(id)arg1;
- (id)relevantEntityProviders;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;
- (void)reloadVisibleCellsWithReason:(long long)arg1;
- (struct UIEdgeInsets)sectionContentInset;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (id)targetScrollingIndexPathForElementWithIndexBarEntryID:(id)arg1 relativeSectionIndex:(long long)arg2;
- (BOOL)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(BOOL)arg3;
- (void)willAppearInContext:(id)arg1;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

