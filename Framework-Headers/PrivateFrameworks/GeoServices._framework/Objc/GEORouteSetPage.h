//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEODirectionsRequest, GEODirectionsResponse, GEORouteSet, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface GEORouteSetPage : NSObject
{
    GEODirectionsRequest *_request;
    GEODirectionsResponse *_response;
    GEORouteSet *_routeSet;
    NSArray *_routes;
    NSArray *_routesAndContingencies;
    NSMutableDictionary *_composedRoutesDict;
    NSMutableDictionary *_routesDict;
    NSMutableDictionary *_constructedRouteDict;
    NSMutableDictionary *_routeConnectionTable;
    NSMutableDictionary *_routeUniquePointRangeDict;
    NSMutableDictionary *_alternateStartRoutesLookup;
    NSMutableArray *_contingentStartRoutes;
    NSMutableArray *_contingentMiddleRoutes;
    NSMutableArray *_contingentRoutes;
    GEOComposedRoute *_preferredRoute;
    BOOL _isNavigable;
    BOOL _lazyLoadingEnabled;
    long long _selectedRouteIndex;
}

@property (readonly, nonatomic) NSDictionary *alternateStartRoutesLookup;
@property (readonly, nonatomic) BOOL isNavigable;
@property (readonly, weak, nonatomic) GEOComposedRoute *preferredRoute; // @synthesize preferredRoute=_preferredRoute;
@property (readonly, nonatomic) GEODirectionsRequest *request; // @synthesize request=_request;
@property (readonly, nonatomic) GEODirectionsResponse *response; // @synthesize response=_response;
@property (weak, nonatomic) GEORouteSet *routeSet; // @synthesize routeSet=_routeSet;
@property (readonly, nonatomic) NSArray *routes; // @synthesize routes=_routes;
@property (readonly, nonatomic) NSArray *routesAndContingencies;

- (void).cxx_destruct;
- (void)_attachAlternateStartRoute:(id)arg1 toRouteID:(id)arg2;
- (void)_buildAllRouteTypes:(id)arg1;
- (id)_composedRouteForRoute:(id)arg1;
- (void)_createAlternateStartRoutesLookup;
- (void)_debugAddGuidanceEventsForRoute:(id)arg1 response:(id)arg2;
- (id)_lazyRoutesAtIndex:(unsigned long long)arg1 partial:(BOOL)arg2;
- (void)_setupDriveWalkRoutesForResponse:(id)arg1;
- (void)_setupTransitRoutesForResponse:(id)arg1;
- (void)_stitchRoutesFromArray:(id)arg1 addToRoutes:(id)arg2 includeDepartureRoutes:(BOOL)arg3;
- (unsigned long long)indexOfFullRoute:(id)arg1;
- (id)initWithRequest:(id)arg1 response:(id)arg2 routeSet:(id)arg3 shouldLazyLoad:(BOOL)arg4 selectedRouteIndex:(long long)arg5;
- (id)initWithReroute:(id)arg1 request:(id)arg2 response:(id)arg3 shouldLazyLoad:(BOOL)arg4;
- (id)routeAndFullLazyContingenciesAtIndex:(unsigned long long)arg1;
- (id)routeAndPartialLazyContingenciesAtIndex:(unsigned long long)arg1;

@end

