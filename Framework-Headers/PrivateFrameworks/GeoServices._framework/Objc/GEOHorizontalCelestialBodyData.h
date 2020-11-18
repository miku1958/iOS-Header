//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GEOHorizontalCelestialBodyData : NSObject
{
    double _altitude;
    double _azimuth;
}

@property (readonly, nonatomic) double altitude; // @synthesize altitude=_altitude;
@property (readonly, nonatomic) double azimuth; // @synthesize azimuth=_azimuth;

- (void)_calcuateAzimuthandAltitudeForCoordinate:(CDStruct_c3b9c2ee)arg1 julianDay:(double)arg2 eclipticLongitude:(double)arg3 eclipticLatitude:(double)arg4 radius:(double)arg5;
- (id)initWithLocation:(CDStruct_c3b9c2ee)arg1 date:(id)arg2 body:(long long)arg3;

@end

