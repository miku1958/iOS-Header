//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PersonalizationPortraitInternals/PPConnectionsSource.h>

#import <PersonalizationPortraitInternals/PPConnectionsLocationSource-Protocol.h>

@class NSString, PPLocalEventStore;

@interface PPConnectionsCalendarSource : PPConnectionsSource <PPConnectionsLocationSource>
{
    PPLocalEventStore *_localEventStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)locationLabelFromEvent:(id)arg1;
+ (id)locationNameFromEvent:(id)arg1;
+ (id)locationValueFromEvent:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)ekEventWithExternalID:(id)arg1;
- (id)identifier;
- (id)init;
- (BOOL)isCalendarEventEligibleForLocationPrediction:(id)arg1;
- (id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(unsigned long long)arg4 consumer:(unsigned long long)arg5 explanationSet:(id)arg6;
- (id)upcomingCalendarEventsOfInterestFrom:(id)arg1 lookaheadTime:(double)arg2;

@end
