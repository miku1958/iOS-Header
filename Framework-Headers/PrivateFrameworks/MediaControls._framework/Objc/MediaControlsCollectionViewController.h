//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MediaControls/UIGestureRecognizerDelegate-Protocol.h>
#import <MediaControls/UIScrollViewDelegate-Protocol.h>

@class MediaControlsCollectionViewCountData, NSArray, NSIndexSet, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UIScrollView, _MediaControlsTapHoldGestureRecognizer;
@protocol MediaControlsCollectionItemViewController, MediaControlsCollectionViewDataSource, MediaControlsCollectionViewDelegate;

@interface MediaControlsCollectionViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    NSMutableDictionary *_activeViewControllers;
    UIViewController<MediaControlsCollectionItemViewController> *_inactiveSelectedViewController;
    NSMutableSet *_inactiveViewControllers;
    NSMutableArray *_pendingUpdates;
    struct UIEdgeInsets _controlCenterEdgeInsets;
    struct CGSize _lastKnownEnvironmentSize;
    long long _animatedSelectionCount;
    long long _appearanceTransitionCount;
    BOOL _shouldDisableAutoReaping;
    BOOL _shouldIgnoreScrollNotifications;
    BOOL _isAnimatingSelection;
    BOOL _isPerformingBatchUpdates;
    BOOL _needsReloadData;
    MediaControlsCollectionViewCountData *_countData;
    long long _highlightedItemIndex;
    BOOL _appeared;
    id<MediaControlsCollectionViewDataSource> _dataSource;
    id<MediaControlsCollectionViewDelegate> _delegate;
    CDUnknownBlockType _dismissalBlock;
    long long _selectedItemIndex;
    _MediaControlsTapHoldGestureRecognizer *_tapGestureRecognizer;
    UIScrollView *_scrollView;
    long long _displayMode;
    double _preferredItemHeight;
    struct UIEdgeInsets _scrollViewInsets;
}

@property (weak, nonatomic) id<MediaControlsCollectionViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MediaControlsCollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType dismissalBlock; // @synthesize dismissalBlock=_dismissalBlock;
@property (nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
@property (readonly) unsigned long long hash;
@property (nonatomic) double preferredItemHeight; // @synthesize preferredItemHeight=_preferredItemHeight;
@property (strong, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property (nonatomic) struct UIEdgeInsets scrollViewInsets; // @synthesize scrollViewInsets=_scrollViewInsets;
@property (nonatomic) long long selectedItemIndex; // @synthesize selectedItemIndex=_selectedItemIndex;
@property (readonly) Class superclass;
@property (strong, nonatomic) _MediaControlsTapHoldGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property (readonly, nonatomic) NSArray *visibleBottomViewControllers;
@property (readonly, nonatomic) NSIndexSet *visibleIndexes;
@property (readonly, nonatomic) NSArray *visibleTopViewControllers;
@property (readonly, nonatomic) NSArray *visibleViewControllers;

+ (id)alphaAnimatorWithAnimations:(CDUnknownBlockType)arg1;
+ (id)frameAnimator;
- (void).cxx_destruct;
- (void)_adjustForEnvironmentChangeIfNeededWithSize:(struct CGSize)arg1 transitionCoordinator:(id)arg2;
- (void)_adjustForEnvironmentChangeWithSize:(struct CGSize)arg1 transitionCoordinator:(id)arg2;
- (double)_backgroundCornerRadius;
- (void)_beginAppearanceTransitionForChildViewControllers:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_beginAppearanceTransitionIfNeeded:(BOOL)arg1 forChildViewController:(id)arg2 animated:(BOOL)arg3;
- (BOOL)_canPerformBatchUpdates;
- (long long)_closestItemAtPoint:(struct CGPoint)arg1;
- (void)_commonInit;
- (void)_dequeueAndPerformBatchUpdatesIfNeeded;
- (void)_endAppearanceTransitionForChildViewControllerIfNeeded:(id)arg1;
- (void)_endAppearanceTransitionForChildViewControllers;
- (void)_enumerateActiveViewControllers:(CDUnknownBlockType)arg1;
- (struct CGRect)_frameForViewAtIndex:(long long)arg1;
- (struct CGRect)_frameForViewAtIndex:(long long)arg1 displayMode:(long long)arg2 size:(struct CGSize)arg3;
- (struct CGRect)_frameForViewAtIndex:(long long)arg1 size:(struct CGSize)arg2;
- (void)_handleScrollViewTap:(id)arg1;
- (id)_indexesOfItemsInRect:(struct CGRect)arg1;
- (id)_insertViewControllerForIndex:(long long)arg1;
- (BOOL)_isScrollViewAnimatingScroll;
- (void)_populateViewsInFrame:(struct CGRect)arg1;
- (double)_preferredSelectedItemHeight;
- (struct _NSRange)_rangeOfItemsInRect:(struct CGRect)arg1;
- (void)_reapActiveViews;
- (void)_reapViewAtIndex:(long long)arg1;
- (double)_regularItemHeight;
- (void)_reloadDataIfNeeded;
- (void)_removeInactiveViewControllersFromHierarchy;
- (void)_removeViewController:(id)arg1;
- (void)_scrollToSelectedItemAnimated:(BOOL)arg1;
- (double)_selectedItemHeightInSize:(struct CGSize)arg1;
- (double)_selectedItemHeightInSize:(struct CGSize)arg1 shouldIgnoreInsets:(BOOL)arg2;
- (void)_setFrame:(struct CGRect)arg1 forVisibleViewAtIndex:(long long)arg2;
- (void)_setHighlighted:(BOOL)arg1 forViewController:(id)arg2;
- (void)_setHighlighted:(BOOL)arg1 forViewControllerAtIndex:(long long)arg2;
- (void)_setSelectedItemIndex:(long long)arg1 animated:(BOOL)arg2 shouldScroll:(BOOL)arg3 shouldNotifyDelegate:(BOOL)arg4 withReason:(long long)arg5;
- (void)_tileViews;
- (double)_totalHeight;
- (void)_transitionToDisplayMode:(long long)arg1 usingTransitionCoordinator:(id)arg2 assumingSize:(struct CGSize)arg3;
- (void)_transitionToVisible:(BOOL)arg1;
- (void)_transitionTopAndBottomViewControllersToVisible:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateContentSize;
- (void)_updateFrameForViewController:(id)arg1 atIndex:(long long)arg2 withCoordinator:(id)arg3 assumingSize:(struct CGSize)arg4;
- (void)_updateFramesForActiveViewControllersWithCoordinator:(id)arg1 assumingSize:(struct CGSize)arg2;
- (double)_verticalSpacing;
- (id)_visibleBottomViewControllers;
- (id)_visibleTopViewControllers;
- (BOOL)_wantsTapGestureRecognizer;
- (void)deleteItemAtIndex:(long long)arg1;
- (void)deleteItemsAtIndexes:(id)arg1;
- (id)dequeueReusableViewControllerForItemAtIndex:(long long)arg1;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)insertItemAtIndex:(long long)arg1;
- (void)insertItemsAtIndexes:(id)arg1;
- (long long)itemAtPoint:(struct CGPoint)arg1;
- (void)moveItemAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
- (double)preferredItemHeightGivenWidth:(double)arg1;
- (void)reloadData;
- (void)reloadItemAtIndex:(long long)arg1;
- (void)reloadItemsAtIndexes:(id)arg1;
- (void)scrollToSelectedItemAnimated:(BOOL)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setSelectedItemIndex:(long long)arg1 animated:(BOOL)arg2 shouldScroll:(BOOL)arg3;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)updateContentInsets;
- (id)viewControllerForItemAtIndex:(long long)arg1;
- (id)viewControllerForItemAtPoint:(struct CGPoint)arg1;
- (id)viewControllerForSelectedItem;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end
