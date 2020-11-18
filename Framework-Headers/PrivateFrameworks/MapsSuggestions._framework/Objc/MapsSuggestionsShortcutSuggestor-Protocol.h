//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/NSObject-Protocol.h>

@protocol MapsSuggestionsInternalResourceDepot;

@protocol MapsSuggestionsShortcutSuggestor <NSObject>
+ (id)new;
- (id)init;
- (id)initFromResourceDepot:(id<MapsSuggestionsInternalResourceDepot>)arg1;
- (BOOL)suggestShortcutsOfType:(long long)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
@end
