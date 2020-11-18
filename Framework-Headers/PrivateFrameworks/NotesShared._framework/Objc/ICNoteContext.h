//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/ICNoteContainer-Protocol.h>

@class ICAccount, ICAccountUtilities, ICNote, ICNotesCrossProcessChangeCoordinator, ICPersistentContainer, ICXPCStoreCrossProcessChangeListener, NSError, NSManagedObjectContext, NSString, NSTimer;
@protocol OS_dispatch_queue;

@interface ICNoteContext : NSObject <ICNoteContainer>
{
    BOOL _delaySaving;
    BOOL _databaseOpenFailedDueToLowDiskSpace;
    BOOL _saving;
    ICPersistentContainer *_persistentContainer;
    ICNotesCrossProcessChangeCoordinator *_crossProcessChangeCoordinator;
    NSManagedObjectContext *_managedObjectContext;
    ICNote *_currentNote;
    NSError *_databaseOpenError;
    NSTimer *_updateAttachmentLocationsTimer;
    unsigned long long _contextOptions;
    ICXPCStoreCrossProcessChangeListener *_xpcStoreCrossProcessListener;
    ICAccountUtilities *_accountUtilities;
    NSTimer *_trashDeletionTimer;
    NSObject<OS_dispatch_queue> *_backgroundTaskQueue;
}

@property (strong, nonatomic) ICAccountUtilities *accountUtilities; // @synthesize accountUtilities=_accountUtilities;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *backgroundTaskQueue; // @synthesize backgroundTaskQueue=_backgroundTaskQueue;
@property (nonatomic) unsigned long long contextOptions; // @synthesize contextOptions=_contextOptions;
@property (strong, nonatomic) ICNotesCrossProcessChangeCoordinator *crossProcessChangeCoordinator; // @synthesize crossProcessChangeCoordinator=_crossProcessChangeCoordinator;
@property (strong, nonatomic) ICNote *currentNote; // @synthesize currentNote=_currentNote;
@property (strong, nonatomic) NSError *databaseOpenError; // @synthesize databaseOpenError=_databaseOpenError;
@property (nonatomic) BOOL databaseOpenFailedDueToLowDiskSpace; // @synthesize databaseOpenFailedDueToLowDiskSpace=_databaseOpenFailedDueToLowDiskSpace;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL delaySaving; // @synthesize delaySaving=_delaySaving;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property (readonly, nonatomic) ICAccount *noteContainerAccount;
@property (readonly) ICPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
@property (getter=isSaving) BOOL saving; // @synthesize saving=_saving;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSTimer *trashDeletionTimer; // @synthesize trashDeletionTimer=_trashDeletionTimer;
@property (strong, nonatomic) NSTimer *updateAttachmentLocationsTimer; // @synthesize updateAttachmentLocationsTimer=_updateAttachmentLocationsTimer;
@property (strong, nonatomic) ICXPCStoreCrossProcessChangeListener *xpcStoreCrossProcessListener; // @synthesize xpcStoreCrossProcessListener=_xpcStoreCrossProcessListener;

+ (void)crashThisApp;
+ (id)filenameFromFileWrapper:(id)arg1;
+ (BOOL)hasContextOptions:(unsigned long long)arg1;
+ (BOOL)hasSharedContext;
+ (BOOL)isActive;
+ (BOOL)isSingleRunningNotesApp;
+ (BOOL)legacyNotesDisabled;
+ (void)markOldTrashedNotesForDeletionInContext:(id)arg1;
+ (id)searchIndexerDataSource;
+ (void)setLegacyNotesDisabled:(BOOL)arg1;
+ (id)sharedContext;
+ (void)startSharedContextWithOptions:(unsigned long long)arg1;
+ (BOOL)updateSharedStateFile:(id)arg1 toState:(BOOL)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (id)accountName;
- (void)accountsDidChange:(id)arg1;
- (void)addOrDeleteLocalAccountIfNecessary;
- (id)allICloudACAccounts;
- (void)applicationWillTerminate;
- (BOOL)canBeSharedViaICloud;
- (void)clearPersistentContainer;
- (void)cloudContextFetchRecordChangeOperationDidFinish:(id)arg1;
- (void)dealloc;
- (void)deleteEverything;
- (void)destroyPersistentStore;
- (id)fetchedResultsControllerForFetchRequest:(id)arg1 sectionNameKeyPath:(id)arg2;
- (BOOL)hasAnyContextOptions:(unsigned long long)arg1;
- (BOOL)hasContextOptions:(unsigned long long)arg1;
- (id)initWithOptions:(unsigned long long)arg1;
- (BOOL)isDeleted;
- (void)managedObjectContextDidSave:(id)arg1;
- (id)newFetchedResultsControllerForAllAccounts;
- (id)newFetchedResultsControllerForAllFoldersIncludingHiddenNoteContainers:(BOOL)arg1;
- (id)newFetchedResultsControllerForAllNoteContainersWithPredicate:(id)arg1;
- (id)newFetchedResultsControllerForAllRegularFoldersAndAccounts;
- (id)newWorkerManagedObjectContext;
- (BOOL)noteIsVisible:(id)arg1;
- (id)noteVisibilityTestingForSearchingAccount;
- (id)persistentContainerQueue;
- (id)persistentStoreCoordinator;
- (void)postMoveUpdateChangeCountForNote:(id)arg1;
- (id)predicateForPinnedNotes;
- (id)predicateForRegularFoldersAndAccounts;
- (id)predicateForSearchableAttachments;
- (id)predicateForSearchableNotes;
- (id)predicateForVisibleNotes;
- (id)primaryICloudACAccount;
- (void)purgeDeletedObjectsInManagedObjectContext:(id)arg1;
- (void)purgeEverything;
- (BOOL)recoverFromSaveError;
- (void)refreshAll;
- (void)reloadPersistentContainer;
- (BOOL)save;
- (BOOL)save:(id *)arg1;
- (void)saveAndClearDecryptedDataIfNecessary;
- (BOOL)saveImmediately;
- (void)setupCrossProcessChangeCoordinator;
- (void)setupTrashDeletionTimer;
- (void)startSearchIndexerChangeObservingIfNecessary;
- (BOOL)supportsEditingNotes;
- (BOOL)supportsVisibilityTestingType:(long long)arg1;
- (id)titleForNavigationBar;
- (id)titleForTableViewCell;
- (id)visibleNotes;
- (unsigned long long)visibleNotesCount;

@end

