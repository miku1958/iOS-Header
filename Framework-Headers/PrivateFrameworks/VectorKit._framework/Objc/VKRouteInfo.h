//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, NSArray, VKRouteEtaDescription;

@interface VKRouteInfo : NSObject
{
    GEOComposedRoute *_route;
    VKRouteEtaDescription *_etaDescription;
    NSArray *_waypoints;
    BOOL _hasFocus;
}

@property (strong, nonatomic) VKRouteEtaDescription *etaDescription; // @synthesize etaDescription=_etaDescription;
@property (nonatomic) BOOL hasFocus; // @synthesize hasFocus=_hasFocus;
@property (readonly, nonatomic) BOOL hasRouteEta;
@property (readonly, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
@property (readonly, nonatomic) NSArray *waypoints; // @synthesize waypoints=_waypoints;

- (void)dealloc;
- (id)initWithComposedRoute:(id)arg1 etaDescription:(id)arg2;
- (id)initWithComposedRoute:(id)arg1 etaText:(id)arg2;

@end

