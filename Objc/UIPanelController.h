//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UILayoutContainerViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, UILayoutContainerView, UISlidingBarConfiguration, UISlidingBarState, UISlidingBarStateRequest, UIView, UIViewController, UIVisualEffectView, _UIPanelInternalState;
@protocol UIPanelControllerDelegate;

__attribute__((visibility("hidden")))
@interface UIPanelController : NSObject <UILayoutContainerViewDelegate>
{
    struct {
        unsigned int isUpdatingState:1;
        unsigned int needsDeferredUpdateWhileUpdatingState:1;
        unsigned int isPerformingDeferredUpdate:1;
        unsigned int nextLayoutIsForInitializingAnimation:1;
        unsigned int inWillTransitionToTraitCollection:1;
        unsigned int inViewWillTransitionToSize:1;
        unsigned int inViewWillTransitionToSizeRecursingToChildren:1;
        unsigned int viewsLocked:1;
        unsigned int takingDestinationSnapshot:1;
        unsigned int registeredForKeyboardNotifications:1;
        unsigned int borderViewsObservingViewBackgroundColor:1;
        unsigned int updateLayoutRequested:1;
    } _panelControllerFlags;
    NSMutableArray *_wrapperBlocksForNextUpdate;
    BOOL __hasUpdatedForTraitCollection;
    BOOL __needsFirstTimeUpdateForTraitCollection;
    BOOL __changingViewControllerParentage;
    UIViewController *_owningViewController;
    UIView *_dimmingView;
    UILayoutContainerView *_view;
    _UIPanelInternalState *__internalState;
    _UIPanelInternalState *__previousInternalState;
    UISlidingBarState *__lastComputedPublicState;
    NSArray *__lastPossiblePublicStates;
    UIView *__contentView;
    UIView *__leadingBorderView;
    UIView *__trailingBorderView;
    UIView *__sourceTransitionView;
    UIView *__destTransitionView;
    UIVisualEffectView *__leadingBackgroundView;
    UIVisualEffectView *__trailingBackgroundView;
    struct CGSize __lastViewSize;
}

@property (nonatomic, setter=_setChangingViewControllerParentage:) BOOL _changingViewControllerParentage; // @synthesize _changingViewControllerParentage=__changingViewControllerParentage;
@property (strong, nonatomic, setter=_setContentView:) UIView *_contentView; // @synthesize _contentView=__contentView;
@property (strong, nonatomic, setter=_setDestinationTransitionView:) UIView *_destTransitionView; // @synthesize _destTransitionView=__destTransitionView;
@property (nonatomic, setter=_setHasUpdatedForTraitCollection:) BOOL _hasUpdatedForTraitCollection; // @synthesize _hasUpdatedForTraitCollection=__hasUpdatedForTraitCollection;
@property (strong, nonatomic, setter=_setInternalState:) _UIPanelInternalState *_internalState; // @synthesize _internalState=__internalState;
@property (copy, nonatomic, setter=_setLastComputedPublicState:) UISlidingBarState *_lastComputedPublicState; // @synthesize _lastComputedPublicState=__lastComputedPublicState;
@property (copy, nonatomic, setter=_setLastPossiblePublicStates:) NSArray *_lastPossiblePublicStates; // @synthesize _lastPossiblePublicStates=__lastPossiblePublicStates;
@property (nonatomic, setter=_setLastViewSize:) struct CGSize _lastViewSize; // @synthesize _lastViewSize=__lastViewSize;
@property (strong, nonatomic, setter=_setLeadingBackgroundView:) UIVisualEffectView *_leadingBackgroundView; // @synthesize _leadingBackgroundView=__leadingBackgroundView;
@property (strong, nonatomic, setter=_setLeadingBorderView:) UIView *_leadingBorderView; // @synthesize _leadingBorderView=__leadingBorderView;
@property (nonatomic, setter=_setNeedsFirstTimeUpdateForTraitCollection:) BOOL _needsFirstTimeUpdateForTraitCollection; // @synthesize _needsFirstTimeUpdateForTraitCollection=__needsFirstTimeUpdateForTraitCollection;
@property (strong, nonatomic, setter=_setPreviousInternalState:) _UIPanelInternalState *_previousInternalState; // @synthesize _previousInternalState=__previousInternalState;
@property (strong, nonatomic, setter=_setSourceTransitionView:) UIView *_sourceTransitionView; // @synthesize _sourceTransitionView=__sourceTransitionView;
@property (strong, nonatomic, setter=_setTrailingBackgroundView:) UIVisualEffectView *_trailingBackgroundView; // @synthesize _trailingBackgroundView=__trailingBackgroundView;
@property (strong, nonatomic, setter=_setTrailingBorderView:) UIView *_trailingBorderView; // @synthesize _trailingBorderView=__trailingBorderView;
@property (readonly, nonatomic, getter=isCollapsed) BOOL collapsed;
@property (readonly, nonatomic) long long collapsedState;
@property (readonly, nonatomic) UIViewController *collapsedViewController;
@property (copy, nonatomic) UISlidingBarConfiguration *configuration;
@property (readonly, nonatomic) UISlidingBarState *currentState;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UIPanelControllerDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIViewController *leadingViewController;
@property (strong, nonatomic) UIViewController *mainViewController;
@property (weak, nonatomic) UIViewController *owningViewController; // @synthesize owningViewController=_owningViewController;
@property (readonly, nonatomic) NSArray *possibleStates;
@property (strong, nonatomic) UIViewController *preservedDetailController;
@property (copy, nonatomic) UISlidingBarStateRequest *stateRequest;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIViewController *trailingViewController;
@property (readonly, nonatomic) NSArray *uncachedPossibleStates;
@property (strong, nonatomic) UILayoutContainerView *view; // @synthesize view=_view;

+ (id)_withDisabledAppearanceTransitions:(BOOL)arg1 forVisibleDescendantsOf:(id)arg2 perform:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)__viewWillLayoutSubviews;
- (void)_addIdentifiedChildViewController:(id)arg1;
- (void)_adjustForKeyboardInfo:(id)arg1;
- (void)_adjustNonOverlayLeadingScrollViewsForKeyboardInfo:(id)arg1;
- (void)_animateFromRequest:(id)arg1 toRequest:(id)arg2 withAffectedSides:(long long)arg3;
- (void)_collapseWithTransitionCoordinator:(id)arg1;
- (id)_createBorderView;
- (void)_expandWithTransitionCoordinator:(id)arg1;
- (void)_layoutContainerViewDidMoveToWindow:(id)arg1;
- (void)_layoutContainerViewWillMoveToWindow:(id)arg1;
- (BOOL)_needsWorkaroundForCoordinatorBlocks;
- (void)_observeKeyboardNotificationsOnScreen:(id)arg1;
- (void)_performDeferredUpdate;
- (void)_performSingleDeferredUpdatePass;
- (void)_performWrappedUpdate:(CDUnknownBlockType)arg1;
- (void)_removeIdentifiedChildViewController:(id)arg1;
- (void)_setBorderViewsObserveViewBackgroundColor:(BOOL)arg1;
- (void)_setNeedsDeferredUpdate;
- (void)_setNeedsLayoutAndPerformImmediately:(BOOL)arg1;
- (void)_stopObservingKeyboardNotifications;
- (void)_updateForTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_updateToNewPublicState:(id)arg1 withSize:(struct CGSize)arg2;
- (BOOL)_willCollapseWithNewTraitCollection:(id)arg1;
- (BOOL)_willExpandWithNewTraitCollection:(id)arg1;
- (void)_withDisabledAppearanceTransitionsPerform:(CDUnknownBlockType)arg1;
- (void)addWrapperBlockForNextUpdate:(CDUnknownBlockType)arg1;
- (id)allViewControllers;
- (void)animateToRequest:(id)arg1;
- (void)dealloc;
- (id)initWithOwningViewController:(id)arg1;
- (BOOL)isAnimating;
- (BOOL)isLeadingViewControllerVisibleAfterAnimation;
- (BOOL)isTrailingViewControllerVisibleAfterAnimation;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)removeChildViewController:(id)arg1;
- (void)setLeadingViewController:(id)arg1 changingParentage:(BOOL)arg2;
- (void)setMainViewController:(id)arg1 changingParentage:(BOOL)arg2;
- (void)setNeedsUpdate;
- (void)setTrailingViewController:(id)arg1 changingParentage:(BOOL)arg2;
- (BOOL)shouldRunOurRotationAlongSideAnimationBeforeClientAlongSideAnimation;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2 superBlock:(CDUnknownBlockType)arg3;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 superBlock:(CDUnknownBlockType)arg3;

@end

