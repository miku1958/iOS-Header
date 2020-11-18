//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOComposedRoute, VKRouteEtaDescription;

@interface VKRouteInfo : NSObject
{
    GEOComposedRoute *_route;
    VKRouteEtaDescription *_etaDescription;
}

@property (strong, nonatomic) VKRouteEtaDescription *etaDescription; // @synthesize etaDescription=_etaDescription;
@property (readonly, nonatomic) BOOL hasRouteEta;
@property (readonly, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;

- (void)dealloc;
- (id)initWithComposedRoute:(id)arg1 etaDescription:(id)arg2;
- (id)initWithComposedRoute:(id)arg1 etaText:(id)arg2;

@end

