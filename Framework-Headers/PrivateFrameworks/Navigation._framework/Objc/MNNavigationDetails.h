//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/NSSecureCoding-Protocol.h>

@class GEOComposedRoute, GEONavigationGuidanceState, MNActiveRouteDetails, MNActiveRouteInfo, MNLocation, MNRoutePlanningDetails, NSArray, NSMapTable, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MNNavigationDetails : NSObject <NSSecureCoding>
{
    MNActiveRouteDetails *_activeRouteDetails;
    MNLocation *_location;
    unsigned long long _routeIndex;
    BOOL _isDetour;
    GEONavigationGuidanceState *_guidanceState;
    NSMapTable *_routeIDLookup;
    NSMutableDictionary *_routeLookup;
    MNActiveRouteInfo *_currentRoute;
    NSArray *_alternateRoutes;
    NSArray *_possibleCommuteDestinations;
    NSMutableDictionary *_trafficIncidentAlerts;
    BOOL _guidancePromptsEnabled;
    BOOL _isInVehicle;
    BOOL _traceIsPlaying;
    int _headingOrientation;
    int _navigationState;
    unsigned long long _state;
    MNRoutePlanningDetails *_routePlanningDetails;
    unsigned long long _reconnectionRouteIndex;
    double _proceedToRouteDistance;
    NSString *_displayString;
    double _remainingTime;
    double _remainingDistance;
    unsigned long long _closestStepIndex;
    double _distanceUntilSign;
    double _timeUntilSign;
    double _distanceUntilManeuver;
    double _timeUntilManeuver;
    NSString *_currentVoiceLanguage;
    NSString *_tracePath;
    double _traceDuration;
    double _tracePosition;
    NSArray *_traceBookmarks;
    NSMutableDictionary *_trackedCommuteDestinations;
}

@property (readonly, nonatomic) MNActiveRouteDetails *activeRouteDetails; // @synthesize activeRouteDetails=_activeRouteDetails;
@property (readonly, nonatomic) NSArray *alternateRoutes;
@property (nonatomic) unsigned long long closestStepIndex; // @synthesize closestStepIndex=_closestStepIndex;
@property (readonly, nonatomic) GEOComposedRoute *currentRoute;
@property (strong, nonatomic) NSString *currentVoiceLanguage; // @synthesize currentVoiceLanguage=_currentVoiceLanguage;
@property (strong, nonatomic) NSString *displayString; // @synthesize displayString=_displayString;
@property (nonatomic) double distanceUntilManeuver; // @synthesize distanceUntilManeuver=_distanceUntilManeuver;
@property (nonatomic) double distanceUntilSign; // @synthesize distanceUntilSign=_distanceUntilSign;
@property (nonatomic) BOOL guidancePromptsEnabled; // @synthesize guidancePromptsEnabled=_guidancePromptsEnabled;
@property (strong, nonatomic) GEONavigationGuidanceState *guidanceState; // @synthesize guidanceState=_guidanceState;
@property (nonatomic) int headingOrientation; // @synthesize headingOrientation=_headingOrientation;
@property (nonatomic) BOOL isDetour; // @synthesize isDetour=_isDetour;
@property (nonatomic) BOOL isInVehicle; // @synthesize isInVehicle=_isInVehicle;
@property (readonly, nonatomic) unsigned long long legIndex;
@property (strong, nonatomic) MNLocation *location; // @synthesize location=_location;
@property (nonatomic) int navigationState; // @synthesize navigationState=_navigationState;
@property (readonly, nonatomic) int navigationType;
@property (readonly, nonatomic) NSArray *possibleCommuteDestinations; // @synthesize possibleCommuteDestinations=_possibleCommuteDestinations;
@property (nonatomic) double proceedToRouteDistance; // @synthesize proceedToRouteDistance=_proceedToRouteDistance;
@property (readonly, nonatomic) unsigned long long reconnectionRouteIndex; // @synthesize reconnectionRouteIndex=_reconnectionRouteIndex;
@property (nonatomic) double remainingDistance; // @synthesize remainingDistance=_remainingDistance;
@property (nonatomic) double remainingTime; // @synthesize remainingTime=_remainingTime;
@property (readonly, nonatomic) unsigned long long routeIndex; // @synthesize routeIndex=_routeIndex;
@property (strong, nonatomic) MNRoutePlanningDetails *routePlanningDetails; // @synthesize routePlanningDetails=_routePlanningDetails;
@property (nonatomic) unsigned long long state; // @synthesize state=_state;
@property (readonly, nonatomic) unsigned long long stepIndex;
@property (nonatomic) double timeUntilManeuver; // @synthesize timeUntilManeuver=_timeUntilManeuver;
@property (nonatomic) double timeUntilSign; // @synthesize timeUntilSign=_timeUntilSign;
@property (strong, nonatomic) NSArray *traceBookmarks; // @synthesize traceBookmarks=_traceBookmarks;
@property (nonatomic) double traceDuration; // @synthesize traceDuration=_traceDuration;
@property (nonatomic) BOOL traceIsPlaying; // @synthesize traceIsPlaying=_traceIsPlaying;
@property (copy, nonatomic) NSString *tracePath; // @synthesize tracePath=_tracePath;
@property (nonatomic) double tracePosition; // @synthesize tracePosition=_tracePosition;
@property (strong) NSMutableDictionary *trackedCommuteDestinations; // @synthesize trackedCommuteDestinations=_trackedCommuteDestinations;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_updateRouteIDLookup;
- (void)copySerializableValuesFrom:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)removeTrafficIncidentAlertWithDetails:(id)arg1;
- (id)routeInfoForID:(id)arg1;
- (id)routeInfoForRoute:(id)arg1;
- (void)setActiveRouteDetails:(id)arg1 withAlternateRoutes:(id)arg2;
- (void)setAlternateRoutes:(id)arg1;
- (void)updateETAResponseForRoute:(id)arg1;
- (void)updatePossibleCommuteDestinations:(id)arg1;
- (id)updateWithTrafficIncidentAlertDetails:(id)arg1;

@end

