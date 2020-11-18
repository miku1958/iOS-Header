//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/SKUIProxyScrollViewDelegate-Protocol.h>
#import <StoreKitUI/SKUIScrollingSegmentedControllerCollectionViewDelegate-Protocol.h>
#import <StoreKitUI/SKUIScrollingSegmentedControllerItemContextDelegate-Protocol.h>
#import <StoreKitUI/SKUIScrollingTabAppearanceStatusObserver-Protocol.h>
#import <StoreKitUI/SKUIScrollingTabNestedPagedScrolling-Protocol.h>
#import <StoreKitUI/SKUIViewControllerWithFocusedViewController-Protocol.h>
#import <StoreKitUI/UICollectionViewDataSource-Protocol.h>
#import <StoreKitUI/UICollectionViewDelegate-Protocol.h>

@class NSArray, NSMapTable, NSMutableArray, NSString, SKUIInteractiveSegmentedControl, SKUIProxyScrollView, SKUIScrollingSegmentedControllerCollectionView, SKUIScrollingSegmentedControllerNavigationBarTitleView, UIScrollView, UIView, UIViewController;
@protocol SKUIScrollingSegmentedControllerDelegate;

@interface SKUIScrollingSegmentedController : SKUIViewController <SKUIProxyScrollViewDelegate, SKUIScrollingSegmentedControllerCollectionViewDelegate, SKUIScrollingSegmentedControllerItemContextDelegate, UICollectionViewDataSource, UICollectionViewDelegate, SKUIScrollingTabAppearanceStatusObserver, SKUIScrollingTabNestedPagedScrolling, SKUIViewControllerWithFocusedViewController>
{
    struct CGSize _contentCollectionViewItemSize;
    SKUIScrollingSegmentedControllerCollectionView *_contentCollectionView;
    SKUIScrollingSegmentedControllerNavigationBarTitleView *_navigationBarTitleView;
    SKUIProxyScrollView *_proxyScrollView;
    struct UIEdgeInsets _proxyScrollViewContentInsetAdjustment;
    CDStruct_19149c72 _scrollingTabAppearanceStatus;
    NSMutableArray *_titleObservingViewControllers;
    SKUIInteractiveSegmentedControl *_titlesSegmentedControl;
    BOOL _viewBackgroundIsWhite;
    NSMapTable *_viewControllerToItemContext;
    BOOL _wantsWhiteBackgroundBeyondLeftEdgeWhenBouncing;
    BOOL _wantsWhiteBackgroundBeyondRightEdgeWhenBouncing;
    id<SKUIScrollingSegmentedControllerDelegate> _delegate;
    double _maximumContentWidth;
    NSArray *_viewControllers;
    double _segmentedControlHeight;
    long long _segmentedControlLayoutStyle;
    unsigned long long _focusedViewControllerIndex;
    struct UIEdgeInsets _segmentedControlContentEdgeInsets;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKUIScrollingSegmentedControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIViewController *focusedViewController;
@property (readonly, nonatomic) unsigned long long focusedViewControllerIndex; // @synthesize focusedViewControllerIndex=_focusedViewControllerIndex;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maximumContentWidth; // @synthesize maximumContentWidth=_maximumContentWidth;
@property (readonly, nonatomic) UIView *navigationBarTitleView; // @synthesize navigationBarTitleView=_navigationBarTitleView;
@property (readonly, nonatomic) UIScrollView *scrollingTabNestedPagingScrollView;
@property (nonatomic) struct UIEdgeInsets segmentedControlContentEdgeInsets; // @synthesize segmentedControlContentEdgeInsets=_segmentedControlContentEdgeInsets;
@property (nonatomic) double segmentedControlHeight; // @synthesize segmentedControlHeight=_segmentedControlHeight;
@property (nonatomic) long long segmentedControlLayoutStyle; // @synthesize segmentedControlLayoutStyle=_segmentedControlLayoutStyle;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=_titlesSegmentedControl) SKUIInteractiveSegmentedControl *titlesSegmentedControl; // @synthesize titlesSegmentedControl=_titlesSegmentedControl;
@property (copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property (nonatomic) BOOL wantsWhiteBackgroundBeyondLeftEdgeWhenBouncing; // @synthesize wantsWhiteBackgroundBeyondLeftEdgeWhenBouncing=_wantsWhiteBackgroundBeyondLeftEdgeWhenBouncing;
@property (nonatomic) BOOL wantsWhiteBackgroundBeyondRightEdgeWhenBouncing; // @synthesize wantsWhiteBackgroundBeyondRightEdgeWhenBouncing=_wantsWhiteBackgroundBeyondRightEdgeWhenBouncing;

+ (struct UIEdgeInsets)defaultSegmentedControlContentEdgeInsetsForLayoutStyle:(long long)arg1;
+ (double)defaultSegmentedControlHeight;
- (void).cxx_destruct;
- (BOOL)_configureSegment:(id)arg1 forViewController:(id)arg2;
- (id)_indexPathOfFocusedItemAllowingLayoutIfNeeded:(BOOL)arg1;
- (void)_reloadTitleSegments;
- (void)_scrollToTitlesSelectionProgress:(double)arg1 animated:(BOOL)arg2;
- (void)_setViewControllers:(id)arg1 viewUpdatesHandler:(CDUnknownBlockType)arg2;
- (void)_titlesSegmentedControlValueChangeAction:(id)arg1;
- (void)_updateScrollViewContentOffsetsToTargetContentOffsets;
- (void)_updateTitleValueObservation;
- (void)_updateTitlesSelectionProgress;
- (void)_updateViewBackgroundColor;
- (struct UIEdgeInsets)_viewControllerContentScrollViewContentInset;
- (void)_viewControllerNeedsContentScrollViewUpdates:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)contentScrollView;
- (void)contentScrollViewDidChangeForScrollingSegmentedControllerItemContext:(id)arg1;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)replaceViewControllerAtIndex:(unsigned long long)arg1 withViewController:(id)arg2;
- (void)scrollViewDidChangeContentInset:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidMoveToWindow:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollingSegmentedControllerCollectionViewDidLayoutSubviews:(id)arg1;
- (void)scrollingTabAppearanceStatusWasUpdated:(CDStruct_19149c72)arg1;
- (id)scrollingTabViewControllerInNestedPagingScrollViewAtPageIndex:(unsigned long long)arg1;
- (void)selectViewControllerAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)setClientContext:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
