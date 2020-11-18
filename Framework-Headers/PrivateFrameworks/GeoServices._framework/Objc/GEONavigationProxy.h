//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEOLocation, GEONameInfo, GEONavigationGuidanceState, GEONavigationRouteSummary, GEONavigationRouteTransitSummary, GEORouteMatch, NSArray, NSData, NSString, NSXPCConnection;
@protocol GEOServerFormattedStepStringFormatter;

@interface GEONavigationProxy : NSObject
{
    NSXPCConnection *_navdConnection;
    int _navigationStartedToken;
    BOOL _hasNavigationStartedToken;
    NSString *_destinationName;
    GEOComposedRoute *_route;
    GEOLocation *_lastLocation;
    BOOL _locationUnreliable;
    GEORouteMatch *_routeMatch;
    NSString *_currentRoadName;
    BOOL _guidancePromptsEnabled;
    NSData *_activeRouteDetailsData;
    NSArray *_rideSelections;
    unsigned long long _stepIndex;
    unsigned long long _displayedStepIndex;
    GEONameInfo *_stepNameInfo;
    CDStruct_a70066d4 _positionFromSign;
    CDStruct_a70066d4 _positionFromManeuver;
    CDStruct_a70066d4 _positionFromDestination;
    unsigned long long _announcementStage;
    unsigned long long _nextAnnouncementStage;
    double _timeUntilNextAnnouncement;
    GEONavigationRouteSummary *_routeSummary;
    GEONavigationRouteTransitSummary *_transitRouteSummary;
    GEONavigationGuidanceState *_guidanceState;
    int _navigationVoiceVolume;
    BOOL _isNavigatingInLowGuidance;
    BOOL _isConnectedToCarplay;
    id<GEOServerFormattedStepStringFormatter> _formatter;
}

@property (strong, nonatomic) id<GEOServerFormattedStepStringFormatter> formatter; // @synthesize formatter=_formatter;

- (void).cxx_destruct;
- (void)_clearState;
- (void)_closeNavdConnection;
- (void)_openNavdConnection;
- (void)_sendActiveRouteDetailsData;
- (void)_sendCurrentRoadName;
- (void)_sendGuidanceState;
- (void)_sendNavigationVoiceVolume;
- (void)_sendPositionFromDestination;
- (void)_sendPositionFromManeuver;
- (void)_sendPositionFromSign;
- (void)_sendRideSelections;
- (void)_sendRouteSummary;
- (void)_sendStepIndex;
- (void)_sendStepNameInfo;
- (void)_sendTransitSummary;
- (void)dealloc;
- (void)setActiveRouteDetailsData:(id)arg1;
- (void)setAnnouncementStage:(unsigned long long)arg1;
- (void)setClusteredSectionSelectedRideFromRoute:(id)arg1;
- (void)setCurrentRoadName:(id)arg1;
- (void)setDestinationName:(id)arg1;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setGuidancePromptsEnabled:(BOOL)arg1;
- (void)setIsConnectedToCarplay:(BOOL)arg1;
- (void)setIsNavigatingInLowGuidance:(BOOL)arg1;
- (void)setLastLocation:(id)arg1;
- (void)setLocationUnreliable:(BOOL)arg1;
- (void)setNavigationSessionState:(unsigned long long)arg1 transportType:(int)arg2 navigationType:(int)arg3;
- (void)setNavigationState:(int)arg1;
- (void)setNavigationVoiceVolume:(int)arg1;
- (void)setNextAnnouncementStage:(unsigned long long)arg1 timeUntilNextAnnouncement:(double)arg2;
- (void)setPositionFromDestination:(CDStruct_c3b9c2ee)arg1;
- (void)setPositionFromManeuver:(CDStruct_c3b9c2ee)arg1;
- (void)setPositionFromSign:(CDStruct_c3b9c2ee)arg1;
- (void)setRoute:(id)arg1;
- (void)setRouteMatch:(id)arg1;
- (void)setStepIndex:(unsigned long long)arg1;
- (void)setStepNameInfo:(id)arg1;
- (void)startWithDestinationName:(id)arg1;
- (void)stop;
- (void)triggerHaptics:(int)arg1;

@end
