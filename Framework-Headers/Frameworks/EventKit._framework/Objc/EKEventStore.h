//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <EventKit/EKDaemonConnection-Protocol.h>

@class EKAlarm, EKCalendar, EKDaemonConnection, NSArray, NSMutableDictionary, NSMutableSet, NSNumber, NSString, NSTimeZone;
@protocol OS_dispatch_queue;

@interface EKEventStore : NSObject <EKDaemonConnection>
{
    unsigned int _flags;
    NSMutableDictionary *_registeredObjects;
    NSMutableDictionary *_publicRegisteredObjects;
    NSMutableSet *_insertedObjects;
    NSMutableSet *_deletedObjects;
    NSMutableSet *_updatedObjects;
    NSNumber *_defaultTimedAlarmOffset;
    NSNumber *_defaultAllDayAlarmOffset;
    EKCalendar *_defaultCalendarForNewEvents;
    EKCalendar *_defaultCalendarForNewReminders;
    EKCalendar *_suggestedEventCalendar;
    EKDaemonConnection *_database;
    double _lastDatabaseNotificationTimestamp;
    NSTimeZone *_timeZone;
    NSMutableDictionary *_calendars;
    NSMutableDictionary *_sources;
    NSMutableSet *_objectsPendingCommit;
    NSObject<OS_dispatch_queue> *_calendarQueue;
    NSObject<OS_dispatch_queue> *_registeredQueue;
    NSObject<OS_dispatch_queue> *_unsavedChangesQueue;
    NSObject<OS_dispatch_queue> *_dbChangedQueue;
    NSMutableDictionary *_cachedValidatedEmails;
    NSArray *_delegateSources;
}

@property (strong, nonatomic) NSMutableDictionary *_cachedValidatedEmails; // @synthesize _cachedValidatedEmails;
@property (strong, nonatomic) NSMutableDictionary *_calendars; // @synthesize _calendars;
@property (strong, nonatomic) EKCalendar *_defaultCalendarForNewEvents; // @synthesize _defaultCalendarForNewEvents;
@property (strong, nonatomic) EKCalendar *_defaultCalendarForNewReminders; // @synthesize _defaultCalendarForNewReminders;
@property (strong, nonatomic) NSMutableDictionary *_sources; // @synthesize _sources;
@property (strong, nonatomic) EKCalendar *_suggestedEventCalendar; // @synthesize _suggestedEventCalendar;
@property (nonatomic) BOOL automaticLocationGeocodingAllowed;
@property (nonatomic) NSObject<OS_dispatch_queue> *calendarQueue; // @synthesize calendarQueue=_calendarQueue;
@property (readonly, nonatomic) NSArray *calendars;
@property (readonly) EKDaemonConnection *connection;
@property (strong, nonatomic) EKDaemonConnection *database; // @synthesize database=_database;
@property (nonatomic) NSObject<OS_dispatch_queue> *dbChangedQueue; // @synthesize dbChangedQueue=_dbChangedQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) EKAlarm *defaultAllDayAlarm;
@property (strong, nonatomic) NSNumber *defaultAllDayAlarmOffset; // @synthesize defaultAllDayAlarmOffset=_defaultAllDayAlarmOffset;
@property (readonly, nonatomic) EKCalendar *defaultCalendarForNewEvents;
@property (readonly, nonatomic) EKAlarm *defaultTimedAlarm;
@property (strong, nonatomic) NSNumber *defaultTimedAlarmOffset; // @synthesize defaultTimedAlarmOffset=_defaultTimedAlarmOffset;
@property (readonly, nonatomic) NSArray *delegateSources; // @synthesize delegateSources=_delegateSources;
@property (nonatomic) NSMutableSet *deletedObjects; // @synthesize deletedObjects=_deletedObjects;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *eventNotifications;
@property (readonly, nonatomic) NSString *eventStoreIdentifier;
@property (nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSArray *inboxRepliedSectionItems;
@property (nonatomic) NSMutableSet *insertedObjects; // @synthesize insertedObjects=_insertedObjects;
@property (nonatomic) double lastDatabaseNotificationTimestamp; // @synthesize lastDatabaseNotificationTimestamp=_lastDatabaseNotificationTimestamp;
@property (readonly, nonatomic) int notifiableEventCount;
@property (nonatomic) NSMutableSet *objectsPendingCommit; // @synthesize objectsPendingCommit=_objectsPendingCommit;
@property (nonatomic) NSMutableDictionary *publicRegisteredObjects; // @synthesize publicRegisteredObjects=_publicRegisteredObjects;
@property (nonatomic) NSMutableDictionary *registeredObjects; // @synthesize registeredObjects=_registeredObjects;
@property (nonatomic) NSObject<OS_dispatch_queue> *registeredQueue; // @synthesize registeredQueue=_registeredQueue;
@property (readonly, nonatomic) NSArray *reminderNotifications;
@property (nonatomic) BOOL showDeclinedEvents;
@property (readonly, nonatomic) NSArray *sources;
@property (readonly, nonatomic) EKCalendar *suggestedEventCalendar;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property (readonly, nonatomic) int unacknowledgedEventCount;
@property (nonatomic) NSObject<OS_dispatch_queue> *unsavedChangesQueue; // @synthesize unsavedChangesQueue=_unsavedChangesQueue;
@property (nonatomic) NSMutableSet *updatedObjects; // @synthesize updatedObjects=_updatedObjects;

+ (long long)authorizationStatusForEntityType:(unsigned long long)arg1;
+ (Class)classForEntityName:(id)arg1;
+ (Class)publicClassForEntityName:(id)arg1;
- (Class)_SGSuggestionsServiceClass;
- (void)_accessStatusChanged;
- (id)_addFetchedObjectWithID:(id)arg1;
- (void)_addObjectToPendingCommits:(id)arg1;
- (id)_allCalendars;
- (BOOL)_calendar:(id)arg1 supportsEntityType:(unsigned long long)arg2;
- (id)_calendarItemsMatchingPredicate:(id)arg1;
- (id)_calendarWithID:(id)arg1;
- (void)_databaseChangedExternally;
- (void)_deleteObject:(id)arg1;
- (id)_eventOccurrenceWithURI:(id)arg1;
- (id)_eventWithURI:(id)arg1 checkValid:(BOOL)arg2;
- (void)_forgetRegisteredObjects;
- (void)_insertObject:(id)arg1;
- (BOOL)_parseURI:(id)arg1 expectedScheme:(id)arg2 identifier:(id *)arg3 options:(id *)arg4;
- (id)_predicateForRemindersWithDate:(id)arg1 useAsCompletionDate:(BOOL)arg2 calendars:(id)arg3 limitToCompletedOrIncomplete:(BOOL)arg4 completed:(BOOL)arg5 includeDatesBefore:(BOOL)arg6 sortOrder:(int)arg7;
- (void)_protectedDataDidBecomeAvailable;
- (void)_refreshDASource:(id)arg1 isUserRequested:(BOOL)arg2;
- (void)_registerObject:(id)arg1;
- (void)_registerObjectImmediate:(id)arg1;
- (void)_requestAccessForEntityType:(unsigned long long)arg1;
- (void)_reregisterObject:(id)arg1 oldID:(id)arg2;
- (void)_saveWithoutNotify;
- (void)_trackModifiedObject:(id)arg1;
- (void)_unregisterObject:(id)arg1;
- (void)_validateObjectIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_waitOnSemaphore:(id)arg1;
- (void)acceptSuggestedEvent:(id)arg1;
- (void)alarmOccurrencesBetweenStartDate:(id)arg1 endDate:(id)arg2 inCalendars:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)alarmWithUUID:(id)arg1;
- (id)birthdayContactIdentifierForEvent:(id)arg1;
- (void)cacheValidationStatusForEmail:(id)arg1 status:(unsigned long long)arg2;
- (id)calendarItemWithIdentifier:(id)arg1;
- (id)calendarItemsWithExternalIdentifier:(id)arg1;
- (id)calendarWithExternalURI:(id)arg1;
- (id)calendarWithID:(id)arg1;
- (id)calendarWithIdentifier:(id)arg1;
- (id)calendarsForEntityType:(unsigned long long)arg1;
- (BOOL)canModifyCalendarDatabase;
- (BOOL)canModifySuggestedEventCalendar;
- (void)cancelFetchRequest:(id)arg1;
- (id)changesSinceSequenceNumber:(int)arg1;
- (id)closestCachedOccurrenceToDate:(double)arg1 forEventUID:(int)arg2;
- (BOOL)commit:(id *)arg1;
- (struct CGColor *)copyCGColorForNewCalendar;
- (int)countOfRemindersMatchingPredicate:(id)arg1;
- (void)daemonRestarted;
- (void)dealloc;
- (id)defaultCalendarForNewReminders;
- (BOOL)deleteCalendar:(id)arg1 forEntityType:(int)arg2 error:(id *)arg3;
- (void)deleteSuggestedEvent:(id)arg1;
- (id)doEvents:(id)arg1 haveOccurrencesAfterDate:(id)arg2;
- (id)earliestExpiringNotifiableEventEndDateAfterDate:(id)arg1 timeZone:(id)arg2;
- (unsigned long long)emailAddressValidationStatus:(id)arg1;
- (void)enumerateEventsMatchingPredicate:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)eventForUID:(id)arg1 occurrenceDate:(id)arg2;
- (id)eventForUID:(id)arg1 occurrenceDate:(id)arg2 checkValid:(BOOL)arg3;
- (id)eventWithIdentifier:(id)arg1;
- (id)eventWithUUID:(id)arg1;
- (id)eventWithUniqueId:(id)arg1;
- (id)eventWithUniqueId:(id)arg1 occurrenceDate:(id)arg2;
- (id)eventsMatchingPredicate:(id)arg1;
- (void)fetchChangedObjectIDsSinceToken:(long long)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (id)fetchEventsMatchingPredicate:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (BOOL)fetchProperties:(id)arg1 forReminders:(id)arg2;
- (id)fetchRemindersMatchingPredicate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)gatherLogs;
- (BOOL)hideCalendarsFromNotificationCenter:(id)arg1 error:(id *)arg2;
- (id)importICS:(id)arg1 intoCalendar:(id)arg2 options:(unsigned long long)arg3;
- (id)importICSData:(id)arg1 intoCalendar:(id)arg2 options:(unsigned long long)arg3;
- (void)importICSData:(id)arg1 intoCalendar:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;
- (id)initWithOptions:(unsigned int)arg1 path:(id)arg2;
- (id)insertNewEvent;
- (id)insertNewExceptionDateWithDate:(id)arg1;
- (id)insertNewReminder;
- (void)insertSuggestedEventCalendar;
- (id)inviteReplyNotifications;
- (BOOL)isDataProtected;
- (id)localSource;
- (void)locationBasedAlarmOccurrencesWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)markCalendarAlerted:(id)arg1;
- (void)markChangedObjectIDsConsumedUpToToken:(long long)arg1;
- (BOOL)markEventAlerted:(id)arg1;
- (BOOL)markInviteReplyNotificationAlerted:(id)arg1;
- (id)markNotificationsAlertedAndSave:(id)arg1;
- (BOOL)markResourceChangeAlerted:(id)arg1 error:(id *)arg2;
- (BOOL)moveDiagnosticsLogToCrashReporterFolder;
- (BOOL)objectWithIDExists:(id)arg1;
- (id)objectWithObjectID:(id)arg1;
- (id)occurrenceCacheGetOccurrencesForCalendars:(id)arg1;
- (id)occurrenceCacheGetOccurrencesForCalendars:(id)arg1 onDay:(double)arg2;
- (BOOL)occurrenceCacheOccurrencesAreBeingGenerated;
- (id)ownedSources;
- (id)predicateForAllRemindersDueBeforeOrOnDueDate:(id)arg1 calendars:(id)arg2;
- (id)predicateForAllRemindersWithDueDate:(id)arg1 calendars:(id)arg2;
- (id)predicateForCompletedRemindersWithCalendars:(id)arg1;
- (id)predicateForCompletedRemindersWithCompletionDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3;
- (id)predicateForCompletedRemindersWithDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3;
- (id)predicateForCompletedRemindersWithDueDateOrCompletionDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3;
- (id)predicateForEventCreatedFromSuggestionWithOpaqueKey:(id)arg1;
- (id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3;
- (id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3 loadDefaultProperties:(BOOL)arg4;
- (id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 eventUUID:(id)arg3 calendars:(id)arg4;
- (id)predicateForEventsWithStartDate:(id)arg1 title:(id)arg2 source:(id)arg3;
- (id)predicateForIncompleteRemindersDueBeforeOrOnDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3;
- (id)predicateForIncompleteRemindersWithDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3;
- (id)predicateForIncompleteRemindersWithDueDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3;
- (id)predicateForMasterEventsInCalendars:(id)arg1;
- (id)predicateForNotifiableEvents;
- (id)predicateForNotificationCenterVisibleEvents;
- (id)predicateForRemindersInCalendars:(id)arg1;
- (id)predicateForRemindersWithSearchTerm:(id)arg1;
- (id)predicateForRemindersWithTitle:(id)arg1 calendars:(id)arg2;
- (id)predicateForRemindersWithTitle:(id)arg1 listTitle:(id)arg2 limitToCompletedOrIncomplete:(BOOL)arg3 completed:(BOOL)arg4 dueAfter:(id)arg5 dueBefore:(id)arg6 searchTerm:(id)arg7 sortOrder:(int)arg8;
- (id)predicateForRemindersWithTitle:(id)arg1 listTitle:(id)arg2 limitToCompletedOrIncomplete:(BOOL)arg3 completed:(BOOL)arg4 dueAfter:(id)arg5 dueBefore:(id)arg6 searchTerm:(id)arg7 sortOrder:(int)arg8 maxResults:(unsigned long long)arg9;
- (id)predicateForTravelEventsInCalendars:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)predicateForUnacknowledgedEvents;
- (id)predicateForUnalertedEvents;
- (id)predicateForUpcomingEventsWithLimit:(int)arg1;
- (id)publicObjectWithObjectID:(id)arg1;
- (id)publicObjectWithPersistentObject:(id)arg1;
- (void)pushSpotlightUpdatesForCalendarItemUUIDs:(id)arg1;
- (int)readWriteCalendarCountForEntityType:(unsigned long long)arg1;
- (id)readWriteCalendarsForEntityType:(unsigned long long)arg1;
- (void)refreshSourcesIfNecessary;
- (void)refreshSourcesIfNecessary:(BOOL)arg1;
- (id)registerFetchedObjectWithID:(id)arg1;
- (id)registerFetchedObjectWithID:(id)arg1 withDefaultLoadedProperties:(id)arg2 inSet:(id)arg3;
- (BOOL)registerForDetailedChangeTracking:(id *)arg1;
- (oneway void)release;
- (id)reminderWithExternalURI:(id)arg1;
- (id)remindersMatchingPredicate:(id)arg1;
- (BOOL)removeCalendar:(id)arg1 commit:(BOOL)arg2 error:(id *)arg3;
- (BOOL)removeCalendar:(id)arg1 error:(id *)arg2;
- (BOOL)removeEvent:(id)arg1 span:(long long)arg2 commit:(BOOL)arg3 error:(id *)arg4;
- (BOOL)removeEvent:(id)arg1 span:(long long)arg2 error:(id *)arg3;
- (BOOL)removeInviteReplyNotification:(id)arg1 error:(id *)arg2;
- (BOOL)removeInviteReplyNotifications:(id)arg1 error:(id *)arg2;
- (BOOL)removeReminder:(id)arg1 commit:(BOOL)arg2 error:(id *)arg3;
- (BOOL)removeReminder:(id)arg1 error:(id *)arg2;
- (BOOL)removeResourceChange:(id)arg1 error:(id *)arg2;
- (BOOL)removeResourceChanges:(id)arg1 error:(id *)arg2;
- (BOOL)removeResourceChangesForCalendarItem:(id)arg1 error:(id *)arg2;
- (BOOL)removeSource:(id)arg1 error:(id *)arg2;
- (void)removeSuggestedEventCalendar;
- (void)requestAccessToEntityType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reset;
- (id)resourceChangesForEntityTypes:(unsigned long long)arg1;
- (void)rollback;
- (BOOL)saveCalendar:(id)arg1 commit:(BOOL)arg2 error:(id *)arg3;
- (BOOL)saveCalendar:(id)arg1 error:(id *)arg2;
- (BOOL)saveEvent:(id)arg1 span:(long long)arg2 commit:(BOOL)arg3 error:(id *)arg4;
- (BOOL)saveEvent:(id)arg1 span:(long long)arg2 error:(id *)arg3;
- (BOOL)saveReminder:(id)arg1 commit:(BOOL)arg2 error:(id *)arg3;
- (BOOL)saveReminder:(id)arg1 error:(id *)arg2;
- (BOOL)saveSource:(id)arg1 error:(id *)arg2;
- (id)scheduledTaskCacheFetchDaysAndTaskCounts;
- (id)scheduledTaskCacheFetchTasksOnDay:(id)arg1;
- (int)sequenceNumber;
- (void)setDefaultCalendarForNewEvents:(id)arg1;
- (void)setDefaultCalendarForNewReminders:(id)arg1;
- (BOOL)setInvitationStatus:(unsigned long long)arg1 forEvent:(id)arg2 error:(id *)arg3;
- (BOOL)setInvitationStatus:(unsigned long long)arg1 forEvents:(id)arg2 error:(id *)arg3;
- (void)setSourceAccountManagement:(int)arg1;
- (id)sharedCalendarInvitationsForEntityTypes:(unsigned long long)arg1;
- (id)sourceWithIdentifier:(id)arg1;
- (void)vehicleTriggerAlarmOccurrencesWithCompletion:(CDUnknownBlockType)arg1;

@end
