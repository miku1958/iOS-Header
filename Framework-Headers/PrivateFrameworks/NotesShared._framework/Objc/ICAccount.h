//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/ICNoteContainer.h>

#import <NotesShared/ICCloudObject-Protocol.h>

@class ICAccountProxy, ICFolder, ICSelectorDelayer, NSData, NSSet, NSString;

@interface ICAccount : ICNoteContainer <ICCloudObject>
{
    BOOL _didAddObservers;
    BOOL _didAddTrashObservers;
    ICFolder *_defaultFolder;
    ICFolder *_trashFolder;
    ICAccountProxy *_accountProxy;
    ICSelectorDelayer *_trashFolderHiddenSelectorDelayer;
}

@property (strong, nonatomic) ICAccountProxy *accountProxy; // @synthesize accountProxy=_accountProxy;
@property (nonatomic) int accountType; // @dynamic accountType;
@property (strong, nonatomic) NSData *cryptoVerifier; // @dynamic cryptoVerifier;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) ICFolder *defaultFolder; // @synthesize defaultFolder=_defaultFolder;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSSet *deviceMigrationStates; // @dynamic deviceMigrationStates;
@property (nonatomic) BOOL didAddObservers; // @synthesize didAddObservers=_didAddObservers;
@property (nonatomic) BOOL didAddTrashObservers; // @synthesize didAddTrashObservers=_didAddTrashObservers;
@property (nonatomic) BOOL didChooseToMigrate; // @dynamic didChooseToMigrate;
@property (nonatomic) BOOL didFinishMigration; // @dynamic didFinishMigration;
@property (nonatomic) BOOL didMigrateOnMac; // @dynamic didMigrateOnMac;
@property (strong, nonatomic) NSSet *folders; // @dynamic folders;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSSet *legacyTombstones; // @dynamic legacyTombstones;
@property (readonly, nonatomic) NSString *localizedName;
@property (strong, nonatomic) NSString *name; // @dynamic name;
@property (strong, nonatomic) NSSet *notes; // @dynamic notes;
@property (strong, nonatomic) NSSet *ownerInverse; // @dynamic ownerInverse;
@property (strong, nonatomic) NSSet *serverChangeTokens; // @dynamic serverChangeTokens;
@property (readonly) Class superclass;
@property (strong, nonatomic) ICFolder *trashFolder; // @synthesize trashFolder=_trashFolder;
@property (strong, nonatomic) ICSelectorDelayer *trashFolderHiddenSelectorDelayer; // @synthesize trashFolderHiddenSelectorDelayer=_trashFolderHiddenSelectorDelayer;
@property (strong, nonatomic) NSString *userRecordName; // @dynamic userRecordName;

+ (id)accountWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)accountsMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)accountsWithAccountType:(int)arg1 context:(id)arg2;
+ (id)allAccountsInContext:(id)arg1;
+ (id)allActiveAccountsInContext:(id)arg1;
+ (id)allCloudObjectsInContext:(id)arg1;
+ (BOOL)clearAccountForAppleCloudKitTable;
+ (id)cloudKitAccountInContext:(id)arg1;
+ (id)cloudKitIfMigratedElseLocalAccountInContext:(id)arg1;
+ (id)defaultAccountInContext:(id)arg1;
+ (void)deleteAccount:(id)arg1;
+ (void)deleteAccountWithBatchDelete:(id)arg1;
+ (id)existingCloudObjectForRecordID:(id)arg1 context:(id)arg2;
+ (void)initialize;
+ (void)initializeLocalAccountNamesInBackground;
+ (id)keyPathsForValuesAffectingCanBeSharedViaICloud;
+ (id)keyPathsForValuesAffectingLocalizedName;
+ (id)keyPathsForValuesAffectingVisibleNoteContainerChildren;
+ (id)localAccountInContext:(id)arg1;
+ (void)localeDidChange:(id)arg1;
+ (id)localizedLocalAccountName;
+ (id)localizedLocalAccountNameMidSentence;
+ (id)newAccountWithIdentifier:(id)arg1 type:(int)arg2 context:(id)arg3;
+ (id)newLocalAccountInContext:(id)arg1;
+ (id)standardFolderIdentifierWithPrefix:(id)arg1 accountIdentifier:(id)arg2 accountType:(int)arg3;
- (void).cxx_destruct;
- (id)accountName;
- (void)addTrashObserversIfNecessary;
- (id)allChildObjects;
- (id)allItemsFolderLocalizedTitle;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (BOOL)canBeSharedViaICloud;
- (BOOL)canPasswordProtectNotes;
- (long long)compare:(id)arg1;
- (unsigned long long)countOfVisibleFolders;
- (void)createStandardFolders;
- (id)cryptoPassphraseVerifier;
- (void)dealloc;
- (id)defaultFolderIdentifier;
- (id)folderWithIdentifier:(id)arg1;
- (BOOL)hasAnyCustomFolders;
- (BOOL)hasSameCryptoKeyAsAccount:(id)arg1;
- (id)ic_loggingIdentifier;
- (id)ic_loggingValues;
- (BOOL)isDeletable;
- (BOOL)isInICloudAccount;
- (BOOL)isLeaf;
- (id)localizedNameMidSentence;
- (void)mergeDataFromRecord:(id)arg1;
- (BOOL)needsToBeDeletedFromCloud;
- (BOOL)needsToBePushedToCloud;
- (id)newlyCreatedRecord;
- (id)noteVisibilityTestingForSearchingAccount;
- (void)noteWillBeDeletedOrUndeleted:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)passwordProtectedNotes;
- (id)predicateForFolders;
- (id)predicateForNotesInAccount;
- (id)predicateForSearchableAttachments;
- (id)predicateForSearchableNotes;
- (id)predicateForVisibleAttachments;
- (id)predicateForVisibleFolders;
- (id)predicateForVisibleNotes;
- (id)predicateForVisibleNotesIncludingTrash;
- (void)prepareForDeletion;
- (id)recordName;
- (id)recordType;
- (id)recordZoneName;
- (void)removeAllObserversIfNecessary;
- (void)removeTrashObserversIfNecessary;
- (id)reservedAccountFolderTitles;
- (void)setMarkedForDeletion:(BOOL)arg1;
- (BOOL)shouldBeDeletedFromLocalDatabase;
- (BOOL)shouldExcludeFilesFromBackup;
- (id)standardFolderIdentifierWithPrefix:(id)arg1;
- (BOOL)supportsEditingNotes;
- (BOOL)supportsLegacyTombstones;
- (id)titleForNavigationBar;
- (id)titleForTableViewCell;
- (id)trashFolderIdentifier;
- (void)updateAccountNameForAccountListSorting;
- (void)updateTrashFolderHiddenNoteContainerState;
- (id)visibleFolders;
- (id)visibleFoldersWithParent:(id)arg1;
- (id)visibleNoteContainerChildren;
- (id)visibleNoteContainers;
- (id)visibleNotes;
- (unsigned long long)visibleNotesCount;
- (unsigned long long)visibleNotesIncludingTrashCount;
- (BOOL)visibleRootFoldersContainFolderWithTitle:(id)arg1;
- (void)willTurnIntoFault;

@end

