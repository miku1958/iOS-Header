//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class MapsSuggestionsEntry;

@protocol MapsSuggestionsDeduper <MapsSuggestionsObject>
+ (BOOL)isEnabled;
- (BOOL)dedupeByEnrichingEntry:(MapsSuggestionsEntry *)arg1 withEntry:(MapsSuggestionsEntry *)arg2;
@end
