//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CPRecordStore;

struct CalDatabase {
    struct __CFRuntimeBase {
        unsigned long long _field1;
        unsigned char _field2[4];
        unsigned int _field3;
    } _field1;
    int _field2;
    struct CPRecordStore *_field3;
    struct CalEventOccurrenceCache *_field4;
    struct CalScheduledTaskCache *_field5;
    struct __CFDictionary *_field6;
    struct __CFDictionary *_field7;
    struct _opaque_pthread_mutex_t _field8;
    unsigned int _field9;
    unsigned int _field10;
    struct __CFArray *_field11;
    struct __CFString *_field12;
    struct __CFArray *_field13;
    int _field14;
    int _field15;
    struct __CFString *_field16;
    struct __CFString *_field17;
    int _field18;
    CDUnknownBlockType _field19;
    struct _opaque_pthread_mutex_t _field20;
    BOOL _field21;
    struct __CFArray *_field22;
    struct __CFArray *_field23;
    BOOL _field24;
    id _field25;
};

struct CalEventIdsSearchContext {
    struct __CFArray *_field1;
    struct __CFSet *_field2;
    struct __CFSet *_field3;
    BOOL *_field4;
    BOOL *_field5;
    struct CalDatabase *_field6;
};

struct CalEventOccurrenceCache;

struct CalEventOccurrenceSearchContext {
    struct __CFSet *_field1;
    struct __CFArray *_field2;
    struct __CFArray *_field3;
    struct __CFArray *_field4;
    BOOL *_field5;
    BOOL *_field6;
    double _field7;
    double _field8;
    int _field9;
    double _field10;
    unsigned int _field11;
    struct CalEventOccurrenceCache *_field12;
    CDUnknownFunctionPointerType _field13;
    void *_field14;
    int _field15;
    BOOL _field16;
    struct __CFString *_field17;
    double _field18;
    BOOL _field19;
    double _field20;
};

struct CalLocationIdsSearchContext {
    struct __CFArray *_field1;
    unsigned int _field2;
    BOOL *_field3;
    BOOL *_field4;
    struct CalDatabase *_field5;
};

struct CalParticipantIdsSearchContext {
    struct __CFArray *_field1;
    unsigned int _field2;
    BOOL *_field3;
    BOOL *_field4;
    struct CalDatabase *_field5;
};

struct CalScheduledTaskCache;

struct __CFArray;

struct __CFDictionary;

struct __CFSet;

struct __CFString;

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int maxAlarmsAllowed:1;
    unsigned int maxRecurrencesAllowed:1;
    unsigned int supportsAlarmTriggerIntervals:1;
    unsigned int supportsAlarmTriggerDates:1;
    unsigned int supportsAlarmsTriggeringAfterStartDate:1;
    unsigned int snoozeAlarmRequiresDetach:1;
    unsigned int organizerCanSeeAttendeeStatuses:1;
    unsigned int inviteesCanSeeAttendeeStatuses:1;
    unsigned int statusesAreAccurate:1;
    unsigned int supportsIncomingInvitations:1;
    unsigned int supportsOutgoingInvitations:1;
    unsigned int requiresOutgoingInvitationsInDefaultCalendar:1;
    unsigned int supportsInvitationModifications:1;
    unsigned int supportsEventForwarding:1;
    unsigned int supportsResponseComments:1;
    unsigned int deliverySourceOrExternalIDRequiredForResponse:1;
    unsigned int proposedStatusRequiredForResponse:1;
    unsigned int declinedStatusChangeRequiresNoPendingStatus:1;
    unsigned int eventDurationConstrainedToRecurrenceInterval:1;
    unsigned int alarmTriggerIntervalConstrainedToRecurrenceInterval:1;
    unsigned int occurrencesMustOccurOnSeparateDays:1;
    unsigned int futureStartDateLimitedToOccurrenceCacheBounds:1;
    unsigned int supportsRecurrencesOnDetachedEvents:1;
    unsigned int recurrencesShouldPinToMonthDays:1;
    unsigned int requiresAttendeeSearchInSingleAccount:1;
    unsigned int mustAcknowledgeMasterEvent:1;
    unsigned int canSetAvailability:1;
    unsigned int eventAvalabilityLimited:1;
    unsigned int requiresMSFormattedUID:1;
    unsigned int shouldCancelDeletedEvents:1;
    unsigned int shouldDeclineDeletedInvitations:1;
    unsigned int supportsStructuredLocations:1;
    unsigned int supportsReminderActions:1;
    unsigned int supportsReminderLocations:1;
    unsigned int supportsAlarmProximity:1;
    unsigned int allowsCalendarAddDeleteModify:1;
    unsigned int allowsTasks:1;
    unsigned int allowsEvents:1;
    unsigned int supportsURLField:1;
    unsigned int supportsAllDayDueDates:1;
    unsigned int supportsSharedCalendars:1;
    unsigned int isFacebook:1;
    unsigned int recurrenceSeriesMustIncludeMoreThanFirstOccurrence:1;
    unsigned int supportsPrivateEvents:1;
    unsigned int prohibitsPrivateEventsWithAttendees:1;
    unsigned int supportsAvailabilityRequests:1;
    unsigned int supportsIgnoringEventsInAvailabilityRequests:1;
    unsigned int supportsLocationDirectorySearches:1;
    unsigned int requiresSamePrivacyLevelAcrossRecurrenceSeries:1;
    unsigned int prohibitsMultipleMonthsInYearlyRecurrence:1;
    unsigned int prohibitsMultipleDaysInMonthlyRecurrence:1;
    unsigned int prohibitsYearlyRecurrenceInterval:1;
    unsigned int requiresOccurrencesConformToRecurrenceRule:1;
    unsigned int prohibitsDetachmentOnCommentChange:1;
    unsigned int allowsProposeNewTime:1;
    unsigned int prohibitsICSImport:1;
    unsigned int supportsAutoGeocodingStructuredLocations:1;
} CDStruct_b9f583c3;

typedef struct {
    int _field1;
    char _field2;
    char _field3;
    char _field4;
    char _field5;
    double _field6;
} CDStruct_79f9e052;

typedef struct {
    int _field1;
    int _field2;
} CDStruct_1ef3fb1f;

