//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/_UIQueuingScrollViewDataSource-Protocol.h>
#import <UIKitCore/_UIQueuingScrollViewDelegate-Protocol.h>

@class NSArray, NSDictionary, NSHashTable, NSMutableArray, NSMutableDictionary, NSString, UIPanGestureRecognizer, UITapGestureRecognizer, _UIPageCurl, _UIPageViewControllerContentView, _UIQueuingScrollView;
@protocol UIPageViewControllerDataSource, UIPageViewControllerDelegate;

@interface UIPageViewController : UIViewController <UIGestureRecognizerDelegate, _UIQueuingScrollViewDelegate, _UIQueuingScrollViewDataSource>
{
    id<UIPageViewControllerDelegate> _delegate;
    id<UIPageViewControllerDataSource> _dataSource;
    long long _transitionStyle;
    long long _navigationOrientation;
    long long _spineLocation;
    BOOL _doubleSided;
    BOOL _pageControlRequiresValidation;
    NSArray *_viewControllers;
    _UIPageCurl *_pageCurl;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    BOOL _stashingViewControllersForRotation;
    NSArray *_viewControllersStashedForRotation;
    BOOL _interfaceRotating;
    NSMutableArray *_rotationSnapshotViews;
    long long _spineLocationPriorToInterfaceRotation;
    struct UIEdgeInsets _tapRegionInsets;
    struct CGSize _tapRegionBreadths;
    struct UIEdgeInsets _effectiveTapRegionInsets;
    struct CGSize _effectiveTapRegionBreadths;
    struct CGRect *_tapRegions;
    double _pageSpacing;
    NSMutableDictionary *_cachedViewControllersForCurl;
    NSHashTable *_cachedViewControllersForScroll;
    NSDictionary *_incomingAndOutgoingViewControllersForManualTransition;
    long long _lastKnownNavigationDirection;
    long long _disableAutorotationCount;
    struct {
        unsigned int delegateWantsTransitionWillBegin:1;
        unsigned int delegateWantsTransitionCompleted:1;
        unsigned int delegateWantsTransitionsFinished:1;
        unsigned int delegateCustomizesSpineLocationForInterfaceOrientation:1;
        unsigned int delegateSupportedInterfaceOrientations:1;
        unsigned int delegatePreferredInterfaceOrientationForPresentation:1;
        unsigned int dataSourceSuppliesBeforeViewController:1;
        unsigned int dataSourceSuppliesAfterViewController:1;
        unsigned int dataSourceSuppliesPageCount:1;
        unsigned int dataSourceSuppliesPageNumber:1;
    } _delegateFlags;
    id<UIPageViewControllerDataSource> _unsafeUnretainedDataSource;
    id<UIPageViewControllerDelegate> _unsafeUnretainedDelegate;
}

@property (readonly, nonatomic) _UIPageViewControllerContentView *_contentView;
@property (readonly, nonatomic, getter=_isInterfaceRotating) BOOL _interfaceRotating; // @synthesize _interfaceRotating;
@property (readonly, nonatomic) long long _navigationOrientation;
@property (readonly, nonatomic, getter=_isPageControlVisible) BOOL _pageControlVisible;
@property (nonatomic, setter=_setPageSpacing:) double _pageSpacing;
@property (readonly, nonatomic) _UIQueuingScrollView *_scrollView;
@property (readonly, nonatomic) long long _transitionStyle;
@property (strong, nonatomic, setter=_setViewControllers:) NSArray *_viewControllers; // @synthesize _viewControllers;
@property (strong, nonatomic, setter=_setViewControllersStashedForRotation:) NSArray *_viewControllersStashedForRotation; // @synthesize _viewControllersStashedForRotation;
@property (weak, nonatomic) id<UIPageViewControllerDataSource> dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UIPageViewControllerDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDoubleSided) BOOL doubleSided;
@property (readonly, nonatomic) NSArray *gestureRecognizers;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long navigationOrientation;
@property (readonly, nonatomic) long long spineLocation;
@property (readonly) Class superclass;
@property (readonly, nonatomic) long long transitionStyle;
@property (readonly, nonatomic) NSArray *viewControllers;

+ (id)_incomingViewControllerKeys;
+ (BOOL)_isNavigationOrientation:(long long)arg1 supportedForTransitionStyle:(long long)arg2;
+ (BOOL)_isSpineLocation:(long long)arg1 supportedForTransitionStyle:(long long)arg2;
+ (BOOL)_isSupportedTransitionStyle:(long long)arg1;
+ (id)_outgoingViewControllerKeys;
+ (BOOL)doesOverridePreferredInterfaceOrientationForPresentation;
+ (id)stringForSpineLocation:(long long)arg1;
- (void).cxx_destruct;
- (void)_beginDisablingInterfaceAutorotation;
- (void)_cacheViewControllerForScroll:(id)arg1;
- (BOOL)_canHandleGestures;
- (void)_child:(id)arg1 beginAppearanceTransition:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_child:(id)arg1 beginAppearanceTransitionIfPossible:(BOOL)arg2 animated:(BOOL)arg3;
- (BOOL)_child:(id)arg1 canBeginAppearanceTransition:(BOOL)arg2;
- (void)_child:(id)arg1 didRotateFromInterfaceOrientation:(long long)arg2;
- (void)_child:(id)arg1 endAppearanceTransitionIfPossible:(BOOL)arg2;
- (void)_child:(id)arg1 willAnimateRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)_child:(id)arg1 willRotateToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (BOOL)_childCanEndAppearanceTransition:(id)arg1;
- (void)_childEndAppearanceTransition:(id)arg1;
- (struct CGSize)_contentSizeForSize:(struct CGSize)arg1;
- (void)_contentViewFrameOrBoundsDidChange;
- (id)_deepestActionResponder;
- (struct CGRect)_disabledScrollingRegion;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL *)arg2;
- (struct CGSize)_effectiveTapRegionBreadths;
- (struct UIEdgeInsets)_effectiveTapRegionInsets;
- (void)_endDisablingInterfaceAutorotation;
- (void)_flushViewController:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_handlePagingInDirection:(long long)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handlePanGesture:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (BOOL)_hasPreferredInterfaceOrientationForPresentation;
- (id)_incomingViewControllersForGestureDrivenCurlInDirection:(long long)arg1;
- (void)_invalidateEffectiveTapRegions;
- (void)_invalidatePageCurl;
- (void)_invalidateViewControllersStashedForCurlFromDataSource;
- (BOOL)_isCurrentViewControllerStateValid;
- (void)_marginInfoForChild:(id)arg1 leftMargin:(double *)arg2 rightMargin:(double *)arg3;
- (long long)_navigationEndDirectionInResponseToPanGestureRecognizer:(id)arg1 suggestedVelocity:(double *)arg2;
- (id)_pageControl;
- (void)_pageControlValueChanged:(id)arg1;
- (void)_populateIncomingViewControllersInMap:(id)arg1 withViewControllers:(id)arg2 forCurlInDirection:(long long)arg3;
- (void)_populateOutgoingViewControllersInMap:(id)arg1;
- (id)_queuingScrollView:(id)arg1 viewBefore:(BOOL)arg2 view:(id)arg3;
- (long long)_requestSpineLocationForInterfaceOrientationAndUpdateStashedViewControllers:(long long)arg1;
- (void)_sendChildViewWill:(BOOL)arg1 appear:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_setDisabledScrollingRegion:(struct CGRect)arg1;
- (void)_setSpineLocation:(long long)arg1;
- (void)_setTapRegionBreadths:(struct CGSize)arg1;
- (void)_setTapRegionInsets:(struct UIEdgeInsets)arg1;
- (void)_setViewControllers:(id)arg1 withCurlOfType:(long long)arg2 fromLocation:(struct CGPoint)arg3 direction:(long long)arg4 animated:(BOOL)arg5 notifyDelegate:(BOOL)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_setViewControllers:(id)arg1 withScrollInDirection:(long long)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)_shouldBeginNavigationInDirection:(long long *)arg1 inResponseToPanGestureRecognizer:(id)arg2;
- (BOOL)_shouldCompleteManualCurlWithSuggestedVelocity:(double *)arg1;
- (BOOL)_shouldFlipInRightToLeft;
- (BOOL)_shouldNavigateInDirection:(long long *)arg1 inResponseToTapGestureRecognizer:(id)arg2;
- (BOOL)_shouldNavigateInDirection:(long long *)arg1 inResponseToVelocity:(double *)arg2 ofGestureRecognizedByPanGestureRecognizer:(id)arg3;
- (BOOL)_shouldPersistViewWhenCoding;
- (struct CGSize)_tapRegionBreadths;
- (struct UIEdgeInsets)_tapRegionInsets;
- (struct CGRect *)_tapRegions;
- (void)_updatePageControlViaDataSourceIfNecessary;
- (struct _NSRange)_validRangeForPresentationOfViewControllersWithSpineLocation:(long long)arg1;
- (id)_validatedViewControllersForPresentationOfViewControllers:(id)arg1 validRange:(struct _NSRange)arg2;
- (id)_validatedViewControllersForTransitionWithViewControllers:(id)arg1 animated:(BOOL)arg2;
- (id)_viewControllerAfterViewController:(id)arg1;
- (id)_viewControllerBefore:(BOOL)arg1 viewController:(id)arg2;
- (id)_viewControllerBeforeViewController:(id)arg1;
- (id)_viewControllersForCurlWithViewControllers:(id)arg1 direction:(long long)arg2;
- (id)_viewControllersForPendingSpineLocation:(long long)arg1;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithTransitionStyle:(long long)arg1 navigationOrientation:(long long)arg2 options:(id)arg3;
- (void)loadView;
- (id)preferredFocusedView;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)queuingScrollView:(id)arg1 attemptToPageInDirection:(long long)arg2;
- (void)queuingScrollView:(id)arg1 didBailoutOfScrollAndRevealedView:(id)arg2;
- (void)queuingScrollView:(id)arg1 didCommitManualScroll:(BOOL)arg2 toRevealView:(id)arg3 concealView:(id)arg4 direction:(long long)arg5 animated:(BOOL)arg6 canComplete:(BOOL)arg7;
- (void)queuingScrollView:(id)arg1 didEndManualScroll:(BOOL)arg2 toRevealView:(id)arg3 direction:(long long)arg4 animated:(BOOL)arg5 didFinish:(BOOL)arg6 didComplete:(BOOL)arg7;
- (void)queuingScrollView:(id)arg1 didFlushView:(id)arg2 animated:(BOOL)arg3;
- (id)queuingScrollView:(id)arg1 viewAfterView:(id)arg2;
- (id)queuingScrollView:(id)arg1 viewBeforeView:(id)arg2;
- (void)queuingScrollView:(id)arg1 willManuallyScroll:(BOOL)arg2 toRevealView:(id)arg3 concealView:(id)arg4 animated:(BOOL)arg5;
- (void)queuingScrollViewDidFinishScrolling:(id)arg1;
- (BOOL)queuingScrollViewShouldLayoutSubviews:(id)arg1;
- (void)setViewControllers:(id)arg1 direction:(long long)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillUnload;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end

