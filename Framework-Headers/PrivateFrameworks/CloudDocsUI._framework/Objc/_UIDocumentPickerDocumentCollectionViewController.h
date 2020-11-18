//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <CloudDocsUI/UICollectionViewDataSource-Protocol.h>
#import <CloudDocsUI/UICollectionViewDelegate-Protocol.h>
#import <CloudDocsUI/UICollectionViewDelegateTableLayout-Protocol.h>
#import <CloudDocsUI/UIViewControllerPreviewingDelegate-Protocol.h>
#import <CloudDocsUI/_UIDocumentPickerContainedViewController-Protocol.h>

@class NSArray, NSString, UIActivityIndicatorView, UIScrollView, UIView, _UIDocumentPickerContainerModel, _UIDocumentPickerFlowLayout, _UIDocumentPickerSortOrderView, _UIDocumentPickerTableLayout;
@protocol UIViewControllerPreviewing, _UIDocumentPickerServiceViewController;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerDocumentCollectionViewController : UICollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateTableLayout, UIViewControllerPreviewingDelegate, _UIDocumentPickerContainedViewController>
{
    BOOL _editing;
    id<UIViewControllerPreviewing> _viewControllerPreviewContext;
    BOOL _monitoring;
    BOOL _shouldHideSortBar;
    BOOL _updatesMayAnimate;
    long long _displayMode;
    id<_UIDocumentPickerServiceViewController> _serviceViewController;
    _UIDocumentPickerContainerModel *_model;
    _UIDocumentPickerFlowLayout *_gridLayout;
    _UIDocumentPickerTableLayout *_tableLayout;
    _UIDocumentPickerSortOrderView *_sortView;
    UIView *_pinnedHeaderView;
    NSArray *_modelObjects;
    UIActivityIndicatorView *_initialActivityView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
@property (strong, nonatomic) _UIDocumentPickerFlowLayout *gridLayout; // @synthesize gridLayout=_gridLayout;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *indexPathsForSelectedItems;
@property (strong, nonatomic) UIActivityIndicatorView *initialActivityView; // @synthesize initialActivityView=_initialActivityView;
@property (strong, nonatomic) _UIDocumentPickerContainerModel *model; // @synthesize model=_model;
@property (copy, nonatomic) NSArray *modelObjects; // @synthesize modelObjects=_modelObjects;
@property (nonatomic) BOOL monitoring; // @synthesize monitoring=_monitoring;
@property (strong, nonatomic) UIView *pinnedHeaderView; // @synthesize pinnedHeaderView=_pinnedHeaderView;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) id<_UIDocumentPickerServiceViewController> serviceViewController; // @synthesize serviceViewController=_serviceViewController;
@property (nonatomic) BOOL shouldHideSortBar; // @synthesize shouldHideSortBar=_shouldHideSortBar;
@property (strong, nonatomic) _UIDocumentPickerSortOrderView *sortView; // @synthesize sortView=_sortView;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsActions;
@property (strong, nonatomic) _UIDocumentPickerTableLayout *tableLayout; // @synthesize tableLayout=_tableLayout;
@property (nonatomic) BOOL updatesMayAnimate; // @synthesize updatesMayAnimate=_updatesMayAnimate;

- (void).cxx_destruct;
- (void)_dynamicTypeSizeChanged:(id)arg1;
- (void)_showMoreOptionsForRow:(id)arg1 view:(id)arg2;
- (BOOL)_smallCells;
- (void)_unlockAnimations;
- (void)_updateIconSpacing;
- (void)_updateRowHeight;
- (id)actionViewForLocation:(struct CGPoint)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 tableLayout:(id)arg2 accessoryButtonTappedForRowWithIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 tableLayout:(id)arg2 editingStyleForRowAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 tableLayout:(id)arg2 indentationLevelForRowAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 tableLayout:(id)arg2 trailingSwipeActionsForRowAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)containersChangedWithSnapshot:(id)arg1 differences:(id)arg2;
- (void)dealloc;
- (void)didDismissSearchController:(id)arg1;
- (void)ensureSortViewInvisible;
- (id)initWithModel:(id)arg1;
- (id)itemForLocation:(struct CGPoint)arg1;
- (void)modelChanged:(id)arg1;
- (void)performAction:(long long)arg1 forRow:(id)arg2 view:(id)arg3;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)previewActionItemsForItem:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)scrollSortViewToVisible;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)setContentSizeAdjustment:(double)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setPinnedHeaderView:(id)arg1 animated:(BOOL)arg2;
- (void)updateContentInset;
- (void)updatePinnedHeader;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)willDismissSearchController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;

@end

