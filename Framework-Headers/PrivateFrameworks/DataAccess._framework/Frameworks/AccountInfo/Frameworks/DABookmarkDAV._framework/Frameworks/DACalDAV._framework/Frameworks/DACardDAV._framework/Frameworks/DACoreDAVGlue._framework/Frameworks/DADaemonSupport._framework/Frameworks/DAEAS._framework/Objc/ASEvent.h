//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASChangedCollectionLeaf.h>

#import <DAEAS/DADataElement-Protocol.h>
#import <DAEAS/NSSecureCoding-Protocol.h>

@class ASEventUID, ASLocation, ASRecurrence, ASTimeZone, NSArray, NSCalendarDate, NSDate, NSNumber, NSString;

@interface ASEvent : ASChangedCollectionLeaf <NSSecureCoding, DADataElement>
{
    BOOL _bodyTruncated;
    BOOL _doNotSendBody;
    BOOL _calculateNextStatusAsIfMeetingRequest;
    BOOL _shouldUpdateStatus;
    BOOL _cachedOrganizerIsSelf;
    BOOL _haveCheckedOrganizerEmail;
    BOOL _isAttendeeUpdateOnly;
    BOOL _isDTStampUpdateOnly;
    int _meetingResponseToEmailAbout;
    void *_calEvent;
    ASTimeZone *_timeZone;
    NSNumber *_allDayEvent;
    NSString *_body;
    NSNumber *_busyStatus;
    NSArray *_categories;
    NSDate *_dTStamp;
    NSDate *_endTime;
    ASLocation *_location;
    NSNumber *_meetingStatus;
    NSString *_organizerEmail;
    NSString *_organizerName;
    NSNumber *_reminderMinsBefore;
    NSNumber *_sensitivity;
    NSString *_subject;
    NSDate *_startTime;
    NSArray *_from;
    NSNumber *_disallowNewTimeProposal;
    NSString *_onlineMeetingExternalLink;
    NSDate *_tombstoneEndTime;
    ASEventUID *_eventUID;
    NSArray *_attendees;
    NSArray *_attendeesPendingDeletion;
    ASRecurrence *_recurrence;
    NSArray *_exceptions;
    NSNumber *_responseRequested;
    NSNumber *_responseType;
    NSDate *_appointmentReplyTime;
    NSArray *_attachments;
    NSString *_responseComment;
    NSDate *_proposedStartTime;
    NSDate *_proposedEndTime;
}

@property (readonly, nonatomic) int CalCalendarItemStatus;
@property (strong, nonatomic) NSNumber *allDayEvent; // @synthesize allDayEvent=_allDayEvent;
@property (strong, nonatomic) NSDate *appointmentReplyTime; // @synthesize appointmentReplyTime=_appointmentReplyTime;
@property (strong, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property (strong, nonatomic) NSArray *attendees; // @synthesize attendees=_attendees;
@property (strong, nonatomic) NSArray *attendeesPendingDeletion; // @synthesize attendeesPendingDeletion=_attendeesPendingDeletion;
@property (strong, nonatomic) NSString *body; // @synthesize body=_body;
@property (nonatomic) BOOL bodyTruncated; // @synthesize bodyTruncated=_bodyTruncated;
@property (strong, nonatomic) NSNumber *busyStatus; // @synthesize busyStatus=_busyStatus;
@property (nonatomic) BOOL cachedOrganizerIsSelf; // @synthesize cachedOrganizerIsSelf=_cachedOrganizerIsSelf;
@property (readonly, nonatomic) int calAttendeePendingStatus;
@property (readonly, nonatomic) int calAttendeeStatus;
@property (nonatomic) void *calEvent; // @synthesize calEvent=_calEvent;
@property (nonatomic) BOOL calculateNextStatusAsIfMeetingRequest; // @synthesize calculateNextStatusAsIfMeetingRequest=_calculateNextStatusAsIfMeetingRequest;
@property (strong, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property (strong, nonatomic) NSDate *dTStamp; // @synthesize dTStamp=_dTStamp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSNumber *disallowNewTimeProposal; // @synthesize disallowNewTimeProposal=_disallowNewTimeProposal;
@property (nonatomic) BOOL doNotSendBody; // @synthesize doNotSendBody=_doNotSendBody;
@property (readonly, nonatomic) NSCalendarDate *endDateForCalFramework;
@property (strong, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property (strong, nonatomic) ASEventUID *eventUID; // @synthesize eventUID=_eventUID;
@property (strong, nonatomic) NSDate *exceptionDate;
@property (strong, nonatomic) NSArray *exceptions; // @synthesize exceptions=_exceptions;
@property (strong, nonatomic) NSArray *from; // @synthesize from=_from;
@property (readonly, nonatomic) BOOL hasOccurrenceInTheFuture;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL haveCheckedOrganizerEmail; // @synthesize haveCheckedOrganizerEmail=_haveCheckedOrganizerEmail;
@property (nonatomic) BOOL isAttendeeUpdateOnly; // @synthesize isAttendeeUpdateOnly=_isAttendeeUpdateOnly;
@property (nonatomic) BOOL isDTStampUpdateOnly; // @synthesize isDTStampUpdateOnly=_isDTStampUpdateOnly;
@property (readonly, nonatomic) BOOL isTombstoneEndTimeInFuture;
@property (strong, nonatomic) ASLocation *location; // @synthesize location=_location;
@property (nonatomic) int meetingResponseForEmail;
@property (nonatomic) int meetingResponseToEmailAbout; // @synthesize meetingResponseToEmailAbout=_meetingResponseToEmailAbout;
@property (strong, nonatomic) NSNumber *meetingStatus; // @synthesize meetingStatus=_meetingStatus;
@property (strong, nonatomic) NSString *onlineMeetingExternalLink; // @synthesize onlineMeetingExternalLink=_onlineMeetingExternalLink;
@property (strong, nonatomic) NSString *organizerEmail; // @synthesize organizerEmail=_organizerEmail;
@property (strong, nonatomic) NSString *organizerName; // @synthesize organizerName=_organizerName;
@property (strong, nonatomic) NSDate *proposedEndTime; // @synthesize proposedEndTime=_proposedEndTime;
@property (strong, nonatomic) NSDate *proposedStartTime; // @synthesize proposedStartTime=_proposedStartTime;
@property (strong, nonatomic) ASRecurrence *recurrence; // @synthesize recurrence=_recurrence;
@property (strong, nonatomic) NSNumber *reminderMinsBefore; // @synthesize reminderMinsBefore=_reminderMinsBefore;
@property (strong, nonatomic) NSString *responseComment; // @synthesize responseComment=_responseComment;
@property (strong, nonatomic) NSNumber *responseRequested; // @synthesize responseRequested=_responseRequested;
@property (strong, nonatomic) NSNumber *responseType; // @synthesize responseType=_responseType;
@property (strong, nonatomic) NSNumber *sensitivity; // @synthesize sensitivity=_sensitivity;
@property (nonatomic) BOOL shouldUpdateStatus; // @synthesize shouldUpdateStatus=_shouldUpdateStatus;
@property (readonly, nonatomic) NSCalendarDate *startDateForCalFramework;
@property (strong, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property (strong, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property (readonly) Class superclass;
@property (strong, nonatomic) ASTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property (strong, nonatomic) NSDate *tombstoneEndTime; // @synthesize tombstoneEndTime=_tombstoneEndTime;
@property (readonly, nonatomic) NSString *uidForCalFramework;

+ (void)_setFakeDTStampDateForUnitTests:(id)arg1;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (id)attendeeExternalRepClasses;
+ (id)calendarItemExternalRepClasses;
+ (id)eventWithCalEvent:(void *)arg1 serverID:(id)arg2 account:(id)arg3;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (void)setSystemTimeZoneNameForUnitTests:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)_bailIfNotNewestDataForAccount:(id)arg1;
- (void)_determineSelfnessWithLocalEvent:(void *)arg1 forAccount:(id)arg2;
- (void)_loadAttributesFromCalEvent:(void *)arg1 forAccount:(id)arg2;
- (int)_meetingResponseShouldUseEmail:(BOOL)arg1 shouldFilterForEmail:(BOOL)arg2;
- (int)_nextAttendeeStatusWithOldStatus:(int)arg1 account:(id)arg2;
- (int)_nextAttendeeStatusWithOldStatus:(int)arg1 meetingClassType:(int)arg2 account:(id)arg3;
- (int)_nextEventStatusWithOldStatus:(int)arg1 account:(id)arg2;
- (int)_nextEventStatusWithOldStatus:(int)arg1 meetingClassType:(int)arg2 account:(id)arg3;
- (void)_sanitizeLocalExceptionsForAccount:(id)arg1;
- (BOOL)_selfIsMoreCorrectThanOtherEvent:(id)arg1 account:(id)arg2;
- (id)_transformedEndDateForActiveSync:(id)arg1 isFloating:(BOOL)arg2;
- (id)_transformedEndDateForCalFramework:(id)arg1 startDate:(id)arg2;
- (id)_transformedStartDateForActiveSync:(id)arg1 isFloating:(BOOL)arg2;
- (id)_transformedStartDateForCalFramework:(id)arg1;
- (void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2;
- (BOOL)cachedOrganizerIsSelfWithAccount:(id)arg1;
- (void *)copySelfAttendeeGeneratedIfNecessaryWithLocalEvent:(void *)arg1 forAccount:(id)arg2;
- (long long)dataclass;
- (void)dealloc;
- (BOOL)deleteFromCalendar;
- (BOOL)deleteFromContainer:(void *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)eventByMergingInEvent:(id)arg1 account:(id)arg2;
- (id)eventByMergingInLosingEvent:(id)arg1 account:(id)arg2;
- (BOOL)fillOutMissingExternalIds;
- (id)fullOrganizerString;
- (void)informExceptionsThatParentIsReadyForAccount:(id)arg1;
- (id)init;
- (id)initWithCalEvent:(void *)arg1 serverID:(id)arg2 account:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToEvent:(id)arg1;
- (BOOL)loadCalRecordForAccount:(id)arg1;
- (void)loadClientIDs;
- (BOOL)loadLocalItemWithAccount:(id)arg1;
- (int)meetingResponseForAccount:(id)arg1;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (void)postProcessApplicationData;
- (BOOL)purgeAttendeesPendingDeletion;
- (BOOL)saveDetachedEventsWithExistingRecord:(void *)arg1 intoCalendar:(void *)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL *)arg4 account:(id)arg5;
- (BOOL)saveServerIDAndUidToCalendar;
- (BOOL)saveServerIDToExistingItem;
- (BOOL)saveToCalendarWithExistingRecord:(void *)arg1 intoCalendar:(void *)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL *)arg4 account:(id)arg5;
- (BOOL)saveWithLocalObject:(void *)arg1 toContainer:(void *)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL *)arg4 account:(id)arg5;
- (int)selfAttendeeMeetingResponse;
- (BOOL)setCalEventWithExistingRecord:(void *)arg1 intoCalendar:(void *)arg2;
- (void)setLocalItem:(void *)arg1;
- (BOOL)shouldUseInMemoryAttendeesForAccount:(id)arg1 numExistingAttendees:(unsigned long long)arg2;
- (id)timeZoneForCalFramework;
- (id)timeZoneNameForCalFramework;
- (id)uidGeneratedIfNecessaryWithLocalEvent:(void *)arg1;
- (BOOL)verifyExternalIds;

@end

