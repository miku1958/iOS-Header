//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKPersistentObject.h>

@class EKPersistentAttendee, EKPersistentCalendar, EKPersistentLocation, EKPersistentOrganizer, NSData, NSDate, NSSet, NSString, NSTimeZone, NSURL;

__attribute__((visibility("hidden")))
@interface EKPersistentCalendarItem : EKPersistentObject
{
}

@property (copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *UUID;
@property (copy, nonatomic) NSURL *action;
@property (copy, nonatomic) NSSet *alarms;
@property (nonatomic, getter=isAllDay) BOOL allDay;
@property (copy, nonatomic) NSData *appLink;
@property (copy, nonatomic) NSSet *attachments;
@property (copy, nonatomic) NSSet *attendees;
@property (strong, nonatomic) EKPersistentCalendar *calendar;
@property (copy, nonatomic) NSString *calendarScale;
@property (copy, nonatomic) EKPersistentLocation *clientLocation;
@property (copy, nonatomic) NSDate *creationDate;
@property (nonatomic, getter=isDefaultAlarmRemoved) BOOL defaultAlarmRemoved;
@property (readonly, nonatomic, getter=isDetached) BOOL detached;
@property (copy, nonatomic) NSSet *detachedItems;
@property (copy, nonatomic) NSTimeZone *endTimeZone;
@property (copy, nonatomic) NSSet *exceptionDates;
@property (copy, nonatomic) NSData *externalData;
@property (copy, nonatomic) NSString *externalID;
@property (readonly, nonatomic) BOOL hasAlarms;
@property (readonly, nonatomic) BOOL hasAttendees;
@property (readonly, nonatomic) BOOL hasNotes;
@property (readonly, nonatomic) BOOL hasRecurrenceRules;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (copy, nonatomic) EKPersistentLocation *location;
@property (copy, nonatomic) NSString *notes;
@property (strong, nonatomic) EKPersistentOrganizer *organizer;
@property (strong, nonatomic) EKPersistentCalendarItem *originalItem;
@property (copy, nonatomic) NSDate *participationStatusModifiedDate;
@property (nonatomic) int priority;
@property (copy, nonatomic) NSSet *recurrenceRules;
@property (strong, nonatomic) EKPersistentAttendee *selfAttendee;
@property (readonly, nonatomic) long long selfParticipantStatus;
@property (nonatomic) int sequence;
@property (readonly, nonatomic) int sequenceNumber;
@property (copy, nonatomic) NSString *sharedItemCreatedByDisplayName;
@property (copy, nonatomic) NSString *sharedItemCreatedByEmailAddress;
@property (copy, nonatomic) NSString *sharedItemCreatedByFirstName;
@property (copy, nonatomic) NSString *sharedItemCreatedByLastName;
@property (copy, nonatomic) NSDate *sharedItemCreatedDate;
@property (copy, nonatomic) NSTimeZone *sharedItemCreatedTimeZone;
@property (copy, nonatomic) NSString *sharedItemModifiedByDisplayName;
@property (copy, nonatomic) NSString *sharedItemModifiedByEmailAddress;
@property (copy, nonatomic) NSString *sharedItemModifiedByFirstName;
@property (copy, nonatomic) NSString *sharedItemModifiedByLastName;
@property (copy, nonatomic) NSDate *sharedItemModifiedDate;
@property (copy, nonatomic) NSTimeZone *sharedItemModifiedTimeZone;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) EKPersistentLocation *startLocation;
@property (copy, nonatomic) NSTimeZone *startTimeZone;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *uniqueID;

+ (id)defaultPropertiesToLoad;
+ (id)relations;
- (void)addAlarm:(id)arg1;
- (void)addAttachment:(id)arg1;
- (void)addAttendee:(id)arg1;
- (void)addDetachedItem:(id)arg1;
- (void)addExceptionDate:(id)arg1;
- (void)addRecurrenceRule:(id)arg1;
- (int)attendeeCount;
- (void)deleteSelfAndDetached;
- (id)exportToICS;
- (id)externalModificationTag;
- (BOOL)hasAttachments;
- (id)init;
- (void)primitiveValueChangedForKey:(id)arg1;
- (void)removeAlarm:(id)arg1;
- (void)removeAttachment:(id)arg1;
- (void)removeAttendee:(id)arg1;
- (void)removeDetachedItem:(id)arg1;
- (void)removeExceptionDate:(id)arg1;
- (void)removeRecurrenceRule:(id)arg1;
- (void)setExternalModificationTag:(id)arg1;
- (BOOL)validate:(id *)arg1;

@end
