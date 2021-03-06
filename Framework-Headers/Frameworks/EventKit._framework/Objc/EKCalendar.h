//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKObject.h>

@class EKSource, NSString;

@interface EKCalendar : EKObject
{
    unsigned long long _cachedJunkStatus;
}

@property (nonatomic) struct CGColor *CGColor;
@property (readonly, nonatomic) unsigned long long allowedEntityTypes;
@property (readonly, nonatomic) BOOL allowsContentModifications;
@property (nonatomic) unsigned long long cachedJunkStatus; // @synthesize cachedJunkStatus=_cachedJunkStatus;
@property (readonly, nonatomic) NSString *calendarIdentifier;
@property (readonly, nonatomic, getter=isImmutable) BOOL immutable;
@property (strong, nonatomic) EKSource *source;
@property (readonly, nonatomic, getter=isSubscribed) BOOL subscribed;
@property (readonly, nonatomic) unsigned long long supportedEventAvailabilities;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) long long type;

+ (id)EKObjectChangeSummarizer_multiValueDiffKeys;
+ (id)EKObjectChangeSummarizer_singleValueDiffKeys;
+ (id)_eventKitBundle;
+ (id)calendarForEntityType:(unsigned long long)arg1 eventStore:(id)arg2;
+ (id)calendarForEntityTypes:(unsigned long long)arg1 eventStore:(id)arg2;
+ (id)calendarWithEventStore:(id)arg1;
+ (Class)frozenClass;
+ (BOOL)isWeakRelationship;
+ (id)knownIdentityKeysForComparison;
+ (id)knownRelationshipMultiValueKeys;
+ (id)knownRelationshipSingleValueKeys;
+ (id)knownRelationshipWeakKeys;
+ (id)knownSingleValueKeysForComparison;
+ (id)rowIDsForCalendars:(id)arg1;
+ (id)typeDescription:(long long)arg1;
- (id)UUID;
- (BOOL)_anotherCalendarForDefaultSchedulingExists;
- (BOOL)_anotherCalendarForRemindersExists;
- (BOOL)_anyCalendarOfType:(unsigned long long)arg1 inSameSourceExistsPassingTest:(CDUnknownBlockType)arg2;
- (void)_clearCGColorCache;
- (BOOL)_flagValueWithMask:(unsigned int)arg1;
- (BOOL)_reset;
- (void)_setFlagValue:(BOOL)arg1 withMask:(unsigned int)arg2;
- (BOOL)_validateAccessConsent:(id *)arg1;
- (BOOL)_validateDeletable:(id *)arg1;
- (BOOL)_validateDeletableHelper:(id *)arg1;
- (void)addAlarms:(id)arg1;
- (void)addSharee:(id)arg1;
- (id)alarms;
- (id)allAlarms;
- (BOOL)allowEvents;
- (BOOL)allowReminders;
- (int)allowedEntities;
- (BOOL)allowsIgnoringSharedEventChangeNotifications;
- (BOOL)allowsScheduling;
- (BOOL)automaticEventLocationGeocodingAllowed;
- (BOOL)canBePublished;
- (BOOL)canBeShared;
- (BOOL)canMergeWithCalendar:(id)arg1;
- (void)clearInvitationStatus;
- (id)colorString;
- (id)colorStringRaw;
- (BOOL)commit:(id *)arg1;
- (BOOL)couldBeJunk;
- (long long)deletionWarningsMask;
- (id)description;
- (id)digest;
- (int)displayOrder;
- (BOOL)eligibleForDefaultSchedulingCalendar;
- (int)entityType;
- (id)exportData;
- (id)externalID;
- (id)externalIDTag;
- (id)externalModificationTag;
- (id)externalRepresentation;
- (id)externalURI;
- (id)findOriginalAlarmStartingWith:(id)arg1;
- (unsigned int)flags;
- (BOOL)getColorRed:(int *)arg1 green:(int *)arg2 blue:(int *)arg3;
- (BOOL)hasEvents;
- (BOOL)hasSharees;
- (BOOL)hasTasks;
- (id)init;
- (unsigned long long)invitationStatus;
- (BOOL)isAffectingAvailability;
- (BOOL)isAlarmAcknowledgedPropertyDirty;
- (BOOL)isColorDisplayOnly;
- (BOOL)isDefaultSchedulingCalendar;
- (BOOL)isDeletable;
- (BOOL)isFacebookBirthdayCalendar;
- (BOOL)isFamilyCalendar;
- (BOOL)isHidden;
- (BOOL)isHolidaySubscribedCalendar;
- (BOOL)isIgnoringEventAlerts;
- (BOOL)isIgnoringSharedCalendarNotifications;
- (BOOL)isImmutableRaw;
- (BOOL)isInbox;
- (BOOL)isManaged;
- (BOOL)isMarkedImmutableSharees;
- (BOOL)isMarkedUndeletable;
- (BOOL)isMutableNaturalLanguageSuggestionsCalendar;
- (BOOL)isMutableSuggestionsCalendar;
- (BOOL)isNaturalLanguageSuggestedEventCalendar;
- (BOOL)isNotificationsCollection;
- (BOOL)isPublished;
- (BOOL)isSharingInvitation;
- (BOOL)isSubscribedHolidayCalendar;
- (BOOL)isSuggestedEventCalendar;
- (BOOL)isSuggestionsCalendar;
- (BOOL)isSyncing;
- (id)lastSyncEndDate;
- (unsigned long long)lastSyncError;
- (id)lastSyncErrorData;
- (id)lastSyncErrorUserInfo;
- (id)lastSyncStartDate;
- (id)notes;
- (id)ownerIdentityAddress;
- (id)ownerIdentityDisplayName;
- (id)ownerIdentityEmail;
- (id)ownerIdentityFirstName;
- (int)ownerIdentityId;
- (id)ownerIdentityLastName;
- (id)ownerIdentityOrganizer;
- (id)ownerIdentityPhoneNumber;
- (BOOL)prohibitsScheduling;
- (id)publishURL;
- (id)pushKey;
- (BOOL)readOnly;
- (BOOL)refresh;
- (id)refreshDate;
- (BOOL)remove:(id *)arg1;
- (void)removeAcknowledgedSnoozedAlarms;
- (void)removeAlarms:(id)arg1;
- (void)removeAllSnoozedAlarms;
- (void)removeSharee:(id)arg1;
- (void)reset;
- (id)selectionSyncIdentifier;
- (id)selfIdentityAddress;
- (id)selfIdentityDisplayName;
- (id)selfIdentityEmail;
- (id)selfIdentityFirstName;
- (id)selfIdentityLastName;
- (id)selfIdentityPhoneNumber;
- (id)sendersEmail;
- (id)sendersPhoneNumber;
- (void)setAlarms:(id)arg1;
- (void)setAllAlarms:(id)arg1;
- (void)setAllowReminders:(BOOL)arg1;
- (void)setAllowedEntities:(int)arg1;
- (void)setAllowedEntityTypes:(unsigned long long)arg1;
- (void)setAllowsContentModifications:(BOOL)arg1;
- (void)setAllowsEvents:(BOOL)arg1;
- (void)setAllowsScheduling:(BOOL)arg1;
- (void)setCalendarIdentifier:(id)arg1;
- (void)setCanBePublished:(BOOL)arg1;
- (void)setCanBeShared:(BOOL)arg1;
- (void)setColorDisplayOnly:(BOOL)arg1;
- (void)setColorString:(id)arg1;
- (void)setColorStringRaw:(id)arg1;
- (void)setDigest:(id)arg1;
- (void)setDisplayOrder:(int)arg1;
- (void)setExternalID:(id)arg1;
- (void)setExternalIDTag:(id)arg1;
- (void)setExternalModificationTag:(id)arg1;
- (void)setExternalRepresentation:(id)arg1;
- (void)setFacebookBirthdayCalendar:(BOOL)arg1;
- (void)setFamilyCalendar:(BOOL)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setImmutable:(BOOL)arg1;
- (void)setInbox:(BOOL)arg1;
- (void)setInvitationStatus:(unsigned long long)arg1;
- (void)setIsAffectingAvailability:(BOOL)arg1;
- (void)setIsDefaultSchedulingCalendar:(BOOL)arg1;
- (void)setIsIgnoringEventAlerts:(BOOL)arg1;
- (void)setIsIgnoringSharedCalendarNotifications:(BOOL)arg1;
- (void)setIsJunk:(BOOL)arg1;
- (void)setIsPublished:(BOOL)arg1;
- (void)setLastSyncEndDate:(id)arg1;
- (void)setLastSyncError:(unsigned long long)arg1;
- (void)setLastSyncError:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)setLastSyncErrorData:(id)arg1;
- (void)setLastSyncErrorUserInfo:(id)arg1;
- (void)setLastSyncStartDate:(id)arg1;
- (void)setMarkedImmutableSharees:(BOOL)arg1;
- (void)setMarkedUndeletable:(BOOL)arg1;
- (void)setNotes:(id)arg1;
- (void)setNotificationsCollection:(BOOL)arg1;
- (void)setOwnerIdentityAddress:(id)arg1;
- (void)setOwnerIdentityDisplayName:(id)arg1;
- (void)setOwnerIdentityEmail:(id)arg1;
- (void)setOwnerIdentityFirstName:(id)arg1;
- (void)setOwnerIdentityId:(id)arg1;
- (void)setOwnerIdentityLastName:(id)arg1;
- (void)setOwnerIdentityPhoneNumber:(id)arg1;
- (void)setProhibitsScheduling:(BOOL)arg1;
- (void)setPublishURL:(id)arg1;
- (void)setPushKey:(id)arg1;
- (void)setReadOnly:(BOOL)arg1;
- (void)setRefreshDate:(id)arg1;
- (void)setSelfIdentityAddress:(id)arg1;
- (void)setSelfIdentityDisplayName:(id)arg1;
- (void)setSelfIdentityEmail:(id)arg1;
- (void)setSelfIdentityFirstName:(id)arg1;
- (void)setSelfIdentityLastName:(id)arg1;
- (void)setSelfIdentityPhoneNumber:(id)arg1;
- (void)setSharedOwnerAddress:(id)arg1;
- (void)setSharedOwnerName:(id)arg1;
- (void)setSharedOwnerURL:(id)arg1;
- (void)setSharees:(id)arg1;
- (void)setSharingInvitation:(BOOL)arg1;
- (void)setSharingInvitationResponse:(unsigned long long)arg1;
- (void)setSharingStatus:(unsigned long long)arg1;
- (void)setSubcalAccountID:(id)arg1;
- (void)setSubscribed:(BOOL)arg1;
- (void)setSubscribedHolidayCalendar:(BOOL)arg1;
- (void)setSubscriptionID:(id)arg1;
- (void)setSymbolicColorName:(id)arg1;
- (void)setSyncToken:(id)arg1;
- (void)setUUID:(id)arg1;
- (void)setUnlocalizedTitle:(id)arg1;
- (id)sharedOwnerAddress;
- (id)sharedOwnerEmail;
- (id)sharedOwnerName;
- (id)sharedOwnerPhoneNumber;
- (id)sharedOwnerURL;
- (id)sharees;
- (unsigned long long)sharingInvitationResponse;
- (unsigned long long)sharingStatus;
- (void)snoozeAlarm:(id)arg1 withLocation:(id)arg2 proximity:(long long)arg3;
- (void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2;
- (id)subcalAccountID;
- (id)subscriptionID;
- (BOOL)supportsJunkReporting;
- (id)symbolicColorName;
- (id)syncHash;
- (id)syncToken;
- (id)unlocalizedTitle;
- (BOOL)validate:(id *)arg1;

@end

