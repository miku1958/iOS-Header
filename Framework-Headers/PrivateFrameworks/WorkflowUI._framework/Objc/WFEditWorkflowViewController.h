//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFRunWorkflowViewController.h>

#import <WorkflowUI/UIGestureRecognizerDelegate-Protocol.h>
#import <WorkflowUI/WFContentClassesToolbarDelegate-Protocol.h>
#import <WorkflowUI/WFContentClassesViewControllerDelegate-Protocol.h>
#import <WorkflowUI/WFDragControllerDelegate-Protocol.h>
#import <WorkflowUI/WFModuleDelegate-Protocol.h>
#import <WorkflowUI/WFModulesCollectionViewDelegate-Protocol.h>
#import <WorkflowUI/WFWorkflowEditingDelegate-Protocol.h>
#import <WorkflowUI/WFWorkflowEmptyStateViewDelegate-Protocol.h>
#import <WorkflowUI/WFWorkflowSettingsViewControllerDelegate-Protocol.h>

@class NSAttributedString, NSHashTable, NSIndexPath, NSLayoutConstraint, NSString, NSUndoManager, UIButton, UIResponder, UIView, WFActionDragFeedbackGenerator, WFEditShortcutEvent, WFWorkflowEmptyStateView;
@protocol WFEditWorkflowViewControllerDelegate, WFVariableUIDelegate;

@interface WFEditWorkflowViewController : WFRunWorkflowViewController <WFDragControllerDelegate, WFModulesCollectionViewDelegate, WFWorkflowSettingsViewControllerDelegate, WFWorkflowEmptyStateViewDelegate, WFContentClassesToolbarDelegate, WFContentClassesViewControllerDelegate, WFModuleDelegate, UIGestureRecognizerDelegate, WFWorkflowEditingDelegate>
{
    NSUndoManager *_undoManager;
    id<WFVariableUIDelegate> _variableUIDelegate;
    double _bottomContentInset;
    NSAttributedString *_emptyStateInstructionText;
    NSHashTable *_currentDragControllers;
    NSHashTable *_moduleDragControllers;
    WFWorkflowEmptyStateView *_emptyStateView;
    UIView *_borderView;
    UIButton *_settingsButton;
    WFActionDragFeedbackGenerator *_dragFeedbackGenerator;
    UIResponder *_wf_firstResponder;
    UIView *_firstResponderHintView;
    NSLayoutConstraint *_hintBottomConstraint;
    long long _revealState;
    CDUnknownBlockType _endRevealGoBackHandler;
    CDUnknownBlockType _endRevealScrolledAwayHandler;
    UIButton *_endRevealButton;
    NSIndexPath *_actionRevealFromIndexPath;
    NSIndexPath *_actionRevealToIndexPath;
    WFEditShortcutEvent *_editShortcutEvent;
    struct CGPoint _actionRevealInitialOffset;
}

@property (strong, nonatomic) NSIndexPath *actionRevealFromIndexPath; // @synthesize actionRevealFromIndexPath=_actionRevealFromIndexPath;
@property (nonatomic) struct CGPoint actionRevealInitialOffset; // @synthesize actionRevealInitialOffset=_actionRevealInitialOffset;
@property (strong, nonatomic) NSIndexPath *actionRevealToIndexPath; // @synthesize actionRevealToIndexPath=_actionRevealToIndexPath;
@property (readonly, weak, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property (nonatomic) double bottomContentInset; // @synthesize bottomContentInset=_bottomContentInset;
@property (readonly, nonatomic) NSHashTable *currentDragControllers; // @synthesize currentDragControllers=_currentDragControllers;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WFEditWorkflowViewControllerDelegate> delegate; // @dynamic delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) WFActionDragFeedbackGenerator *dragFeedbackGenerator; // @synthesize dragFeedbackGenerator=_dragFeedbackGenerator;
@property (strong, nonatomic) WFEditShortcutEvent *editShortcutEvent; // @synthesize editShortcutEvent=_editShortcutEvent;
@property (copy, nonatomic) NSAttributedString *emptyStateInstructionText; // @synthesize emptyStateInstructionText=_emptyStateInstructionText;
@property (readonly, weak, nonatomic) WFWorkflowEmptyStateView *emptyStateView; // @synthesize emptyStateView=_emptyStateView;
@property (strong, nonatomic) UIButton *endRevealButton; // @synthesize endRevealButton=_endRevealButton;
@property (copy, nonatomic) CDUnknownBlockType endRevealGoBackHandler; // @synthesize endRevealGoBackHandler=_endRevealGoBackHandler;
@property (copy, nonatomic) CDUnknownBlockType endRevealScrolledAwayHandler; // @synthesize endRevealScrolledAwayHandler=_endRevealScrolledAwayHandler;
@property (weak, nonatomic) UIView *firstResponderHintView; // @synthesize firstResponderHintView=_firstResponderHintView;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSLayoutConstraint *hintBottomConstraint; // @synthesize hintBottomConstraint=_hintBottomConstraint;
@property (readonly, nonatomic) NSHashTable *moduleDragControllers; // @synthesize moduleDragControllers=_moduleDragControllers;
@property (nonatomic) long long revealState; // @synthesize revealState=_revealState;
@property (nonatomic) BOOL scrollsToTop;
@property (readonly, weak, nonatomic) UIButton *settingsButton; // @synthesize settingsButton=_settingsButton;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property (weak, nonatomic) id<WFVariableUIDelegate> variableUIDelegate; // @synthesize variableUIDelegate=_variableUIDelegate;
@property (weak, nonatomic) UIResponder *wf_firstResponder; // @synthesize wf_firstResponder=_wf_firstResponder;

+ (BOOL)displaysEmptyView;
- (void).cxx_destruct;
- (void)_appendActions:(id)arg1;
- (void)appendAction:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canMoveActionsAtIndexes:(id)arg1 toIndexes:(id)arg2;
- (void)cancelRevealAction;
- (void)checkRevealActionScrollState;
- (void)cleanupAfterReveal;
- (BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldHideItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)commitInsertionOfActions:(id)arg1 atIndexes:(id)arg2 allowUndo:(BOOL)arg3;
- (void)commitMovingOfActionsAtIndexes:(id)arg1 toIndexes:(id)arg2 allowUndo:(BOOL)arg3;
- (void)commitRemovalOfActions:(id)arg1 allowUndo:(BOOL)arg2;
- (void)contentClassesToolbarTapped:(id)arg1;
- (void)contentClassesViewController:(id)arg1 didChangeSelectedClasses:(id)arg2;
- (id)createModelForAction:(id)arg1;
- (void)dealloc;
- (void)didFinishAnimatingReveal;
- (void)didFinishAnimatingRevealGoBack;
- (void)didSelectEndRevealButton;
- (void)dragController:(id)arg1 didEnterViewController:(id)arg2;
- (void)dragController:(id)arg1 didExitViewController:(id)arg2;
- (void)dragController:(id)arg1 movedInsideViewControllers:(id)arg2;
- (BOOL)dragController:(id)arg1 shouldAcceptViewWithCompletion:(CDUnknownBlockType)arg2;
- (void)dragController:(id)arg1 willBeAcceptedByDelegate:(id)arg2;
- (void)dragControllerWillBeginDragging:(id)arg1;
- (void)emptyViewDidRequestActionDrawer:(id)arg1;
- (void)emptyViewDidRequestTutorial:(id)arg1;
- (id)errorWithRecoveryOptionsFromError:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (unsigned long long)indentationLevelForModule:(id)arg1 withAction:(id)arg2;
- (id)initWithWorkflow:(id)arg1 database:(id)arg2 context:(id)arg3;
- (id)initWithWorkflow:(id)arg1 database:(id)arg2 context:(id)arg3 allowsActionDragAndDrop:(BOOL)arg4;
- (id)initWithWorkflow:(id)arg1 database:(id)arg2 context:(id)arg3 cellConfigurationFunction:(CDUnknownFunctionPointerType)arg4;
- (id)initialIndexPathForDragController:(id)arg1;
- (id)keyCommands;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)loadView;
- (void)logEditEventIfNeccesary;
- (BOOL)module:(id)arg1 setParameterState:(id)arg2 forParameter:(id)arg3 action:(id)arg4;
- (BOOL)module:(id)arg1 shouldAllowRemovingAction:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)presentSettingsViewController;
- (void)removeActionPressedForModule:(id)arg1 withAction:(id)arg2;
- (void)resetUIForRevealActionEnd;
- (void)resetVisibleCellStylesForEndReveal;
- (void)responderDidBeginEditing:(id)arg1;
- (void)responderDidEndEditing:(id)arg1;
- (void)responderDidType:(id)arg1;
- (void)revealAction:(id)arg1 fromSourceView:(id)arg2 preScrollHandler:(CDUnknownBlockType)arg3 goBackHandler:(CDUnknownBlockType)arg4 scrolledAwayHandler:(CDUnknownBlockType)arg5;
- (void)runToolbarAddTapped:(id)arg1;
- (void)runToolbarRedoTapped:(id)arg1;
- (void)runToolbarShareTapped:(id)arg1;
- (void)runToolbarUndoTapped:(id)arg1;
- (void)runWorkflowFromSource:(id)arg1;
- (void)scrollFirstResponderToVisible;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewToVisible:(id)arg1;
- (void)setEditingState:(unsigned long long)arg1 animated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)settingsViewControllerDidFinish:(id)arg1;
- (void)settingsViewControllerWantsWorkflowReload:(id)arg1;
- (void)shareWorkflow:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateBorderWidth;
- (void)updateContentInsetAnimated:(BOOL)arg1;
- (void)updateEditEvent;
- (void)updateEditingStateAnimated:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateEmptyStateViewVisibilityAnimated:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)workflow:(id)arg1 actionForSuggestionsDrawerDidUpdateOutputContentClasses:(id)arg2;
- (void)workflow:(id)arg1 insertActions:(id)arg2 atIndexes:(id)arg3;
- (void)workflow:(id)arg1 moveActionsAtIndexes:(id)arg2 toIndexes:(id)arg3;
- (void)workflow:(id)arg1 reloadActions:(id)arg2;
- (void)workflow:(id)arg1 removeAction:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
