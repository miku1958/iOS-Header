//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VectorKit/GEOComposedRouteObserver-Protocol.h>
#import <VectorKit/VKOverlay-Protocol.h>

@class GEOComposedRoute, GEOMapRegion, NSString, VKRouteLine, VKTrafficSegmentsAlongRoute;
@protocol VKPolylineOverlayRouteRibbonObserver;

@interface VKPolylineOverlay : NSObject <VKOverlay, GEOComposedRouteObserver>
{
    struct __CFSet *_observers;
    GEOComposedRoute *_composedRoute;
    BOOL _isReadyForSnapping;
    struct LabelExternalObjectsModerator *_labelExternalObjectsModerator;
    VKRouteLine *_routeRibbon;
    id<VKPolylineOverlayRouteRibbonObserver> _routeRibbonObserver;
    double _trafficTimeStamp;
    VKTrafficSegmentsAlongRoute *_trafficSegments;
}

@property (readonly, nonatomic) GEOMapRegion *boundingMapRegion;
@property (readonly, nonatomic) GEOComposedRoute *composedRoute; // @synthesize composedRoute=_composedRoute;
@property (readonly, nonatomic) BOOL containsTransit;
@property (readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct LabelExternalObjectsModerator *labelExternalObjectsModerator; // @synthesize labelExternalObjectsModerator=_labelExternalObjectsModerator;
@property (nonatomic) VKRouteLine *routeRibbon; // @synthesize routeRibbon=_routeRibbon;
@property (nonatomic) id<VKPolylineOverlayRouteRibbonObserver> routeRibbonObserver; // @synthesize routeRibbonObserver=_routeRibbonObserver;
@property (readonly) Class superclass;
@property (readonly, nonatomic) VKTrafficSegmentsAlongRoute *trafficSegments; // @synthesize trafficSegments=_trafficSegments;
@property (readonly, nonatomic) double trafficTimeStamp; // @synthesize trafficTimeStamp=_trafficTimeStamp;

- (void)_setNeedsLayout;
- (void)_updateTraffic;
- (void)addObserver:(id)arg1;
- (void)composedRoute:(id)arg1 changedSelectedRideInClusteredLeg:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)composedRoute:(id)arg1 selectedSections:(id)arg2 deselectedSections:(id)arg3;
- (void)composedRouteUpdatedSnappedPaths:(id)arg1;
- (void)composedRouteUpdatedTraffic:(id)arg1;
- (void)dealloc;
- (id)getPathsForPainter:(id)arg1 renderRegion:(id)arg2 shouldSnapToRoads:(BOOL)arg3 verifySnapping:(BOOL)arg4 snappingCompletionHandler:(CDUnknownBlockType)arg5;
- (id)initWithComposedRoute:(id)arg1;
- (BOOL)isSnappingForSceneTiles;
- (void)removeObserver:(id)arg1;
- (struct _NSRange)sectionRangeForBounds:(CDStruct_d2b197d1)arg1;
- (void)updateLabelExternalObjectsInRenderRegion:(id)arg1;

@end

