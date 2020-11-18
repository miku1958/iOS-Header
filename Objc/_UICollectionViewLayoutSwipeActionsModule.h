//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UISwipeActionHost_Internal-Protocol.h>

@class NSString, UICollectionViewLayout, UISwipeActionController;

__attribute__((visibility("hidden")))
@interface _UICollectionViewLayoutSwipeActionsModule : NSObject <UISwipeActionHost_Internal>
{
    BOOL _layoutUpdatePending;
    UICollectionViewLayout *_host;
    UISwipeActionController *_swipeActionController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) UICollectionViewLayout *host; // @synthesize host=_host;
@property (nonatomic) BOOL layoutUpdatePending; // @synthesize layoutUpdatePending=_layoutUpdatePending;
@property (readonly) Class superclass;
@property (strong, nonatomic) UISwipeActionController *swipeActionController; // @synthesize swipeActionController=_swipeActionController;

- (void).cxx_destruct;
- (BOOL)_canSwipeItemAtIndexPath:(id)arg1;
- (id)_cellWithCustomGroupingAtIndexPath:(id)arg1;
- (void)_invalidateSwipeActionsLayout;
- (void)_updateSwipeActionsConfiguration:(id)arg1 forIndexPath:(id)arg2;
- (void)editingStateDidChange;
- (id)gestureRecognizerViewForSwipeActionController:(id)arg1;
- (BOOL)hasActiveSwipe;
- (id)initWithHost:(id)arg1;
- (id)itemContainerViewForSwipeActionController:(id)arg1;
- (long long)layoutDirectionForSwipeActionController:(id)arg1;
- (void)processLayoutInvalidationWithContext:(id)arg1;
- (id)propertyAnimatorForCollectionViewUpdates:(id)arg1 withCustomAnimator:(id)arg2;
- (void)revealTrailingSwipeActionsForIndexPath:(id)arg1;
- (void)swipeActionController:(id)arg1 cleanupActionsView:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)swipeActionController:(id)arg1 didBeginSwipeForItemAtIndexPath:(id)arg2;
- (void)swipeActionController:(id)arg1 didEndSwipeForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)swipeActionController:(id)arg1 extraInsetsForItemAtIndexPath:(id)arg2;
- (id)swipeActionController:(id)arg1 indexPathForTouchLocation:(struct CGPoint)arg2;
- (void)swipeActionController:(id)arg1 insertActionsView:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)swipeActionController:(id)arg1 leadingSwipeConfigurationForItemAtIndexPath:(id)arg2;
- (BOOL)swipeActionController:(id)arg1 mayBeginSwipeForItemAtIndexPath:(id)arg2;
- (void)swipeActionController:(id)arg1 swipeOccurrence:(id)arg2 didChangeStateFrom:(long long)arg3 to:(long long)arg4;
- (id)swipeActionController:(id)arg1 trailingSwipeConfigurationForItemAtIndexPath:(id)arg2;
- (id)swipeActionController:(id)arg1 viewForItemAtIndexPath:(id)arg2;
- (void)swipeActionController:(id)arg1 willBeginSwipeForItemAtIndexPath:(id)arg2;
- (void)swipeItemAtIndexPath:(id)arg1 direction:(unsigned long long)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (id)swipeViewManipulatorForSwipeActionController:(id)arg1;
- (void)transformCellLayoutAttributes:(id)arg1 isDisappearing:(BOOL)arg2;
- (void)transformDecorationLayoutAttributes:(id)arg1 isDisappearing:(BOOL)arg2;
- (void)updateWithUpdateItems:(id)arg1;

@end

