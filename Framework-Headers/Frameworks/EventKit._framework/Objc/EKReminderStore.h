//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKit/EKUpdatedReminderBackingObjectProvider-Protocol.h>

@class EKEventStore, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, REMStore;
@protocol OS_dispatch_queue;

@interface EKReminderStore : NSObject <EKUpdatedReminderBackingObjectProvider>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_sources;
    NSMutableDictionary *_cachedConstraints;
    NSArray *_lists;
    NSMutableSet *_newObjectsIDs;
    NSMutableDictionary *_updatedObjects;
    NSMutableSet *_objectIDsToCommit;
    NSMutableDictionary *_deletedObjects;
    NSMutableArray *_objectsToReset;
    NSMutableArray *_remindersNeedingMove;
    NSMutableDictionary *_movedRemindersIDMap;
    NSObject<OS_dispatch_queue> *_queryQueue;
    NSMutableDictionary *queryCompletionHandlers;
    REMStore *_remStore;
    EKEventStore *_eventStore;
}

@property (readonly) NSArray *calendars;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) REMStore *remStore; // @synthesize remStore=_remStore;
@property (readonly) NSArray *sources;
@property (readonly) Class superclass;

+ (Class)frozenClassForReminderClass:(Class)arg1;
+ (BOOL)isNotFoundError:(id)arg1;
+ (id)log;
+ (id)uniqueIdentifierForREMObject:(id)arg1;
- (void).cxx_destruct;
- (id)_allLists;
- (void)_checkPredicate:(id)arg1;
- (BOOL)_commit:(id *)arg1 error:(id *)arg2;
- (id)_fetchAndCacheConstraintsForFrozenSource:(id)arg1;
- (void)_loadAccounts;
- (void)_loadAccountsIfNeeded;
- (void)_loadLists;
- (void)_loadListsIfNeeded;
- (id)_moveRemindersToNewLists:(id)arg1 error:(id *)arg2;
- (void)_reminderCopiedToNewList:(id)arg1;
- (id)backingCalendarWithIdentifier:(id)arg1;
- (id)backingReminderWithIdentifier:(id)arg1;
- (id)cachedConstraintsForSource:(id)arg1;
- (id)calendarWithIdentifier:(id)arg1;
- (BOOL)commit:(id *)arg1;
- (CDUnknownBlockType)completionBlockForFetchRequestToken:(id)arg1 remove:(BOOL)arg2;
- (id)createNewReminder;
- (id)createNewReminderCalendar;
- (id)defaultCalendarForNewReminders;
- (id)existingUpdatedObject:(id)arg1;
- (id)fetchRemindersMatchingPredicate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fillInPath:(id)arg1 usingParents:(id)arg2;
- (id)frozenAlarmForREMAlarms:(id)arg1;
- (id)frozenCalendarFromCalendar:(id)arg1 error:(id *)arg2;
- (id)frozenObjectForReminderObject:(id)arg1;
- (id)initWithEventStore:(id)arg1 token:(id)arg2;
- (BOOL)isSourceManaged:(id)arg1;
- (id)newFrozenObjectForReminderObject:(id)arg1 withChanges:(id)arg2;
- (id)predicateForCompletedRemindersWithCompletionDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3;
- (id)predicateForIncompleteRemindersWithDueDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3;
- (id)predicateForRemindersInCalendars:(id)arg1;
- (id)reminderWithIdentifier:(id)arg1;
- (void)remindersChanged;
- (id)remindersMatchingPredicate:(id)arg1;
- (id)remindersWithExternalIdentifier:(id)arg1;
- (BOOL)removeCalendar:(id)arg1 error:(id *)arg2;
- (BOOL)removeReminder:(id)arg1 error:(id *)arg2;
- (void)reset;
- (id)resetBackingAlarmWithBackingAlarm:(id)arg1;
- (id)resetBackingLocationWithBackingLocation:(id)arg1;
- (BOOL)saveCalendar:(id)arg1 error:(id *)arg2;
- (BOOL)saveObject:(id)arg1 withFrozenObject:(id)arg2 error:(id *)arg3;
- (BOOL)saveReminder:(id)arg1 error:(id *)arg2;
- (id)sourceWithIdentifier:(id)arg1;

@end

