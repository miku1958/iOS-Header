//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray, PXPeopleSuggestionManager;

@protocol PXPeopleSuggestionManagerDelegate <NSObject>
- (void)noMoreSuggestionsAvailableForSuggestionManager:(PXPeopleSuggestionManager *)arg1;
- (void)suggestionManager:(PXPeopleSuggestionManager *)arg1 hasNewSuggestionsAvailable:(NSArray *)arg2;

@optional
- (void)confirmationCountUpdatedForSuggestionManager:(PXPeopleSuggestionManager *)arg1 undoing:(BOOL)arg2;
- (void)willLoadMoreSuggestionsForSuggestionManager:(PXPeopleSuggestionManager *)arg1;
@end

