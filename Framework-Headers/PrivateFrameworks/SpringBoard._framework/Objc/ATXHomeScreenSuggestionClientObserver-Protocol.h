//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class ATXHomeScreenSuggestionClient;

@protocol ATXHomeScreenSuggestionClientObserver <NSObject>
- (void)suggestionClientDidRefreshSuggestions:(ATXHomeScreenSuggestionClient *)arg1;

@optional
- (void)suggestionClientDidRefreshSuggestionsForSuggestionsWidget:(ATXHomeScreenSuggestionClient *)arg1;
@end
