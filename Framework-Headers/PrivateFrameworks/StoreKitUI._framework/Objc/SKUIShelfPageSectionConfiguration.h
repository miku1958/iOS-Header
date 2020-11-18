//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IKViewElementStyle, SKUIShelfLayoutData, SKUIStorePageSectionContext, SKUIViewElementLayoutContext, UICollectionView, UIColor;
@protocol SKUIShelfPageSectionConfigurationDataSource, UICollectionViewDataSource, UICollectionViewDelegate;

@interface SKUIShelfPageSectionConfiguration : NSObject
{
    long long _lockupType;
    UICollectionView *_shelfCollectionView;
    BOOL _needsShelfCollectionViewReload;
    BOOL _needsShelfCollectionViewLayout;
    BOOL _rendersWithParallax;
    BOOL _rendersWithPerspective;
    BOOL _topSection;
    BOOL _wantsZoomingShelfLayout;
    SKUIViewElementLayoutContext *_cellLayoutContext;
    id<SKUIShelfPageSectionConfigurationDataSource> _dataSource;
    SKUIStorePageSectionContext *_pageSectionContext;
    long long _sectionIndex;
    UIColor *_shelfCollectionViewBackgroundColor;
    id<UICollectionViewDataSource> _shelfCollectionViewDataSource;
    id<UICollectionViewDelegate> _shelfCollectionViewDelegate;
    SKUIShelfLayoutData *_shelfLayoutData;
    IKViewElementStyle *_shelfViewElementStyle;
    double _zoomingShelfLayoutFocusedItemHorizontalCenterOffset;
    double _zoomingShelfLayoutInterItemSpacing;
    double _zoomingShelfLayoutItemWidth;
    double _zoomingShelfLayoutScaledItemWidth;
}

@property (strong, nonatomic) SKUIViewElementLayoutContext *cellLayoutContext; // @synthesize cellLayoutContext=_cellLayoutContext;
@property (weak, nonatomic) id<SKUIShelfPageSectionConfigurationDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, nonatomic) UICollectionView *existingShelfCollectionView;
@property (nonatomic) BOOL needsShelfCollectionViewLayout; // @synthesize needsShelfCollectionViewLayout=_needsShelfCollectionViewLayout;
@property (nonatomic) BOOL needsShelfCollectionViewReload; // @synthesize needsShelfCollectionViewReload=_needsShelfCollectionViewReload;
@property (readonly, nonatomic) unsigned long long numberOfIterations;
@property (strong, nonatomic) SKUIStorePageSectionContext *pageSectionContext; // @synthesize pageSectionContext=_pageSectionContext;
@property (nonatomic) BOOL rendersWithParallax; // @synthesize rendersWithParallax=_rendersWithParallax;
@property (nonatomic) BOOL rendersWithPerspective; // @synthesize rendersWithPerspective=_rendersWithPerspective;
@property (nonatomic) long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property (readonly, nonatomic) UICollectionView *shelfCollectionView;
@property (strong, nonatomic) UIColor *shelfCollectionViewBackgroundColor; // @synthesize shelfCollectionViewBackgroundColor=_shelfCollectionViewBackgroundColor;
@property (nonatomic) id<UICollectionViewDataSource> shelfCollectionViewDataSource; // @synthesize shelfCollectionViewDataSource=_shelfCollectionViewDataSource;
@property (nonatomic) id<UICollectionViewDelegate> shelfCollectionViewDelegate; // @synthesize shelfCollectionViewDelegate=_shelfCollectionViewDelegate;
@property (readonly, nonatomic) SKUIShelfLayoutData *shelfLayoutData; // @synthesize shelfLayoutData=_shelfLayoutData;
@property (strong, nonatomic) IKViewElementStyle *shelfViewElementStyle; // @synthesize shelfViewElementStyle=_shelfViewElementStyle;
@property (nonatomic, getter=isTopSection) BOOL topSection; // @synthesize topSection=_topSection;
@property (readonly, nonatomic) BOOL wantsZoomingShelfLayout; // @synthesize wantsZoomingShelfLayout=_wantsZoomingShelfLayout;
@property (readonly, nonatomic) double zoomingShelfLayoutFocusedItemHorizontalCenterOffset; // @synthesize zoomingShelfLayoutFocusedItemHorizontalCenterOffset=_zoomingShelfLayoutFocusedItemHorizontalCenterOffset;
@property (readonly, nonatomic) double zoomingShelfLayoutInterItemSpacing; // @synthesize zoomingShelfLayoutInterItemSpacing=_zoomingShelfLayoutInterItemSpacing;
@property (readonly, nonatomic) double zoomingShelfLayoutItemWidth; // @synthesize zoomingShelfLayoutItemWidth=_zoomingShelfLayoutItemWidth;
@property (readonly, nonatomic) double zoomingShelfLayoutScaledItemWidth; // @synthesize zoomingShelfLayoutScaledItemWidth=_zoomingShelfLayoutScaledItemWidth;

- (void).cxx_destruct;
- (Class)_cellClassForEffectiveShelfItemViewElement:(id)arg1;
- (double)_columnSpacingForShelfItemViewElements:(id)arg1;
- (id)_dequeueCellForLockup:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3;
- (Class)_lockupCellClassWithLockup:(id)arg1;
- (double)_perspectiveHeightForContentSize:(double)arg1;
- (id)_reloadShelfLayoutDataWithNumberOfShelfItems:(long long)arg1;
- (id)_shelfItemViewElementAtIndex:(long long)arg1;
- (id)_styledShelfCollectionViewLayoutForExistingLayout:(id)arg1;
- (void)_updateShelfLayoutDataContentInset;
- (id)actualIndexPathOfShelfItemClosestToVisibleBoundsForNormalizedIndexPath:(id)arg1 numberOfShelfItems:(unsigned long long)arg2;
- (id)backgroundColorForShelfViewElement:(id)arg1;
- (id)cellForShelfItemViewElement:(id)arg1 indexPath:(id)arg2;
- (id)cellForShelfViewElement:(id)arg1 indexPath:(id)arg2;
- (struct CGSize)cellSizeForShelfViewElement:(id)arg1 indexPath:(id)arg2 numberOfShelfItems:(long long)arg3;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (id)effectiveViewElementForShelfItemViewElement:(id)arg1;
- (long long)lockupTypeForLockup:(id)arg1;
- (id)normalizedShelfItemIndexPathFromActualIndexPath:(id)arg1 numberOfShelfItems:(unsigned long long)arg2;
- (unsigned long long)numberOfCellsForNumberOfShelfItems:(unsigned long long)arg1;
- (long long)numberOfSectionCells;
- (BOOL)prefetchResourcesForShelfItemViewElement:(id)arg1 reason:(long long)arg2;
- (void)registerReusableClassesForCollectionView:(id)arg1;
- (void)reloadLockupTypeForShelfViewElement:(id)arg1;
- (void)reloadShelfLayoutDataForShelfViewElement:(id)arg1 withShelfItemViewElements:(id)arg2 requestCellLayouts:(BOOL)arg3 numberOfShelfItems:(long long)arg4;
- (void)requestCellLayoutForViewElement:(id)arg1 withColumnWidth:(double)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (struct UIEdgeInsets)sectionContentInsetAdjustedFromValue:(struct UIEdgeInsets)arg1 forShelfViewElement:(id)arg2 withSectionIndex:(long long)arg3;
- (void)shelfItemsCollectionView:(id)arg1 willApplyLayoutAttributes:(id)arg2 forViewElement:(id)arg3 withItemIndex:(long long)arg4;
- (BOOL)supportsDuplicateShelfItems;

@end

