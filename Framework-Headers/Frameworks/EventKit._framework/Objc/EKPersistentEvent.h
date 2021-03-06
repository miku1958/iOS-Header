//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKPersistentCalendarItem.h>

@interface EKPersistentEvent : EKPersistentCalendarItem
{
}

+ (id)defaultPropertiesToLoad;
+ (id)eventWithRandomUUID;
+ (Class)meltedClass;
+ (id)relations;
- (id)actions;
- (long long)availability;
- (id)birthdayContactIdentifier;
- (id)birthdayContactName;
- (id)birthdayID;
- (BOOL)canForward;
- (id)conferenceURL;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)disallowProposeNewTime;
- (id)endDate;
- (id)endDateRaw;
- (int)entityType;
- (int)externalTrackingStatus;
- (BOOL)firedTTL;
- (unsigned int)invitationChangedProperties;
- (unsigned long long)invitationStatus;
- (unsigned long long)junkStatus;
- (long long)locationPredictionState;
- (BOOL)needsOccurrenceCacheUpdate;
- (id)organizer;
- (id)originalStartDate;
- (id)participationStatusModifiedDate;
- (long long)privacyLevel;
- (id)proposedStartDate;
- (BOOL)pushDirtyProperties:(id *)arg1;
- (id)recurrenceSet;
- (id)responseComment;
- (void)setActions:(id)arg1;
- (void)setAvailability:(long long)arg1;
- (void)setBirthdayContactIdentifier:(id)arg1;
- (void)setBirthdayContactName:(id)arg1;
- (void)setBirthdayID:(id)arg1;
- (void)setCanForward:(BOOL)arg1;
- (void)setConferenceURL:(id)arg1;
- (void)setDisallowProposeNewTime:(BOOL)arg1;
- (void)setEndDate:(id)arg1;
- (void)setEndDateRaw:(id)arg1;
- (void)setExternalTrackingStatus:(int)arg1;
- (void)setFiredTTL:(BOOL)arg1;
- (void)setInvitationChangedProperties:(unsigned int)arg1;
- (void)setInvitationStatus:(unsigned long long)arg1;
- (void)setJunkStatus:(unsigned long long)arg1;
- (void)setLocationPredictionState:(long long)arg1;
- (void)setNeedsOccurrenceCacheUpdate:(BOOL)arg1;
- (void)setOriginalStartDate:(id)arg1;
- (void)setParticipationStatusModifiedDate:(id)arg1;
- (void)setPrivacyLevel:(long long)arg1;
- (void)setProposedStartDate:(id)arg1;
- (void)setRecurrenceSet:(id)arg1;
- (void)setResponseComment:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setSuggestionInfo:(id)arg1;
- (void)setTravelAdvisoryBehavior:(long long)arg1;
- (void)setTravelTime:(id)arg1;
- (long long)status;
- (id)suggestionInfo;
- (long long)travelAdvisoryBehavior;
- (id)travelTime;

@end

