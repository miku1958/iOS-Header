//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@protocol MapsSuggestionsTriggerObserver;

@protocol MapsSuggestionsTrigger <MapsSuggestionsObject>
- (void)addObserver:(id<MapsSuggestionsTriggerObserver>)arg1;
- (BOOL)hasObservers;
- (void)removeObserver:(id<MapsSuggestionsTriggerObserver>)arg1;
@end

