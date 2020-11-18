//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNTTLEventTracker-Protocol.h>

@interface CALNEKTTLEventTracker : NSObject <CALNTTLEventTracker>
{
}

+ (id)sharedInstance;
- (void)trackDirectionsEngagedForTTLAlertWithTransportType:(unsigned long long)arg1 etaType:(unsigned long long)arg2 hasSuggestedLocation:(BOOL)arg3 isOnSharedCalendar:(BOOL)arg4;
- (void)trackEmailEngagedForTTLAlertWithTransportType:(unsigned long long)arg1 etaType:(unsigned long long)arg2 hasSuggestedLocation:(BOOL)arg3 isOnSharedCalendar:(BOOL)arg4;
- (void)trackEventFiredTTLAlertWithAlertType:(unsigned long long)arg1 transportType:(unsigned long long)arg2 etaType:(unsigned long long)arg3 travelState:(unsigned long long)arg4 hasSuggestedLocation:(BOOL)arg5 isOnSharedCalendar:(BOOL)arg6;

@end
