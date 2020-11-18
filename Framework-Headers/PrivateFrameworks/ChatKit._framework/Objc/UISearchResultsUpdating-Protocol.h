//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class UISearchController;
@protocol UISearchSuggestion;

@protocol UISearchResultsUpdating <NSObject>
- (void)updateSearchResultsForSearchController:(UISearchController *)arg1;

@optional
- (void)updateSearchResultsForSearchController:(UISearchController *)arg1 selectingSearchSuggestion:(id<UISearchSuggestion>)arg2;
@end
