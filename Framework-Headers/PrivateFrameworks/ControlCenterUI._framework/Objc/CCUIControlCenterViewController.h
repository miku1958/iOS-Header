//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ControlCenterUI/CCUIControlCenterContainerViewDelegate-Protocol.h>
#import <ControlCenterUI/CCUIControlCenterObserver-Protocol.h>
#import <ControlCenterUI/CCUIControlCenterPageContainerViewControllerDelegate-Protocol.h>
#import <ControlCenterUI/UIGestureRecognizerDelegate-Protocol.h>
#import <ControlCenterUI/UIScrollViewDelegate-Protocol.h>
#import <ControlCenterUI/_UISettingsKeyObserver-Protocol.h>

@class CCUIControlCenterContainerView, CCUIControlCenterPageContainerViewController, CCUIControlCenterPageControl, CCUIControlCenterSettings, CCUIImmediateTouchScrollView, CCUISystemControlsPageViewController, NSArray, NSMapTable, NSMutableArray, NSString, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol CCUIControlCenterViewControllerDelegate;

@interface CCUIControlCenterViewController : UIViewController <UIGestureRecognizerDelegate, _UISettingsKeyObserver, UIScrollViewDelegate, CCUIControlCenterContainerViewDelegate, CCUIControlCenterPageContainerViewControllerDelegate, CCUIControlCenterObserver>
{
    CCUIControlCenterPageContainerViewController *_selectedViewController;
    NSMutableArray *_allPageContainerViewControllers;
    NSArray *_sortedVisibleViewControllers;
    NSMapTable *_containerViewControllersToWallpaperViews;
    CCUISystemControlsPageViewController *_systemControlsPage;
    BOOL _needsViewControllerVisibilityUpdate;
    CCUIControlCenterContainerView *_containerView;
    CCUIImmediateTouchScrollView *_pagesScrollView;
    CCUIControlCenterPageControl *_pageControl;
    UIPanGestureRecognizer *_panGesture;
    UITapGestureRecognizer *_tapGesture;
    UITapGestureRecognizer *_iPadScrollToAdjacentPageGesture;
    CCUIControlCenterSettings *_settings;
    NSMutableArray *_pagingScrollViewAnimationCompletionBlocks;
    BOOL _presented;
    BOOL _transitioning;
    id<CCUIControlCenterViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) CCUIControlCenterPageContainerViewController *_selectedViewController; // @synthesize _selectedViewController;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CCUIControlCenterViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long numberOfActivePages;
@property (nonatomic, getter=isPresented) BOOL presented; // @synthesize presented=_presented;
@property (nonatomic) double revealPercentage;
@property (readonly) Class superclass;
@property (nonatomic, getter=isTransitioning) BOOL transitioning; // @synthesize transitioning=_transitioning;

+ (void)notifyControlCenterControl:(id)arg1 didActivate:(BOOL)arg2;
- (void).cxx_destruct;
- (void)_addContentViewController:(id)arg1;
- (void)_addOrRemovePagesBasedOnVisibility;
- (void)_addPageViewController:(id)arg1;
- (BOOL)_contentOffset:(struct CGPoint *)arg1 forChildViewController:(id)arg2;
- (id)_contentViewControllerForLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (long long)_currentOrientation;
- (void)_dismissAirDropWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dismissButtonActionPlatterWithCompletion:(CDUnknownBlockType)arg1;
- (struct CGRect)_frameForChildViewController:(id)arg1;
- (void)_handleAdjacentTap:(id)arg1;
- (void)_handlePan:(id)arg1;
- (void)_handleTap:(id)arg1;
- (void)_invalidateContentLayout;
- (void)_layoutScrollView;
- (void)_loadPages;
- (struct UIEdgeInsets)_marginEdgeInsets;
- (struct UIEdgeInsets)_marginInsetsForContentViewController:(id)arg1;
- (void)_noteControlCenterControlDidActivate:(id)arg1;
- (void)_noteControlCenterControlDidDeactivate:(id)arg1;
- (void)_presentAirDropWithCompletion:(CDUnknownBlockType)arg1;
- (void)_presentButtonActionPlatterWithCompletion:(CDUnknownBlockType)arg1;
- (void)_removeContentViewController:(id)arg1;
- (void)_removePageViewController:(id)arg1;
- (double)_scrollviewContentMaxHeight;
- (id)_selectedContentViewController;
- (void)_sendDidScrollToPageToContentProvidingViewControllers;
- (void)_setContentViewContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2;
- (void)_updatePageControl;
- (void)_updateScrollViewContentSize;
- (void)_updateWallpaperColorInfusionVisibility;
- (void)abortAnimatedTransition;
- (void)containerViewController:(id)arg1 backdropViewDidUpdate:(id)arg2;
- (void)containerViewControllerWantsDismissal:(id)arg1;
- (double)contentHeightForContainerView:(id)arg1;
- (double)contentHeightForOrientation:(long long)arg1;
- (id)contentViewControllers;
- (void)controlCenterDidDismiss;
- (void)controlCenterDidFinishTransition;
- (id)controlCenterSystemAgent;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterWillFinishTransitionOpen:(BOOL)arg1 withDuration:(double)arg2;
- (void)controlCenterWillPresent;
- (void)dealloc;
- (BOOL)dismissModalFullScreenIfNeeded;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (long long)layoutStyle;
- (void)loadView;
- (struct UIEdgeInsets)marginInsetForContainerView:(id)arg1;
- (id)pageControlForContainerView:(id)arg1;
- (struct UIEdgeInsets)pageInsetForContainerView:(id)arg1;
- (id)pagePlatterViewsForContainerView:(id)arg1;
- (id)platterContainer;
- (void)scrollToPage:(unsigned long long)arg1 animated:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)scrollViewForContainerView:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)sortedVisibleViewControllers;
- (id)view;
- (id)viewControllers;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)visibilityPreferenceChangedForContainerViewController:(id)arg1;

@end

