//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

@class NSMutableArray, UIPageControl, UIScrollView, UIView;
@protocol UIPageControllerDelegate;

@interface UIPageController : UIViewController
{
    NSMutableArray *_viewControllers;
    UIView *_wrapperViews[3];
    int _notificationState[3];
    UIScrollView *_scrollView;
    UIPageControl *_pageControl;
    id<UIPageControllerDelegate> _delegate;
    int _pageSpacing;
    long long _visibleIndex;
    long long _pageCount;
    struct {
        unsigned int delegateViewControllerAtIndex:1;
        unsigned int delegateWillBeginPaging:1;
        unsigned int delegateDidEndPaging:1;
        unsigned int displaysPageControl:1;
        unsigned int wraps:1;
    } _pageControllerFlags;
}

@property (nonatomic) id<UIPageControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL displaysPageControl;
@property (nonatomic) long long pageCount;
@property (nonatomic) double pageSpacing;
@property (nonatomic) long long visibleIndex;
@property (readonly, strong, nonatomic) UIViewController *visibleViewController;
@property (nonatomic) BOOL wraps;

- (void)_adjustScrollViewContentInsets;
- (BOOL)_allowsAutorotation;
- (void)_createPageControl;
- (BOOL)_doesVisibleViewControllerSupportInterfaceOrientation:(long long)arg1;
- (void)_getRotationContentSettings:(CDStruct_8bdd0ba6 *)arg1;
- (BOOL)_hasNextViewController;
- (BOOL)_hasPreviousViewController;
- (BOOL)_hasVisibleViewController;
- (BOOL)_isSupportedInterfaceOrientation:(long long)arg1;
- (BOOL)_isViewControllerBeingUnloaded:(id)arg1 atIndex:(long long)arg2;
- (id)_loadNextViewController;
- (id)_loadPreviousViewController;
- (id)_loadVisibleViewControllerAndNotify:(BOOL)arg1;
- (BOOL)_needToLoadNext;
- (BOOL)_needToLoadPrevious;
- (BOOL)_needToLoadVisible;
- (id)_nextViewController;
- (int)_nextViewControllerNotificationState;
- (void)_notifyNextViewController:(int)arg1 animated:(BOOL)arg2;
- (void)_notifyPreviousViewController:(int)arg1 animated:(BOOL)arg2;
- (void)_notifyViewController:(id)arg1 ofState:(int)arg2 previousState:(int)arg3 animated:(BOOL)arg4;
- (void)_notifyVisibleViewController:(int)arg1 animated:(BOOL)arg2;
- (void)_pageChanged:(id)arg1;
- (id)_pageControllerScrollView;
- (id)_previousViewController;
- (int)_previousViewControllerNotificationState;
- (void)_replaceViewControllerAtIndex:(long long)arg1 withViewController:(id)arg2;
- (id)_scrollView;
- (void)_scrollView:(id)arg1 boundsDidChangeToSize:(struct CGSize)arg2;
- (void)_scrollViewDidEndPaging;
- (void)_scrollViewDidScroll:(id)arg1 forceUpdate:(BOOL)arg2;
- (struct CGRect)_scrollViewFrame;
- (void)_scrollViewWillBeginPaging;
- (void)_setNextViewController:(id)arg1;
- (void)_setNextViewControllerNotificationState:(int)arg1;
- (void)_setPreviousViewController:(id)arg1;
- (void)_setPreviousViewControllerNotificationState:(int)arg1;
- (void)_setVisibleViewController:(id)arg1;
- (void)_setVisibleViewControllerNotificationState:(int)arg1;
- (BOOL)_shouldUseOnePartRotation;
- (id)_visibleViewController;
- (int)_visibleViewControllerNotificationState;
- (void)dealloc;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (long long)indexOfViewController:(id)arg1;
- (void)loadView;
- (void)reloadViewControllerAtIndex:(long long)arg1;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (void)setVisibleIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)setVisibleIndex:(long long)arg1 preservingLoadedViewControllers:(BOOL)arg2 animated:(BOOL)arg3;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end

