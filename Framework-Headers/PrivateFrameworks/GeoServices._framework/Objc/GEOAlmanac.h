//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOAlmanacRiseTransitSet, NSDate;

@interface GEOAlmanac : NSObject
{
    GEOAlmanacRiseTransitSet *_previousRiseTransitSet;
    GEOAlmanacRiseTransitSet *_currentRiseTransitSet;
    GEOAlmanacRiseTransitSet *_nextRiseTransitSet;
}

@property (readonly, nonatomic) BOOL isDayLight;
@property (readonly, nonatomic) NSDate *nextSunrise;
@property (readonly, nonatomic) NSDate *nextSunset;
@property (readonly, nonatomic) NSDate *nextTransit;
@property (readonly, nonatomic) NSDate *previousSunrise;
@property (readonly, nonatomic) NSDate *previousSunset;
@property (readonly, nonatomic) NSDate *previousTransit;
@property (readonly, nonatomic) NSDate *sunrise;
@property (readonly, nonatomic) NSDate *sunset;
@property (readonly, nonatomic) NSDate *transit;

- (void).cxx_destruct;
- (id)_newRiseTransitSetForLocation:(CDStruct_c3b9c2ee)arg1 julianDay:(double)arg2 altitude:(double)arg3;
- (void)calculateAstronomicalTimeForLocation:(CDStruct_c3b9c2ee)arg1;
- (void)calculateAstronomicalTimeForLocation:(CDStruct_c3b9c2ee)arg1 altitudeInDegrees:(double)arg2;
- (void)calculateAstronomicalTimeForLocation:(CDStruct_c3b9c2ee)arg1 date:(id)arg2 altitudeInDegrees:(double)arg3;
- (void)calculateAstronomicalTimeForLocation:(CDStruct_c3b9c2ee)arg1 time:(double)arg2;
- (void)calculateAstronomicalTimeForLocation:(CDStruct_c3b9c2ee)arg1 time:(double)arg2 altitudeInDegrees:(double)arg3;
- (void)calculateGeocentricDirectionForSunX:(double *)arg1 Y:(double *)arg2 Z:(double *)arg3;
- (void)calculateGeocentricDirectionForSunX:(double *)arg1 Y:(double *)arg2 Z:(double *)arg3 date:(id)arg4;
- (BOOL)isDayLightForDate:(id)arg1;
- (BOOL)isDayLightForTime:(double)arg1;
- (id)sortedTimesForDate:(id)arg1;

@end

