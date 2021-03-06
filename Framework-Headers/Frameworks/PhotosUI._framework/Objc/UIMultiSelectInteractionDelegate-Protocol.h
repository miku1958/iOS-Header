//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSIndexPath, UIGestureRecognizer, UIMultiSelectInteraction;

@protocol UIMultiSelectInteractionDelegate <NSObject>
- (void)automaticallyTransitionToMultiSelectModeKeepingCurrentSelection:(BOOL)arg1;
- (void)didEndMultiSelectInteraction:(UIMultiSelectInteraction *)arg1 atPoint:(struct CGPoint)arg2;
- (BOOL)interaction:(UIMultiSelectInteraction *)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint)arg2 withVelocity:(struct CGPoint)arg3;
- (BOOL)isInMultiSelectMode;
- (void)multiSelectInteraction:(UIMultiSelectInteraction *)arg1 appendSelectionAtPoint:(struct CGPoint)arg2;
- (void)multiSelectInteraction:(UIMultiSelectInteraction *)arg1 toggleSelectionStateUpToPoint:(struct CGPoint)arg2;
- (BOOL)shouldAllowSelectionExtensionAtPoint:(struct CGPoint)arg1;
- (BOOL)shouldBeginMultiSelectInteraction:(UIMultiSelectInteraction *)arg1 ofType:(long long)arg2 atPoint:(struct CGPoint)arg3 withVelocity:(struct CGPoint)arg4;
- (BOOL)supportsMultiSelectInteraction:(UIMultiSelectInteraction *)arg1;
- (void)willBeginMultiSelectInteraction:(UIMultiSelectInteraction *)arg1 atPoint:(struct CGPoint)arg2;

@optional
- (void)automaticallyTransitionToMultiSelectMode;
- (void)didCancelMultiSelectInteraction:(UIMultiSelectInteraction *)arg1 atPoint:(struct CGPoint)arg2;
- (BOOL)interaction:(UIMultiSelectInteraction *)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint)arg2;
- (BOOL)multiSelectInteractionGestureShouldPreventDragLiftGesture:(UIGestureRecognizer *)arg1;
- (BOOL)shouldAllowSelectionExtensionAtIndexPath:(NSIndexPath *)arg1;
- (BOOL)shouldBeginMultiSelectInteraction:(UIMultiSelectInteraction *)arg1 atPoint:(struct CGPoint)arg2 withVelocity:(struct CGPoint)arg3;
@end

