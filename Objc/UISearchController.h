//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UIKit/NSCoding-Protocol.h>
#import <UIKit/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <UIKit/UIViewControllerPresenting-Protocol.h>
#import <UIKit/UIViewControllerTransitioningDelegate-Protocol.h>
#import <UIKit/_UIScrollViewScrollObserver_Internal-Protocol.h>

@class NSString, UISearchBar, UISystemInputViewController, UITapGestureRecognizer, UIView, _UINavigationControllerManagedSearchPalette, _UISearchControllerDidScrollDelegate;
@protocol UISearchControllerDelegate, UISearchResultsUpdating, UIViewControllerAnimatedTransitioning;

@interface UISearchController : UIViewController <UIViewControllerPresenting, _UIScrollViewScrollObserver_Internal, NSCoding, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>
{
    UISearchBar *_searchBar;
    int _barPresentationStyle;
    id<UIViewControllerAnimatedTransitioning> _animator;
    id _windowWillAnimateToken;
    _UISearchControllerDidScrollDelegate *_didScrollDelegate;
    UISystemInputViewController *_systemInputViewController;
    BOOL _shouldFocusResults;
    UITapGestureRecognizer *_backButtonDismissGestureRecognizer;
    UITapGestureRecognizer *_doneButtonGestureRecognizer;
    long long _lastKnownInterfaceOrientation;
    struct {
        unsigned int searchBarWasTableHeaderView:1;
        unsigned int searchBarWasFirstResponder:1;
    } _controllerFlags;
    BOOL _obscuresBackgroundDuringPresentation;
    BOOL _hidesNavigationBarDuringPresentation;
    BOOL __showResultsForEmptySearch;
    UIView *_resultsControllerViewContainer;
    _UINavigationControllerManagedSearchPalette *_managedPalette;
    id<UISearchResultsUpdating> _searchResultsUpdater;
    id<UISearchControllerDelegate> _delegate;
    UIViewController *_searchResultsController;
    long long __previousSearchBarPosition;
    double __resultsContentScrollViewPresentationOffset;
}

@property (readonly, nonatomic) int _barPresentationStyle; // @synthesize _barPresentationStyle;
@property (readonly, strong, nonatomic) _UINavigationControllerManagedSearchPalette *_managedPalette; // @synthesize _managedPalette;
@property (nonatomic) long long _previousSearchBarPosition; // @synthesize _previousSearchBarPosition=__previousSearchBarPosition;
@property (nonatomic) double _resultsContentScrollViewPresentationOffset; // @synthesize _resultsContentScrollViewPresentationOffset=__resultsContentScrollViewPresentationOffset;
@property (strong, nonatomic) UIView *_resultsControllerViewContainer; // @synthesize _resultsControllerViewContainer;
@property (readonly, nonatomic) BOOL _searchbarWasTableHeaderView;
@property (nonatomic, setter=_setShowResultsForEmptySearch:) BOOL _showResultsForEmptySearch; // @synthesize _showResultsForEmptySearch=__showResultsForEmptySearch;
@property (readonly, nonatomic) UISystemInputViewController *_systemInputViewController;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UISearchControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dimsBackgroundDuringPresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hidesNavigationBarDuringPresentation; // @synthesize hidesNavigationBarDuringPresentation=_hidesNavigationBarDuringPresentation;
@property (nonatomic) BOOL obscuresBackgroundDuringPresentation; // @synthesize obscuresBackgroundDuringPresentation=_obscuresBackgroundDuringPresentation;
@property (readonly, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property (readonly, nonatomic) UIViewController *searchResultsController; // @synthesize searchResultsController=_searchResultsController;
@property (weak, nonatomic) id<UISearchResultsUpdating> searchResultsUpdater; // @synthesize searchResultsUpdater=_searchResultsUpdater;
@property (readonly) Class superclass;

+ (void)_resignSearchBarAsFirstResponder:(id)arg1;
- (void).cxx_destruct;
- (void)_adjustSearchBarSizeForOrientation:(long long)arg1;
- (void)_adjustSearchBarSizeForOrientation:(long long)arg1 oldPaletteFrame:(struct CGRect)arg2;
- (BOOL)_allowFormSheetStylePresentation;
- (id)_animatorForBarPresentationStyle:(int)arg1 dismissing:(BOOL)arg2;
- (void)_beginWatchingPresentingController;
- (void)_commonInit;
- (void)_connectSearchBar:(id)arg1;
- (BOOL)_containedInNavigationPaletteAndNotHidden;
- (id)_createAnimationCoordinator;
- (void)_createSystemInputViewControllerIfNeededForTraitEnvironment:(id)arg1;
- (id)_defaultAnimationController;
- (void)_didDismissSearchController;
- (void)_didPresentFromViewController:(id)arg1;
- (BOOL)_disableAutomaticKeyboardUI;
- (void)_dismissFromBackButton:(id)arg1;
- (void)_dismissPresentation:(BOOL)arg1;
- (void)_endWatchingPresentingController;
- (void)_installBackGestureRecognizer;
- (void)_installDoneGestureRecognizer;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)_locatePresentingViewController;
- (void)_navigationControllerWillShowViewController:(id)arg1;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (void)_performAutomaticPresentation;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)_presentingViewControllerDidChange:(id)arg1;
- (void)_presentingViewControllerWillChange:(id)arg1;
- (BOOL)_requiresCustomPresentationController;
- (void)_resizeResultsControllerWithDelta:(struct CGSize)arg1;
- (BOOL)_resultsControllerWillLayoutVisibleUnderContainerView;
- (void)_searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)_searchBarCancelButtonClicked:(id)arg1;
- (void)_searchBarSearchButtonClicked:(id)arg1;
- (BOOL)_searchBarShouldFinalizeBecomingFirstResponder;
- (void)_searchBarSuperviewChanged;
- (void)_searchBarTextDidBeginEditing:(id)arg1;
- (id)_searchPresentationController;
- (void)_sizeSearchViewToPresentingViewController:(id)arg1;
- (void)_startManagingPalette:(id)arg1;
- (void)_stopManagingPalette;
- (void)_uninstallBackGestureRecognizer;
- (void)_uninstallDoneGestureRecognizer;
- (void)_updateBarPresentationStyleForPresentingViewController:(id)arg1;
- (void)_updateFocusFromDoneButton:(id)arg1;
- (void)_updateSearchBarMaskIfNecessary;
- (void)_updateSearchResultsContentScrollViewWithDelta:(struct CGSize)arg1;
- (void)_updateSearchResultsControllerWithDelta:(struct CGSize)arg1;
- (void)_updateSearchResultsPositionWithDelta:(struct CGSize)arg1;
- (void)_updateSystemInputViewController;
- (void)_updateTableHeaderBackgroundViewInTableView:(id)arg1 amountScrolledUnder:(double)arg2;
- (void)_updateVisibilityOfSearchResultsForSearchBar:(id)arg1;
- (void)_watchScrollView:(id)arg1 forScrolling:(BOOL)arg2;
- (void)_willDismissSearchController;
- (void)_willPresentFromViewController:(id)arg1;
- (void)_willUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dealloc;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchResultsController:(id)arg1;
- (void)loadView;
- (id)preferredFocusEnvironments;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

