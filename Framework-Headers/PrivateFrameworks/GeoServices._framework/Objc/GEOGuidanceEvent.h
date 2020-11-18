//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOSignGuidance, GEOSpokenGuidance, GEOVisualLaneGuidance;

@interface GEOGuidanceEvent : PBCodable <NSCopying>
{
    double _maxSpeed;
    double _minSpeed;
    int _distanceZilchIndex;
    int _endValidDistance;
    int _eventType;
    unsigned int _identifier;
    GEOVisualLaneGuidance *_laneGuidance;
    int _offsetForDistanceString;
    GEOSignGuidance *_signGuidance;
    GEOSpokenGuidance *_spokenGuidance;
    int _startValidDistance;
    BOOL _sticky;
    struct {
        unsigned int maxSpeed:1;
        unsigned int minSpeed:1;
        unsigned int distanceZilchIndex:1;
        unsigned int endValidDistance:1;
        unsigned int eventType:1;
        unsigned int identifier:1;
        unsigned int offsetForDistanceString:1;
        unsigned int startValidDistance:1;
        unsigned int sticky:1;
    } _has;
}

@property (nonatomic) int distanceZilchIndex; // @synthesize distanceZilchIndex=_distanceZilchIndex;
@property (nonatomic) int endValidDistance; // @synthesize endValidDistance=_endValidDistance;
@property (nonatomic) int eventType; // @synthesize eventType=_eventType;
@property (nonatomic) BOOL hasDistanceZilchIndex;
@property (nonatomic) BOOL hasEndValidDistance;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasLaneGuidance;
@property (nonatomic) BOOL hasMaxSpeed;
@property (nonatomic) BOOL hasMinSpeed;
@property (nonatomic) BOOL hasOffsetForDistanceString;
@property (readonly, nonatomic) BOOL hasSignGuidance;
@property (readonly, nonatomic) BOOL hasSpokenGuidance;
@property (nonatomic) BOOL hasStartValidDistance;
@property (nonatomic) BOOL hasSticky;
@property (nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) GEOVisualLaneGuidance *laneGuidance; // @synthesize laneGuidance=_laneGuidance;
@property (nonatomic) double maxSpeed; // @synthesize maxSpeed=_maxSpeed;
@property (nonatomic) double minSpeed; // @synthesize minSpeed=_minSpeed;
@property (nonatomic) int offsetForDistanceString; // @synthesize offsetForDistanceString=_offsetForDistanceString;
@property (strong, nonatomic) GEOSignGuidance *signGuidance; // @synthesize signGuidance=_signGuidance;
@property (strong, nonatomic) GEOSpokenGuidance *spokenGuidance; // @synthesize spokenGuidance=_spokenGuidance;
@property (nonatomic) int startValidDistance; // @synthesize startValidDistance=_startValidDistance;
@property (nonatomic) BOOL sticky; // @synthesize sticky=_sticky;

- (void).cxx_destruct;
- (int)StringAsEventType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventTypeAsString:(int)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
