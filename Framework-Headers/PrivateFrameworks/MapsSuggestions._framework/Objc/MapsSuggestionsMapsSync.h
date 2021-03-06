//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsMapsSyncConnectorDelegate-Protocol.h>
#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class MapsSuggestionsObservers, NSString;
@protocol MapsSuggestionsMapsSyncConnector;

@interface MapsSuggestionsMapsSync : NSObject <MapsSuggestionsMapsSyncConnectorDelegate, MapsSuggestionsObject>
{
    struct Queue _queue;
    id<MapsSuggestionsMapsSyncConnector> _connector;
    MapsSuggestionsObservers *_historyObservers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addMapsSyncObserver:(id)arg1 forContentType:(long long)arg2;
- (BOOL)canProduceRatingRequestForMapItem:(id)arg1 maxAge:(double)arg2 handler:(CDUnknownBlockType)arg3;
- (BOOL)deleteEntry:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (BOOL)didProduceRatingRequestForMapItem:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (BOOL)entriesFromHistoryWithHandler:(CDUnknownBlockType)arg1;
- (id)initFromResourceDepot:(id)arg1;
- (id)initWithMapsSyncConnector:(id)arg1;
- (BOOL)mapItemsForHistoricPlaces:(BOOL)arg1 routes:(BOOL)arg2 maxAge:(double)arg3 handler:(CDUnknownBlockType)arg4;
- (void)mapsSyncDidChangeForType:(long long)arg1;
- (void)removeMapsSyncObserver:(id)arg1;

@end

