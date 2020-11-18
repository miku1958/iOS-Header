//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestions/NSObject-Protocol.h>

@class NSArray, NSDate, NSTimeZone;

@protocol SGEventForGeocode <NSObject>
- (NSDate *)geocodeEndDate;
- (NSTimeZone *)geocodeEndTimeZone;
- (NSArray *)geocodeLocations;
- (NSDate *)geocodeStartDate;
- (NSTimeZone *)geocodeStartTimeZone;
- (id)geocodedEventWithStartDate:(NSDate *)arg1 startTimeZone:(NSTimeZone *)arg2 endDate:(NSDate *)arg3 endTimeZone:(NSTimeZone *)arg4 locations:(NSArray *)arg5;
@end
