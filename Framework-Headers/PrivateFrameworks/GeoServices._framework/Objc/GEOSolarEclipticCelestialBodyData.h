//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GEOSolarEclipticCelestialBodyData : NSObject
{
    double _latitude;
    double _longitude;
}

@property (readonly, nonatomic) double latitude; // @synthesize latitude=_latitude;
@property (readonly, nonatomic) double longitude; // @synthesize longitude=_longitude;

- (id)initWithDate:(id)arg1 body:(long long)arg2;
- (id)initWithDate:(id)arg1 body:(long long)arg2 useHighPrecision:(BOOL)arg3;
- (id)initWithJulianDay:(double)arg1 body:(long long)arg2 useHighPrecision:(BOOL)arg3;

@end
