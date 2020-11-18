//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

#import <UIKit/_UISearchControllerPresenting-Protocol.h>

@class NSString, UIView, _UISearchPresentationAssistant;
@protocol _UISearchControllerPresenting;

__attribute__((visibility("hidden")))
@interface _UISearchFormSheetPresentationController : UIPresentationController <_UISearchControllerPresenting>
{
    _UISearchPresentationAssistant *_assistant;
    UIView *_wrapperView;
    struct CGRect finalFrameForContainerView;
}

@property (readonly, nonatomic) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) struct CGRect finalFrameForContainerView; // @synthesize finalFrameForContainerView;
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

- (struct CGRect)_frameOfPresentedViewControllerViewInSuperview;
- (id)_presentationControllerForTraitCollection:(id)arg1;
- (void)_presentedView:(id)arg1 enableFormSheetAccoutrements:(BOOL)arg2;
- (id)_presentedViewControllerForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (BOOL)_shouldKeepCurrentFirstResponder;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (BOOL)_shouldSubscribeToKeyboardNotifications;
- (void)_transitionFromDidEnd;
- (void)_transitionFromWillBegin;
- (void)_transitionToDidEnd;
- (void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_transitionToWillBegin;
- (long long)adaptivePresentationStyle;
- (void)dealloc;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (void)dismissalTransitionWillBegin;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (void)presentationTransitionWillBegin;
- (id)presentedView;
- (void)setContentVisible:(BOOL)arg1;
- (BOOL)shouldRemovePresentersView;
- (void)traitCollectionDidChange:(id)arg1;

@end

