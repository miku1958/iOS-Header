//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKCalendarItem.h>

#import <EventKit/EKJunkInvitationProtocol_Private-Protocol.h>

@class EKCalendarDate, EKEventStore, EKParticipant, EKReadWriteLock, EKStructuredLocation, EKSuggestedEventInfo, NSArray, NSDate, NSNumber, NSString, NSURL;

@interface EKEvent : EKCalendarItem <EKJunkInvitationProtocol_Private>
{
    EKStructuredLocation *_cachedLocationPrediction;
    NSDate *_cachedLocationPredictionExpirationDate;
    BOOL _locationPredictionFrozen;
    EKReadWriteLock *_locationPredictionLock;
    BOOL _occurrenceIsAllDay;
    BOOL _requiresDetachDueToSnoozedAlarm;
    NSString *_birthdayPersonUniqueID;
    EKCalendarDate *_occurrenceStartDate;
    EKCalendarDate *_occurrenceEndDate;
    EKCalendarDate *_originalOccurrenceStartDate;
    EKCalendarDate *_originalOccurrenceEndDate;
    NSNumber *_originalOccurrenceIsAllDay;
}

@property (readonly, nonatomic) NSString *UUID; // @dynamic UUID;
@property (nonatomic, getter=isAllDay) BOOL allDay;
@property (readonly, nonatomic) BOOL allowsAvailabilityModifications;
@property (readonly, nonatomic) BOOL allowsParticipationStatusModifications;
@property (readonly, nonatomic) BOOL allowsPrivacyLevelModifications;
@property (readonly, nonatomic) BOOL allowsProposedTimeModifications;
@property (readonly, nonatomic) BOOL allowsTravelTimeModifications;
@property (nonatomic) BOOL attendeeComment;
@property (nonatomic) BOOL attendeeReplyChanged; // @dynamic attendeeReplyChanged;
@property (nonatomic) BOOL attendeeStatus;
@property (readonly, nonatomic) BOOL automaticLocationGeocodingAllowed;
@property (nonatomic) long long availability;
@property (readonly, nonatomic) NSString *birthdayContactIdentifier;
@property (readonly, nonatomic) long long birthdayPersonID;
@property (readonly, nonatomic) NSString *birthdayPersonUniqueID; // @synthesize birthdayPersonUniqueID=_birthdayPersonUniqueID;
@property (nonatomic) unsigned long long cachedJunkStatus; // @dynamic cachedJunkStatus;
@property (readonly, nonatomic) BOOL canBeRespondedTo;
@property (readonly, nonatomic) BOOL canDetachSingleOccurrence;
@property (strong, nonatomic) NSURL *conferenceURL;
@property (nonatomic) BOOL dateChanged;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double durationIncludingTravel;
@property (readonly, nonatomic) BOOL eligibleForTravelAdvisories;
@property (readonly, nonatomic) EKCalendarDate *endCalendarDate;
@property (copy, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) CDStruct_79f9e052 endDateGr;
@property (readonly, nonatomic) NSString *eventIdentifier;
@property (readonly, nonatomic) EKEventStore *eventStore;
@property (nonatomic) int externalTrackingStatus;
@property (readonly, nonatomic) NSURL *externalURL;
@property (nonatomic) BOOL firedTTL;
@property (readonly, nonatomic) BOOL hasPredictedLocation;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSDate *initialEndDate;
@property (readonly, copy, nonatomic) NSDate *initialStartDate;
@property (nonatomic) unsigned long long invitationStatus;
@property (readonly, nonatomic) BOOL isAllDayDirty;
@property (readonly, nonatomic) BOOL isDetached;
@property (readonly, nonatomic) BOOL isEditable;
@property (readonly, nonatomic) BOOL isEndDateDirty;
@property (readonly, nonatomic) BOOL isMaster;
@property (nonatomic) BOOL isPhantom;
@property (readonly, nonatomic) BOOL isStartDateDirty;
@property (readonly, nonatomic) BOOL isStatusDirty;
@property (nonatomic) unsigned long long junkStatus;
@property (readonly, nonatomic) NSURL *launchURL;
@property (nonatomic) BOOL locationChanged;
@property (readonly, nonatomic) BOOL locationIsAConferenceRoom;
@property (nonatomic) long long locationPredictionState;
@property (readonly, nonatomic) NSString *locationWithoutPrediction;
@property (strong, nonatomic) NSArray *locations;
@property (readonly, nonatomic) NSArray *locationsWithoutPrediction;
@property (readonly, nonatomic) NSDate *occurrenceDate;
@property (copy, nonatomic) EKCalendarDate *occurrenceEndDate; // @synthesize occurrenceEndDate=_occurrenceEndDate;
@property (nonatomic) BOOL occurrenceIsAllDay; // @synthesize occurrenceIsAllDay=_occurrenceIsAllDay;
@property (copy, nonatomic) EKCalendarDate *occurrenceStartDate; // @synthesize occurrenceStartDate=_occurrenceStartDate;
@property (readonly, nonatomic) EKParticipant *organizer; // @dynamic organizer;
@property (copy, nonatomic) EKCalendarDate *originalOccurrenceEndDate; // @synthesize originalOccurrenceEndDate=_originalOccurrenceEndDate;
@property (copy, nonatomic) NSNumber *originalOccurrenceIsAllDay; // @synthesize originalOccurrenceIsAllDay=_originalOccurrenceIsAllDay;
@property (copy, nonatomic) EKCalendarDate *originalOccurrenceStartDate; // @synthesize originalOccurrenceStartDate=_originalOccurrenceStartDate;
@property (readonly, nonatomic) NSDate *originalStartDate;
@property (nonatomic) long long participationStatus;
@property (strong, nonatomic) NSDate *participationStatusModifiedDate;
@property (readonly, nonatomic) long long pendingParticipationStatus;
@property (readonly, nonatomic) EKStructuredLocation *preferredLocationWithoutPrediction;
@property (nonatomic) long long privacyLevel;
@property (strong, nonatomic) NSDate *proposedStartDate;
@property (nonatomic) BOOL requiresDetachDueToSnoozedAlarm; // @synthesize requiresDetachDueToSnoozedAlarm=_requiresDetachDueToSnoozedAlarm;
@property (readonly, nonatomic) BOOL responseMustApplyToAll;
@property (readonly, nonatomic) NSString *sendersEmail;
@property (readonly, nonatomic) NSString *sendersPhoneNumber;
@property (readonly, nonatomic) EKCalendarDate *startCalendarDate;
@property (readonly, nonatomic) EKCalendarDate *startCalendarDateIncludingTravelTime;
@property (copy, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) CDStruct_79f9e052 startDateGr;
@property (readonly, nonatomic) NSDate *startDateIncludingTravel;
@property (readonly, nonatomic) long long status;
@property (copy, nonatomic) EKStructuredLocation *structuredLocation; // @dynamic structuredLocation;
@property (strong, nonatomic) EKSuggestedEventInfo *suggestionInfo;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsJunkReporting;
@property (nonatomic) BOOL timeChanged;
@property (nonatomic) BOOL titleChanged;
@property (nonatomic) long long travelAdvisoryBehavior;
@property (readonly, nonatomic) BOOL travelAdvisoryBehaviorIsEffectivelyEnabled;
@property (readonly, nonatomic) long long travelRoutingMode;
@property (strong, nonatomic) EKStructuredLocation *travelStartLocation; // @dynamic travelStartLocation;
@property (nonatomic) double travelTime;

+ (long long)_eventAvailabilityForParticipantStatus:(long long)arg1 supportedEventAvailabilities:(unsigned long long)arg2 isAllDayEvent:(BOOL)arg3;
+ (id)_locationStringForLocations:(id)arg1;
+ (id)eventWithEventStore:(id)arg1;
+ (Class)frozenClass;
+ (id)generateUniqueIDWithEvent:(id)arg1 originalEvent:(id)arg2 calendar:(id)arg3;
+ (id)knownRelationshipMultiValueKeys;
+ (id)knownRelationshipSingleValueKeys;
- (void).cxx_destruct;
- (void)_addNewAttendeesToRecentsIfNeeded;
- (void)_addOrganizerToRecentsIfNeeded;
- (void)_adjustAfterRebaseForMovingFromOldSource:(id)arg1 toNewSource:(id)arg2 committingItem:(id)arg3;
- (void)_adjustForNewCalendarBeforeCommit;
- (void)_applyTimeChangesToMaster;
- (BOOL)_canWriteConferenceURL;
- (void)_cancelDetachedEventsWithSpan:(long long)arg1;
- (BOOL)_cancelWithSpan:(long long)arg1 error:(id *)arg2;
- (BOOL)_checkStartDateConstraintAgainstDate:(CDStruct_79f9e052)arg1 timeZone:(id)arg2 error:(id *)arg3;
- (void)_clearExceptionDatesAndUpdateDetachedOriginalDates;
- (void)_clearLocationPredictionCacheIfNotFrozen;
- (void)_clearLocationPredictionCacheIfNotFrozenHoldingLock;
- (id)_committedStartDate;
- (BOOL)_couldBeJunkCommon;
- (id)_dateForNextOccurrence;
- (void)_deleteFromOccurrenceDateOnward:(id)arg1;
- (void)_deleteThisOccurrence;
- (BOOL)_deleteWithSpan:(long long)arg1 error:(id *)arg2;
- (void)_detachWithStartDate:(id)arg1 newStartDate:(id)arg2 future:(BOOL)arg3;
- (id)_detectConferenceURL;
- (id)_effectiveTimeZone;
- (BOOL)_eventIsTheOnlyRemainingOccurrence;
- (BOOL)_fetchedEventIsConflict:(id)arg1 forStartDate:(id)arg2 endDate:(id)arg3;
- (void)_filterExceptionDates;
- (id)_generateNewUniqueID;
- (CDStruct_79f9e052)_gregorianDateCorrectedForTimeZoneFromCalendarDate:(id)arg1 orNSDate:(id)arg2;
- (BOOL)_hasChangesForConferenceURLDetection;
- (BOOL)_hasExternalIDOrDeliverySource;
- (BOOL)_invitationChangedPropertyForFlag:(unsigned int)arg1;
- (BOOL)_isAllDay;
- (BOOL)_isInitialOccurrenceDate:(id)arg1;
- (BOOL)_isParticipationStatusDirty;
- (BOOL)_isSimpleRepeatingEvent;
- (BOOL)_needsPredictedLocationCacheUpdateHoldingLock;
- (BOOL)_noRemainingEarlierOccurrences;
- (BOOL)_occurrenceExistsOnDate:(double)arg1 timeZone:(id)arg2;
- (long long)_parentParticipationStatus;
- (id)_prioritizedConferencesSources;
- (id)_refreshDateForKey:(id)arg1;
- (BOOL)_reset;
- (void)_sendModifiedNote;
- (void)_setInvitationChangedProperty:(BOOL)arg1 forFlag:(unsigned int)arg2;
- (void)_setStartDate:(id)arg1 andClearProposedTimes:(BOOL)arg2;
- (BOOL)_shouldCancelInsteadOfDeleteWithSpan:(long long)arg1;
- (BOOL)_shouldDeclineInsteadOfDelete;
- (id)_travelTimeInternalDescription;
- (void)_updateConferenceURL;
- (id)_updateMasterDate:(id)arg1 forChangeToOccurrenceDate:(id)arg2 fromOriginalOccurrenceDate:(id)arg3;
- (id)_updatePredictedLocationCacheIfNeeded;
- (id)_updatePredictedLocationCacheIfNeededHoldingLock;
- (void)_updateSelfFromDetachedEventIfNeededForDelete;
- (BOOL)_validateAlarmIntervalConstrainedToRecurrenceInterval:(long long)arg1;
- (BOOL)_validateDatesAndRecurrencesGivenSpan:(long long)arg1 error:(id *)arg2;
- (BOOL)_validateDurationConstrainedToRecurrenceInterval;
- (void)_willCommit;
- (id)actions;
- (BOOL)allowsAlarmModifications;
- (BOOL)allowsAttendeesModifications;
- (BOOL)allowsCalendarModifications;
- (BOOL)allowsRecurrenceModifications;
- (BOOL)allowsSpansOtherThanThisEvent;
- (BOOL)canForward;
- (BOOL)canMoveToCalendar:(id)arg1 fromCalendar:(id)arg2 error:(id *)arg3;
- (BOOL)changingAllDayPropertyIsAllowed;
- (void)clearDetectedConferenceURL;
- (void)clearInvitationStatus;
- (BOOL)commitWithSpan:(long long)arg1 error:(id *)arg2;
- (id)committedCopy;
- (id)committedValueForKey:(id)arg1;
- (long long)compareStartDateIncludingTravelWithEvent:(id)arg1;
- (long long)compareStartDateWithEvent:(id)arg1;
- (id)conferenceURLDetected;
- (id)conferenceURLForDisplay;
- (void)confirmPredictedLocation:(id)arg1;
- (BOOL)conformsToRecurrenceRules:(id)arg1;
- (BOOL)couldBeJunk;
- (CDStruct_79f9e052)endDatePinnedForAllDay;
- (id)endDateRaw;
- (id)externalURI;
- (BOOL)hasAttendeeProposedTimes;
- (BOOL)hasSelfAttendee;
- (BOOL)hasValidEventAction;
- (id)init;
- (id)initWithEventStore:(id)arg1;
- (id)initWithPersistentObject:(id)arg1;
- (id)initWithPersistentObject:(id)arg1 occurrenceDate:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFloating;
- (BOOL)isInvitation;
- (BOOL)isProposedTimeEvent;
- (BOOL)isTentative;
- (void)markAsSaved;
- (void)markEventAsAttendeeForward;
- (BOOL)needsOccurrenceCacheUpdate;
- (void)overrideStartDate:(id)arg1;
- (id)potentialConflictOccurrenceDatesInTimePeriod:(double *)arg1;
- (id)privacyLevelString;
- (void)rebase;
- (id)recurrenceRule;
- (BOOL)refresh;
- (void)rejectPredictedLocation;
- (BOOL)removeWithSpan:(long long)arg1 error:(id *)arg2;
- (BOOL)requiresDetach;
- (void)reset;
- (id)responseComment;
- (BOOL)revert;
- (void)rollback;
- (id)scanForConflicts;
- (BOOL)serverSupportedProposeNewTime;
- (void)setEndDateRaw:(id)arg1;
- (void)setIsJunk:(BOOL)arg1 shouldSave:(BOOL)arg2;
- (void)setNeedsOccurrenceCacheUpdate:(BOOL)arg1;
- (void)setNotes:(id)arg1;
- (void)setNotesCommon:(id)arg1;
- (void)setOriginalStartDate:(id)arg1;
- (void)setPredictedLocationFrozen:(BOOL)arg1;
- (void)setRecurrenceRule:(id)arg1;
- (void)setResponseComment:(id)arg1;
- (void)setStartDateRaw:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setURLCommon:(id)arg1;
- (void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2;
- (id)startDateForRecurrence;
- (CDStruct_79f9e052)startDatePinnedForAllDay;
- (id)startDateRaw;
- (id)title;
- (id)uniqueId;
- (void)updateConferenceURLIfNeeded;
- (BOOL)updateEventToEvent:(id)arg1;
- (BOOL)updateEventToEvent:(id)arg1 commit:(BOOL)arg2;
- (BOOL)updateWithGeocodedMapItemAndSaveWithCommit:(id)arg1 eventStore:(id)arg2 error:(id *)arg3;
- (BOOL)validate:(id *)arg1;
- (BOOL)validateRecurrenceRule:(id)arg1 error:(id *)arg2;
- (BOOL)validateWithSpan:(long long)arg1 error:(id *)arg2;

@end

