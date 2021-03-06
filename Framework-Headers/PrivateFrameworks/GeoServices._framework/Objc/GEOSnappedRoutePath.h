//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEOComposedRouteSection, GEOMapRequest, NSArray;

@interface GEOSnappedRoutePath : NSObject
{
    GEOComposedRoute *_route;
    GEOComposedRouteSection *_section;
    NSArray *_edges;
    GEOMapRequest *_edgeSearchRequest;
    struct __CFSet *_observers;
    struct unique_ptr<geo::RouteMapMatchingSection, std::__1::default_delete<geo::RouteMapMatchingSection>> _mapMatchingSection;
    BOOL _hasCompletedMapMatching;
    unsigned int _routeStartIndex;
    unsigned int _routeEndIndex;
    unsigned int _unsnappedPointCount;
    CDStruct_869f9c67 *_unsnappedPoints;
}

@property (readonly) NSArray *edges; // @synthesize edges=_edges;
@property (readonly) BOOL hasCompletedMapMatching;
@property (readonly) BOOL isMapMatched;
@property (readonly) BOOL isMapMatching;
@property (readonly) const struct RouteMapMatchingSection *mapMatchingSection;
@property (readonly) unsigned int routeEndIndex; // @synthesize routeEndIndex=_routeEndIndex;
@property (readonly) unsigned int routeStartIndex; // @synthesize routeStartIndex=_routeStartIndex;
@property (readonly, weak) GEOComposedRouteSection *section; // @synthesize section=_section;

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)_calculateEdgeLengthFrom:(const Matrix_8746f91e *)arg1 to:(const Matrix_8746f91e *)arg2 startCoord:(const struct PolylineCoordinate *)arg3 endCoord:(const struct PolylineCoordinate *)arg4;
- (void)_debugPrintEdge:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)hasObserver:(id)arg1;
- (id)initWithRoute:(id)arg1 section:(id)arg2 routeStartIndex:(unsigned int)arg3 routeEndIndex:(unsigned int)arg4;
- (void)matchWithDecoder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)removeObserver:(id)arg1;

@end

