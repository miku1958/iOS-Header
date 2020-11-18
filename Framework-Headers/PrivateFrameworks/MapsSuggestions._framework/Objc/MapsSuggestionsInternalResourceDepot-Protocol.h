//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsResourceDepot-Protocol.h>

@protocol MapsSuggestionsContactsConnector, MapsSuggestionsEventKitConnector, MapsSuggestionsFlightRequester, MapsSuggestionsMapsSyncConnector, MapsSuggestionsPortraitConnector, MapsSuggestionsRoutineConnector, MapsSuggestionsShortcutStorage, MapsSuggestionsShortcutSuggestor, MapsSuggestionsVirtualGarageConnector;

@protocol MapsSuggestionsInternalResourceDepot <MapsSuggestionsResourceDepot>
- (id<MapsSuggestionsContactsConnector>)oneContactsConnector;
- (id<MapsSuggestionsEventKitConnector>)oneEventKitConnector;
- (id<MapsSuggestionsShortcutStorage>)oneFavoritesStorage;
- (id<MapsSuggestionsShortcutSuggestor>)oneFavoritesSuggestor;
- (id<MapsSuggestionsFlightRequester>)oneFlightRequester;
- (id<MapsSuggestionsMapsSyncConnector>)oneMapsSyncConnector;
- (id<MapsSuggestionsPortraitConnector>)onePortraitConnector;
- (id<MapsSuggestionsRoutineConnector>)oneRoutineConnector;
- (id<MapsSuggestionsVirtualGarageConnector>)oneVirtualGarageConnector;
@end
