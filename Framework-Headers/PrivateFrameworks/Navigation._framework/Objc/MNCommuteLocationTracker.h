//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/MNLocationTracker.h>

#import <Navigation/GEOETAUpdaterDelegate-Protocol.h>

@class GEOComposedRoute, GEOComposedWaypoint, GEOETAUpdater, GEONavigationMapMatcher, MNActiveRouteInfo, MNCommuteDestinationSuggestion, MNLocation, MNNavigationTraceManager, NSString;
@protocol GEODirectionServiceTicket, GEOMapServiceTicket;

__attribute__((visibility("hidden")))
@interface MNCommuteLocationTracker : MNLocationTracker <GEOETAUpdaterDelegate>
{
    GEOComposedWaypoint *_lastOrigin;
    MNLocation *_lastLocation;
    MNActiveRouteInfo *_routeInfo;
    id<GEOMapServiceTicket> _currentLocationTicket;
    id<GEODirectionServiceTicket> _directionsRequestTicket;
    GEONavigationMapMatcher *_mapMatcher;
    GEOETAUpdater *_etaUpdater;
    MNNavigationTraceManager *_traceManager;
    BOOL _routingInProgress;
    unsigned long long _destinationID;
    MNCommuteDestinationSuggestion *_suggestion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) GEOComposedWaypoint *destination;
@property (nonatomic) unsigned long long destinationID; // @synthesize destinationID=_destinationID;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) GEOComposedRoute *route;
@property (nonatomic) BOOL routingInProgress; // @synthesize routingInProgress=_routingInProgress;
@property (readonly, nonatomic) MNCommuteDestinationSuggestion *suggestion; // @synthesize suggestion=_suggestion;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_checkArrivalForLocation:(id)arg1 route:(id)arg2 destination:(id)arg3;
- (id)_directionsRequestFeedback;
- (void)_handleDirectionsResponse:(id)arg1 error:(id)arg2 forRequest:(id)arg3;
- (void)_handleWaypoint:(id)arg1 fromLocation:(id)arg2 error:(id)arg3;
- (id)_matchedLocationForLocation:(id)arg1;
- (id)_matchedLocationForMatchResult:(id)arg1 originalLocation:(id)arg2;
- (void)_requestRouteFromLocation:(id)arg1;
- (void)_requestRouteFromWaypoint:(id)arg1 location:(id)arg2;
- (id)_routeAttributes;
- (void)_setAuditToken:(id)arg1;
- (void)dealloc;
- (void)etaUpdater:(id)arg1 receivedETATrafficUpdateResponse:(id)arg2;
- (void)etaUpdater:(id)arg1 receivedError:(id)arg2;
- (void)etaUpdater:(id)arg1 willSendETATrafficUpdateRequest:(id)arg2;
- (void)etaUpdaterReceivedInvalidRoute:(id)arg1 newRoute:(id)arg2 incidentsOnRoute:(id)arg3 incidentsOffRoute:(id)arg4;
- (id)etaUpdaterRoutesForETATrafficUpdateRequest:(id)arg1;
- (void)etaUpdaterUpdatedETA:(id)arg1;
- (id)initWithSuggestion:(id)arg1 traceManager:(id)arg2;
- (void)startTracking;
- (void)stopTracking;
- (int)transportType;
- (void)updateETA;
- (void)updateLocation:(id)arg1;

@end
