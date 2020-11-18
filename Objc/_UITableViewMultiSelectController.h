//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIMultiSelectInteractionDelegate-Protocol.h>

@class NSString, UIMultiSelectInteraction, UIMultiSelectInteractionState, UITableView;

__attribute__((visibility("hidden")))
@interface _UITableViewMultiSelectController : NSObject <UIMultiSelectInteractionDelegate>
{
    UITableView *_tableView;
    UIMultiSelectInteraction *_multiSelectInteraction;
    UIMultiSelectInteractionState *_currentSelectionState;
}

@property (strong, nonatomic) UIMultiSelectInteractionState *currentSelectionState; // @synthesize currentSelectionState=_currentSelectionState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIMultiSelectInteraction *multiSelectInteraction; // @synthesize multiSelectInteraction=_multiSelectInteraction;
@property (readonly) Class superclass;
@property (weak, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;

- (void).cxx_destruct;
- (void)_adjustSelectionRangeToIndexPath:(id)arg1 isDeselecting:(BOOL)arg2;
- (void)_deselectIndexPaths:(id)arg1;
- (void)_endAutoScroll;
- (void)_handleAutoScrollFromPoint:(struct CGPoint)arg1;
- (BOOL)_isPointInsideEditControl:(struct CGPoint)arg1;
- (void)_selectIndexPaths:(id)arg1;
- (BOOL)_shouldBeginInteractionAtPoint:(struct CGPoint)arg1;
- (id)_tableViewDelegate;
- (void)_updateSelectedIndexPaths:(id)arg1;
- (void)_updateSelectedIndexPathsForCurrentSelection;
- (void)automaticallyTransitionToMultiSelectModeKeepingCurrentSelection:(BOOL)arg1;
- (void)didCancelMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)didEndMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint)arg2;
- (id)initWithTableView:(id)arg1;
- (BOOL)interaction:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint)arg2 withVelocity:(struct CGPoint)arg3;
- (BOOL)isInMultiSelectMode;
- (void)multiSelectInteraction:(id)arg1 appendSelectionAtPoint:(struct CGPoint)arg2;
- (void)multiSelectInteraction:(id)arg1 toggleSelectionStateUpToPoint:(struct CGPoint)arg2;
- (BOOL)multiSelectInteractionGestureShouldPreventDragLiftGesture:(id)arg1;
- (void)selectedIndexPathsChanged:(id)arg1;
- (BOOL)shouldAllowSelectionExtensionAtPoint:(struct CGPoint)arg1;
- (BOOL)shouldBeginMultiSelectInteraction:(id)arg1 ofType:(long long)arg2 atPoint:(struct CGPoint)arg3 withVelocity:(struct CGPoint)arg4;
- (BOOL)supportsMultiSelectInteraction:(id)arg1;
- (void)toggleSelectionStateUpToIndexPath:(id)arg1;
- (void)uninstallFromTableView;
- (void)willBeginExtendingSelectionAtIndexPath:(id)arg1;
- (void)willBeginMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint)arg2;

@end

