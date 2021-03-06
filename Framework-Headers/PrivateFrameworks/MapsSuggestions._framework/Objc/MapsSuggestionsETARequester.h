//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class CLLocation, GEOAutomobileOptions, GEOComposedWaypoint, MapsSuggestionsETARequirements, NSLock, NSMutableDictionary, NSString;
@protocol MapsSuggestionsNetworkRequester, MapsSuggestionsPredictor, OS_dispatch_queue;

@interface MapsSuggestionsETARequester : NSObject <MapsSuggestionsObject>
{
    NSObject<OS_dispatch_queue> *_queue;
    id<MapsSuggestionsNetworkRequester> _networkRequester;
    id<MapsSuggestionsPredictor> _transportModePredictor;
    MapsSuggestionsETARequirements *_etaRequirements;
    CLLocation *_currentLocationUsed;
    GEOComposedWaypoint *_currentLocationWaypoint;
    NSMutableDictionary *_waypoints;
    NSLock *_waypointsLock;
    int _forcedTransportMode;
    int _mapType;
    GEOAutomobileOptions *_automobileOptions;
}

@property (strong) GEOAutomobileOptions *automobileOptions; // @synthesize automobileOptions=_automobileOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property int mapType; // @synthesize mapType=_mapType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;

- (void).cxx_destruct;
- (BOOL)ETAsFromLocation:(id)arg1 toEntries:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)forceTransportType:(int)arg1;
- (id)initWithNetworkRequester:(id)arg1 transportModePredictor:(id)arg2 requirements:(id)arg3;
- (id)networkRequester;
- (BOOL)transportTypeFromLocation:(id)arg1 toEntry:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

