//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOGuidanceEvent, GEOJunction, GEOJunctionView, GEONameInfo, NSArray, NSData, NSMutableArray, NSString, NSUUID;
@protocol GEOTransitArtworkDataSource;

@interface GEOComposedGuidanceEvent : NSObject <NSSecureCoding>
{
    NSUUID *_uniqueID;
    unsigned long long _creationOrder;
    GEOGuidanceEvent *_guidanceEvent;
    unsigned long long _stepIndex;
    unsigned long long _legIndex;
    NSMutableArray *_lanes;
    NSData *_serverRouteID;
    unsigned int _stepID;
    int _transportType;
    NSString *_roadName;
    double _distance;
    GEOJunction *_maneuverJunction;
    int _maneuverArrow;
    int _drivingSide;
    CDStruct_3f2a7a20 _startValidRouteCoordinate;
    CDStruct_3f2a7a20 _endValidRouteCoordinate;
    CDStruct_3f2a7a20 _coordinateForDistanceStrings;
    double _startValidDistance;
    double _endValidDistance;
    double _distanceForStrings;
    double _referencePointDistance;
    unsigned long long _source;
    unsigned long long _sourceIndex;
    unsigned long long _enrouteNoticeIndex;
    id<GEOTransitArtworkDataSource> _artworkOverride;
}

@property (readonly, nonatomic) NSArray *announcements;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> artworkOverride; // @synthesize artworkOverride=_artworkOverride;
@property (readonly, nonatomic) int composedGuidanceEventType;
@property (readonly, nonatomic) CDStruct_3f2a7a20 coordinateForDistanceStrings; // @synthesize coordinateForDistanceStrings=_coordinateForDistanceStrings;
@property (readonly, nonatomic) double distance; // @synthesize distance=_distance;
@property (readonly, nonatomic) double distanceForStrings; // @synthesize distanceForStrings=_distanceForStrings;
@property (readonly, nonatomic) int drivingSide; // @synthesize drivingSide=_drivingSide;
@property (readonly, nonatomic) double endValidDistance; // @synthesize endValidDistance=_endValidDistance;
@property (readonly, nonatomic) CDStruct_3f2a7a20 endValidRouteCoordinate; // @synthesize endValidRouteCoordinate=_endValidRouteCoordinate;
@property (nonatomic) unsigned long long enrouteNoticeIndex; // @synthesize enrouteNoticeIndex=_enrouteNoticeIndex;
@property (readonly, nonatomic) NSString *exclusiveSetIdentifier;
@property (readonly, nonatomic) BOOL hasHaptics;
@property (readonly, nonatomic) BOOL hasJunctionView;
@property (readonly, nonatomic) BOOL hasSignGuidance;
@property (readonly, nonatomic) BOOL hasSpokenGuidance;
@property (readonly, nonatomic) BOOL isLaneGuidanceForManeuver;
@property (readonly, nonatomic) BOOL isSticky;
@property (readonly, nonatomic) GEOJunctionView *junctionView;
@property (readonly, nonatomic) NSArray *laneInstructions;
@property (readonly, nonatomic) NSArray *laneTitles;
@property (readonly, nonatomic) NSArray *lanes;
@property (readonly, nonatomic) unsigned long long legIndex; // @synthesize legIndex=_legIndex;
@property (readonly, nonatomic) int maneuverArrow; // @synthesize maneuverArrow=_maneuverArrow;
@property (readonly, nonatomic) GEOJunction *maneuverJunction; // @synthesize maneuverJunction=_maneuverJunction;
@property (readonly, nonatomic) unsigned long long numChainedAnnouncements;
@property (readonly, nonatomic) double referencePointDistance; // @synthesize referencePointDistance=_referencePointDistance;
@property (readonly, nonatomic) double repetitionInterval;
@property (readonly, nonatomic) NSString *roadName; // @synthesize roadName=_roadName;
@property (readonly, nonatomic) NSData *serverRouteID; // @synthesize serverRouteID=_serverRouteID;
@property (readonly, nonatomic) GEONameInfo *shieldInfo;
@property (readonly, nonatomic) NSArray *signDetails;
@property (readonly, nonatomic) NSArray *signTitles;
@property (nonatomic) unsigned long long source; // @synthesize source=_source;
@property (nonatomic) unsigned long long sourceIndex; // @synthesize sourceIndex=_sourceIndex;
@property (readonly, nonatomic) unsigned long long stackRanking;
@property (readonly, nonatomic) double startValidDistance; // @synthesize startValidDistance=_startValidDistance;
@property (readonly, nonatomic) CDStruct_3f2a7a20 startValidRouteCoordinate; // @synthesize startValidRouteCoordinate=_startValidRouteCoordinate;
@property (readonly, nonatomic) unsigned int stepID; // @synthesize stepID=_stepID;
@property (readonly, nonatomic) unsigned long long stepIndex; // @synthesize stepIndex=_stepIndex;
@property (readonly, nonatomic) int transportType; // @synthesize transportType=_transportType;
@property (readonly, nonatomic) NSUUID *uniqueID; // @synthesize uniqueID=_uniqueID;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (unsigned long long)_junctionViewIDForData:(id)arg1;
- (long long)compare:(id)arg1;
- (long long)compareFactoringInSpeed:(id)arg1 speed:(double)arg2;
- (long long)comparePriority:(id)arg1;
- (id)description;
- (double)desiredTimeGapToEvent:(id)arg1 chained:(BOOL)arg2;
- (void)encodeWithCoder:(id)arg1;
- (double)endDistanceForSpeed:(double)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeoGuidanceEvent:(id)arg1 step:(id)arg2 legIndex:(unsigned long long)arg3 coordinates:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValidForSpeed:(double)arg1;
- (double)startDistanceForSpeed:(double)arg1;
- (double)triggerDistanceForSpeed:(double)arg1 andDuration:(CDUnknownBlockType)arg2;

@end
