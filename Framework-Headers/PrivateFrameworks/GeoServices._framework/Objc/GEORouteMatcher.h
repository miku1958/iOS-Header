//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOComposedRoute;

@interface GEORouteMatcher : NSObject
{
    GEOComposedRoute *_route;
}

- (id)_candidateForSegment:(const CDStruct_4d790470 *)arg1 location:(id)arg2;
- (void)_considerCandidateMatch:(id)arg1;
- (void)_finishRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;
- (void)_forEachSegmentNearLocation:(id)arg1 previousRouteMatch:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (double)_scoreModifierForStep:(id)arg1 previousStep:(id)arg2;
- (BOOL)_shouldConsiderCourseForLocation:(id)arg1;
- (void)_startRouteMatch;
- (void)dealloc;
- (id)initWithRoute:(id)arg1;
- (id)matchToClosestPointOnRouteWithLocation:(id)arg1;
- (id)matchToRouteWithLocation:(id)arg1;
- (id)matchToRouteWithLocation:(id)arg1 previousRouteMatch:(id)arg2;

@end

