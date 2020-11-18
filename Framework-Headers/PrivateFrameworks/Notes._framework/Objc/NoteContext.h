//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Notes/ICLegacyContext-Protocol.h>

@class AccountUtilities, CPExclusiveLock, NSManagedObjectContext, NSManagedObjectModel, NSMutableDictionary, NSNumber, NSPersistentStoreCoordinator, NoteAccountObject, NoteStoreObject;

@interface NoteContext : NSObject <ICLegacyContext>
{
    NSManagedObjectModel *_managedObjectModel;
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NoteStoreObject *_localStore;
    NoteAccountObject *_localAccount;
    AccountUtilities *_accountUtilities;
    NSManagedObjectContext *_nextIdContext;
    CPExclusiveLock *_nextIdLock;
    NSNumber *_nextId;
    CPExclusiveLock *_objectCreationLock;
    unsigned long long _notificationCount;
    BOOL _logChanges;
    BOOL _indexInBatches;
    BOOL _hasPriorityInSaveConflicts;
    BOOL _inMigrator;
    NSMutableDictionary *_notePropertyObjectsRealized;
    BOOL _isMainContext;
}

@property (strong, nonatomic) AccountUtilities *accountUtilities; // @synthesize accountUtilities=_accountUtilities;
@property (nonatomic) BOOL isMainContext; // @synthesize isMainContext=_isMainContext;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

+ (void)clearTestsNotesRootPath;
+ (BOOL)databaseIsCorrupt:(id)arg1;
+ (id)defaultNotesSortDescriptors;
+ (id)fileProtectionOption;
+ (id)generateGUID;
+ (void)setTestsNotesRootPath:(id)arg1;
+ (BOOL)shouldLogIndexing;
- (void).cxx_destruct;
- (void)_createLocalAccount:(id *)arg1 andStore:(id *)arg2;
- (id)_notePropertyObjectForKey:(id)arg1;
- (id)accountForAccountId:(id)arg1;
- (id)allAccounts;
- (id)allAccountsAsFaults:(BOOL)arg1 prefechedRelationshipKeyPaths:(id)arg2;
- (id)allNotes;
- (id)allNotesInCollection:(id)arg1;
- (id)allNotesMatchingPredicate:(id)arg1;
- (id)allNotesWithoutBodiesInCollection:(id)arg1;
- (id)allStores;
- (id)allVisibleNotes;
- (id)allVisibleNotesForAccountWithObjectID:(id)arg1;
- (id)allVisibleNotesInCollection:(id)arg1;
- (id)allVisibleNotesInCollection:(id)arg1 sorted:(BOOL)arg2;
- (id)allVisibleNotesMatchingPredicate:(id)arg1;
- (id)allVisibleNotesMatchingPredicate:(id)arg1 sorted:(BOOL)arg2;
- (void)batchFaultNotes:(id)arg1;
- (void)cleanUpLocks;
- (void)clearCaches;
- (id)collectionForInfo:(id)arg1;
- (id)collectionForObjectID:(id)arg1;
- (long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
- (unsigned long long)countOfNotes;
- (unsigned long long)countOfNotesInCollection:(id)arg1;
- (unsigned long long)countOfNotesMatchingPredicate:(id)arg1;
- (unsigned long long)countOfStores;
- (unsigned long long)countOfVisibleNotes;
- (unsigned long long)countOfVisibleNotesForAccountWithObjectID:(id)arg1;
- (unsigned long long)countOfVisibleNotesInCollection:(id)arg1;
- (unsigned long long)countOfVisibleNotesMatchingPredicate:(id)arg1;
- (void)dealloc;
- (id)defaultStoreForNewNote;
- (BOOL)deleteAccount:(id)arg1;
- (void)deleteChanges:(id)arg1;
- (BOOL)deleteIndexFile;
- (void)deleteNote:(id)arg1;
- (void)deleteNoteRegardlessOfConstraints:(id)arg1;
- (BOOL)deleteStore:(id)arg1;
- (void)enableChangeLogging:(BOOL)arg1;
- (id)faultedInStoresForAccounts:(id)arg1;
- (BOOL)forceDeleteAccount:(id)arg1;
- (void)forceSetUpUniqueObjects;
- (id)getNextIdObject;
- (void)handleMigration;
- (BOOL)hasMultipleEnabledStores;
- (id)init;
- (id)initForMainContext;
- (id)initForMigrator;
- (id)initWithAccountUtilities:(id)arg1;
- (id)initWithAccountUtilities:(id)arg1 inMigrator:(BOOL)arg2;
- (id)initWithAccountUtilities:(id)arg1 inMigrator:(BOOL)arg2 isMainContext:(BOOL)arg3;
- (void)invalidate;
- (id)liveNotesNeedingBodiesPredicate;
- (id)localAccount;
- (id)localStore;
- (void)managedObjectContextWillSaveNotification:(id)arg1;
- (id)managedObjectModel;
- (id)mostRecentlyModifiedNoteInCollection:(id)arg1;
- (id)newFRCForCollection:(id)arg1 delegate:(id)arg2;
- (id)newFRCForCollection:(id)arg1 delegate:(id)arg2 performFetch:(BOOL)arg3;
- (id)newFetchRequestForNotes;
- (id)newlyAddedAccount;
- (id)newlyAddedAttachment;
- (id)newlyAddedNote;
- (id)newlyAddedNoteWithGUID:(id)arg1;
- (id)newlyAddedStore;
- (id)nextIndex;
- (BOOL)nonEmptyNoteExistsForLegacyAccountWithObjectID:(id)arg1;
- (id)noteChangeWithType:(int)arg1 store:(id)arg2;
- (id)noteForObjectID:(id)arg1;
- (id)notesForIntegerIds:(id)arg1;
- (id)pathForIndex;
- (id)pathForPersistentStore;
- (id)persistentStoreCoordinator;
- (id)propertyValueForKey:(id)arg1;
- (void)receiveDarwinNotificationWithChangeLogging:(BOOL)arg1;
- (void)removeConflictingSqliteAndIdxFiles;
- (void)removeSqliteAndIdxFiles;
- (void)resetNotificationCount;
- (BOOL)save:(id *)arg1;
- (BOOL)saveOutsideApp:(id *)arg1;
- (BOOL)saveSilently:(id *)arg1;
- (void)setHasPriorityInSaveConflicts:(BOOL)arg1;
- (void)setPropertyValue:(id)arg1 forKey:(id)arg2;
- (BOOL)setUpCoreDataStack;
- (BOOL)setUpLastIndexTid;
- (BOOL)setUpLocalAccountAndStore;
- (void)setUpUniqueObjects;
- (BOOL)shouldDisableLocalStore;
- (BOOL)shouldObserveDarwinNotifications;
- (void)sortNotes:(id)arg1;
- (id)storeForObjectID:(id)arg1;
- (id)storeOptions;
- (void)tearDownCoreDataStack;
- (void)trackChanges:(id)arg1;
- (id)urlForPersistentStore;
- (id)visibleNoteForObjectID:(id)arg1;
- (id)visibleNotesForIntegerIds:(id)arg1;
- (id)visibleNotesPredicate;

@end
