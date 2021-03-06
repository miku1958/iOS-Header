//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPageViewController.h>

#import <QuickLook/UIPageViewControllerDataSource-Protocol.h>
#import <QuickLook/UIPageViewControllerDelegate-Protocol.h>
#import <QuickLook/UIScrollViewDelegate-Protocol.h>

@class NSMapTable, NSString, QLDelegateProxy, UIScrollView, UIViewController;
@protocol QLPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface QLPageViewController : UIPageViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate>
{
    NSMapTable *_pages;
    unsigned long long _nextPageIndex;
    struct CGPoint _scrollingStartOffset;
    id<UIPageViewControllerDelegate> _definedDelegate;
    UIScrollView *_scrollView;
    QLDelegateProxy *_scrollViewDelegateProxy;
    QLDelegateProxy *_pageViewControllerDelegateProxy;
    double _interPageSpacing;
    long long _currentPageIndexForAppliedParallaxEffect;
    BOOL _pageClipsToBounds[3];
    BOOL _isTransitioning;
    unsigned long long _currentPageIndex;
    id<QLPageViewControllerDataSource> _indexedDataSource;
    id<UIScrollViewDelegate> _scrollViewDelegate;
    double _parallaxIntensity;
}

@property (readonly, weak, nonatomic) UIViewController *currentPage;
@property (nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<QLPageViewControllerDataSource> indexedDataSource; // @synthesize indexedDataSource=_indexedDataSource;
@property (nonatomic) double parallaxIntensity; // @synthesize parallaxIntensity=_parallaxIntensity;
@property (readonly, weak, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) id<UIScrollViewDelegate> scrollViewDelegate; // @synthesize scrollViewDelegate=_scrollViewDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyParallaxEffectWithTransitionProgress:(double)arg1;
- (id)_cachedViewControllerAtIndex:(unsigned long long)arg1 offset:(long long)arg2;
- (unsigned long long)_indexOfViewController:(id)arg1;
- (void)_loadAndCacheViewControllersBeforeAndAfterIndex:(long long)arg1;
- (void)_rearrangeCachedViewControllersWithNewCurrentPageIndex:(long long)arg1;
- (id)_retrieveAndStoreViewControllerAtIndex:(unsigned long long)arg1 offset:(unsigned long long)arg2;
- (void)_setCurrentPageIndex:(unsigned long long)arg1 direction:(long long)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setUp;
- (void)_setViewControllers:(id)arg1 direction:(long long)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_unsetParallaxEffect;
- (id)_viewControllerAtIndex:(unsigned long long)arg1 offset:(long long)arg2;
- (void)clearInternalCache;
- (id)delegate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransitionStyle:(long long)arg1 navigationOrientation:(long long)arg2 options:(id)arg3;
- (void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)setCurrentPageIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setViewControllers:(id)arg1 direction:(long long)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)viewWillAppear:(BOOL)arg1;

@end

