//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGEventGeocode : NSObject
{
}

+ (id)dateForUTCDate:(id)arg1 withTimeZone:(id)arg2;
+ (id)geocodeEvent:(id)arg1;
+ (void)geocodeEvent:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)geocodeLocation:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (BOOL)isGeocodeCandidate:(id)arg1;
+ (BOOL)isGeocodeCandidateLocation:(id)arg1 forEvent:(id)arg2;
+ (BOOL)locationIsGeocoded:(id)arg1;

@end

