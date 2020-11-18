//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOSignGuidanceFeedback, GEOSpokenGuidanceFeedback, NSData;

@interface GEOGuidanceEventFeedback : PBCodable <NSCopying>
{
    float _distanceToManeuver;
    float _duration;
    unsigned int _enrouteNoticeIndex;
    unsigned int _eventIndex;
    NSData *_routeID;
    GEOSignGuidanceFeedback *_signGuidanceFeedback;
    GEOSpokenGuidanceFeedback *_spokenGuidanceFeedback;
    unsigned int _stepID;
    float _timeToManeuver;
    int _trafficSpeed;
    float _vehicleSpeed;
    struct {
        unsigned int distanceToManeuver:1;
        unsigned int duration:1;
        unsigned int enrouteNoticeIndex:1;
        unsigned int eventIndex:1;
        unsigned int stepID:1;
        unsigned int timeToManeuver:1;
        unsigned int trafficSpeed:1;
        unsigned int vehicleSpeed:1;
    } _has;
}

@property (nonatomic) float distanceToManeuver; // @synthesize distanceToManeuver=_distanceToManeuver;
@property (nonatomic) float duration; // @synthesize duration=_duration;
@property (nonatomic) unsigned int enrouteNoticeIndex; // @synthesize enrouteNoticeIndex=_enrouteNoticeIndex;
@property (nonatomic) unsigned int eventIndex; // @synthesize eventIndex=_eventIndex;
@property (nonatomic) BOOL hasDistanceToManeuver;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasEnrouteNoticeIndex;
@property (nonatomic) BOOL hasEventIndex;
@property (readonly, nonatomic) BOOL hasRouteID;
@property (readonly, nonatomic) BOOL hasSignGuidanceFeedback;
@property (readonly, nonatomic) BOOL hasSpokenGuidanceFeedback;
@property (nonatomic) BOOL hasStepID;
@property (nonatomic) BOOL hasTimeToManeuver;
@property (nonatomic) BOOL hasTrafficSpeed;
@property (nonatomic) BOOL hasVehicleSpeed;
@property (strong, nonatomic) NSData *routeID; // @synthesize routeID=_routeID;
@property (strong, nonatomic) GEOSignGuidanceFeedback *signGuidanceFeedback; // @synthesize signGuidanceFeedback=_signGuidanceFeedback;
@property (strong, nonatomic) GEOSpokenGuidanceFeedback *spokenGuidanceFeedback; // @synthesize spokenGuidanceFeedback=_spokenGuidanceFeedback;
@property (nonatomic) unsigned int stepID; // @synthesize stepID=_stepID;
@property (nonatomic) float timeToManeuver; // @synthesize timeToManeuver=_timeToManeuver;
@property (nonatomic) int trafficSpeed; // @synthesize trafficSpeed=_trafficSpeed;
@property (nonatomic) float vehicleSpeed; // @synthesize vehicleSpeed=_vehicleSpeed;

- (void).cxx_destruct;
- (int)StringAsTrafficSpeed:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)trafficSpeedAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

