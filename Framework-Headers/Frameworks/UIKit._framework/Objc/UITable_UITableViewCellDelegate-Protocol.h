//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITable-Protocol.h>

@class NSArray, NSIndexPath, NSString, UITableViewCell, UITouch, UIView, _UITableViewCellActionButton;
@protocol UIInteraction;

@protocol UITable_UITableViewCellDelegate <UITable>

@property (readonly, nonatomic, getter=_isEditingForSwipeDeletion) BOOL editingForSwipeDeletion;
@property (readonly, nonatomic, getter=_isInModalViewController) BOOL inModalViewController;
@property (readonly, nonatomic, getter=_popoverControllerStyle) long long popoverControllerStyle;
@property (readonly, nonatomic, getter=_rawSeparatorInset) struct UIEdgeInsets rawSeparatorInset;
@property (readonly, nonatomic, getter=_rowSpacing) double rowSpacing;
@property (readonly, nonatomic, getter=_swipeActionButtons) NSArray *swipeActionButtons;
@property (strong, nonatomic, getter=_swipeToDeleteCell, setter=_setSwipeToDeleteCell:) UITableViewCell *swipeToDeleteCell;
@property (readonly, nonatomic, getter=_usesModernSwipeActions) BOOL usesModernSwipeActions;
@property (readonly, nonatomic, getter=_wasEditing) BOOL wasEditing;

- (void)_accessoryButtonAction:(UIView *)arg1;
- (void)_actionButton:(_UITableViewCellActionButton *)arg1 pushedInCell:(UITableViewCell *)arg2;
- (void)_animateDeletionOfRowAtIndexPath:(NSIndexPath *)arg1;
- (void)_animateDeletionOfRowWithCell:(UITableViewCell *)arg1;
- (void)_animateSwipeCancelation;
- (BOOL)_beginReorderingForCell:(UITableViewCell *)arg1 touch:(UITouch *)arg2;
- (struct CGRect)_calloutTargetRectForCell:(UITableViewCell *)arg1;
- (BOOL)_canFocusCell:(UITableViewCell *)arg1;
- (BOOL)_canPerformAction:(SEL)arg1 forCell:(UITableViewCell *)arg2 sender:(id)arg3;
- (void)_cellDidBecomeFocused:(UITableViewCell *)arg1;
- (void)_cellDidBecomeUnfocused:(UITableViewCell *)arg1;
- (void)_cellDidHideSelectedBackground:(UITableViewCell *)arg1;
- (void)_cellDidShowSelectedBackground:(UITableViewCell *)arg1;
- (void)_configureDeleteConfirmationDecelerationRate:(double)arg1;
- (double)_deleteConfirmationHorizontalOffset;
- (double)_deleteConfirmationHorizontalVelocity;
- (void)_didInsertRowForTableCell:(UITableViewCell *)arg1;
- (void)_draggingReorderingCell:(UITableViewCell *)arg1 yDelta:(double)arg2 touch:(UITouch *)arg3;
- (void)_endReorderingForCell:(UITableViewCell *)arg1 wasCancelled:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_endSwipeToDeleteGesture:(BOOL)arg1;
- (void)_endSwipeToDeleteRowDidDelete:(BOOL)arg1;
- (void)_finishedRemovingRemovalButtonForTableCell:(UITableViewCell *)arg1;
- (void)_highlightCell:(UITableViewCell *)arg1 animated:(BOOL)arg2 scrollPosition:(long long)arg3 highlight:(BOOL)arg4;
- (void)_highlightDidEndForCell:(UITableViewCell *)arg1 withInteraction:(id<UIInteraction>)arg2;
- (void)_installSwipeToDeleteGobbler;
- (BOOL)_isCellReorderable:(UITableViewCell *)arg1;
- (BOOL)_isReorderControlActiveForCell:(UITableViewCell *)arg1;
- (void)_performAction:(SEL)arg1 forCell:(UITableViewCell *)arg2 sender:(id)arg3;
- (void)_prepareHighlightForCell:(UITableViewCell *)arg1 withInteraction:(id<UIInteraction>)arg2;
- (void)_removeWasCanceledForCell:(UITableViewCell *)arg1;
- (UIView *)_reorderingCell;
- (void)_revealDeleteConfirmationButtonWithWidth:(double)arg1;
- (void)_setSwipeToDeleteCell:(UITableViewCell *)arg1 installGobbler:(BOOL)arg2;
- (BOOL)_shouldDrawThickSeparators;
- (BOOL)_shouldShowMenuForCell:(UITableViewCell *)arg1;
- (void)_swipeAccessoryButtonPushedInCell:(UITableViewCell *)arg1;
- (void)_swipeToDeleteCell:(UITableViewCell *)arg1;
- (NSString *)_titleForDeleteConfirmationButton:(UITableViewCell *)arg1;
- (void)_updateCell:(UITableViewCell *)arg1 withValue:(NSString *)arg2;
- (void)_userSelectCell:(UITableViewCell *)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
@end

