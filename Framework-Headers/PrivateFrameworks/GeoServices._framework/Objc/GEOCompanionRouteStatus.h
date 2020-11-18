//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOLocation, NSArray, NSData;

@interface GEOCompanionRouteStatus : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _selectedRideIndexs;
    double _timestamp;
    unsigned int _distanceRemainingOnRoute;
    unsigned int _distanceToManeuver;
    unsigned int _distanceToRoute;
    int _feedbackType;
    int _hapticsType;
    GEOLocation *_location;
    unsigned int _remainingTime;
    NSData *_routeID;
    unsigned int _routeLocationIndex;
    float _routeLocationOffset;
    GEOLatLng *_routeMatchCoordinate;
    unsigned int _stepID;
    BOOL _guidancePromptsEnabled;
    BOOL _lowGuidanceNavigation;
    struct {
        unsigned int timestamp:1;
        unsigned int distanceRemainingOnRoute:1;
        unsigned int distanceToManeuver:1;
        unsigned int distanceToRoute:1;
        unsigned int feedbackType:1;
        unsigned int hapticsType:1;
        unsigned int remainingTime:1;
        unsigned int routeLocationIndex:1;
        unsigned int routeLocationOffset:1;
        unsigned int stepID:1;
        unsigned int guidancePromptsEnabled:1;
        unsigned int lowGuidanceNavigation:1;
    } _has;
}

@property (nonatomic) unsigned int distanceRemainingOnRoute; // @synthesize distanceRemainingOnRoute=_distanceRemainingOnRoute;
@property (nonatomic) unsigned int distanceToManeuver; // @synthesize distanceToManeuver=_distanceToManeuver;
@property (nonatomic) unsigned int distanceToRoute; // @synthesize distanceToRoute=_distanceToRoute;
@property (readonly, nonatomic) unsigned int effectiveDistanceToManeuver;
@property (readonly, nonatomic) unsigned int effectiveStepID;
@property (nonatomic) int feedbackType; // @synthesize feedbackType=_feedbackType;
@property (nonatomic) BOOL guidancePromptsEnabled; // @synthesize guidancePromptsEnabled=_guidancePromptsEnabled;
@property (nonatomic) int hapticsType; // @synthesize hapticsType=_hapticsType;
@property (nonatomic) BOOL hasDistanceRemainingOnRoute;
@property (nonatomic) BOOL hasDistanceToManeuver;
@property (nonatomic) BOOL hasDistanceToRoute;
@property (readonly, nonatomic) BOOL hasEffectiveDistanceToManeuver;
@property (readonly, nonatomic) BOOL hasEffectiveStepID;
@property (nonatomic) BOOL hasFeedbackType;
@property (nonatomic) BOOL hasGuidancePromptsEnabled;
@property (nonatomic) BOOL hasHapticsType;
@property (readonly, nonatomic) BOOL hasLocation;
@property (nonatomic) BOOL hasLowGuidanceNavigation;
@property (nonatomic) BOOL hasRemainingTime;
@property (readonly, nonatomic) BOOL hasRouteID;
@property (nonatomic) BOOL hasRouteLocationIndex;
@property (nonatomic) BOOL hasRouteLocationOffset;
@property (readonly, nonatomic) BOOL hasRouteMatchCoordinate;
@property (nonatomic) BOOL hasStepID;
@property (nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL isNavigating;
@property (readonly, nonatomic) BOOL isRecalculating;
@property (strong, nonatomic) GEOLocation *location; // @synthesize location=_location;
@property (nonatomic) BOOL lowGuidanceNavigation; // @synthesize lowGuidanceNavigation=_lowGuidanceNavigation;
@property (nonatomic) unsigned int remainingTime; // @synthesize remainingTime=_remainingTime;
@property (strong, nonatomic) NSData *routeID; // @synthesize routeID=_routeID;
@property (nonatomic) unsigned int routeLocationIndex; // @synthesize routeLocationIndex=_routeLocationIndex;
@property (nonatomic) float routeLocationOffset; // @synthesize routeLocationOffset=_routeLocationOffset;
@property (strong, nonatomic) GEOLatLng *routeMatchCoordinate; // @synthesize routeMatchCoordinate=_routeMatchCoordinate;
@property (readonly, nonatomic) unsigned int *selectedRideIndexs;
@property (readonly, nonatomic) unsigned long long selectedRideIndexsCount;
@property (readonly, nonatomic) NSArray *selectedRideIndices;
@property (nonatomic) unsigned int stepID; // @synthesize stepID=_stepID;
@property (nonatomic) double timestamp; // @synthesize timestamp=_timestamp;

- (void).cxx_destruct;
- (int)StringAsFeedbackType:(id)arg1;
- (int)StringAsHapticsType:(id)arg1;
- (void)_updateClusteredSectionSelectedRideIndicesFromRoute:(id)arg1;
- (void)addSelectedRideIndex:(unsigned int)arg1;
- (void)clearSelectedRideIndexs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)effectiveStepIDInRoute:(id)arg1;
- (id)feedbackTypeAsString:(int)arg1;
- (id)hapticsTypeAsString:(int)arg1;
- (unsigned long long)hash;
- (id)initWithRoute:(id)arg1 routeID:(id)arg2;
- (id)initWithRouteID:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)selectedRideIndexAtIndex:(unsigned long long)arg1;
- (void)setSelectedRideIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)updateClusteredSectionSelectedRideIndicesFromRoute:(id)arg1 routeID:(id)arg2;
- (void)updateFeedbackWithNavigationState:(int)arg1 locationUnreliable:(BOOL)arg2 announcementStage:(unsigned long long)arg3 nextAnnouncementStage:(unsigned long long)arg4 nextAnnouncementTime:(double)arg5;
- (void)updateWithRoute:(id)arg1 routeID:(id)arg2;
- (void)writeTo:(id)arg1;

@end

