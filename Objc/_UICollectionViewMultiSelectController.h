//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIMultiSelectInteractionDelegate-Protocol.h>

@class NSString, UICollectionView, UIMultiSelectInteraction, UIMultiSelectInteractionState;

__attribute__((visibility("hidden")))
@interface _UICollectionViewMultiSelectController : NSObject <UIMultiSelectInteractionDelegate>
{
    unsigned long long _computedAxisConstraint;
    UICollectionView *_collectionView;
    UIMultiSelectInteraction *_multiSelectInteraction;
    UIMultiSelectInteractionState *_selectionState;
}

@property (weak, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIMultiSelectInteraction *multiSelectInteraction; // @synthesize multiSelectInteraction=_multiSelectInteraction;
@property (strong, nonatomic) UIMultiSelectInteractionState *selectionState; // @synthesize selectionState=_selectionState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_antecedentIndexPathsForLayoutAttributes:(id)arg1 inDirection:(double)arg2;
- (id)_collectionViewDelegate;
- (void)_deselectIndexPaths:(id)arg1;
- (void)_extendSelectionToPoint:(struct CGPoint)arg1;
- (BOOL)_isPointInsideEditControl:(struct CGPoint)arg1;
- (BOOL)_isUsingTableViewLayout;
- (BOOL)_point:(struct CGPoint)arg1 liesBeyondFrame:(struct CGRect)arg2 inDirection:(double)arg3;
- (void)_selectIndexPaths:(id)arg1;
- (BOOL)_shouldBeginInteractionAtPoint:(struct CGPoint)arg1;
- (void)automaticallyTransitionToMultiSelectModeKeepingCurrentSelection:(BOOL)arg1;
- (unsigned long long)axisConstraint;
- (void)dealloc;
- (void)didCancelMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)didEndMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint)arg2;
- (id)indexPathsBetweenIndexPath:(id)arg1 andIndexPath:(id)arg2;
- (id)initWithCollectionView:(id)arg1;
- (BOOL)interaction:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint)arg2 withVelocity:(struct CGPoint)arg3;
- (BOOL)isInMultiSelectMode;
- (void)multiSelectInteraction:(id)arg1 appendSelectionAtPoint:(struct CGPoint)arg2;
- (void)multiSelectInteraction:(id)arg1 toggleSelectionStateUpToPoint:(struct CGPoint)arg2;
- (BOOL)multiSelectInteractionGestureShouldPreventDragLiftGesture:(id)arg1;
- (void)selectedIndexPathsChanged:(id)arg1;
- (id)selectionEndIndexPath;
- (id)selectionStartIndexPath;
- (BOOL)shouldAllowSelectionExtensionAtPoint:(struct CGPoint)arg1;
- (BOOL)shouldBeginMultiSelectInteraction:(id)arg1 ofType:(long long)arg2 atPoint:(struct CGPoint)arg3 withVelocity:(struct CGPoint)arg4;
- (BOOL)supportsMultiSelectInteraction:(id)arg1;
- (void)uninstallFromCollectionView;
- (void)updateSelectedIndexPaths:(id)arg1;
- (void)willBeginMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint)arg2;

@end

