//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedRouteSection, GEOSnappedRoutePath, VKPolylineOverlay;

__attribute__((visibility("hidden")))
@interface VKPolylinePath : NSObject
{
    VKPolylineOverlay *_overlay;
    GEOComposedRouteSection *_section;
    GEOSnappedRoutePath *_snappedPath;
    vector_d9a07fc0 _points;
    struct optional<std::__1::vector<double, std::__1::allocator<double>>> _distances;
    BOOL _distanceSnapping;
    struct PolylineCoordinate _routeStart;
    struct PolylineCoordinate _routeEnd;
    double _startDistance;
    unsigned char _trafficSpeed;
    double _sectionLengthScaleFactor;
}

@property (readonly) BOOL hasCompletedMapMatching;
@property (readonly) BOOL isMapMatched;
@property (readonly, nonatomic) unsigned int pointCount;
@property (readonly, nonatomic) Matrix_8746f91e *points;
@property (nonatomic) struct PolylineCoordinate routeEnd; // @synthesize routeEnd=_routeEnd;
@property (nonatomic) struct PolylineCoordinate routeStart; // @synthesize routeStart=_routeStart;
@property (readonly, nonatomic) GEOComposedRouteSection *section; // @synthesize section=_section;
@property (readonly, nonatomic) GEOSnappedRoutePath *snappedPath; // @synthesize snappedPath=_snappedPath;
@property (nonatomic) double startDistance; // @synthesize startDistance=_startDistance;
@property (nonatomic) unsigned char trafficSpeed; // @synthesize trafficSpeed=_trafficSpeed;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)assignPoints:(Matrix_8746f91e *)arg1 count:(unsigned int)arg2;
- (void)assignTo:(id)arg1 withSegment:(const struct TrafficSegment *)arg2;
- (void)dealloc;
- (id)description;
- (id)initWithOverlay:(id)arg1 section:(id)arg2;
- (id)initWithOverlay:(id)arg1 section:(id)arg2 routeStartIndex:(unsigned int)arg3 routeEndIndex:(unsigned int)arg4;
- (id)initWithOverlay:(id)arg1 snappedPath:(id)arg2;
- (void)splitTrafficSegmentationAndAddTo:(id)arg1 with:(struct TrafficSegmentsAlongRoute *)arg2 shouldSnap:(BOOL)arg3;
- (void)updateDistances:(BOOL)arg1;

@end

