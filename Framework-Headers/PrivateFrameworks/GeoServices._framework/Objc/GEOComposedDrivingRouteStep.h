//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOComposedRouteStep.h>

@interface GEOComposedDrivingRouteStep : GEOComposedRouteStep
{
    int _drivingSide;
}

@property (readonly, nonatomic) int drivingSide; // @synthesize drivingSide=_drivingSide;

- (id)initWithComposedRoute:(id)arg1 GEOStep:(id)arg2 stepIndex:(unsigned long long)arg3 pointRange:(struct _NSRange)arg4 maneuverPointRange:(struct _NSRange)arg5;

@end

