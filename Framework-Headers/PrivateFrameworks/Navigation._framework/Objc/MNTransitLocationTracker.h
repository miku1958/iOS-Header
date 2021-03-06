//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/MNSteppingLocationTracker.h>

@class GEORoadMatcher, GEOTransitRouteMatcher, MNLocation, NSDate;

__attribute__((visibility("hidden")))
@interface MNTransitLocationTracker : MNSteppingLocationTracker
{
    GEOTransitRouteMatcher *_transitRouteMatcher;
    GEORoadMatcher *_roadMatcher;
    NSDate *_lastLocationTimestamp;
    NSDate *_lastAccurateLocationDate;
    MNLocation *_lastMatchedLocation;
    NSDate *_startDate;
    BOOL _hasArrived;
    BOOL _debugSnapToTransitLines;
}

@property (nonatomic) BOOL debugSnapToTransitLines; // @synthesize debugSnapToTransitLines=_debugSnapToTransitLines;

- (void).cxx_destruct;
- (id)_correctedLocationForLocation:(id)arg1;
- (BOOL)_isInaccurateLocation:(id)arg1;
- (id)_locationForInaccurateLocation:(id)arg1;
- (id)_matchedLocationForLocation:(id)arg1;
- (id)_roadMatchForOffRouteLocation:(id)arg1 routeMatch:(id)arg2;
- (double)_timeToDisplayStaleGPSLocation;
- (id)initWithNavigationSession:(id)arg1;
- (void)startTracking;
- (void)stopTracking;
- (int)transportType;

@end

