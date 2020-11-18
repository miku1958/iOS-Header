//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSIndexPath, UIDragPreviewParameters, UITableViewCell, UITableViewDropProposal, _UITableViewDropAnimationContainerView, _UITableViewDropCoordinatorImpl, _UITableViewDropPlaceholderContextImpl;
@protocol UIDragSession, UIDropSession;

@protocol _UITableViewDropControllerDelegate <NSObject>
- (id<UIDragSession>)_activeSourceDragSession;
- (void)_beginAnimatingDropIntoCell:(UITableViewCell *)arg1;
- (_UITableViewDropAnimationContainerView *)_beginAnimatingDropOfCell:(UITableViewCell *)arg1 isCanceling:(BOOL)arg2;
- (BOOL)_canHandleDropSession:(id<UIDropSession>)arg1;
- (BOOL)_commitPlaceholderInsertionWithContext:(_UITableViewDropPlaceholderContextImpl *)arg1 dataSourceUpdates:(void (^)(NSIndexPath *))arg2;
- (long long)_dataOwnerForDropSession:(id<UIDropSession>)arg1 atIndexPath:(NSIndexPath *)arg2;
- (NSIndexPath *)_deletePlaceholderForContext:(_UITableViewDropPlaceholderContextImpl *)arg1;
- (void)_dropEnded:(id<UIDropSession>)arg1;
- (void)_dropEntered:(id<UIDropSession>)arg1;
- (void)_dropExited:(id<UIDropSession>)arg1;
- (UIDragPreviewParameters *)_dropPreviewParametersForIndexPath:(NSIndexPath *)arg1;
- (void)_endAnimatingDropIntoCell:(UITableViewCell *)arg1;
- (void)_endAnimatingDropOfCell:(UITableViewCell *)arg1;
- (NSIndexPath *)_insertPlaceholderAtIndexPath:(NSIndexPath *)arg1 withContext:(_UITableViewDropPlaceholderContextImpl *)arg2;
- (void)_performDrop:(id<UIDropSession>)arg1 withDropCoordinator:(_UITableViewDropCoordinatorImpl *)arg2 forceHandleAsReorder:(BOOL)arg3;
- (void)_removeDropTargetAndResetAppearance;
- (BOOL)_shouldAllowInternalDrop;
- (NSIndexPath *)_targetIndexPathForDrop:(id<UIDropSession>)arg1;
- (void)_updateDropTargetAppearanceWithTargetIndexPath:(NSIndexPath *)arg1 dropProposal:(UITableViewDropProposal *)arg2 dropSession:(id<UIDropSession>)arg3;
- (UITableViewDropProposal *)_updatedDropProposalForIndexPath:(NSIndexPath *)arg1 dropSession:(id<UIDropSession>)arg2 withDefaultProposal:(UITableViewDropProposal *)arg3;
@end

