//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOComposedRouteStep.h>

@class GEOInstructionSet, GEOPBTransitHall, GEOPBTransitStop, GEOTransitStep, NSArray, NSString;
@protocol GEOTransitArtworkDataSource, GEOTransitRoutingIncidentMessage;

@interface GEOComposedTransitRouteStep : GEOComposedRouteStep
{
    int _maneuver;
    unsigned int _startTime;
    unsigned int _duration;
    GEOTransitStep *_transitStep;
    NSArray *_routeDetailsPrimaryArtwork;
    id<GEOTransitArtworkDataSource> _routeDetailsSecondaryArtwork;
    NSArray *_steppingArtwork;
    id<GEOTransitRoutingIncidentMessage> _steppingIncidentMessage;
    id<GEOTransitRoutingIncidentMessage> _routeDetailsIncidentMessage;
    GEOPBTransitStop *_originStop;
    GEOPBTransitStop *_destinationStop;
    GEOPBTransitHall *_originHall;
    GEOPBTransitHall *_destinationHall;
}

@property (readonly, nonatomic) GEOPBTransitHall *destinationHall; // @synthesize destinationHall=_destinationHall;
@property (readonly, nonatomic) GEOPBTransitStop *destinationStop; // @synthesize destinationStop=_destinationStop;
@property (readonly, nonatomic) NSString *destinationStopIntermediateListName;
@property (readonly, nonatomic) unsigned long long destinationTransitEntityMuid;
@property (readonly, nonatomic) GEOInstructionSet *instructions;
@property (readonly, nonatomic) int maneuver; // @synthesize maneuver=_maneuver;
@property (readonly, nonatomic) GEOComposedTransitRouteStep *nextTransitStep;
@property (readonly, nonatomic) GEOPBTransitHall *originHall; // @synthesize originHall=_originHall;
@property (readonly, nonatomic) GEOPBTransitStop *originStop; // @synthesize originStop=_originStop;
@property (readonly, nonatomic) NSString *originStopIntermediateListName;
@property (readonly, nonatomic) unsigned long long originTransitEntityMuid;
@property (readonly, nonatomic) GEOComposedTransitRouteStep *previousTransitStep;
@property (readonly, nonatomic) id<GEOTransitRoutingIncidentMessage> routeDetailsIncidentMessage; // @synthesize routeDetailsIncidentMessage=_routeDetailsIncidentMessage;
@property (readonly, nonatomic) id<GEOTransitRoutingIncidentMessage> steppingIncidentMessage; // @synthesize steppingIncidentMessage=_steppingIncidentMessage;
@property (readonly, nonatomic) GEOTransitStep *transitStep; // @synthesize transitStep=_transitStep;

- (void).cxx_destruct;
- (id)_intermediateListNameForStop:(id)arg1;
- (id)_largestEntityAtStop:(id)arg1 passingTest:(CDUnknownBlockType)arg2;
- (unsigned long long)_muidForStop:(id)arg1;
- (void)_populateArtworksWithDecoderData:(id)arg1;
- (void)_populateIncidentsWithDecoderData:(id)arg1;
- (id)description;
- (unsigned int)distance;
- (unsigned int)duration;
- (CDStruct_c3b9c2ee)endGeoCoordinate;
- (id)endingStop;
- (BOOL)hasDuration;
- (id)initWithComposedRoute:(id)arg1 routeLegType:(long long)arg2 step:(id)arg3 stepIndex:(unsigned long long)arg4 duration:(unsigned int)arg5 pointRange:(struct _NSRange)arg6;
- (BOOL)isArrivalStep;
- (id)nextAlightingStep;
- (id)nextBoardingStep;
- (id)nextStop;
- (id)previousAlightingStep;
- (id)previousBoardingStep;
- (id)previousStop;
- (id)routeDetailsPrimaryArtwork;
- (id)routeDetailsSecondaryArtwork;
- (CDStruct_c3b9c2ee)startGeoCoordinate;
- (unsigned int)startTime;
- (id)startingStop;
- (id)steppingArtwork;

@end
