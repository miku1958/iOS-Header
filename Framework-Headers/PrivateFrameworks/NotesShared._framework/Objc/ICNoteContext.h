//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/ICNoteContainer-Protocol.h>

@class ICAccountUtilities, ICNote, ICNotesCrossProcessChangeCoordinator, ICSelectorDelayer, NSError, NSManagedObjectContext, NSNumber, NSPersistentStoreCoordinator, NSString, NSTimer;
@protocol OS_dispatch_queue;

@interface ICNoteContext : NSObject <ICNoteContainer>
{
    NSManagedObjectContext *_managedObjectContext;
    BOOL _delaySaving;
    BOOL _databaseOpenFailedDueToLowDiskSpace;
    BOOL _didResumeIndexing;
    BOOL _saving;
    ICNotesCrossProcessChangeCoordinator *_crossProcessChangeCoordinator;
    ICNote *_currentNote;
    NSError *_databaseOpenError;
    ICSelectorDelayer *_resumeIndexingDelayer;
    NSTimer *_updateAttachmentLocationsTimer;
    unsigned long long _contextOptions;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectContext *_nextIdContext;
    NSNumber *_nextId;
    ICAccountUtilities *_accountUtilities;
    NSTimer *_trashDeletionTimer;
    unsigned long long _changeTrackingDisableLevel;
    NSObject<OS_dispatch_queue> *_backgroundTaskQueue;
}

@property (strong, nonatomic) ICAccountUtilities *accountUtilities; // @synthesize accountUtilities=_accountUtilities;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *backgroundTaskQueue; // @synthesize backgroundTaskQueue=_backgroundTaskQueue;
@property (nonatomic) unsigned long long changeTrackingDisableLevel; // @synthesize changeTrackingDisableLevel=_changeTrackingDisableLevel;
@property (nonatomic) unsigned long long contextOptions; // @synthesize contextOptions=_contextOptions;
@property (strong, nonatomic) ICNotesCrossProcessChangeCoordinator *crossProcessChangeCoordinator; // @synthesize crossProcessChangeCoordinator=_crossProcessChangeCoordinator;
@property (strong, nonatomic) ICNote *currentNote; // @synthesize currentNote=_currentNote;
@property (strong, nonatomic) NSError *databaseOpenError; // @synthesize databaseOpenError=_databaseOpenError;
@property (nonatomic) BOOL databaseOpenFailedDueToLowDiskSpace; // @synthesize databaseOpenFailedDueToLowDiskSpace=_databaseOpenFailedDueToLowDiskSpace;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL delaySaving; // @synthesize delaySaving=_delaySaving;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didResumeIndexing; // @synthesize didResumeIndexing=_didResumeIndexing;
@property (readonly) unsigned long long hash;
@property (readonly) NSManagedObjectContext *managedObjectContext;
@property (strong, nonatomic) NSNumber *nextId; // @synthesize nextId=_nextId;
@property (strong, nonatomic) NSManagedObjectContext *nextIdContext; // @synthesize nextIdContext=_nextIdContext;
@property (strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property (strong, nonatomic) ICSelectorDelayer *resumeIndexingDelayer; // @synthesize resumeIndexingDelayer=_resumeIndexingDelayer;
@property (getter=isSaving) BOOL saving; // @synthesize saving=_saving;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSTimer *trashDeletionTimer; // @synthesize trashDeletionTimer=_trashDeletionTimer;
@property (strong, nonatomic) NSTimer *updateAttachmentLocationsTimer; // @synthesize updateAttachmentLocationsTimer=_updateAttachmentLocationsTimer;

+ (id)applicationDocumentsURL;
+ (void)crashThisApp;
+ (id)filenameFromFileWrapper:(id)arg1;
+ (BOOL)isActive;
+ (BOOL)legacyNotesDisabled;
+ (id)managedObjectModel;
+ (id)persistentStoreURL;
+ (id)persistentStoreWriteAheadLogURL;
+ (id)searchIndexerDataSource;
+ (void)setLegacyNotesDisabled:(BOOL)arg1;
+ (id)sharedContext;
+ (id)sharedUserDefaults;
+ (void)startSharedContextWithOptions:(unsigned long long)arg1;
+ (BOOL)updateSharedStateFile:(id)arg1 toState:(BOOL)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (id)accountForLocal;
- (id)accountName;
- (void)accountsDidChange:(id)arg1;
- (id)addEmptyNote;
- (id)addLocalAccount;
- (void)addOrDeleteLocalAccountIfNecessary;
- (void)addPersistentStoreIfNeeded;
- (id)allICloudACAccounts;
- (void)applicationWillTerminate;
- (BOOL)canBeSharedViaICloud;
- (BOOL)canTrackChangesForSync;
- (void)cloudContextFetchRecordChangeOperationDidFinish:(id)arg1;
- (id)coordinatorOptions;
- (void)createPersistentStore;
- (void)dealloc;
- (void)deleteEverything;
- (void)deleteNote:(id)arg1;
- (void)destroyPersistentStore;
- (BOOL)didMigrateLocalAccount;
- (void)disableChangeTracking;
- (void)enableChangeTracking;
- (void)ensureNextIdContext;
- (id)fetchedResultsControllerForFetchRequest:(id)arg1 sectionNameKeyPath:(id)arg2;
- (id)getNextIdObject;
- (BOOL)hasAnyContextOptions:(unsigned long long)arg1;
- (BOOL)hasContextOptions:(unsigned long long)arg1;
- (BOOL)hasPersistentStoreURL;
- (BOOL)hasValidPersistentStore;
- (id)initWithOptions:(unsigned long long)arg1;
- (BOOL)isChangeTrackingDisabled;
- (BOOL)isDeleted;
- (BOOL)isSingleRunningNotesApp;
- (id)legacyNoteIntegerIdToNoteIdentifierDictionary;
- (void)managedObjectContextDidSave:(id)arg1;
- (void)markOldTrashedNotesForDeletion;
- (id)newFetchedResultsControllerForAllAccounts;
- (id)newFetchedResultsControllerForAllFoldersIncludingHiddenNoteContainers:(BOOL)arg1;
- (id)newFetchedResultsControllerForAllNoteContainersWithPredicate:(id)arg1;
- (id)newFetchedResultsControllerForAllRegularFoldersAndAccounts;
- (id)newWorkerManagedObjectContext;
- (id)nextIndex;
- (id)noteChangeWithType:(short)arg1 folder:(id)arg2;
- (id)noteContainerAccount;
- (BOOL)noteIsVisible:(id)arg1;
- (id)noteVisibilityTestingForSearchingAccount;
- (void)postMoveUpdateChangeCountForNote:(id)arg1;
- (id)predicateForAttachmentsInAccount:(id)arg1;
- (id)predicateForRegularFoldersAndAccounts;
- (id)predicateForSearchableAttachments;
- (id)predicateForSearchableNotes;
- (id)predicateForVisibleNotes;
- (id)primaryICloudACAccount;
- (void)purgeDeletedObjectsInManagedObjectContext:(id)arg1;
- (void)purgeEverything;
- (BOOL)recoverFromSaveError;
- (void)refreshAll;
- (BOOL)save;
- (BOOL)save:(id *)arg1;
- (void)saveAndClearDecryptedDataIfNecessary;
- (BOOL)saveImmediately;
- (void)setNoteContent:(id)arg1 forNote:(id)arg2 isPlainText:(BOOL)arg3;
- (void)setupCrossProcessChangeCoordinator;
- (void)setupSyncChangeTracking;
- (void)setupTrashDeletionTimer;
- (void)startSearchIndexerChangeObservingIfNecessary;
- (BOOL)supportsEditingNotes;
- (BOOL)supportsVisibilityTestingType:(long long)arg1;
- (id)temporaryTextStorageWithAttributedString:(id)arg1 replicaID:(id)arg2;
- (id)titleForNavigationBar;
- (id)titleForTableViewCell;
- (void)trackChangesForSync:(id)arg1;
- (void)vacuumStore;
- (id)visibleNoteWithIdentifier:(id)arg1;
- (id)visibleNotes;
- (unsigned long long)visibleNotesCount;
- (id)visibleNotesForIntegerIds:(id)arg1;

@end

