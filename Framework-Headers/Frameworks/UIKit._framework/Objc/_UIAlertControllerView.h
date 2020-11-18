//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UIGestureRecognizerDelegatePrivate-Protocol.h>
#import <UIKit/UIInterfaceActionHandlerInvocationDelegate-Protocol.h>
#import <UIKit/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, UIAlertAction, UIAlertController, UIAlertControllerVisualStyle, UILabel, _UIAlertControllerActionViewMetrics, _UIAlertControllerInterfaceActionGroupView, _UIKeyboardLayoutAlignmentView;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerView : UIView <UIInterfaceActionHandlerInvocationDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegatePrivate>
{
    UIAlertController *_alertController;
    UIAlertControllerVisualStyle *_visualStyle;
    UIView *_contentView;
    UIView *_contentViewTopItemsView;
    _UIAlertControllerInterfaceActionGroupView *_mainInterfaceActionsGroupView;
    _UIAlertControllerInterfaceActionGroupView *_discreteCancelActionGroupView;
    UILabel *_titleLabel;
    BOOL _hasAppliedTitleConstraints;
    UILabel *_messageLabel;
    BOOL _hasAppliedMessageConstraints;
    UILabel *_detailMessageLabel;
    BOOL _hasAppliedDetailConstraints;
    UIView *_contentViewControllerContainerView;
    UIView *_textFieldViewControllerContainerView;
    _UIKeyboardLayoutAlignmentView *_keyboardLayoutAlignmentView;
    UIView *_keyboardLayoutAlignmentAvailableSpaceView;
    UIView *_dimmingView;
    NSMutableArray *_actionViews;
    struct CGPoint _actionSelectionInitialLocation;
    BOOL _inPopover;
    BOOL _hasDimmingView;
    BOOL _showsCancelAction;
    BOOL _cancelActionIsDiscrete;
    BOOL _shouldHaveBackdropView;
    BOOL _alignsToKeyboard;
    NSArray *_dimmingViewConstraints;
    NSArray *_dimmingViewForegroundViewTopConstraints;
    NSArray *_dimmingViewForegroundViewBottomConstraints;
    NSArray *_dimmingViewConstraintsForAlertStyle;
    NSArray *_dimmingViewConstraintsForActionSheetStyle;
    NSArray *_noDimmingViewConstraints;
    BOOL _hasCachedLargestActionDimension;
    struct CGSize _largestActionDimension;
    UIAlertAction *_effectivePreferredAction;
    long long _coalescingActionsChangedCount;
    BOOL _needsActionsChangedHandling;
    BOOL _actionsReversed;
    BOOL _presentationContextPrefersCancelActionShown;
    _UIAlertControllerActionViewMetrics *_actionViewMetrics;
    NSLayoutConstraint *_foregroundViewWidthConstraint;
    NSLayoutConstraint *_contentViewTopConstraint;
    NSLayoutConstraint *_contentViewBottomConstraint;
    NSLayoutConstraint *_contentViewMaxHeightConstraint;
    NSLayoutConstraint *_titleLabelTopAlignmentConstraint;
    NSLayoutConstraint *_messageLabelTopAlignmentConstraint;
    NSLayoutConstraint *_detailMessageLabelTopAlignmentConstraint;
    NSLayoutConstraint *_contentViewControllerViewLeftConstraint;
    NSLayoutConstraint *_contentViewControllerViewRightConstraint;
    NSLayoutConstraint *_contentViewControllerViewTopConstraint;
    NSLayoutConstraint *_contentViewControllerViewBottomConstraint;
    NSLayoutConstraint *_textFieldViewControllerViewLeftConstraint;
    NSLayoutConstraint *_textFieldViewControllerViewRightConstraint;
    NSLayoutConstraint *_textFieldViewControllerViewTopConstraint;
    NSLayoutConstraint *_textFieldViewControllerViewBottomConstraint;
    NSLayoutConstraint *_contentScrollViewBottomConstraint;
    NSLayoutConstraint *_contentScrollViewMaximumWidthConstraint;
    NSLayoutConstraint *_contentViewControllerContainerViewTopAlignmentConstraint;
    NSLayoutConstraint *_contentViewControllerContainerViewWidthConstraint;
    NSLayoutConstraint *_contentViewControllerContainerViewHeightConstraint;
    NSLayoutConstraint *_textFieldViewControllerContainerViewTopAlignmentConstraint;
    NSLayoutConstraint *_textFieldViewControllerContainerViewWidthConstraint;
    NSLayoutConstraint *_textFieldViewControllerContainerViewHeightConstraint;
    NSLayoutConstraint *_centerXConstraint;
    NSLayoutConstraint *_centerYConstraint;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_mainActionButtonSequenceViewWidthConstraint;
    NSLayoutConstraint *_mainActionButtonSequenceViewHeightConstraint;
    NSLayoutConstraint *_mainActionButtonSequenceViewHorizontalAlignmentConstraint;
    NSLayoutConstraint *_discreteActionGroupViewHorizontalLayoutTrailingConstraint;
    NSLayoutConstraint *_actionGroupEqualsContentViewWidthConstraint;
    NSLayoutConstraint *_discreteCancelActionViewTopConstraint;
    NSLayoutConstraint *_discreteCancelActionViewLeadingConstraint;
    NSLayoutConstraint *_discreteCancelActionViewWidthConstraint;
    NSLayoutConstraint *_discreteCancelActionViewHeightConstraint;
    struct CGSize _layoutSize;
}

@property (readonly) UIView *_contentView; // @synthesize _contentView;
@property (readonly) UIView *_dimmingView; // @synthesize _dimmingView;
@property (strong, nonatomic, setter=_setVisualStyle:) UIAlertControllerVisualStyle *_visualStyle;
@property (strong) NSLayoutConstraint *actionGroupEqualsContentViewWidthConstraint; // @synthesize actionGroupEqualsContentViewWidthConstraint=_actionGroupEqualsContentViewWidthConstraint;
@property (strong, nonatomic) _UIAlertControllerActionViewMetrics *actionViewMetrics; // @synthesize actionViewMetrics=_actionViewMetrics;
@property (nonatomic, getter=_actionsReversed, setter=_setActionsReversed:) BOOL actionsReversed; // @synthesize actionsReversed=_actionsReversed;
@property (weak) UIAlertController *alertController;
@property BOOL alignsToKeyboard;
@property BOOL cancelActionIsDiscrete;
@property (strong) NSLayoutConstraint *centerXConstraint; // @synthesize centerXConstraint=_centerXConstraint;
@property (strong) NSLayoutConstraint *centerYConstraint; // @synthesize centerYConstraint=_centerYConstraint;
@property (strong) NSLayoutConstraint *contentScrollViewBottomConstraint; // @synthesize contentScrollViewBottomConstraint=_contentScrollViewBottomConstraint;
@property (strong) NSLayoutConstraint *contentScrollViewMaximumWidthConstraint; // @synthesize contentScrollViewMaximumWidthConstraint=_contentScrollViewMaximumWidthConstraint;
@property (strong) NSLayoutConstraint *contentViewBottomConstraint; // @synthesize contentViewBottomConstraint=_contentViewBottomConstraint;
@property (strong) NSLayoutConstraint *contentViewControllerContainerViewHeightConstraint; // @synthesize contentViewControllerContainerViewHeightConstraint=_contentViewControllerContainerViewHeightConstraint;
@property (strong) NSLayoutConstraint *contentViewControllerContainerViewTopAlignmentConstraint; // @synthesize contentViewControllerContainerViewTopAlignmentConstraint=_contentViewControllerContainerViewTopAlignmentConstraint;
@property (strong) NSLayoutConstraint *contentViewControllerContainerViewWidthConstraint; // @synthesize contentViewControllerContainerViewWidthConstraint=_contentViewControllerContainerViewWidthConstraint;
@property (strong) NSLayoutConstraint *contentViewControllerViewBottomConstraint; // @synthesize contentViewControllerViewBottomConstraint=_contentViewControllerViewBottomConstraint;
@property (strong) NSLayoutConstraint *contentViewControllerViewLeftConstraint; // @synthesize contentViewControllerViewLeftConstraint=_contentViewControllerViewLeftConstraint;
@property (strong) NSLayoutConstraint *contentViewControllerViewRightConstraint; // @synthesize contentViewControllerViewRightConstraint=_contentViewControllerViewRightConstraint;
@property (strong) NSLayoutConstraint *contentViewControllerViewTopConstraint; // @synthesize contentViewControllerViewTopConstraint=_contentViewControllerViewTopConstraint;
@property (strong) NSLayoutConstraint *contentViewMaxHeightConstraint; // @synthesize contentViewMaxHeightConstraint=_contentViewMaxHeightConstraint;
@property (strong) NSLayoutConstraint *contentViewTopConstraint; // @synthesize contentViewTopConstraint=_contentViewTopConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong) NSLayoutConstraint *detailMessageLabelTopAlignmentConstraint; // @synthesize detailMessageLabelTopAlignmentConstraint=_detailMessageLabelTopAlignmentConstraint;
@property (strong) NSLayoutConstraint *discreteActionGroupViewHorizontalLayoutTrailingConstraint; // @synthesize discreteActionGroupViewHorizontalLayoutTrailingConstraint=_discreteActionGroupViewHorizontalLayoutTrailingConstraint;
@property (strong) NSLayoutConstraint *discreteCancelActionViewHeightConstraint; // @synthesize discreteCancelActionViewHeightConstraint=_discreteCancelActionViewHeightConstraint;
@property (strong) NSLayoutConstraint *discreteCancelActionViewLeadingConstraint; // @synthesize discreteCancelActionViewLeadingConstraint=_discreteCancelActionViewLeadingConstraint;
@property (strong) NSLayoutConstraint *discreteCancelActionViewTopConstraint; // @synthesize discreteCancelActionViewTopConstraint=_discreteCancelActionViewTopConstraint;
@property (strong) NSLayoutConstraint *discreteCancelActionViewWidthConstraint; // @synthesize discreteCancelActionViewWidthConstraint=_discreteCancelActionViewWidthConstraint;
@property (nonatomic) double effectAlpha;
@property (strong) NSLayoutConstraint *foregroundViewWidthConstraint; // @synthesize foregroundViewWidthConstraint=_foregroundViewWidthConstraint;
@property BOOL hasDimmingView;
@property (readonly) unsigned long long hash;
@property (strong) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property BOOL inPopover;
@property (nonatomic, getter=_layoutSize, setter=_setLayoutSize:) struct CGSize layoutSize; // @synthesize layoutSize=_layoutSize;
@property (strong) NSLayoutConstraint *mainActionButtonSequenceViewHeightConstraint; // @synthesize mainActionButtonSequenceViewHeightConstraint=_mainActionButtonSequenceViewHeightConstraint;
@property (strong) NSLayoutConstraint *mainActionButtonSequenceViewHorizontalAlignmentConstraint; // @synthesize mainActionButtonSequenceViewHorizontalAlignmentConstraint=_mainActionButtonSequenceViewHorizontalAlignmentConstraint;
@property (strong) NSLayoutConstraint *mainActionButtonSequenceViewWidthConstraint; // @synthesize mainActionButtonSequenceViewWidthConstraint=_mainActionButtonSequenceViewWidthConstraint;
@property (strong) NSLayoutConstraint *messageLabelTopAlignmentConstraint; // @synthesize messageLabelTopAlignmentConstraint=_messageLabelTopAlignmentConstraint;
@property (nonatomic) BOOL presentationContextPrefersCancelActionShown; // @synthesize presentationContextPrefersCancelActionShown=_presentationContextPrefersCancelActionShown;
@property BOOL shouldHaveBackdropView;
@property (readonly) Class superclass;
@property (strong) NSLayoutConstraint *textFieldViewControllerContainerViewHeightConstraint; // @synthesize textFieldViewControllerContainerViewHeightConstraint=_textFieldViewControllerContainerViewHeightConstraint;
@property (strong) NSLayoutConstraint *textFieldViewControllerContainerViewTopAlignmentConstraint; // @synthesize textFieldViewControllerContainerViewTopAlignmentConstraint=_textFieldViewControllerContainerViewTopAlignmentConstraint;
@property (strong) NSLayoutConstraint *textFieldViewControllerContainerViewWidthConstraint; // @synthesize textFieldViewControllerContainerViewWidthConstraint=_textFieldViewControllerContainerViewWidthConstraint;
@property (strong) NSLayoutConstraint *textFieldViewControllerViewBottomConstraint; // @synthesize textFieldViewControllerViewBottomConstraint=_textFieldViewControllerViewBottomConstraint;
@property (strong) NSLayoutConstraint *textFieldViewControllerViewLeftConstraint; // @synthesize textFieldViewControllerViewLeftConstraint=_textFieldViewControllerViewLeftConstraint;
@property (strong) NSLayoutConstraint *textFieldViewControllerViewRightConstraint; // @synthesize textFieldViewControllerViewRightConstraint=_textFieldViewControllerViewRightConstraint;
@property (strong) NSLayoutConstraint *textFieldViewControllerViewTopConstraint; // @synthesize textFieldViewControllerViewTopConstraint=_textFieldViewControllerViewTopConstraint;
@property (strong) NSLayoutConstraint *titleLabelTopAlignmentConstraint; // @synthesize titleLabelTopAlignmentConstraint=_titleLabelTopAlignmentConstraint;
@property (strong) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;

+ (BOOL)_retroactivelyRequiresConstraintBasedLayout;
+ (void)initialize;
- (void).cxx_destruct;
- (id)__cancelActionView;
- (void)_accessibilityColorsChanged;
- (void)_actionLayoutDirectionChanged;
- (BOOL)_actionLayoutIsVertical;
- (void)_actionsChanged;
- (void)_applyContentViewControllerContainerViewConstraints;
- (void)_applyDetailMessageConstraints;
- (void)_applyKeyboardAlignmentViewsConstraints;
- (void)_applyMessageConstraints;
- (void)_applyTextFieldViewControllerContainerViewConstraints;
- (void)_applyTitleConstraints;
- (void)_applyViewConstraints;
- (id)_attributedDetailMessage;
- (id)_attributedMessage;
- (id)_attributedTitle;
- (double)_availableWidthForHorizontalLayout:(BOOL)arg1;
- (BOOL)_buttonsAreTopMost;
- (BOOL)_canLayOutActionsHorizontally;
- (void)_configureActionGroupViewToAllowHorizontalLayout:(BOOL)arg1;
- (void)_contentSizeChanged;
- (struct CGSize)_contentViewControllerSize;
- (void)_didAddContentViewController;
- (id)_discreteCancelActionView;
- (id)_effectivePreferredAction;
- (void)_ensureActionViewRepresentationsHaveMetrics;
- (id)_focusedAction;
- (BOOL)_forceLayoutEngineSolutionInRationalEdges;
- (BOOL)_hasAttributedMessage;
- (BOOL)_hasAttributedTitle;
- (BOOL)_hasDetailMessage;
- (BOOL)_hasDiscreteCancelAction;
- (BOOL)_hasMessage;
- (BOOL)_hasTextFields;
- (BOOL)_hasTitle;
- (BOOL)_horizontalLayoutCanUseFullWidth;
- (double)_idealLayoutWidth;
- (id)_indexesOfActionSectionSeparators;
- (id)_interfaceActionForAlertAction:(id)arg1 inActionGroupView:(id)arg2;
- (struct CGSize)_itemSizeForHorizontalLayout:(BOOL)arg1;
- (struct CGSize)_itemSizeForHorizontalLayout:(BOOL)arg1 visualStyleRequiresActionRepresentationToFitItemSize:(BOOL *)arg2;
- (double)_labelHorizontalInsets;
- (double)_layoutWidthForHorizontalLayout:(BOOL)arg1;
- (struct CGSize)_mainActionButtonSequenceViewSizeForHorizontalLayout:(BOOL)arg1 itemSize:(struct CGSize)arg2;
- (double)_marginBetweenContentAndDiscreteCancelAction;
- (struct CGSize)_minimumSizeForAllActions;
- (id)_newStyledBackgroundView;
- (long long)_numberOfActionsForMainActionButtonSequenceView;
- (void)_performBatchActionChangesWithBlock:(CDUnknownBlockType)arg1;
- (id)_preferredActionView;
- (void)_prepareContentView;
- (void)_prepareContentViewControllerContainerView;
- (void)_prepareContentViewTopItemsView;
- (void)_prepareDetailMessageLabel;
- (void)_prepareDimmingView;
- (void)_prepareDimmingViewConstraints;
- (void)_prepareDimmingViewConstraintsIfNeeded;
- (void)_prepareDiscreteCancelActionGroupView;
- (void)_prepareKeyboardLayoutAlignmentViews;
- (void)_prepareMainInterfaceActionsGroupView;
- (void)_prepareMesssageLabel;
- (void)_prepareTextFieldViewControllerContainerView;
- (void)_prepareTitleLabel;
- (void)_prepareViewsAndAddConstraints;
- (id)_presentableAlertActions;
- (void)_propertiesChanged;
- (void)_recomputeActionMetrics;
- (void)_recomputeAlertControllerWidth;
- (void)_reevaluateSuperviewSizingConstraints;
- (void)_reloadInterfaceActionViewRepresentations;
- (void)_reloadInterfaceActionsGroupViewPreferredAction;
- (void)_removeContentViewController;
- (void)_scrollInitialActionToVisibleForPresentation;
- (void)_setAttributedDetailMessage:(id)arg1;
- (void)_setAttributedMessage:(id)arg1;
- (void)_setAttributedTitle:(id)arg1;
- (void)_setMessage:(id)arg1;
- (void)_setTitle:(id)arg1;
- (BOOL)_shouldAllowPassthroughToLayersBehindUsForTouches:(id)arg1;
- (BOOL)_shouldHaveCancelActionInMainActionButtonSequenceView;
- (struct CGSize)_sizeForLayoutWidthDetermination;
- (void)_sizeOfContentViewControllerChanged;
- (void)_sizeOfTextFieldViewControllerChanged;
- (double)_spaceRequiredForActionSectionsSpacing;
- (id)_textFieldViewController;
- (void)_textFieldsChanged;
- (id)_unlocalizedOrderedPresentableAlertActionViewRepresentations;
- (id)_unlocalizedOrderedPresentableAlertActions;
- (void)_updateActionViewVisualStyle:(id)arg1;
- (void)_updateActionsGroupPresentationStyles;
- (void)_updateCancelActionBeingDiscrete;
- (void)_updateConstraintConstants;
- (void)_updateContentView;
- (void)_updateDetailLabelContents;
- (void)_updateDetailLabelFontSize;
- (void)_updateInsets;
- (void)_updateLabelFontSizes;
- (void)_updateLabelMaximumLines;
- (void)_updateLabelTextColor;
- (void)_updateMainScrollableHeaderViewHasRealContent;
- (void)_updateMessageLabelContents;
- (void)_updateMessageLabelFontSize;
- (void)_updatePreferredAction;
- (void)_updateStyleForIdiomChange:(BOOL)arg1;
- (void)_updateTintColor;
- (void)_updateTitleLabelContents;
- (void)_updateTitleLabelFontSize;
- (double)_verticalLayoutWidth;
- (id)actions;
- (void)beginTrackingSessionByTakingOverForSystemProvidedGestureRecognizer:(id)arg1;
- (id)cancelAction;
- (void)configureForDismissAlongsideTransitionCoordinator:(id)arg1;
- (void)configureForPresentAlongsideTransitionCoordinator:(id)arg1;
- (id)contentViewController;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (BOOL)hasDiscreteHorizontalCancelAction;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)interfaceAction:(id)arg1 invokeActionHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)message;
- (id)preferredFocusedView;
- (void)setTintAdjustmentMode:(long long)arg1;
- (BOOL)shouldChangeFocusedItem:(id)arg1 heading:(unsigned long long)arg2;
- (BOOL)showsCancelAction;
- (id)textFields;
- (long long)tintAdjustmentMode;
- (id)title;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
