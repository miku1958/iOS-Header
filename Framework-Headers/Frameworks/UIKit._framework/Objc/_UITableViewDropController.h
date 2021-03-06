//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIDropInteractionDelegate_Private-Protocol.h>
#import <UIKitCore/_UITableViewDropCoordinatorDelegate-Protocol.h>

@class NSIndexPath, NSMapTable, NSString, UIDropInteraction, UITableView, UITableViewDropProposal;
@protocol UIDropSession, _UITableViewDropControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UITableViewDropController : NSObject <UIDropInteractionDelegate_Private, _UITableViewDropCoordinatorDelegate>
{
    BOOL _canOnlyHandleReordering;
    UIDropInteraction *_dropInteraction;
    UITableView<_UITableViewDropControllerDelegate> *_tableView;
    unsigned long long _defaultDropOperation;
    NSIndexPath *_targetIndexPath;
    UITableViewDropProposal *_dropProposal;
    id<UIDropSession> _dropSession;
    long long _ignoringDragsCount;
    NSMapTable *_dragItemDropAnimations;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (nonatomic) BOOL canOnlyHandleReordering; // @synthesize canOnlyHandleReordering=_canOnlyHandleReordering;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long defaultDropOperation; // @synthesize defaultDropOperation=_defaultDropOperation;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSMapTable *dragItemDropAnimations; // @synthesize dragItemDropAnimations=_dragItemDropAnimations;
@property (strong, nonatomic) UIDropInteraction *dropInteraction; // @synthesize dropInteraction=_dropInteraction;
@property (strong, nonatomic) UITableViewDropProposal *dropProposal; // @synthesize dropProposal=_dropProposal;
@property (strong, nonatomic) id<UIDropSession> dropSession; // @synthesize dropSession=_dropSession;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long ignoringDragsCount; // @synthesize ignoringDragsCount=_ignoringDragsCount;
@property (readonly, nonatomic) BOOL shouldIgnoreDrags;
@property (readonly) Class superclass;
@property (weak, nonatomic) UITableView<_UITableViewDropControllerDelegate> *tableView; // @synthesize tableView=_tableView;
@property (strong, nonatomic) NSIndexPath *targetIndexPath; // @synthesize targetIndexPath=_targetIndexPath;
@property (readonly, nonatomic, getter=isTrackingDrag) BOOL trackingDrag;

- (void).cxx_destruct;
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (id)animateDragItem:(id)arg1 intoRowAtIndexPath:(id)arg2 rect:(struct CGRect)arg3;
- (id)animateDragItem:(id)arg1 toCell:(id)arg2 withPreviewParameters:(id)arg3;
- (id)animateDragItem:(id)arg1 toRowAtIndexPath:(id)arg2;
- (id)animateDragItem:(id)arg1 toTarget:(id)arg2;
- (void)beginIgnoringDrags;
- (BOOL)commitPlaceholderInsertionWithContext:(id)arg1 dataSourceUpdates:(CDUnknownBlockType)arg2;
- (id)defaultAnimatorForDragItem:(id)arg1;
- (BOOL)deletePlaceholder:(id)arg1;
- (void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)endIgnoringDrags;
- (id)initWithTableView:(id)arg1;
- (void)insertPlaceholderAtIndexPath:(id)arg1 withContext:(id)arg2 previewParametersProvider:(CDUnknownBlockType)arg3;
- (void)resetAllDragState;
- (void)resetTrackingState;
- (void)setupDragInteraction;
- (void)uninstallFromTableView;
- (void)updateTargetIndexPathAndDropProposalForSession:(id)arg1;

@end

