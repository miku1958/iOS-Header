//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageUI/NSObject-Protocol.h>

@class NSArray, UIDragInteraction, UIDragItem, UITargetedDragPreview;
@protocol UIDragAnimating, UIDragSession;

@protocol UIDragInteractionDelegate <NSObject>
- (NSArray *)dragInteraction:(UIDragInteraction *)arg1 itemsForBeginningSession:(id<UIDragSession>)arg2;

@optional
- (void)dragInteraction:(UIDragInteraction *)arg1 item:(UIDragItem *)arg2 willAnimateCancelWithAnimator:(id<UIDragAnimating>)arg3;
- (NSArray *)dragInteraction:(UIDragInteraction *)arg1 itemsForAddingToSession:(id<UIDragSession>)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (BOOL)dragInteraction:(UIDragInteraction *)arg1 prefersFullSizePreviewsForSession:(id<UIDragSession>)arg2;
- (UITargetedDragPreview *)dragInteraction:(UIDragInteraction *)arg1 previewForCancellingItem:(UIDragItem *)arg2 withDefault:(UITargetedDragPreview *)arg3;
- (UITargetedDragPreview *)dragInteraction:(UIDragInteraction *)arg1 previewForLiftingItem:(UIDragItem *)arg2 session:(id<UIDragSession>)arg3;
- (void)dragInteraction:(UIDragInteraction *)arg1 session:(id<UIDragSession>)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(UIDragInteraction *)arg1 session:(id<UIDragSession>)arg2 willAddItems:(NSArray *)arg3 forInteraction:(UIDragInteraction *)arg4;
- (void)dragInteraction:(UIDragInteraction *)arg1 session:(id<UIDragSession>)arg2 willEndWithOperation:(unsigned long long)arg3;
- (BOOL)dragInteraction:(UIDragInteraction *)arg1 sessionAllowsMoveOperation:(id<UIDragSession>)arg2;
- (void)dragInteraction:(UIDragInteraction *)arg1 sessionDidMove:(id<UIDragSession>)arg2;
- (void)dragInteraction:(UIDragInteraction *)arg1 sessionDidTransferItems:(id<UIDragSession>)arg2;
- (id<UIDragSession>)dragInteraction:(UIDragInteraction *)arg1 sessionForAddingItems:(NSArray *)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (BOOL)dragInteraction:(UIDragInteraction *)arg1 sessionIsRestrictedToDraggingApplication:(id<UIDragSession>)arg2;
- (void)dragInteraction:(UIDragInteraction *)arg1 sessionWillBegin:(id<UIDragSession>)arg2;
- (void)dragInteraction:(UIDragInteraction *)arg1 willAnimateLiftWithAnimator:(id<UIDragAnimating>)arg2 session:(id<UIDragSession>)arg3;
@end

