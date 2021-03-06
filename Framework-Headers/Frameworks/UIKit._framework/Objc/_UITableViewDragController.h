//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIDragInteractionDelegate_Internal-Protocol.h>

@class NSIndexPath, NSMapTable, NSMutableOrderedSet, NSString, UIDragInteraction, UITableView, UITableViewCell;
@protocol UIDragSession, _UITableViewDragControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UITableViewDragController : NSObject <UIDragInteractionDelegate_Internal>
{
    BOOL _forceEnabledForReordering;
    long long _clientEnabledState;
    id<UIDragSession> _dragSession;
    NSMutableOrderedSet *_indexPaths;
    UIDragInteraction *_dragInteraction;
    UITableView<_UITableViewDragControllerDelegate> *_tableView;
    UITableViewCell *_initiatingCell;
    NSIndexPath *_initiatingIndexPath;
    UITableViewCell *_tentativeInitiatingCell;
    NSIndexPath *_tentativeInitiatingIndexPath;
    NSMutableOrderedSet *_tentativeIndexPaths;
    NSMapTable *_cellsAnimatingCancel;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (strong, nonatomic) NSMapTable *cellsAnimatingCancel; // @synthesize cellsAnimatingCancel=_cellsAnimatingCancel;
@property (nonatomic) long long clientEnabledState; // @synthesize clientEnabledState=_clientEnabledState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIDragInteraction *dragInteraction; // @synthesize dragInteraction=_dragInteraction;
@property (strong, nonatomic) id<UIDragSession> dragSession; // @synthesize dragSession=_dragSession;
@property (readonly, nonatomic) UITableViewCell *draggedCell;
@property (readonly, nonatomic) NSIndexPath *draggedIndexPath;
@property (nonatomic) BOOL forceEnabledForReordering; // @synthesize forceEnabledForReordering=_forceEnabledForReordering;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableOrderedSet *indexPaths; // @synthesize indexPaths=_indexPaths;
@property (strong, nonatomic) UITableViewCell *initiatingCell; // @synthesize initiatingCell=_initiatingCell;
@property (strong, nonatomic) NSIndexPath *initiatingIndexPath; // @synthesize initiatingIndexPath=_initiatingIndexPath;
@property (readonly) Class superclass;
@property (weak, nonatomic) UITableView<_UITableViewDragControllerDelegate> *tableView; // @synthesize tableView=_tableView;
@property (strong, nonatomic) NSMutableOrderedSet *tentativeIndexPaths; // @synthesize tentativeIndexPaths=_tentativeIndexPaths;
@property (strong, nonatomic) UITableViewCell *tentativeInitiatingCell; // @synthesize tentativeInitiatingCell=_tentativeInitiatingCell;
@property (strong, nonatomic) NSIndexPath *tentativeInitiatingIndexPath; // @synthesize tentativeInitiatingIndexPath=_tentativeInitiatingIndexPath;

+ (BOOL)isEnabledByDefault;
- (void).cxx_destruct;
- (long long)_dragInteraction:(id)arg1 dataOwnerForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (BOOL)_dragInteraction:(id)arg1 sessionSupportsSystemDrag:(id)arg2;
- (BOOL)_dragInteractionDynamicallyUpdatesPrefersFullSizePreviews:(id)arg1;
- (void)addTentativeRowAtIndexPath:(id)arg1;
- (void)beginDragForTentativeRows;
- (void)beginDragOfRowsForSession:(id)arg1 notifyDelegate:(BOOL)arg2;
- (BOOL)canProvideItemsForDragAtPoint:(struct CGPoint)arg1;
- (void)clearTentativeRows;
- (void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (BOOL)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willAddItems:(id)arg3 forInteraction:(id)arg4;
- (BOOL)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2;
- (id)dragInteraction:(id)arg1 sessionForAddingItems:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (BOOL)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (void)forceReset;
- (void)immediatelyBeginDragWithTouch:(id)arg1;
- (id)initWithTableView:(id)arg1;
- (void)resetDragState;
- (void)setupDragInteraction;
- (void)uninstallFromTableView;
- (void)updateDragInteractionEnabledState;

@end

