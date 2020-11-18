//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKit/UILayoutContainerViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, UILayoutContainerView, UILayoutGuide, UILongPressGestureRecognizer, UISlidingBarConfiguration, UISlidingBarState, UISlidingBarStateRequest, UIView, UIViewController, _UIPanelInternalState;
@protocol UIPanelControllerDelegate;

__attribute__((visibility("hidden")))
@interface UIPanelController : NSObject <UIGestureRecognizerDelegate, UILayoutContainerViewDelegate>
{
    struct {
        unsigned int isUpdatingState:1;
        unsigned int needsDeferredUpdateWhileUpdatingState:1;
        unsigned int isPerformingDeferredUpdate:1;
        unsigned int nextLayoutIsForConstraintBasedAnimationStart:1;
        unsigned int inWillTransitionToTraitCollection:1;
        unsigned int inViewWillTransitionToSize:1;
        unsigned int inViewWillTransitionToSizeRecursingToChildren:1;
        unsigned int constraintsAndViewsLocked:1;
        unsigned int takingDestinationSnapshot:1;
        unsigned int registeredForKeyboardNotifications:1;
    } _panelControllerFlags;
    NSMutableArray *_wrapperBlocksForNextUpdate;
    BOOL __hasUpdatedForTraitCollection;
    BOOL __needsFirstTimeUpdateForTraitCollection;
    BOOL __changingViewControllerParentage;
    UIViewController *_owningViewController;
    UIView *_dimmingView;
    UILayoutContainerView *_view;
    NSArray *__constraints;
    UILayoutGuide *__layoutGuide;
    _UIPanelInternalState *__internalState;
    _UIPanelInternalState *__previousInternalState;
    UISlidingBarState *__lastComputedPublicState;
    NSArray *__lastPossiblePublicStates;
    UILongPressGestureRecognizer *__gestureRecognizer;
    UIView *__leadingBorderView;
    UIView *__trailingBorderView;
    UIView *__sourceSnapshotView;
    struct CGSize __lastViewSize;
}

@property (nonatomic, setter=_setChangingViewControllerParentage:) BOOL _changingViewControllerParentage; // @synthesize _changingViewControllerParentage=__changingViewControllerParentage;
@property (strong, nonatomic, setter=_setConstraints:) NSArray *_constraints; // @synthesize _constraints=__constraints;
@property (strong, nonatomic, setter=_setGestureRecognizer:) UILongPressGestureRecognizer *_gestureRecognizer; // @synthesize _gestureRecognizer=__gestureRecognizer;
@property (nonatomic, setter=_setHasUpdatedForTraitCollection:) BOOL _hasUpdatedForTraitCollection; // @synthesize _hasUpdatedForTraitCollection=__hasUpdatedForTraitCollection;
@property (strong, nonatomic, setter=_setInternalState:) _UIPanelInternalState *_internalState; // @synthesize _internalState=__internalState;
@property (copy, nonatomic, setter=_setLastComputedPublicState:) UISlidingBarState *_lastComputedPublicState; // @synthesize _lastComputedPublicState=__lastComputedPublicState;
@property (copy, nonatomic, setter=_setLastPossiblePublicStates:) NSArray *_lastPossiblePublicStates; // @synthesize _lastPossiblePublicStates=__lastPossiblePublicStates;
@property (nonatomic, setter=_setLastViewSize:) struct CGSize _lastViewSize; // @synthesize _lastViewSize=__lastViewSize;
@property (strong, nonatomic, setter=_setLayoutGuide:) UILayoutGuide *_layoutGuide; // @synthesize _layoutGuide=__layoutGuide;
@property (strong, nonatomic, setter=_setLeadingBorderView:) UIView *_leadingBorderView; // @synthesize _leadingBorderView=__leadingBorderView;
@property (nonatomic, setter=_setNeedsFirstTimeUpdateForTraitCollection:) BOOL _needsFirstTimeUpdateForTraitCollection; // @synthesize _needsFirstTimeUpdateForTraitCollection=__needsFirstTimeUpdateForTraitCollection;
@property (strong, nonatomic, setter=_setPreviousInternalState:) _UIPanelInternalState *_previousInternalState; // @synthesize _previousInternalState=__previousInternalState;
@property (strong, nonatomic, setter=_setSnapshotView:) UIView *_sourceSnapshotView; // @synthesize _sourceSnapshotView=__sourceSnapshotView;
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
@property (copy, nonatomic) UISlidingBarStateRequest *stateRequest;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIViewController *trailingViewController;
@property (strong, nonatomic) UILayoutContainerView *view; // @synthesize view=_view;

- (void).cxx_destruct;
- (void)__viewWillLayoutSubviews;
- (void)_addIdentifiedChildViewController:(id)arg1;
- (void)_adjustForKeyboardInfo:(id)arg1;
- (void)_adjustNonOverlayLeadingScrollViewsForKeyboardInfo:(id)arg1;
- (void)_animateFromRequest:(id)arg1 toRequest:(id)arg2 withAffectedSides:(long long)arg3;
- (void)_beginInteractingForSide:(long long)arg1;
- (void)_collapseWithTransitionCoordinator:(id)arg1;
- (id)_createBorderView;
- (void)_endInteractingWithSuccess:(BOOL)arg1;
- (void)_expandWithTransitionCoordinator:(id)arg1;
- (void)_gestureChanged:(id)arg1;
- (void)_layoutContainerViewDidMoveToWindow:(id)arg1;
- (void)_layoutContainerViewWillMoveToWindow:(id)arg1;
- (void)_observeKeyboardNotificationsOnScreen:(id)arg1;
- (void)_performDeferredUpdate;
- (void)_performSingleDeferredUpdatePass;
- (void)_performWrappedUpdate:(CDUnknownBlockType)arg1;
- (BOOL)_pointHitsAffordance:(struct CGPoint)arg1 returningSide:(long long *)arg2;
- (void)_removeIdentifiedChildViewController:(id)arg1;
- (void)_setNeedsDeferredUpdate;
- (void)_stopObservingKeyboardNotifications;
- (void)_updateForTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_updateInteractionWithOffset:(double)arg1;
- (void)_updateToNewPublicState:(id)arg1 withSize:(struct CGSize)arg2;
- (BOOL)_willCollapseWithNewTraitCollection:(id)arg1;
- (BOOL)_willExpandWithNewTraitCollection:(id)arg1;
- (void)addWrapperBlockForNextUpdate:(CDUnknownBlockType)arg1;
- (id)allViewControllers;
- (void)animateToRequest:(id)arg1;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithOwningViewController:(id)arg1;
- (BOOL)isInteractingOrAnimating;
- (void)loadView;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)removeChildViewController:(id)arg1;
- (void)setNeedsUpdate;
- (void)updateViewConstraints;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2 superBlock:(CDUnknownBlockType)arg3;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 superBlock:(CDUnknownBlockType)arg3;

@end

