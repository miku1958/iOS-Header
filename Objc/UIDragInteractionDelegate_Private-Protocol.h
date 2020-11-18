//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIDragInteractionDelegate-Protocol.h>

@class NSArray, UIDragInteraction, UIDragItem, UIGestureRecognizer, UIView;
@protocol UIDragSession;

@protocol UIDragInteractionDelegate_Private <UIDragInteractionDelegate>

@optional
- (BOOL)_dragInteraction:(UIDragInteraction *)arg1 canExcludeCompetingGestureRecognizer:(UIGestureRecognizer *)arg2;
- (BOOL)_dragInteraction:(UIDragInteraction *)arg1 competingGestureRecognizerShouldDelayLift:(UIGestureRecognizer *)arg2;
- (long long)_dragInteraction:(UIDragInteraction *)arg1 dataOwnerForAddingToSession:(id<UIDragSession>)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (long long)_dragInteraction:(UIDragInteraction *)arg1 dataOwnerForSession:(id<UIDragSession>)arg2;
- (void)_dragInteraction:(UIDragInteraction *)arg1 liftAnimationDidChangeDirection:(long long)arg2;
- (void)_dragInteraction:(UIDragInteraction *)arg1 prepareForSession:(id<UIDragSession>)arg2 completion:(void (^)(void))arg3;
- (BOOL)_dragInteraction:(UIDragInteraction *)arg1 sessionSupportsSystemDrag:(id<UIDragSession>)arg2;
- (BOOL)_dragInteraction:(UIDragInteraction *)arg1 shouldDelayCompetingGestureRecognizer:(UIGestureRecognizer *)arg2;
- (UIView *)_dragInteraction:(UIDragInteraction *)arg1 viewToSnapshotItem:(UIDragItem *)arg2;
- (BOOL)_dragInteractionAllowsDragOverridingMasterSwitch:(UIDragInteraction *)arg1;
- (void)_dragInteractionDidCancelLiftWithoutDragging:(UIDragInteraction *)arg1;
- (NSArray *)_requiredContextIDsForDragSessionInView:(UIView *)arg1;
@end

