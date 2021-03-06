//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class GEOMapItemStorage, NSNumber, NSString, PPConnectionsCriteria, PPConnectionsStore, PPLocationStore, PPNamedEntityStore;
@protocol MapsSuggestionsNetworkRequester, MapsSuggestionsPortraitConnector, OS_dispatch_queue;

@interface MapsSuggestionsPortrait : NSObject <MapsSuggestionsObject>
{
    id<MapsSuggestionsPortraitConnector> _connector;
    id<MapsSuggestionsNetworkRequester> _networkRequester;
    PPLocationStore *_locationStore;
    PPConnectionsStore *_connectionsStore;
    PPNamedEntityStore *_namedEntityStore;
    PPConnectionsCriteria *_criteria;
    NSString *_cachedKey;
    GEOMapItemStorage *_cachedMapItem;
    NSNumber *_cachedMapItemOrigin;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;

- (void).cxx_destruct;
- (BOOL)fetchConnectionEntriesWithHandler:(CDUnknownBlockType)arg1;
- (BOOL)fetchLocationEntriesForTray:(BOOL)arg1 currentLocation:(id)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)fetchNamedEntitiesFromDate:(id)arg1;
- (id)initFromResourceDepot:(id)arg1;
- (id)initWithPortraitConnector:(id)arg1 networkRequester:(id)arg2;
- (void)sendFeedbackforClientID:(id)arg1 storeType:(long long)arg2 explicitlyEngagedStrings:(id)arg3 explicitlyRejectedStrings:(id)arg4 implicitlyEngagedStrings:(id)arg5 implicitlyRejectedStrings:(id)arg6;

@end

