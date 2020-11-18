//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/ICNoteContainer.h>

#import <NotesShared/ICCloudObject-Protocol.h>

@class ICAccountProxy, ICFolder, NSSet, NSString;

@interface ICAccount : ICNoteContainer <ICCloudObject>
{
    BOOL _didAddObservers;
    BOOL _didAddTrashObservers;
    ICFolder *_defaultFolder;
    ICFolder *_trashFolder;
    ICAccountProxy *_accountProxy;
}

@property (strong, nonatomic) ICAccountProxy *accountProxy; // @synthesize accountProxy=_accountProxy;
@property (nonatomic) int accountType; // @dynamic accountType;
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
@property (strong, nonatomic) NSString *userRecordName; // @dynamic userRecordName;

+ (id)allCloudObjects;
+ (id)existingCloudObjectForRecordID:(id)arg1;
+ (id)keyPathsForValuesAffectingLocalizedName;
+ (id)keyPathsForValuesAffectingVisibleNoteContainerChildren;
+ (id)newCloudObjectForRecord:(id)arg1;
+ (id)recordType;
+ (id)standardFolderIdentifierWithPrefix:(id)arg1 accountIdentifier:(id)arg2 accountType:(int)arg3;
- (void).cxx_destruct;
- (id)accountName;
- (void)addTrashObserversIfNecessary;
- (id)allChildObjects;
- (id)allItemsFolderLocalizedTitle;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (long long)compare:(id)arg1;
- (void)createStandardFolders;
- (void)dealloc;
- (id)defaultFolderIdentifier;
- (id)folderWithIdentifier:(id)arg1;
- (BOOL)hasAnyCustomFolders;
- (BOOL)isDeletable;
- (BOOL)isInICloudAccount;
- (BOOL)isLeaf;
- (id)loggingDescriptionValues;
- (id)loggingIdentifier;
- (void)mergeDataFromRecord:(id)arg1;
- (BOOL)needsToBeDeletedFromCloud;
- (BOOL)needsToBeFetchedFromCloud;
- (BOOL)needsToBePushedToCloud;
- (id)noteVisibilityTestingForSearchingAccount;
- (void)noteWillBeDeletedOrUndeleted:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)predicateForSearchableAttachments;
- (id)predicateForSearchableNotes;
- (id)predicateForVisibleAttachments;
- (id)predicateForVisibleNotes;
- (id)predicateForVisibleNotesIncludingTrash;
- (void)prepareForDeletion;
- (id)recordName;
- (id)recordZoneID;
- (void)removeAllObserversIfNecessary;
- (void)removeTrashObserversIfNecessary;
- (id)reservedAccountFolderTitles;
- (void)setMarkedForDeletion:(BOOL)arg1;
- (BOOL)shouldBeDeletedFromLocalDatabase;
- (id)standardFolderIdentifierWithPrefix:(id)arg1;
- (BOOL)supportsEditingNotes;
- (BOOL)supportsLegacyTombstones;
- (id)threadUnsafeNewlyCreatedRecord;
- (id)titleForNavigationBar;
- (id)titleForTableViewCell;
- (id)trashFolderIdentifier;
- (void)updateAccountNameForAccountListSorting;
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
