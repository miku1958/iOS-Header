//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/SKUIDynamicBarAnimatorDelegate-Protocol.h>
#import <StoreKitUI/SKUIProxyScrollViewDelegate-Protocol.h>
#import <StoreKitUI/SKUIScrollViewDelegateObserver-Protocol.h>
#import <StoreKitUI/SKUIScrollingTabBarContentCollectionViewDelegate-Protocol.h>
#import <StoreKitUI/SKUIScrollingTabBarControllerItemContextDelegate-Protocol.h>
#import <StoreKitUI/SKUIScrollingTabBarPaletteDelegate-Protocol.h>
#import <StoreKitUI/SKUITabBarController-Protocol.h>
#import <StoreKitUI/UICollectionViewDataSource-Protocol.h>
#import <StoreKitUI/UICollectionViewDelegate-Protocol.h>

@class NSArray, NSMapTable, NSMutableArray, NSString, SKUICrossFadingTabBar, SKUIDynamicBarAnimator, SKUIProxyScrollView, SKUIScrollingTabBarBackgroundView, SKUIScrollingTabBarContentCollectionView, SKUIScrollingTabBarControllerItemContext, SKUIScrollingTabBarPalette, UINavigationController, UIScrollView, UIView, UIViewController;
@protocol SKUITabBarControllerDelegate;

@interface SKUIScrollingTabBarController : SKUIViewController <SKUIDynamicBarAnimatorDelegate, SKUIProxyScrollViewDelegate, SKUIScrollingTabBarContentCollectionViewDelegate, SKUIScrollingTabBarControllerItemContextDelegate, SKUIScrollingTabBarPaletteDelegate, SKUIScrollViewDelegateObserver, UICollectionViewDataSource, UICollectionViewDelegate, SKUITabBarController>
{
    unsigned long long _activePaletteTransitions;
    CDStruct_efaabef7 _additionalPositionOffsetsUpdateRecord;
    unsigned long long _additionalPositionOffsetsAtomicUpdateRequestCount;
    BOOL _canHideBarsOnSwipe;
    struct CGSize _contentCollectionViewItemSize;
    SKUIScrollingTabBarContentCollectionView *_contentCollectionView;
    NSMutableArray *_contentCollectionViewCells;
    SKUIDynamicBarAnimator *_dynamicBarAnimator;
    UIScrollView *_focusedContentScrollView;
    UIViewController *_focusedViewController;
    BOOL _focusedScrollViewIsDragging;
    long long _indexOfViewControllerWithUpdatedContentSize;
    BOOL _isDelegatingPresentedViewControllerLogicToSelectedViewController;
    SKUIProxyScrollView *_proxyScrollView;
    struct UIEdgeInsets _proxyScrollViewContentInsetAdjustment;
    unsigned long long _referenceCountForIgnoringContentOffsetUpdateRequests;
    BOOL _shouldPreserveFocusUponNextContentCollectionViewItemSizeChange;
    BOOL _shouldShowBarsAfterDraggingDownward;
    SKUICrossFadingTabBar *_tabBar;
    UIView *_tabBarContainerView;
    struct UIOffset _tabBarExplicitHidingOffset;
    BOOL _tabBarExplicitlyHidden;
    SKUIScrollingTabBarBackgroundView *_tabBarExtendedBackgroundView;
    SKUIScrollingTabBarPalette *_tabBarPalette;
    UIViewController *_topLevelFocusedViewController;
    SKUIScrollingTabBarControllerItemContext *_transientViewControllerItemContext;
    NSMapTable *_viewControllerToItemContext;
    BOOL _chargeEnabledOnTabBarButtonsContainer;
    BOOL _scrollEnabled;
    id<SKUITabBarControllerDelegate> _delegate;
    UIViewController *_transientViewController;
    NSArray *_viewControllers;
    struct UIOffset _additionalTabBarButtonsContainerPositionOffset;
    struct UIOffset _additionalTabBarPalettePositionOffset;
}

@property (nonatomic) struct UIOffset additionalTabBarButtonsContainerPositionOffset; // @synthesize additionalTabBarButtonsContainerPositionOffset=_additionalTabBarButtonsContainerPositionOffset;
@property (nonatomic) struct UIOffset additionalTabBarPalettePositionOffset; // @synthesize additionalTabBarPalettePositionOffset=_additionalTabBarPalettePositionOffset;
@property (readonly, nonatomic) NSArray *allViewControllers;
@property (nonatomic) BOOL chargeEnabledOnTabBarButtonsContainer; // @synthesize chargeEnabledOnTabBarButtonsContainer=_chargeEnabledOnTabBarButtonsContainer;
@property (readonly, nonatomic) double contentViewControllerBottomInsetAdjustment;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<SKUITabBarControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIViewController *floatingOverlayViewController;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UINavigationController *moreNavigationController;
@property (nonatomic) BOOL scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property (nonatomic) unsigned long long selectedIndex;
@property (nonatomic) UIViewController *selectedViewController;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *tabBar;
@property (readonly, nonatomic) struct CGRect tabBarButtonsContainerFrame;
@property (readonly, nonatomic) struct CGRect tabBarPaletteFrame;
@property (strong, nonatomic) UIViewController *transientViewController; // @synthesize transientViewController=_transientViewController;
@property (copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;

+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (BOOL)areScrollingTabsAllowed;
- (void).cxx_destruct;
- (void)_animatePaletteWithSetup:(CDUnknownBlockType)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_backdropBarGroupName;
- (id)_deepestFocusedViewControllerWithTopLevelFocusedViewController:(id)arg1;
- (void)_discardUndesirableLastSelectedPageIndexesWithHorizontalLayoutContext:(CDStruct_00a825b0)arg1;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL *)arg2;
- (double)_effectiveBottomBarOffset;
- (double)_effectiveTopBarHeight;
- (BOOL)_focusedContentScrollViewIsScrolledToOrPastBottom;
- (void)_invalidateContentCollectionViewLayoutForUpdatedContentSizeWithHorizontalLayoutContext:(CDStruct_00a825b0)arg1 indexOfViewControllerWithUpdatedContentSize:(unsigned long long)arg2;
- (void)_notifyViewControllerAppearanceProgressUpdateWithHorizontalLayoutContext:(CDStruct_00a825b0)arg1;
- (id)_parentCellForViewController:(id)arg1;
- (void)_popVisibleNavigationStacksToRootWithHorizontalLayoutContext:(CDStruct_00a825b0)arg1;
- (struct UIOffset)_roundedOffsetFromOffset:(struct UIOffset)arg1;
- (void)_selectTabAtIndex:(unsigned long long)arg1 shouldFallbackToPoppingToTabRootContent:(BOOL)arg2;
- (void)_setFocusedViewController:(id)arg1 showBarsIfNeeded:(BOOL)arg2 animated:(BOOL)arg3 notifyDelegate:(BOOL)arg4;
- (void)_setViewControllers:(id)arg1 collectionViewsUpdateHandler:(CDUnknownBlockType)arg2 forFinalTearDown:(BOOL)arg3;
- (id)_tabBarBackdropGroupName;
- (void)_tabBarButtonTapped:(id)arg1;
- (void)_updateAdditionalPositionOffsetsWithUpdateRecord:(CDStruct_efaabef7)arg1;
- (void)_updateDynamicBarGeometry;
- (void)_updateFocusedViewControllerInsetsForVerticalLayoutChange;
- (void)_updateFocusedViewControllerWithHorizontalLayoutContext:(CDStruct_00a825b0)arg1;
- (void)_updateForHorizontalLayoutChange;
- (void)_updateHidesBarsOnSwipeAvailability;
- (void)_updateHorizontalScrollingAvailability;
- (void)_updateLayoutOfCollectionViewCell:(id)arg1;
- (void)_updateLayoutOfTabBar;
- (void)_updateLayoutOfVisibleCollectionViewCells;
- (void)_updateNavigationBarsForVerticalLayoutChange;
- (void)_updateScrollViewContentOffsetsToTargetContentOffsets;
- (void)_updateStatusBarPositionForcingVisible:(BOOL)arg1;
- (void)_updateTabBarBackgroundsAndHairlines;
- (void)_updateTabBarButtons;
- (void)_updateTabBarButtonsSelectionProgressWithHorizontalLayoutContext:(CDStruct_00a825b0)arg1;
- (void)_updateViewControllerContentScrollViewInset;
- (CDStruct_17994511)_viewControllerContentScrollViewContentInsetDescriptor;
- (void)_viewControllerNeedsNestedPagingScrollViewUpdate:(id)arg1;
- (void)attachTabBarPalette:(id)arg1;
- (void)attachTabBarPalette:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)contentScrollView;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)detachTabBarPalette:(id)arg1;
- (void)detachTabBarPalette:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didUpdateAdditionalTabBarComponentsPositionOffsets;
- (BOOL)dynamicBarAnimator:(id)arg1 canHideBarsByDraggingWithOffset:(double)arg2;
- (void)dynamicBarAnimatorDidUpdate:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)existingTabBarPalette;
- (void)hideBarWithTransition:(int)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)observedScrollViewDidScroll:(id)arg1;
- (void)observedScrollViewWillBeginDragging:(id)arg1;
- (void)observedScrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint)arg3;
- (id)presentedViewController;
- (id)rotatingSnapshotViewForWindow:(id)arg1;
- (void)scrollViewDidChangeContentInset:(id)arg1;
- (void)scrollingTabBarContentCollectionViewDidLayoutSubviews:(id)arg1;
- (void)scrollingTabBarControllerItemContext:(id)arg1 observedNavigationStackDidChange:(id)arg2;
- (void)scrollingTabBarControllerItemContextRequestsContentOffsetUpdate:(id)arg1;
- (void)scrollingTabBarControllerItemContextRequestsContentSizeUpdate:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setTransientViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)showBarWithTransition:(int)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)tabBarBackgroundExtendsBehindPaletteDidChangeForPalette:(id)arg1;
- (id)tabBarPaletteWithHeight:(double)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateTabBarComponentPositionOffsetsWithPresentationValues;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willUpdateAdditionalTabBarComponentsPositionOffsets;

@end

