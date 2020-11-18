//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEORouteMatcher.h>

@class GEOMapAccess, GEOMotionContext, NSArray;

@interface GEOTransitRouteMatcher : GEORouteMatcher
{
    GEOMapAccess *_mapAccess;
    GEOMotionContext *_motionContext;
    NSArray *_stationsOnRoute;
    NSArray *_routeMatchUpdaters;
    NSArray *_stepRanges;
    double _distanceToClosestWalkingSegment;
}

@property (readonly, nonatomic) double distanceToClosestWalkingSegment; // @synthesize distanceToClosestWalkingSegment=_distanceToClosestWalkingSegment;

- (void)_considerCandidateMatch:(id)arg1;
- (void)_finishRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;
- (void)_insertUpdater:(id)arg1 into:(id)arg2;
- (double)_scoreModifierForStep:(id)arg1 previousStep:(id)arg2;
- (BOOL)_shouldConsiderCourseForLocation:(id)arg1;
- (void)_startRouteMatch;
- (id)_stepForPointIndex:(unsigned int)arg1 previousStep:(id)arg2;
- (BOOL)_stepsInSameRange:(id)arg1 nextStep:(id)arg2;
- (void)dealloc;
- (id)initWithRoute:(id)arg1 motionContext:(id)arg2;
- (BOOL)isStationCoordinateOnRoute:(CDStruct_c3b9c2ee)arg1;
- (id)mapAccess;
- (id)motionContext;
- (id)route;

@end

