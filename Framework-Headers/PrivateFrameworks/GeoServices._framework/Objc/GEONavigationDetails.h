//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOCompanionRouteDetails, GEOCompanionRouteStatus, GEOComposedRoute, GEOLocation, GEONavigationRouteSummary, GEONavigationRouteTransitSummary, GEORouteMatch, NSString;
@protocol GEOServerFormattedStepStringFormatter;

__attribute__((visibility("hidden")))
@interface GEONavigationDetails : NSObject
{
    NSString *_destinationName;
    GEOComposedRoute *_route;
    GEOLocation *_location;
    GEORouteMatch *_routeMatch;
    double _distanceToManeuverStart;
    double _distanceToManeuverEnd;
    double _distanceToRoute;
    double _distanceRemainingOnRoute;
    double _remainingTime;
    BOOL _locationUnreliable;
    unsigned long long _annoucementStage;
    unsigned long long _nextAnnoucementStage;
    double _timeUntilNextAnnouncement;
    int _navigationState;
    long long _displayStep;
    GEONavigationRouteSummary *_routeSummary;
    GEONavigationRouteTransitSummary *_transitSummary;
    GEOCompanionRouteDetails *_companionRoute;
    GEOCompanionRouteStatus *_companionStatus;
    BOOL _guidancePromptsEnabled;
    id<GEOServerFormattedStepStringFormatter> _formatter;
}

@property (nonatomic) unsigned long long announcementStage; // @synthesize announcementStage=_annoucementStage;
@property (readonly, nonatomic) GEOCompanionRouteDetails *companionRoute; // @synthesize companionRoute=_companionRoute;
@property (readonly, nonatomic) GEOCompanionRouteStatus *companionStatus; // @synthesize companionStatus=_companionStatus;
@property (readonly, nonatomic) NSString *destinationName; // @synthesize destinationName=_destinationName;
@property (nonatomic) long long displayStep; // @synthesize displayStep=_displayStep;
@property (nonatomic) double distanceRemainingOnRoute; // @synthesize distanceRemainingOnRoute=_distanceRemainingOnRoute;
@property (nonatomic) double distanceToManeuverEnd; // @synthesize distanceToManeuverEnd=_distanceToManeuverEnd;
@property (nonatomic) double distanceToManeuverStart; // @synthesize distanceToManeuverStart=_distanceToManeuverStart;
@property (nonatomic) double distanceToRoute; // @synthesize distanceToRoute=_distanceToRoute;
@property (readonly, nonatomic) id<GEOServerFormattedStepStringFormatter> formatter; // @synthesize formatter=_formatter;
@property (nonatomic) BOOL guidancePromptsEnabled; // @synthesize guidancePromptsEnabled=_guidancePromptsEnabled;
@property (strong, nonatomic) GEOLocation *location; // @synthesize location=_location;
@property (nonatomic) BOOL locationUnreliable; // @synthesize locationUnreliable=_locationUnreliable;
@property (nonatomic) int navigationState; // @synthesize navigationState=_navigationState;
@property (readonly, nonatomic) unsigned long long nextAnnouncementStage; // @synthesize nextAnnouncementStage=_nextAnnoucementStage;
@property (nonatomic) double remainingTime; // @synthesize remainingTime=_remainingTime;
@property (strong, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
@property (strong, nonatomic) GEORouteMatch *routeMatch; // @synthesize routeMatch=_routeMatch;
@property (readonly, nonatomic) GEONavigationRouteSummary *routeSummary; // @synthesize routeSummary=_routeSummary;
@property (readonly, nonatomic) double timeUntilNextAnnouncement; // @synthesize timeUntilNextAnnouncement=_timeUntilNextAnnouncement;
@property (readonly, nonatomic) GEONavigationRouteTransitSummary *transitSummary; // @synthesize transitSummary=_transitSummary;

- (void)dealloc;
- (id)initWithDestinationName:(id)arg1 stringFormatter:(id)arg2;
- (void)setNextAnnouncementStage:(unsigned long long)arg1 andTime:(double)arg2;

@end
