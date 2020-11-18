//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKObject.h>

@class EKAttendee, EKCalendar, EKOrganizer, EKStructuredLocation, NSArray, NSDate, NSString, NSTimeZone, NSURL, NSUserActivity;

@interface EKCalendarItem : EKObject
{
    BOOL _haveCachedActionsState;
    unsigned long long _actionsStateCachedValue;
}

@property (copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *UUID;
@property (copy, nonatomic) NSURL *action;
@property (readonly, nonatomic) unsigned long long actionsState;
@property (copy, nonatomic) NSArray *alarms;
@property (copy, nonatomic) NSArray *allAlarms;
@property (nonatomic, getter=isAllDay) BOOL allDay;
@property (readonly, nonatomic) BOOL allowsAlarmModifications;
@property (readonly, nonatomic) BOOL allowsAttendeeModifications;
@property (readonly, nonatomic) BOOL allowsCalendarModifications;
@property (readonly, nonatomic) BOOL allowsRecurrenceModifications;
@property (strong, nonatomic) NSUserActivity *appLink;
@property (readonly, nonatomic) NSArray *attachments;
@property (readonly, nonatomic) NSArray *attendees;
@property (strong, nonatomic) EKCalendar *calendar;
@property (readonly, nonatomic) NSString *calendarItemExternalIdentifier;
@property (readonly, nonatomic) NSString *calendarItemIdentifier;
@property (nonatomic) NSString *calendarScale;
@property (copy, nonatomic) EKStructuredLocation *clientLocation;
@property (readonly, nonatomic) NSDate *creationDate;
@property (nonatomic, getter=isDefaultAlarmRemoved) BOOL defaultAlarmRemoved;
@property (copy, nonatomic) NSTimeZone *endTimeZone;
@property (copy, nonatomic) NSString *externalID;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (readonly, nonatomic) NSURL *externalURI;
@property (readonly, nonatomic) BOOL hasAlarms;
@property (readonly, nonatomic) BOOL hasAttendees;
@property (readonly, nonatomic) BOOL hasNotes;
@property (readonly, nonatomic) BOOL hasRecurrenceRules;
@property (readonly, nonatomic) BOOL isEditable;
@property (readonly, nonatomic) BOOL isExternallyOrganizedInvitation;
@property (readonly, nonatomic) BOOL isFloating;
@property (readonly, nonatomic) BOOL isOrganizedBySharedCalendarOwner;
@property (readonly, nonatomic) BOOL isSelfOrganized;
@property (readonly, nonatomic) BOOL isSelfOrganizedInvitation;
@property (readonly, nonatomic) NSDate *lastModifiedDate;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *notes;
@property (strong, nonatomic) EKOrganizer *organizer;
@property (readonly, strong, nonatomic) EKCalendarItem *originalItem;
@property (readonly, nonatomic) EKStructuredLocation *preferredLocation;
@property (nonatomic) unsigned long long priority;
@property (copy, nonatomic) NSArray *recurrenceRules;
@property (readonly, nonatomic) BOOL requiresDetach;
@property (strong, nonatomic) EKAttendee *selfAttendee; // @dynamic selfAttendee;
@property (readonly, nonatomic) long long selfParticipantStatus;
@property (copy, nonatomic) NSString *sharedItemCreatedByDisplayName;
@property (copy, nonatomic) NSString *sharedItemCreatedByEmailAddress; // @dynamic sharedItemCreatedByEmailAddress;
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
@property (copy, nonatomic) EKStructuredLocation *startLocation;
@property (copy, nonatomic) NSTimeZone *startTimeZone;
@property (copy, nonatomic) EKStructuredLocation *structuredLocation;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (copy, nonatomic) NSString *title;

- (id)_alarmsRelation;
- (id)_attachmentsRelation;
- (id)_attendeesRelation;
- (id)_clientLocationRelation;
- (BOOL)_excludeAlarmDueToConnectionTrigger:(id)arg1;
- (id)_locationRelation;
- (void)_moveToCalendarInternal:(id)arg1;
- (id)_organizerRelation;
- (id)_persistentItem;
- (id)_recurrencesRelation;
- (id)_selfAttendeeRelation;
- (id)_startLocationRelation;
- (void)addAlarm:(id)arg1;
- (void)addAttendee:(id)arg1;
- (void)addRecurrenceRule:(id)arg1;
- (BOOL)allowsSpansOtherThanThisEvent;
- (BOOL)canMoveToCalendar:(id)arg1 fromCalendar:(id)arg2 error:(id *)arg3;
- (id)description;
- (id)findOriginalAlarmStartingWith:(id)arg1;
- (BOOL)isAlarmAcknowledgedPropertyDirty;
- (id)lazyLoadRelationForKey:(id)arg1;
- (void)moveToCalendar:(id)arg1;
- (BOOL)rebase;
- (void)removeAcknowledgedSnoozedAlarms;
- (void)removeAlarm:(id)arg1;
- (void)removeAllSnoozedAlarms;
- (void)removeAttendee:(id)arg1;
- (void)removeRecurrenceRule:(id)arg1;
- (int)sequenceNumber;
- (void)setAttendees:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setLastModifiedDate:(id)arg1;
- (void)setSharedItemCreatedByAddress:(id)arg1;
- (void)snoozeAlarm:(id)arg1 withLocation:(id)arg2 proximity:(long long)arg3;
- (void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2;
- (id)startDateForRecurrence;
- (id)suggestionInfo;
- (void)updatePersistentObject;
- (void)updatePersistentObjectSkippingProperties:(id)arg1;
- (void)updateWithAppLink:(id)arg1 usedSelectedText:(BOOL *)arg2;
- (BOOL)validate:(id *)arg1;

@end

