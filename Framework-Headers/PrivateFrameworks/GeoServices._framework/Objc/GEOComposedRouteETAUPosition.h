//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GEOComposedRouteETAUPosition : NSObject
{
    CDStruct_3f2a7a20 _routeCoordinate;
    double _timeSinceLastUpdate;
}

@property (readonly, nonatomic) CDStruct_3f2a7a20 routeCoordinate; // @synthesize routeCoordinate=_routeCoordinate;
@property (readonly, nonatomic) double timeSinceLastUpdate; // @synthesize timeSinceLastUpdate=_timeSinceLastUpdate;

- (long long)compare:(id)arg1;
- (id)initWithComposedRoute:(id)arg1 andUpdateLocation:(id)arg2 offset:(double)arg3;

@end
