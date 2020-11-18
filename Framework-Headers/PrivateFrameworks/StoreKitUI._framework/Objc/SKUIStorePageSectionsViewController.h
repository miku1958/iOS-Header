//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/SKUIItemStateCenterObserver-Protocol.h>
#import <StoreKitUI/SKUILayoutCacheDelegate-Protocol.h>
#import <StoreKitUI/SKUIProductPageOverlayDelegate-Protocol.h>
#import <StoreKitUI/SKUIStorePageCollectionViewDelegate-Protocol.h>
#import <StoreKitUI/SKUIViewControllerTesting-Protocol.h>
#import <StoreKitUI/UICollectionViewDataSource-Protocol.h>
#import <StoreKitUI/UIGestureRecognizerDelegate-Protocol.h>
#import <StoreKitUI/UIViewControllerPreviewingDelegate-Protocol.h>
#import <StoreKitUI/UIViewControllerPreviewingDelegate_Private-Protocol.h>

@class NSArray, NSIndexPath, NSMapTable, NSMutableArray, NSMutableIndexSet, NSNumber, NSString, SKUICollectionView, SKUIColorScheme, SKUIIndexBarControl, SKUILayoutCache, SKUIMetricsController, SKUIMetricsImpressionSession, SKUIProductPageOverlayController, SKUIResourceLoader, SKUIStackedBar, SKUIStorePageSplitsDescription, UICollectionView, UIRefreshControl, UITapGestureRecognizer, UIView;
@protocol SKUICollectionViewPullToRefreshDelegate, SKUIStorePageSectionsDelegate, UIViewControllerPreviewing;

@interface SKUIStorePageSectionsViewController : SKUIViewController <UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private, SKUIItemStateCenterObserver, SKUILayoutCacheDelegate, SKUIProductPageOverlayDelegate, SKUIStorePageCollectionViewDelegate, SKUIViewControllerTesting, UICollectionViewDataSource, UIGestureRecognizerDelegate>
{
    SKUIProductPageOverlayController *_activeOverlayController;
    SKUIMetricsImpressionSession *_activeMetricsImpressionSession;
    SKUICollectionView *_collectionView;
    UITapGestureRecognizer *_collectionViewTapGestureRecognizer;
    SKUIColorScheme *_colorScheme;
    struct UIEdgeInsets _contentInsetAdjustments;
    id _deferredSplitsDescription;
    id<SKUIStorePageSectionsDelegate> _delegate;
    BOOL _delegateWantsDidScroll;
    BOOL _delegateWantsWillScrollToOffsetVisibleRange;
    BOOL _didInitialReload;
    NSMapTable *_entityProviderToRelevantSections;
    NSMapTable *_expandSectionContexts;
    NSMutableIndexSet *_expandInsertSections;
    NSMutableIndexSet *_expandRemoveSections;
    long long _ignoreSectionsChangeCount;
    SKUIIndexBarControl *_indexBarControl;
    NSIndexPath *_indexPathOfEditedCell;
    NSArray *_initialOverlayURLs;
    NSNumber *_lastKnownWidth;
    long long _layoutStyle;
    NSMapTable *_menuSectionContexts;
    SKUIMetricsController *_metricsController;
    SKUIProductPageOverlayController *_overlayController;
    long long _pinningTransitionStyle;
    id<UIViewControllerPreviewing> _viewControllerPreviewing;
    id<SKUICollectionViewPullToRefreshDelegate> _pullToRefreshDelegate;
    UIRefreshControl *_refreshControl;
    BOOL _rendersWithParallax;
    BOOL _rendersWithPerspective;
    SKUIResourceLoader *_resourceLoader;
    BOOL _scrollOffsetHasChanged;
    NSMutableArray *_sections;
    SKUIStorePageSplitsDescription *_splitsDescription;
    UIView *_splitsDividerView;
    SKUIStackedBar *_stackedBar;
    SKUILayoutCache *_textLayoutCache;
    long long _lastInterfaceOrientation;
    BOOL _itemsChangedStateWhileDisappeared;
}

@property (strong, nonatomic) SKUIMetricsImpressionSession *activeMetricsImpressionSession; // @synthesize activeMetricsImpressionSession=_activeMetricsImpressionSession;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKUIStorePageSectionsDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDisplayingOverlays) BOOL displayingOverlays;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SKUIIndexBarControl *indexBarControl; // @synthesize indexBarControl=_indexBarControl;
@property (strong, nonatomic) SKUIMetricsController *metricsController; // @synthesize metricsController=_metricsController;
@property (nonatomic) long long pinningTransitionStyle; // @synthesize pinningTransitionStyle=_pinningTransitionStyle;
@property (weak, nonatomic) id<SKUICollectionViewPullToRefreshDelegate> pullToRefreshDelegate; // @synthesize pullToRefreshDelegate=_pullToRefreshDelegate;
@property (strong, nonatomic) SKUIResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property (readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property (readonly) Class superclass;

+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
- (void).cxx_destruct;
- (id)SKUIStackedBar;
- (void)_applyColorScheme:(id)arg1 toIndexBarControl:(id)arg2;
- (void)_beginActiveImpressionsForImpressionableViewElements;
- (void)_beginIgnoringSectionChanges;
- (id)_childSectionsForMenuComponent:(id)arg1 selectedIndex:(long long)arg2;
- (id)_collectionViewSublayouts;
- (void)_contentSizeChangeNotification:(id)arg1;
- (id)_createSectionsForExpandPageComponent:(id)arg1 context:(id)arg2 newSections:(id)arg3 sectionCount:(long long)arg4 sectionsByViewElement:(id)arg5 updateStyle:(long long)arg6;
- (id)_currentBackdropGroupName;
- (id)_defaultSectionForGridComponent:(id)arg1;
- (id)_defaultSectionForSwooshComponent:(id)arg1;
- (void)_deselectCellsForAppearance:(BOOL)arg1;
- (void)_endAllPendingActiveImpression;
- (void)_endIgnoringSectionChanges;
- (void)_entityProviderDidInvalidateNotification:(id)arg1;
- (void)_enumerateSectionContextsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateVisibleSectionsUsingBlock:(CDUnknownBlockType)arg1;
- (id)_expandContextForMenuComponent:(id)arg1;
- (void)_handleTap:(id)arg1;
- (id)_impressionableViewElements;
- (void)_insertSectionsWithComponents:(id)arg1 afterSection:(id)arg2;
- (void)_invalidateIfLastKnownWidthChanged;
- (void)_invalidateLayoutWithNewSize:(struct CGSize)arg1 transitionCoordinator:(id)arg2;
- (void)_longPressAction:(id)arg1;
- (id)_menuContextForMenuComponent:(id)arg1;
- (id)_newSectionContext;
- (id)_newSectionsWithPageComponent:(id)arg1;
- (id)_newSectionsWithPageComponents:(id)arg1;
- (id)_newStorePageCollectionViewLayout;
- (void)_pageSectionDidDismissOverlayController:(id)arg1;
- (void)_prefetchArtworkForVisibleSections;
- (id)_prepareLayoutForSections;
- (void)_registerForNotificationsForEntityProvider:(id)arg1;
- (void)_reloadCollectionView;
- (void)_reloadRelevantEntityProviders;
- (void)_scrollFirstAppearanceSectionToView;
- (void)_setActiveProductPageOverlayController:(id)arg1;
- (void)_setPageSize:(struct CGSize)arg1;
- (void)_setRendersWithParallax:(BOOL)arg1;
- (void)_setRendersWithPerspective:(BOOL)arg1;
- (void)_setSelectedIndex:(long long)arg1 forMenuSection:(id)arg2;
- (id)_splitForSectionIndex:(long long)arg1;
- (void)_startRefresh:(id)arg1;
- (id)_textLayoutCache;
- (void)_unregisterForNotificationsForEntityProvider:(id)arg1;
- (void)_updateCollectionViewWithUpdates:(CDUnknownBlockType)arg1;
- (void)_updateSectionsAfterMenuChange;
- (void)_updateSectionsForIndex:(long long)arg1 menuSection:(id)arg2;
- (id)_visibleMetricsImpressionsString;
- (id)backgroundColorForSection:(long long)arg1;
- (BOOL)collectionView:(id)arg1 canScrollCellAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didConfirmButtonElement:(id)arg2 withClickInfo:(id)arg3 forItemAtIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndEditingItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 editorialView:(id)arg2 didSelectLink:(id)arg3;
- (void)collectionView:(id)arg1 expandEditorialForLabelElement:(id)arg2 indexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 pinningContentInsetForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 layout:(id)arg2 pinningStyleForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 layout:(id)arg2 pinningTransitionStyleForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 willApplyLayoutAttributes:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 performDefaultActionForViewElement:(id)arg2 indexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willBeginEditingItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id)defaultSectionForComponent:(id)arg1;
- (void)dismissOverlays;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)indexPathsForGradientItemsInCollectionView:(id)arg1 layout:(id)arg2;
- (id)indexPathsForPinningItemsInCollectionView:(id)arg1 layout:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)invalidateAndReload;
- (void)itemCollectionView:(id)arg1 didConfirmItemOfferForCell:(id)arg2;
- (void)itemCollectionView:(id)arg1 didTapVideoForCollectionViewCell:(id)arg2;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (void)loadView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (BOOL)performTestWithName:(id)arg1 options:(id)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)productPageOverlayDidDismiss:(id)arg1;
- (void)reloadSections:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)setSKUIStackedBar:(id)arg1;
- (void)setSectionsWithPageComponents:(id)arg1;
- (void)setSectionsWithSplitsDescription:(id)arg1;
- (void)setUsePullToRefresh:(BOOL)arg1;
- (void)showOverlayWithProductPage:(id)arg1 metricsPageEvent:(id)arg2;
- (void)skuiCollectionViewWillLayoutSubviews:(id)arg1;
- (void)skui_viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(id)arg3;

@end

