//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UIGestureRecognizerDelegatePrivate-Protocol.h>
#import <UIKit/UIInterfaceActionGroupDisplayPropertyObserver-Protocol.h>
#import <UIKit/UIInterfaceActionGroupDisplaying-Protocol.h>
#import <UIKit/UIScrollViewDelegate-Protocol.h>
#import <UIKit/UISpringLoadedInteractionSupporting-Protocol.h>
#import <UIKit/_UIInterfaceActionPresenting-Protocol.h>

@class NSArray, NSLayoutConstraint, NSMutableArray, NSPointerArray, NSString, UIFont, UIInterfaceActionGroup, UIInterfaceActionRepresentationView, UIInterfaceActionSelectionTrackingController, UIInterfaceActionSeparatorAttributes, UIInterfaceActionVisualStyle, UILongPressGestureRecognizer, _UIContentConstraintsLayoutGuide, _UIInterfaceActionRepresentationsSequenceView;
@protocol UIInterfaceActionHandlerInvocationDelegate, UIInterfaceActionVisualStyleProviding, UISeparatorDisplaying;

@interface UIInterfaceActionGroupView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegatePrivate, _UIInterfaceActionPresenting, UIInterfaceActionGroupDisplayPropertyObserver, UIInterfaceActionGroupDisplaying, UISpringLoadedInteractionSupporting>
{
    BOOL _needsUpdateTopLevelViewsArrangement;
    BOOL _needsUpdateActionSequenceViewArrangement;
    BOOL _needsInitialViewLoading;
    BOOL _isSettingVisualStyle;
    UIInterfaceActionVisualStyle *_activeTestingVisualStyle;
    NSString *_cachedSizeCategory;
    BOOL _springLoaded;
    BOOL _showsSeparatorAboveActions;
    BOOL _drawsBackground;
    id<UIInterfaceActionVisualStyleProviding> _visualStyleProvider;
    UIInterfaceActionSelectionTrackingController *_actionSelectionController;
    UIInterfaceActionGroup *_actionGroup;
    id<UIInterfaceActionHandlerInvocationDelegate> _actionHandlerInvocationDelegate;
    long long _presentationStyle;
    NSArray *_allowedActionLayoutAxisByPriority;
    long long _actionLayoutAxis;
    UIInterfaceActionVisualStyle *_visualStyle;
    UIInterfaceActionVisualStyle *_appliedVisualStyle;
    _UIContentConstraintsLayoutGuide *_contentGuide;
    UIView *_backgroundView;
    UIView *_topLevelItemsView;
    NSArray *_topLevelViewArrangementConstraints;
    NSMutableArray *_arrangedScrollableHeaderViews;
    UIView<UISeparatorDisplaying> *_actionSequenceTopSeparatorView;
    _UIInterfaceActionRepresentationsSequenceView *_actionSequenceView;
    NSLayoutConstraint *_actionSequenceViewWidthAnchoredToConstantConstraint;
    NSLayoutConstraint *_actionSequenceViewWidthAnchoredToContentGuideConstraint;
    NSPointerArray *_weakSimultaneouslyPresentedGroupViews;
    UILongPressGestureRecognizer *_actionSelectionGestureRecognizer;
    double _requiredActionRepresentationWidth;
    UIInterfaceActionRepresentationView *_preferredActionRepresentation;
    UIInterfaceActionSeparatorAttributes *_visualStyleOverrideSeparatorAttributes;
    UIFont *_visualStyleOverrideTitleLabelFont;
    double _selectionHighlightContinuousCornerRadius;
}

@property (readonly, nonatomic) UIInterfaceActionGroup *actionGroup; // @synthesize actionGroup=_actionGroup;
@property (weak, nonatomic) id<UIInterfaceActionHandlerInvocationDelegate> actionHandlerInvocationDelegate; // @synthesize actionHandlerInvocationDelegate=_actionHandlerInvocationDelegate;
@property (readonly, nonatomic) long long actionLayoutAxis; // @synthesize actionLayoutAxis=_actionLayoutAxis;
@property (readonly, nonatomic) UIInterfaceActionSelectionTrackingController *actionSelectionController; // @synthesize actionSelectionController=_actionSelectionController;
@property (strong, nonatomic) UILongPressGestureRecognizer *actionSelectionGestureRecognizer; // @synthesize actionSelectionGestureRecognizer=_actionSelectionGestureRecognizer;
@property (readonly, nonatomic) UIView<UISeparatorDisplaying> *actionSequenceTopSeparatorView; // @synthesize actionSequenceTopSeparatorView=_actionSequenceTopSeparatorView;
@property (readonly, nonatomic) _UIInterfaceActionRepresentationsSequenceView *actionSequenceView; // @synthesize actionSequenceView=_actionSequenceView;
@property (readonly, nonatomic) NSLayoutConstraint *actionSequenceViewWidthAnchoredToConstantConstraint; // @synthesize actionSequenceViewWidthAnchoredToConstantConstraint=_actionSequenceViewWidthAnchoredToConstantConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *actionSequenceViewWidthAnchoredToContentGuideConstraint; // @synthesize actionSequenceViewWidthAnchoredToContentGuideConstraint=_actionSequenceViewWidthAnchoredToContentGuideConstraint;
@property (strong, nonatomic) NSArray *allowedActionLayoutAxisByPriority; // @synthesize allowedActionLayoutAxisByPriority=_allowedActionLayoutAxisByPriority;
@property (strong, nonatomic) UIInterfaceActionVisualStyle *appliedVisualStyle; // @synthesize appliedVisualStyle=_appliedVisualStyle;
@property (readonly, nonatomic) NSArray *arrangedHeaderViews;
@property (readonly, nonatomic) NSMutableArray *arrangedScrollableHeaderViews; // @synthesize arrangedScrollableHeaderViews=_arrangedScrollableHeaderViews;
@property (readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (readonly, nonatomic) _UIContentConstraintsLayoutGuide *contentGuide; // @synthesize contentGuide=_contentGuide;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=_drawsBackground, setter=_setDrawsBackground:) BOOL drawsBackground; // @synthesize drawsBackground=_drawsBackground;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIInterfaceActionRepresentationView *preferredActionRepresentation; // @synthesize preferredActionRepresentation=_preferredActionRepresentation;
@property (nonatomic) long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property (nonatomic) double requiredActionRepresentationWidth; // @synthesize requiredActionRepresentationWidth=_requiredActionRepresentationWidth;
@property (nonatomic, getter=_selectionHighlightContinuousCornerRadius, setter=_setSelectionHighlightContinuousCornerRadius:) double selectionHighlightContinuousCornerRadius; // @synthesize selectionHighlightContinuousCornerRadius=_selectionHighlightContinuousCornerRadius;
@property (nonatomic) BOOL showsSeparatorAboveActions; // @synthesize showsSeparatorAboveActions=_showsSeparatorAboveActions;
@property (nonatomic, getter=isSpringLoaded) BOOL springLoaded; // @synthesize springLoaded=_springLoaded;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *topLevelItemsView; // @synthesize topLevelItemsView=_topLevelItemsView;
@property (readonly, nonatomic) NSArray *topLevelViewArrangementConstraints; // @synthesize topLevelViewArrangementConstraints=_topLevelViewArrangementConstraints;
@property (strong, nonatomic) UIInterfaceActionVisualStyle *visualStyle; // @synthesize visualStyle=_visualStyle;
@property (strong, nonatomic, getter=_visualStyleOverrideSeparatorAttributes, setter=_setVisualStyleOverrideSeparatorAttributes:) UIInterfaceActionSeparatorAttributes *visualStyleOverrideSeparatorAttributes; // @synthesize visualStyleOverrideSeparatorAttributes=_visualStyleOverrideSeparatorAttributes;
@property (strong, nonatomic, getter=_visualStyleOverrideTitleLabelFont, setter=_setVisualStyleOverrideTitleLabelFont:) UIFont *visualStyleOverrideTitleLabelFont; // @synthesize visualStyleOverrideTitleLabelFont=_visualStyleOverrideTitleLabelFont;
@property (weak, nonatomic) id<UIInterfaceActionVisualStyleProviding> visualStyleProvider; // @synthesize visualStyleProvider=_visualStyleProvider;
@property (readonly, nonatomic) NSPointerArray *weakSimultaneouslyPresentedGroupViews; // @synthesize weakSimultaneouslyPresentedGroupViews=_weakSimultaneouslyPresentedGroupViews;

- (void).cxx_destruct;
- (long long)_actionLayoutAxisUnknowDisallowed;
- (BOOL)_actionLayoutAxisUnknownDisallowedIsVertical;
- (id)_actionRepresentationViewForAction:(id)arg1;
- (void)_actionSequenceViewContentSizeDidChange;
- (struct CGRect)_actionSequenceVisibleRectForMakingCenteredAction:(id)arg1;
- (void)_addBackgroudViewToViewHierarchy:(id)arg1;
- (void)_addConstraintToActiveTopLevelViewArrangementConstraints:(id)arg1;
- (id)_alertController;
- (id)_allActionViews;
- (void)_applyVisualStyle;
- (void)_applyVisualStyleCornerRadius;
- (void)_applyVisualStyleToActionsViewScrollView;
- (void)_applyVisualStyleToBackgroundViewDisplay;
- (void)_arrangeActionViewsInActionSequenceView;
- (void)_arrangeTopLevelViews;
- (void)_associateWeakSimultaneouslyPresentedGroupViews:(id)arg1 bidirectional:(BOOL)arg2;
- (struct UIEdgeInsets)_buttonEdgeInsetsFromGroupViewEdge;
- (void)_commonInitWithActionGroup:(id)arg1 visualStyleProvider:(id)arg2 actionHandlerInvocationDelegate:(id)arg3;
- (id)_constraintsToPinView:(id)arg1 layoutGuide:(id)arg2 identifier:(id)arg3;
- (struct CGRect)_contentEdgeFrame;
- (id)_currentlyFocusedActionView;
- (id)_defaultOrderingForActionRepresentationViews:(id)arg1;
- (void)_determineActualLayoutAxis;
- (BOOL)_hasLoadedStackViewContents;
- (id)_initWithActionGroup:(id)arg1 visualStyleProvider:(id)arg2 actionHandlerInvocationDelegate:(id)arg3;
- (void)_installContentGuideConstraints;
- (id)_interfaceActionGroupViewState;
- (id)_interfaceActionOfFocusedRepresentationView;
- (BOOL)_isCornerRadiusDisplayEnabled;
- (void)_loadActionSequenceView;
- (void)_loadTopLevelItemsView;
- (void)_loadViewsIfNeeded;
- (id)_loadVisualStyleForTraitCollection:(id)arg1;
- (id)_newActionGroupBackgroundView;
- (id)_newSeparatorViewForSeparatingTitleAndButtons;
- (id)_orderedTopLevelViews;
- (void)_reloadStackViewContentsIfNeeded;
- (void)_reloadTopSeparatorView;
- (void)_removeConstraintToActiveTopLevelViewArrangementConstraints:(id)arg1;
- (void)_removeUsAsThePresentingViewControllerForAllActions;
- (void)_scrollActionRepresentationViewToVisibleForAction:(id)arg1 animated:(BOOL)arg2;
- (void)_scrollPreferredActionRepresentationViewToVisibleAnimated:(BOOL)arg1;
- (void)_setAndApplyVisualStyle:(id)arg1;
- (void)_setLayoutDebuggingIdentifier:(id)arg1;
- (void)_setNeedsUpdateActionSequenceViewArrangement;
- (void)_setNeedsUpdateTopLevelViewsArrangement;
- (void)_setUsAsThePresentingViewControllerForAllActions;
- (BOOL)_shouldAllowPassthroughToLayersBehindUsForTouches:(id)arg1;
- (BOOL)_shouldInstallContentGuideConstraints;
- (BOOL)_shouldShowSeparatorAboveActionsSequenceView;
- (void)_updateActionSequenceScrollability;
- (void)_updateActionSequenceViewActionLayoutAxis;
- (void)_updateActionSequenceViewDebugLayoutIdentifier;
- (void)_updateRequiredActionRepresentationSizeConstraints;
- (void)_updateRoundedCornerPositionForSubviews;
- (id)_viewContainingTopLevelItems;
- (id)_viewDisplayingRoundedBackground;
- (id)_visualStyleByApplyingOurTraitsToVisualStyle:(id)arg1 traitCollection:(id)arg2;
- (id)_widthAnchoredToContentGuideConstraintForTopLevelView:(id)arg1;
- (void)beginTrackingSessionByTakingOverForSystemProvidedGestureRecognizer:(id)arg1;
- (void)configureForDismissAlongsideTransitionCoordinator:(id)arg1;
- (void)configureForPresentAlongsideTransitionCoordinator:(id)arg1;
- (void)dealloc;
- (id)defaultVisualStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2;
- (id)initWithActionGroup:(id)arg1 actionHandlerInvocationDelegate:(id)arg2;
- (void)insertArrangedHeaderView:(id)arg1 atIndex:(unsigned long long)arg2 scrollable:(BOOL)arg3;
- (void)interfaceAction:(id)arg1 invokeActionHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)interfaceActionGroup:(id)arg1 reloadDisplayedContentActionGroupProperties:(id)arg2;
- (void)interfaceActionGroup:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2;
- (void)layoutSubviews;
- (id)preferredFocusedView;
- (void)reloadVisualStyle;
- (void)removeArrangedHeaderView:(id)arg1;
- (void)scrollToCenterForInterfaceAction:(id)arg1;
- (void)setActionGroup:(id)arg1;
- (void)setActionLayoutAxis:(long long)arg1;
- (void)setActiveTestingVisualStyle:(id)arg1;
- (void)setSimultaneouslyPresentedGroupViews:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end

