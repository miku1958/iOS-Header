//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOComposedRoute, GEOLocation, GEONavigationDetails, GEONavigationGuidanceState, GEORouteMatch, NSData, NSDate, NSPointerArray, NSString, NSTimer, NSXPCConnection;
@protocol GEORoutePreloadSession;

@interface GEONavigation : NSObject
{
    NSPointerArray *_observers;
    GEONavigationDetails *_details;
    id<GEORoutePreloadSession> _preloadSession;
    GEONavigationGuidanceState *_guidanceState;
    GEOLocation *_previousLocation;
    NSDate *_arrivalDate;
    NSXPCConnection *_nanomapscdConnection;
    BOOL _hasStartedGuidance;
    NSTimer *_etaUpdateTimer;
    BOOL _forceUpdateETA;
    NSDate *_displayETA;
    double _displayRemainingTime;
    BOOL _shouldSendRouteWithStatus;
    NSData *_lastSentRouteContext;
}

@property (nonatomic) unsigned long long announcementStage;
@property (readonly, nonatomic) NSDate *arrivalDate; // @synthesize arrivalDate=_arrivalDate;
@property (readonly, nonatomic) NSString *destinationName;
@property (nonatomic) long long displayStep;
@property (readonly, nonatomic) double distanceRemainingOnRoute;
@property (readonly, nonatomic) double distanceToManeuverEnd;
@property (readonly, nonatomic) double distanceToManeuverStart;
@property (readonly, nonatomic) double distanceToRoute;
@property (nonatomic) int guidanceLevel;
@property (readonly, nonatomic) int guidanceLevelIgnoringTimeCriterion;
@property (nonatomic) BOOL guidancePromptsEnabled;
@property (readonly, nonatomic) BOOL hasStartedGuidance; // @synthesize hasStartedGuidance=_hasStartedGuidance;
@property (readonly, nonatomic) BOOL isNavigating;
@property (readonly, nonatomic) GEOLocation *location;
@property (readonly, nonatomic) BOOL locationUnreliable;
@property (nonatomic) int navigationState;
@property (nonatomic) int navigationTransportType;
@property (readonly, nonatomic) unsigned long long nextAnnouncementStage;
@property (readonly, nonatomic) double remainingTime;
@property (readonly, nonatomic) GEOComposedRoute *route;
@property (readonly, nonatomic) GEORouteMatch *routeMatch;
@property (readonly, nonatomic) BOOL shouldSuppressCellularDataAlerts;
@property (readonly, nonatomic) double timeUntilNextAnnouncement;

+ (BOOL)_canRunNavigationBasedOnDistanceForRoute:(id)arg1 withCurrentLocation:(id)arg2;
+ (BOOL)canNavigateWithTransportType:(int)arg1;
+ (BOOL)canRunNavigationForRoute:(id)arg1 withCurrentLocation:(id)arg2;
+ (id)displayDateForDate:(id)arg1;
+ (double)displayTimeIntervalForTimeInterval:(double)arg1;
+ (id)sharedInstance;
- (void)_clearETATimer;
- (void)_closeNanomapscdConnection;
- (void)_createNanomapscdConnection;
- (void)_forceUpdateETA;
- (void)_invalidateNavigationSessionWithRouteContext:(id)arg1;
- (void)_notifyObserversOfGuidanceStateChange;
- (void)_updateETA;
- (void)_updateNavigationGuidanceStateCellularDataAlertsAttribute:(BOOL)arg1;
- (void)_updateNavigationRouteDetails:(id)arg1 routeStatus:(id)arg2 routeContext:(id)arg3;
- (void)_updateNavigationRouteStatus;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)preloadSessionForRoute:(id)arg1 loggingEnabled:(BOOL)arg2 minimalDebugging:(BOOL)arg3 fullDebugging:(BOOL)arg4 delegate:(id)arg5 traits:(id)arg6 withBatteryHandler:(CDUnknownBlockType)arg7;
- (void)recalculatedToRoute:(id)arg1 location:(id)arg2 routeMatch:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)selectRoute:(id)arg1 currentLocation:(id)arg2;
- (void)sendNavigationStatus;
- (void)setNextAnnouncementStage:(unsigned long long)arg1 andTime:(double)arg2;
- (void)setRoute:(id)arg1;
- (void)startTrackingFromLocation:(id)arg1;
- (void)startTurnByTurnNavigationForTransportType:(int)arg1 state:(int)arg2;
- (void)startWithDestinationName:(id)arg1 stringFormatter:(id)arg2;
- (void)stop;
- (void)stopTracking;
- (void)stopTurnByTurnNavigation;
- (void)updateLocation:(id)arg1 routeMatch:(id)arg2 etaRoute:(id)arg3 locationUnreliable:(BOOL)arg4;
- (void)updatePreloaderWithGuidanceLevel:(int)arg1;
- (void)updateRouteGuidanceLevelForLocation:(id)arg1 shouldFilterLocationUpdatesOnDistance:(BOOL)arg2;
- (void)updatedETA:(id)arg1;

@end

