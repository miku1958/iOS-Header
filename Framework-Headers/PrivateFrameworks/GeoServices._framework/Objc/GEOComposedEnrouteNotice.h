//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEOComposedTrafficCamera, GEOEnrouteNotice, GEOLatLng, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface GEOComposedEnrouteNotice : NSObject
{
    GEOEnrouteNotice *_enrouteNotice;
    GEOComposedRoute *_route;
    NSArray *_guidanceEvents;
    CDStruct_3f2a7a20 _routeCoordinate;
}

@property (readonly, nonatomic) unsigned int groupIdentifier;
@property (readonly, nonatomic) NSArray *guidanceEvents; // @synthesize guidanceEvents=_guidanceEvents;
@property (readonly, nonatomic) BOOL hasGroupIdentifier;
@property (readonly, nonatomic) BOOL hasHighlightDistance;
@property (readonly, nonatomic) unsigned int highlightDistance;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) GEOLatLng *position; // @dynamic position;
@property (readonly, nonatomic) CDStruct_3f2a7a20 routeCoordinate;
@property (readonly, nonatomic) GEOComposedTrafficCamera *trafficCamera;

- (void).cxx_destruct;
- (id)description;
- (id)detailFormatForLocation:(id)arg1;
- (id)initWithEnrouteNotice:(id)arg1 onRoute:(id)arg2;
- (id)titleFormatForLocation:(id)arg1;

@end
