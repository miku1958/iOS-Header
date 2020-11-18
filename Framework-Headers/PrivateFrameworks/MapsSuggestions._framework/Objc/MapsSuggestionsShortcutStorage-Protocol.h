//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class MapsSuggestionsShortcut, NSArray;

@protocol MapsSuggestionsShortcutStorage <MapsSuggestionsObject>
- (BOOL)addOrUpdateShortcuts:(NSArray *)arg1 handler:(void (^)(BOOL))arg2;
- (BOOL)loadAllShortcutsWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (BOOL)moveShortcut:(MapsSuggestionsShortcut *)arg1 afterShortcut:(MapsSuggestionsShortcut *)arg2 handler:(void (^)(BOOL))arg3;
- (BOOL)moveShortcut:(MapsSuggestionsShortcut *)arg1 beforeShortcut:(MapsSuggestionsShortcut *)arg2 handler:(void (^)(BOOL))arg3;
- (BOOL)moveShortcut:(MapsSuggestionsShortcut *)arg1 toIndex:(long long)arg2 handler:(void (^)(BOOL))arg3;
- (BOOL)moveShortcutToBack:(MapsSuggestionsShortcut *)arg1 handler:(void (^)(BOOL))arg2;
- (BOOL)moveShortcutToFront:(MapsSuggestionsShortcut *)arg1 handler:(void (^)(BOOL))arg2;
- (BOOL)removeShortcuts:(NSArray *)arg1 handler:(void (^)(BOOL))arg2;
- (void)setChangeHandler:(void (^)(void))arg1;
@end
