//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXPeopleSuggestionManager;
@protocol PXFaceCollection;

@protocol PXPeopleSuggestionManagerDelegate <NSObject>
- (void)confirmationCountUpdatedForSuggestionManager:(PXPeopleSuggestionManager *)arg1;
- (void)noMoreSuggestionsAvailableForSuggestionManager:(PXPeopleSuggestionManager *)arg1;
- (void)suggestionManager:(PXPeopleSuggestionManager *)arg1 hasNewSuggestionAvailable:(id<PXFaceCollection>)arg2;
@end
