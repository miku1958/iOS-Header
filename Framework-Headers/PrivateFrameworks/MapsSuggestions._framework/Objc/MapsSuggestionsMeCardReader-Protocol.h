//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@protocol MapsSuggestionsMeCardObserver;

@protocol MapsSuggestionsMeCardReader <MapsSuggestionsObject>
- (void)addMeCardObserver:(id<MapsSuggestionsMeCardObserver>)arg1;
- (BOOL)readMeCardWithHandler:(void (^)(MapsSuggestionsMeCard *, NSError *))arg1;
- (void)removeMeCardObserver:(id<MapsSuggestionsMeCardObserver>)arg1;
@end

