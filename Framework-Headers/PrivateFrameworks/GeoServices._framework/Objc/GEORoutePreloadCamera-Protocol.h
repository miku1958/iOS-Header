//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOComposedRoute, GEOTileKeyList;

@protocol GEORoutePreloadCamera <NSObject>
- (void)implicateTilesForCoordinate:(CDStruct_c3b9c2ee)arg1 route:(GEOComposedRoute *)arg2 nearestRoutePointIdx:(double)arg3 stepNearManeuever:(BOOL)arg4 into:(GEOTileKeyList *)arg5 stepSize:(double)arg6 maneuverSize:(double)arg7;
@end

