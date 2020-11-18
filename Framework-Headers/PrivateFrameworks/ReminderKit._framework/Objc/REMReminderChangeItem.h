//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/REMConflictResolving-Protocol.h>
#import <ReminderKit/REMExternalSyncMetadataWritableProviding-Protocol.h>
#import <ReminderKit/REMSaveRequestTrackedValue-Protocol.h>

@class NSArray, NSAttributedString, NSData, NSDate, NSDateComponents, NSSet, NSString, REMAccountCapabilities, REMCRMergeableStringDocument, REMChangedKeysObserver, REMContactRepresentation, REMDisplayDate, REMListChangeItem, REMObjectID, REMReminderAttachmentContextChangeItem, REMReminderFlaggedContextChangeItem, REMReminderStorage, REMReminderSubtaskContextChangeItem, REMResolutionTokenMap, REMSaveRequest, REMUserActivity;

@interface REMReminderChangeItem : NSObject <REMConflictResolving, REMSaveRequestTrackedValue, REMExternalSyncMetadataWritableProviding>
{
    REMSaveRequest *_saveRequest;
    REMReminderStorage *_storage;
    REMChangedKeysObserver *_changedKeysObserver;
}

@property (readonly, nonatomic) REMAccountCapabilities *accountCapabilities; // @dynamic accountCapabilities;
@property (strong, nonatomic) REMObjectID *accountID; // @dynamic accountID;
@property (readonly, nonatomic) NSArray *alarms; // @dynamic alarms;
@property (readonly, nonatomic) BOOL allDay; // @dynamic allDay;
@property (readonly, nonatomic) REMReminderAttachmentContextChangeItem *attachmentContext;
@property (strong, nonatomic) NSArray *attachments; // @dynamic attachments;
@property (strong, nonatomic) REMChangedKeysObserver *changedKeysObserver; // @synthesize changedKeysObserver=_changedKeysObserver;
@property (nonatomic, getter=isCompleted) BOOL completed; // @dynamic completed;
@property (copy, nonatomic) NSDate *completionDate; // @dynamic completionDate;
@property (copy, nonatomic) REMContactRepresentation *contactHandles; // @dynamic contactHandles;
@property (copy, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property (copy, nonatomic) NSString *daCalendarItemUniqueIdentifier; // @dynamic daCalendarItemUniqueIdentifier;
@property (copy, nonatomic) NSString *daPushKey; // @dynamic daPushKey;
@property (copy, nonatomic) NSString *daSyncToken; // @dynamic daSyncToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) REMDisplayDate *displayDate; // @dynamic displayDate;
@property (copy, nonatomic) NSDateComponents *dueDateComponents; // @dynamic dueDateComponents;
@property (copy, nonatomic) NSString *externalIdentifier; // @dynamic externalIdentifier;
@property (copy, nonatomic) NSString *externalModificationTag; // @dynamic externalModificationTag;
@property (nonatomic) long long flagged; // @dynamic flagged;
@property (readonly, nonatomic) REMReminderFlaggedContextChangeItem *flaggedContext;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long icsDisplayOrder; // @dynamic icsDisplayOrder;
@property (strong, nonatomic) NSData *importedICSData; // @dynamic importedICSData;
@property (readonly, nonatomic) BOOL isOverdue; // @dynamic isOverdue;
@property (readonly, nonatomic) BOOL isRecurrent; // @dynamic isRecurrent;
@property (copy, nonatomic) NSDate *lastBannerPresentationDate; // @dynamic lastBannerPresentationDate;
@property (copy, nonatomic) NSDate *lastModifiedDate; // @dynamic lastModifiedDate;
@property (readonly, copy, nonatomic) NSString *legacyNotificationIdentifier; // @dynamic legacyNotificationIdentifier;
@property (readonly, nonatomic) REMListChangeItem *listChangeItem;
@property (strong, nonatomic) REMObjectID *listID; // @dynamic listID;
@property (copy, nonatomic) NSAttributedString *notes;
@property (copy, nonatomic) NSString *notesAsString;
@property (strong, nonatomic) REMCRMergeableStringDocument *notesDocument; // @dynamic notesDocument;
@property (strong, nonatomic) NSData *notesDocumentData; // @dynamic notesDocumentData;
@property (strong, nonatomic) REMObjectID *objectID; // @dynamic objectID;
@property (strong, nonatomic) REMObjectID *parentReminderID; // @dynamic parentReminderID;
@property (nonatomic) unsigned long long priority; // @dynamic priority;
@property (strong, nonatomic) NSArray *recurrenceRules; // @dynamic recurrenceRules;
@property (readonly, nonatomic) REMObjectID *remObjectID; // @dynamic remObjectID;
@property (strong, nonatomic) REMResolutionTokenMap *resolutionTokenMap; // @dynamic resolutionTokenMap;
@property (readonly, nonatomic) REMSaveRequest *saveRequest; // @synthesize saveRequest=_saveRequest;
@property (copy, nonatomic) NSData *siriFoundInAppsData; // @dynamic siriFoundInAppsData;
@property (nonatomic) long long siriFoundInAppsUserConfirmation; // @dynamic siriFoundInAppsUserConfirmation;
@property (copy, nonatomic) NSDateComponents *startDateComponents; // @dynamic startDateComponents;
@property (strong, nonatomic) REMReminderStorage *storage; // @synthesize storage=_storage;
@property (readonly, nonatomic) REMReminderSubtaskContextChangeItem *subtaskContext;
@property (strong, nonatomic) NSSet *subtaskIDsToUndelete; // @dynamic subtaskIDsToUndelete;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *timeZone; // @dynamic timeZone;
@property (copy, nonatomic) NSAttributedString *title;
@property (copy, nonatomic) NSString *titleAsString;
@property (strong, nonatomic) REMCRMergeableStringDocument *titleDocument; // @dynamic titleDocument;
@property (strong, nonatomic) NSData *titleDocumentData; // @dynamic titleDocumentData;
@property (copy, nonatomic) REMUserActivity *userActivity; // @dynamic userActivity;

+ (id)_deduplicateAlarms:(id)arg1;
+ (long long)hourForNextThirdsFromHour:(long long)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (id)_cleanupOriginalAlarmsForSnoozing;
- (void)_copyAlarmsInto:(id)arg1;
- (void)_createSnoozeAlarmWithDateComponents:(id)arg1;
- (id)_editDocument:(id)arg1 replicaIDSource:(id)arg2 newString:(id)arg3;
- (double)_timeIntervalToAddSinceStartDate:(id)arg1 withNow:(id)arg2 step:(double)arg3;
- (void)addAlarm:(id)arg1;
- (id)addAlarmWithTrigger:(id)arg1;
- (void)addRecurrenceRule:(id)arg1;
- (id)addRecurrenceRuleWithFrequency:(long long)arg1 interval:(long long)arg2 daysOfTheWeek:(id)arg3 daysOfTheMonth:(id)arg4 monthsOfTheYear:(id)arg5 weeksOfTheYear:(id)arg6 daysOfTheYear:(id)arg7 setPositions:(id)arg8 end:(id)arg9;
- (id)addRecurrenceRuleWithFrequency:(long long)arg1 interval:(long long)arg2 end:(id)arg3;
- (id)addRecurrenceRuleWithFrequency:(long long)arg1 interval:(long long)arg2 firstDayOfTheWeek:(long long)arg3 daysOfTheWeek:(id)arg4 daysOfTheMonth:(id)arg5 monthsOfTheYear:(id)arg6 weeksOfTheYear:(id)arg7 daysOfTheYear:(id)arg8 setPositions:(id)arg9 end:(id)arg10;
- (id)changedKeys;
- (id)confirmForSiriFoundInAppsAppendingToList:(id)arg1;
- (void)copyInto:(id)arg1;
- (id)duplicateForRecurrenceUsingReminderID:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithObjectID:(id)arg1 title:(id)arg2 insertIntoListChangeItem:(id)arg3;
- (id)initWithObjectID:(id)arg1 title:(id)arg2 insertIntoParentReminderSubtaskContextChangeItem:(id)arg3;
- (id)initWithReminderChangeItem:(id)arg1 insertIntoListChangeItem:(id)arg2;
- (id)initWithReminderChangeItem:(id)arg1 insertIntoParentReminderSubtaskContextChangeItem:(id)arg2;
- (id)initWithSaveRequest:(id)arg1 storage:(id)arg2 accountCapabilities:(id)arg3 changedKeysObserver:(id)arg4;
- (id)initWithSaveRequest:(id)arg1 storage:(id)arg2 accountCapabilities:(id)arg3 observeInitialValues:(BOOL)arg4;
- (void)insertRecurrenceRule:(id)arg1 afterRecurrenceRule:(id)arg2;
- (void)insertRecurrenceRule:(id)arg1 beforeRecurrenceRule:(id)arg2;
- (BOOL)isSubtask;
- (double)nextRecurrentAdvanceAmountForDateComponents:(id)arg1 afterDate:(id)arg2;
- (id)nextRecurrentDueDateComponentsAfter:(id)arg1;
- (void)rejectForSiriFoundInApps;
- (void)removeAlarm:(id)arg1;
- (void)removeAllAlarms;
- (void)removeAllRecurrenceRules;
- (void)removeAllSnoozeAlarms;
- (void)removeFromList;
- (id)removeFromListAllowingUndo;
- (void)removeFromParentReminder;
- (id)removeFromParentReminderAllowingUndo;
- (void)removeRecurrenceRule:(id)arg1;
- (id)resolutionTokenKeyForChangedKey:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setAlarms:(id)arg1;
- (void)setDueDateComponentsWithAlarmsIfNeeded:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)shallowCopyWithSaveRequest:(id)arg1;
- (void)snoozeForever;
- (void)snoozeFromDueDateForFutureIntegralMultipleOfTimeInterval:(double)arg1;
- (void)snoozeFromNowForTimeInterval:(double)arg1;
- (void)snoozeToDate:(id)arg1;
- (void)snoozeToNextThirds;
- (void)updateAccountCapabilities:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;

@end
