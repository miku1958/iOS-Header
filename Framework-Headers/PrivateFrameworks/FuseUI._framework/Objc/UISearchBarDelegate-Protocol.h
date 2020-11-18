//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/UIBarPositioningDelegate-Protocol.h>

@class NSString, UISearchBar;

@protocol UISearchBarDelegate <UIBarPositioningDelegate>

@optional
- (void)searchBar:(UISearchBar *)arg1 selectedScopeButtonIndexDidChange:(long long)arg2;
- (BOOL)searchBar:(UISearchBar *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)searchBar:(UISearchBar *)arg1 textDidChange:(NSString *)arg2;
- (void)searchBarBookmarkButtonClicked:(UISearchBar *)arg1;
- (void)searchBarCancelButtonClicked:(UISearchBar *)arg1;
- (void)searchBarResultsListButtonClicked:(UISearchBar *)arg1;
- (void)searchBarSearchButtonClicked:(UISearchBar *)arg1;
- (BOOL)searchBarShouldBeginEditing:(UISearchBar *)arg1;
- (BOOL)searchBarShouldEndEditing:(UISearchBar *)arg1;
- (void)searchBarTextDidBeginEditing:(UISearchBar *)arg1;
- (void)searchBarTextDidEndEditing:(UISearchBar *)arg1;
@end

