//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@class NSString, SBHSearchBar;

@protocol SBHSearchBarDelegate <NSObject>

@optional
- (BOOL)searchBar:(SBHSearchBar *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)searchBar:(SBHSearchBar *)arg1 textDidChange:(NSString *)arg2;
- (void)searchBarCancelButtonClicked:(SBHSearchBar *)arg1;
- (BOOL)searchBarShouldBeginEditing:(SBHSearchBar *)arg1;
- (BOOL)searchBarShouldEndEditing:(SBHSearchBar *)arg1;
- (BOOL)searchBarShouldReturn:(SBHSearchBar *)arg1;
- (void)searchBarTextDidBeginEditing:(SBHSearchBar *)arg1;
- (void)searchBarTextDidEndEditing:(SBHSearchBar *)arg1;
@end
