//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOComposedRoutePortion-Protocol.h>
#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOComposedRoute, GEOPBTransitStop, NSArray, NSString;

@interface GEOComposedRouteSegment : NSObject <NSSecureCoding, GEOComposedRoutePortion>
{
    GEOComposedRoute *_composedRoute;
    long long _type;
    struct _NSRange _pointRange;
    struct _NSRange _stepRange;
    unsigned int _distance;
    NSArray *_composedGuidanceEvents;
    double _expectedTime;
}

@property (readonly, nonatomic) NSArray *composedGuidanceEvents; // @synthesize composedGuidanceEvents=_composedGuidanceEvents;
@property (weak, nonatomic) GEOComposedRoute *composedRoute; // @synthesize composedRoute=_composedRoute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned int distance; // @synthesize distance=_distance;
@property (readonly, nonatomic) unsigned int endPointIndex;
@property (readonly, nonatomic) unsigned long long endStepIndex;
@property (readonly, nonatomic) GEOPBTransitStop *endingTransitStop;
@property (readonly, nonatomic) double expectedTime; // @synthesize expectedTime=_expectedTime;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long numberOfTransitStops;
@property (readonly, nonatomic) unsigned int pointCount;
@property (readonly, nonatomic) struct _NSRange pointRange; // @synthesize pointRange=_pointRange;
@property (readonly, nonatomic) unsigned int startPointIndex;
@property (readonly, nonatomic) unsigned long long startStepIndex;
@property (readonly, nonatomic) GEOPBTransitStop *startingTransitStop;
@property (readonly, nonatomic) unsigned long long stepCount;
@property (readonly, nonatomic) struct _NSRange stepRange; // @synthesize stepRange=_stepRange;
@property (readonly, nonatomic) NSArray *steps;
@property (readonly) Class superclass;
@property (readonly, nonatomic) struct _NSRange transitStepRange;
@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)_MapsCarPlay_isEqual:(id)arg1;
- (BOOL)contains:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithComposedRoute:(id)arg1 routeSegmentType:(long long)arg2 stepRange:(struct _NSRange)arg3 pointRange:(struct _NSRange)arg4;
- (double)remainingDistanceAlongSegmentFromStepIndex:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2;
- (double)remainingTimeAlongSegmentFromStepIndex:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2;

@end

