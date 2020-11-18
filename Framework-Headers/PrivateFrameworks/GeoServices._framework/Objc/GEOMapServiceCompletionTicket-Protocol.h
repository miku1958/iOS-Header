//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOMapItemIdentifier, GEOMapServiceTraits, GEORPSuggestionEntry, GEORPSuggestionList, NSDictionary, NSString;

@protocol GEOMapServiceCompletionTicket <NSObject>

@property (readonly, nonatomic) NSDictionary *responseUserInfo;
@property (readonly, nonatomic, getter=_searchQuery) NSString *searchQuery;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;

- (void)applyToSuggestionEntry:(GEORPSuggestionEntry *)arg1 withAutocompleteSearchResultIdentifier:(GEOMapItemIdentifier *)arg2;
- (void)applyToSuggestionList:(GEORPSuggestionList *)arg1;
- (void)cancel;
- (BOOL)hasShouldDisplayNoResults;
- (BOOL)isRapEnabled;
- (BOOL)matchesFragment:(NSString *)arg1;
- (double)retainSearchTime;
- (BOOL)shouldDisplayNoResults;
- (void)submitWithAutoCompletionHandler:(void (^)(id<GEOCompletion>, NSError *))arg1 networkActivity:(void (^)(BOOL))arg2;
@end

