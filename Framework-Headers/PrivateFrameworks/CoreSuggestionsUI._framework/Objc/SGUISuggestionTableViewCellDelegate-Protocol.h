//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsUI/NSObject-Protocol.h>

@class UITableViewCell;
@protocol SGRealtimeSuggestion;

@protocol SGUISuggestionTableViewCellDelegate <NSObject>
- (void)suggestionCell:(UITableViewCell *)arg1 didTapConfirmForSuggestion:(id<SGRealtimeSuggestion>)arg2;
- (void)suggestionCell:(UITableViewCell *)arg1 didTapIgnoreForSuggestion:(id<SGRealtimeSuggestion>)arg2;
@end
