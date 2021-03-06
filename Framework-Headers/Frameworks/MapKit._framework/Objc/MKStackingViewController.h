//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MapKit/UIScrollViewDelegate-Protocol.h>
#import <MapKit/_MKAnimationStackViewDelegate-Protocol.h>
#import <MapKit/_MKStackViewDelegate-Protocol.h>

@class NSArray, NSHashTable, NSLayoutConstraint, NSMapTable, NSString, UIScrollView, UIView, _MKStackView, _MKStackingContentView;
@protocol MKStackingViewControllerDelegate;

@interface MKStackingViewController : UIViewController <_MKStackViewDelegate, _MKAnimationStackViewDelegate, UIScrollViewDelegate>
{
    _MKStackView *_stackView;
    _MKStackingContentView *_contentView;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_stackViewWidthConstraint;
    BOOL _isScrollDisabled;
    unsigned long long _countOfCurrentLayoutInvocations;
    UIScrollView *_scrollView;
    NSMapTable *_viewControllersToPreferredHeightConstraints;
    NSMapTable *_viewsToViewControllers;
    NSArray *_titleViewConstraints;
    BOOL _willRelayoutForPreferredContentSizeChange;
    BOOL _isSettingStackedViews;
    BOOL _contentViewConstraintsAdded;
    NSHashTable *_minimallyVisibleViews;
    BOOL _needsToPerformLayout;
    UIView *_overlayView;
    double _overlayViewOriginY;
    BOOL _mayWantSpearators;
    BOOL _needToCallViewControllerLayoutDelegate;
    NSArray *_viewControllers;
    id<MKStackingViewControllerDelegate> _stackingDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;
@property (readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property (weak, nonatomic) id<MKStackingViewControllerDelegate> stackingDelegate; // @synthesize stackingDelegate=_stackingDelegate;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;

- (void).cxx_destruct;
- (void)_addPreferredHeightConstraintForViewControllerIfNeeded:(id)arg1;
- (void)_callViewControllersLayoutDelegateIfNeeded;
- (void)_didScroll;
- (double)_fittingHeightForView:(id)arg1;
- (BOOL)_isSafeToPerformLayout;
- (void)_removePreferredHeightConstraintFromViewController:(id)arg1;
- (void)_sendScrollnotification;
- (void)_setOverlayViewFrame;
- (void)_setPreferredHeight:(double)arg1 forViewController:(id)arg2;
- (void)_setScrollEnabled:(BOOL)arg1 forcedUpdate:(BOOL)arg2;
- (void)_setUpEnteringViewController:(id)arg1;
- (void)_tearDownExitingViewController:(id)arg1;
- (double)_titleHeight;
- (void)_updateFixedHeightAwareControllers;
- (void)_updateStackViewSubviewsAndChildVCsEntering:(id)arg1 exiting:(id)arg2;
- (void)_updateViewControllerVisibilityAfterPositionChange;
- (double)currentHeight;
- (void)dealloc;
- (BOOL)isViewVisbile:(id)arg1 percentageTreshold:(double)arg2;
- (void)loadView;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)removeOverlayViewAnimated:(BOOL)arg1;
- (void)scrollToTopAnimated:(BOOL)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setOverlayView:(id)arg1 withOriginY:(double)arg2;
- (void)setWidthConstraintConstant:(double)arg1;
- (double)stackView:(id)arg1 distanceBetweenUpperView:(id)arg2 andLowerView:(id)arg3;
- (void)stackViewNeedsLayout:(id)arg1;
- (void)updateViewConstraints;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end

