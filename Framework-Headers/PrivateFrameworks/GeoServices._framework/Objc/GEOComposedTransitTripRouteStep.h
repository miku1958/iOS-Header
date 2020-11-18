//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOComposedTransitRouteStep.h>

@class GEOComposedTransitTripRouteLeg, GEOTransitVehicleInfo, NSArray, NSDate, NSTimeZone;
@protocol GEOTransitLine, GEOTransitSystem;

@interface GEOComposedTransitTripRouteStep : GEOComposedTransitRouteStep
{
    NSArray *_departureTimes;
    NSArray *_arrivalTimes;
    double _departureTimeIntervalMin;
    double _departureTimeIntervalMax;
    GEOTransitVehicleInfo *_transitVehicle;
    id<GEOTransitLine> _transitLine;
    id<GEOTransitSystem> _transitSystem;
    NSArray *_routeLineArtwork;
    BOOL _isRail;
    BOOL _isBus;
    BOOL _canPreloadTiles;
}

@property (readonly, nonatomic) NSDate *arrivalTime;
@property (readonly, nonatomic) NSTimeZone *arrivalTimeZone;
@property (readonly, nonatomic) NSArray *arrivalTimes; // @synthesize arrivalTimes=_arrivalTimes;
@property (readonly, nonatomic) BOOL canPreloadTilesForThisStep;
@property (readonly, nonatomic) NSDate *departureTime;
@property (readonly, nonatomic) double departureTimeIntervalMax; // @synthesize departureTimeIntervalMax=_departureTimeIntervalMax;
@property (readonly, nonatomic) double departureTimeIntervalMin; // @synthesize departureTimeIntervalMin=_departureTimeIntervalMin;
@property (readonly, nonatomic) NSTimeZone *departureTimeZone;
@property (readonly, nonatomic) NSArray *departureTimes; // @synthesize departureTimes=_departureTimes;
@property (readonly, nonatomic) BOOL isBus; // @synthesize isBus=_isBus;
@property (readonly, nonatomic) BOOL isRail; // @synthesize isRail=_isRail;
@property (readonly, nonatomic) NSArray *routeLineArtwork; // @synthesize routeLineArtwork=_routeLineArtwork;
@property (readonly, nonatomic) id<GEOTransitLine> transitLine; // @synthesize transitLine=_transitLine;
@property (readonly, nonatomic) id<GEOTransitSystem> transitSystem; // @synthesize transitSystem=_transitSystem;
@property (readonly, nonatomic) GEOTransitVehicleInfo *transitVehicle; // @synthesize transitVehicle=_transitVehicle;
@property (readonly, nonatomic) GEOComposedTransitTripRouteLeg *tripLeg;

- (void)dealloc;
- (id)description;
- (unsigned int)duration;
- (BOOL)hasDuration;
- (id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 step:(id)arg3 stepIndex:(unsigned long long)arg4 duration:(unsigned int)arg5 pointRange:(struct _NSRange)arg6;

@end

