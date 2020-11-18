//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/UITableViewDelegate-Protocol.h>

@class MusicTableView, UIButton, UITableViewCell, UIView;
@protocol MusicEntityContentDescriptorViewConfiguring;

@protocol MusicTableViewDelegate <UITableViewDelegate>

@optional
- (void)tableView:(MusicTableView *)arg1 didDeselectHeaderViewForSection:(long long)arg2;
- (void)tableView:(MusicTableView *)arg1 didSelectAddButtonForCell:(UITableViewCell *)arg2 events:(unsigned long long)arg3;
- (void)tableView:(MusicTableView *)arg1 didSelectContextualActionsButton:(UIButton *)arg2 forCell:(UITableViewCell *)arg3;
- (void)tableView:(MusicTableView *)arg1 didSelectContextualActionsButton:(UIButton *)arg2 forSectionHeaderView:(UIView<MusicEntityContentDescriptorViewConfiguring> *)arg3;
- (void)tableView:(MusicTableView *)arg1 didSelectHeaderViewForSection:(long long)arg2;
- (void)tableView:(MusicTableView *)arg1 didSelectPlayButtonAction:(unsigned long long)arg2 forCell:(UITableViewCell *)arg3;
- (void)tableView:(MusicTableView *)arg1 didSelectPlayButtonAction:(unsigned long long)arg2 forSectionHeaderView:(UIView<MusicEntityContentDescriptorViewConfiguring> *)arg3;
- (BOOL)tableView:(MusicTableView *)arg1 shouldForceBottomSeparatorVisibleForSection:(long long)arg2;
- (void)tableView:(MusicTableView *)arg1 willDeselectHeaderViewForSection:(long long)arg2;
- (void)tableView:(MusicTableView *)arg1 willSelectHeaderViewForSection:(long long)arg2;
- (void)tableViewDidLayoutSubviews:(MusicTableView *)arg1;
- (void)tableViewInherritedLayoutInsetsDidChange:(MusicTableView *)arg1;
- (void)tableViewTintColorDidChange:(MusicTableView *)arg1;
@end
