//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface EKTTLEventTracker : NSObject
{
}

+ (id)_alertTypeMapping;
+ (id)_boolEnumMapping;
+ (id)_etaTypeMapping;
+ (id)_transportTypeMapping;
+ (id)_travelStateMapping;
+ (id)directionsEngagedEventTracker;
+ (id)directionsEngagedSharedCalendarSupportingTracker;
+ (id)eventFiredTTLAlertSharedCalendarSupportingTracker;
+ (id)eventFiredTTLAlertTracker;
+ (id)isTTLEnabledTracker;
+ (id)significantEventTracker;
+ (void)trackDirectionsEngagedForTTLAlertWithAlertType:(unsigned long long)arg1 transportType:(unsigned long long)arg2 etaType:(unsigned long long)arg3 hasSuggestedLocation:(BOOL)arg4 isOnSharedCalendar:(BOOL)arg5;
+ (void)trackEventFiredTTLAlertWithAlertType:(unsigned long long)arg1 transportType:(unsigned long long)arg2 etaType:(unsigned long long)arg3 travelState:(unsigned long long)arg4 hasSuggestedLocation:(BOOL)arg5 isOnSharedCalendar:(BOOL)arg6;
+ (void)trackIsTTLEnabled:(BOOL)arg1;
+ (void)trackSignificantEventHasSuggestedLocation:(BOOL)arg1 isOnSharedCalendar:(BOOL)arg2;
+ (void)trackTTLCandidateEventHasSuggestedLocation:(BOOL)arg1 isOnSharedCalendar:(BOOL)arg2;
+ (id)ttlCandidateEventTracker;

@end

