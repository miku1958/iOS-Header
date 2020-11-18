//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

#import <UIKit/_UISearchControllerPresenting-Protocol.h>

@class NSMapTable, NSString, UIView, _UISearchPresentationAssistant;
@protocol _UISearchControllerPresenting;

__attribute__((visibility("hidden")))
@interface _UISearchPresentationController : UIPresentationController <_UISearchControllerPresenting>
{
    _UISearchPresentationAssistant *_assistant;
    UIView *_placeholderView;
    NSMapTable *_excisedSearchBarConstraitMap;
    NSMapTable *_placeholderConstraitMap;
    struct CGRect _finalFrameForContainerView;
    struct {
        unsigned int searchBarWasTableHeaderView:1;
        unsigned int excisedSearchBarDuringPresentation:1;
        unsigned int searchBarWantedAutolayoutBeforeExcision:1;
    } _controllerFlags;
}

@property (readonly, nonatomic) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController;
@property (readonly, nonatomic) UIView *backgroundObscuringView;
@property (readonly, nonatomic) BOOL backgroundObscuringViewShouldObeyPresentationContextBounds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) struct CGRect finalFrameForContainerView; // @synthesize finalFrameForContainerView=_finalFrameForContainerView;
@property (readonly, nonatomic) BOOL forceObeyNavigationBarInsets;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) double resultsControllerContentOffset;
@property (readonly, nonatomic) BOOL resultsUnderlapsSearchBar;
@property (readonly, nonatomic) BOOL searchBarCanContainScopeBar;
@property (readonly, strong, nonatomic) UIView *searchBarContainerView;
@property (readonly, nonatomic) BOOL searchBarShouldClipToBounds;
@property (readonly, nonatomic) BOOL searchBarToBecomeTopAttached;
@property (readonly, nonatomic) BOOL shouldAccountForStatusBar;
@property (readonly, nonatomic) double statusBarAdjustment;
@property (readonly) Class superclass;

+ (BOOL)shouldExciseSearchBar:(id)arg1 duringPresentationWithPresenter:(id)arg2;
- (id)_constraintCopyOfConstraint:(id)arg1 replaceItem:(id)arg2 withItem:(id)arg3;
- (void)_exciseSearchBarFromCurrentContext;
- (void)_placeSearchBarBackIntoOriginalContext;
- (id)_presentationControllerForTraitCollection:(id)arg1;
- (id)_presentedViewControllerForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (BOOL)_shouldKeepCurrentFirstResponder;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (void)_transitionFromDidEnd;
- (void)_transitionFromWillBegin;
- (void)_transitionToDidEnd;
- (void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_transitionToWillBegin;
- (void)_updateContainerFinalFrameForNonExcisedSearchBar;
- (void)_updatePresentingViewControllerContentScrollViewWithOffsets:(struct CGSize)arg1 transitionCoordinator:(id)arg2;
- (double)_visibleRefreshControlHeightForTableView:(id)arg1;
- (long long)adaptivePresentationStyle;
- (void)dealloc;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (void)dismissalTransitionWillBegin;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (void)hideBackgroundObscuringView;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (void)presentationTransitionWillBegin;
- (void)setContentVisible:(BOOL)arg1;
- (BOOL)shouldPresentInFullscreen;
- (BOOL)shouldRemovePresentersView;
- (void)showBackgroundObscuringView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

