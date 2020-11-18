//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableViewDelegate-Protocol.h>
#import <UIKitCore/UITableViewFocusDelegateLegacy-Protocol.h>

@class NSArray, NSIndexPath, NSString, UIColor, UITableView, UITableViewCell, UIView, _UITableViewCellActionButton;
@protocol UISpringLoadedInteractionContext;

@protocol UITableViewDelegatePrivate <UITableViewDelegate, UITableViewFocusDelegateLegacy>

@optional
- (BOOL)_tableView:(UITableView *)arg1 shouldSpringLoadRowAtIndexPath:(NSIndexPath *)arg2 withContext:(id<UISpringLoadedInteractionContext>)arg3;
- (UITableViewCell *)_tableView:(UITableView *)arg1 templateLayoutCellForCellsWithReuseIdentifier:(NSString *)arg2;
- (void)_tableView:(UITableView *)arg1 willLayoutCell:(UITableViewCell *)arg2 usingTemplateLayoutCell:(UITableViewCell *)arg3 forRowAtIndexPath:(NSIndexPath *)arg4;
- (double)heightForFooterInTableView:(UITableView *)arg1;
- (double)heightForHeaderInTableView:(UITableView *)arg1;
- (double)marginForTableView:(UITableView *)arg1;
- (UIColor *)tableView:(UITableView *)arg1 backgroundColorForDeleteConfirmationButtonForRowAtIndexPath:(NSIndexPath *)arg2;
- (UIColor *)tableView:(UITableView *)arg1 backgroundColorForSwipeAccessoryButtonForRowAtIndexPath:(NSIndexPath *)arg2;
- (struct CGRect)tableView:(UITableView *)arg1 calloutTargetRectForCell:(UITableViewCell *)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
- (_UITableViewCellActionButton *)tableView:(UITableView *)arg1 deleteConfirmationButtonForRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 didCancelReorderingRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 didEndReorderingRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 didEndSwipingRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 didUpdateTextFieldForRowAtIndexPath:(NSIndexPath *)arg2 withValue:(NSString *)arg3;
- (struct CGRect)tableView:(UITableView *)arg1 frameForSectionIndexGivenProposedFrame:(struct CGRect)arg2;
- (NSArray *)tableView:(UITableView *)arg1 leadingSwipeActionsForRowAtIndexPath:(NSIndexPath *)arg2;
- (double)tableView:(UITableView *)arg1 maxTitleWidthForFooterInSection:(long long)arg2;
- (double)tableView:(UITableView *)arg1 maxTitleWidthForHeaderInSection:(long long)arg2;
- (struct CGPoint)tableView:(UITableView *)arg1 newContentOffsetAfterUpdate:(struct CGPoint)arg2 context:(id)arg3;
- (BOOL)tableView:(UITableView *)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (BOOL)tableView:(UITableView *)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (BOOL)tableView:(UITableView *)arg1 shouldHaveFullLengthBottomSeparatorForSection:(long long)arg2;
- (BOOL)tableView:(UITableView *)arg1 shouldHaveFullLengthTopSeparatorForSection:(long long)arg2;
- (_UITableViewCellActionButton *)tableView:(UITableView *)arg1 swipeAccessoryButtonForRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 swipeAccessoryButtonPushedForRowAtIndexPath:(NSIndexPath *)arg2;
- (long long)tableView:(UITableView *)arg1 titleAlignmentForFooterInSection:(long long)arg2;
- (long long)tableView:(UITableView *)arg1 titleAlignmentForHeaderInSection:(long long)arg2;
- (NSString *)tableView:(UITableView *)arg1 titleForSwipeAccessoryButtonForRowAtIndexPath:(NSIndexPath *)arg2;
- (NSArray *)tableView:(UITableView *)arg1 trailingSwipeActionsForRowAtIndexPath:(NSIndexPath *)arg2;
- (BOOL)tableView:(UITableView *)arg1 wantsHeaderForSection:(long long)arg2;
- (void)tableView:(UITableView *)arg1 willBeginReorderingRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 willBeginSwipingRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableViewDidFinishReload:(UITableView *)arg1;
- (double)tableViewSpacingForExtraSeparators:(UITableView *)arg1;
- (UIView *)viewForFooterInTableView:(UITableView *)arg1;
- (UIView *)viewForHeaderInTableView:(UITableView *)arg1;
@end

