//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOLocation, NSDate, NSString;

@interface GEORouteHypothesisOld : NSObject
{
    GEOLocation *_lastLocation;
    NSDate *_suggestedDepartureDate;
    NSDate *_estimatedArrivalDate;
    unsigned long long _currentTrafficDensity;
    unsigned long long _historicTrafficDensity;
    BOOL _hasTrafficIncidentOnRoute;
    int _routeIncidentType;
    int _routeIncidentSignificance;
    NSString *_routeIncidentStreetName;
    unsigned long long _travelState;
    double _travelStateScore;
}

@property (readonly, nonatomic) unsigned long long currentTrafficDensity; // @synthesize currentTrafficDensity=_currentTrafficDensity;
@property (readonly, nonatomic) NSDate *estimatedArrivalDate; // @synthesize estimatedArrivalDate=_estimatedArrivalDate;
@property (readonly, nonatomic) BOOL hasTrafficIncidentOnRoute; // @synthesize hasTrafficIncidentOnRoute=_hasTrafficIncidentOnRoute;
@property (readonly, nonatomic) unsigned long long historicTrafficDensity; // @synthesize historicTrafficDensity=_historicTrafficDensity;
@property (strong, nonatomic) GEOLocation *lastLocation; // @synthesize lastLocation=_lastLocation;
@property (readonly, nonatomic) int routeIncidentSignificance; // @synthesize routeIncidentSignificance=_routeIncidentSignificance;
@property (readonly, nonatomic) NSString *routeIncidentStreetName; // @synthesize routeIncidentStreetName=_routeIncidentStreetName;
@property (readonly, nonatomic) int routeIncidentType; // @synthesize routeIncidentType=_routeIncidentType;
@property (readonly, nonatomic) NSDate *suggestedDepartureDate; // @synthesize suggestedDepartureDate=_suggestedDepartureDate;
@property (readonly, nonatomic) unsigned long long travelState; // @synthesize travelState=_travelState;
@property (readonly, nonatomic) double travelStateScore; // @synthesize travelStateScore=_travelStateScore;

- (void).cxx_destruct;
- (id)description;
- (void)updateCurrentTrafficDensity:(double)arg1 staticTravelTime:(double)arg2;
- (void)updateDepartureAndArrivalSuggestions:(id)arg1 arrivalDate:(id)arg2 travelTimeWithTraffic:(double)arg3;
- (void)updateHistoricTrafficDensity:(double)arg1 staticTravelTime:(double)arg2;
- (void)updateTrafficIncidents:(id)arg1;
- (void)updateTravelState:(id)arg1;

@end

