//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKFrozenReminderObject.h>

@class EKFrozenReminderStructuredLocation, NSArray, NSString, REMAlarm;

__attribute__((visibility("hidden")))
@interface EKFrozenReminderAlarm : EKFrozenReminderObject
{
    REMAlarm *_timeAlarm;
    REMAlarm *_locationAlarm;
}

@property (readonly) NSArray *alarms;
@property (readonly) NSString *externalID;
@property (readonly) EKFrozenReminderStructuredLocation *structuredLocation;
@property (readonly) NSArray *triggers;

+ (long long)ekAlarmProximityToEKAlarmProximity:(long long)arg1;
+ (Class)meltedClass;
+ (long long)remAlarmProximityToEKAlarmProximity:(long long)arg1;
+ (id)semanticIdentifierFromDateComponents:(id)arg1;
+ (id)semanticIdentifierFromREMAlarm:(id)arg1;
+ (id)triggersFromAbsoluteDate:(id)arg1 relativeOffset:(double)arg2 timeValuesRelevant:(BOOL)arg3 structuredLocation:(id)arg4 proximity:(long long)arg5;
+ (id)uniqueIdentifierForREMObject:(id)arg1;
- (void).cxx_destruct;
- (id)UUID;
- (BOOL)_applyChanges:(id)arg1 error:(id *)arg2;
- (BOOL)_applyChangesToSaveRequest:(id)arg1 error:(id *)arg2;
- (id)_locationAlarm;
- (id)_remStructuredLocation;
- (void)_setTimeAndLocationAlarms:(id)arg1;
- (id)_setTimeOrLocationAlarm:(id)arg1;
- (id)_timeAlarm;
- (id)absoluteDate;
- (id)initWithAlarms:(id)arg1 inStore:(id)arg2;
- (id)initWithAlarms:(id)arg1 inStore:(id)arg2 withChanges:(id)arg3;
- (id)initWithAlternateUniverseObject:(EKPersistentObject_556b3b22 *)arg1 inEventStore:(id)arg2 withUpdatedChildObjects:(id)arg3;
- (id)initWithREMObject:(id)arg1 inStore:(id)arg2 withChanges:(id)arg3;
- (BOOL)isDefaultAlarm;
- (id)modifiedStructuredLocation;
- (id)originalAlarm;
- (long long)proximity;
- (double)relativeOffset;
- (id)remObjectID;
- (id)semanticIdentifier;
- (id)uniqueIdentifier;
- (id)updatedAlarmWithLocation:(id)arg1;
- (id)updatedFrozenObjectWithChanges:(id)arg1 updatedChildren:(id)arg2;

@end
