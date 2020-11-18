//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/ICNoteContainer.h>

#import <NotesShared/ICCloudObject-Protocol.h>

@class ICAccount, NSDate, NSSet, NSString;

@interface ICFolder : ICNoteContainer <ICCloudObject>
{
}

@property (strong, nonatomic) ICAccount *account; // @dynamic account;
@property (strong, nonatomic) NSSet *children; // @dynamic children;
@property (strong, nonatomic) NSDate *dateForLastTitleModification; // @dynamic dateForLastTitleModification;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) short folderType; // @dynamic folderType;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL importedFromLegacy; // @dynamic importedFromLegacy;
@property (readonly, nonatomic) BOOL isDefaultFolderForAccount; // @dynamic isDefaultFolderForAccount;
@property (strong, nonatomic) NSSet *noteChanges; // @dynamic noteChanges;
@property (strong, nonatomic) NSSet *notes; // @dynamic notes;
@property (strong, nonatomic) ICFolder *parent; // @dynamic parent;
@property (strong, nonatomic) NSDate *parentModificationDate; // @dynamic parentModificationDate;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSString *title; // @dynamic title;

+ (id)allCloudObjects;
+ (id)allFoldersInContext:(id)arg1;
+ (unsigned long long)countOfFoldersMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)deduplicatingTitle:(id)arg1 forFolder:(id)arg2 ofAccount:(id)arg3;
+ (void)deleteFolder:(id)arg1;
+ (id)englishTitleForDefaultFolder;
+ (id)englishTitleForTrashFolder;
+ (id)existingCloudObjectForRecordID:(id)arg1;
+ (id)folderWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)folderWithIdentifierCreatingIfNecessary:(id)arg1 context:(id)arg2;
+ (id)foldersMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)keyPathsForValuesAffectingIsLeaf;
+ (id)keyPathsForValuesAffectingTitleForTableViewCell;
+ (id)keyPathsForValuesAffectingVisibleNoteContainerChildren;
+ (id)localizedNewFolderName;
+ (id)localizedTitleForDefaultFolder;
+ (id)localizedTitleForTrashFolder;
+ (id)newCloudObjectForRecord:(id)arg1;
+ (id)newFolderInContext:(id)arg1;
+ (id)newFolderWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)predicateForVisibleFolders;
+ (id)predicateForVisibleFoldersIncludingHiddenNoteContainers:(BOOL)arg1;
+ (void)purgeFolder:(id)arg1;
+ (id)reservedFolderTitles;
+ (id)stringByScrubbingStringForFolderName:(id)arg1;
+ (id)visibleFoldersInContext:(id)arg1;
- (id)accountName;
- (void)awakeFromFetch;
- (long long)compare:(id)arg1;
- (unsigned long long)countOfVisibleNotesInFolder;
- (void)deleteFromLocalDatabase;
- (void)fixBrokenReferences;
- (id)foldersInFolder;
- (BOOL)hasAllMandatoryFields;
- (BOOL)isAncestorOfFolder:(id)arg1;
- (BOOL)isDefaultFolderOrDescendantOfDefaultFolder;
- (BOOL)isDeletable;
- (BOOL)isEditable;
- (BOOL)isInICloudAccount;
- (BOOL)isLeaf;
- (BOOL)isMovable;
- (BOOL)isRecentlyDeletedFolder;
- (BOOL)isTitleValid:(id)arg1 error:(out id *)arg2;
- (id)localizedTitle;
- (id)loggingDescriptionValues;
- (void)markForDeletion;
- (void)mergeDataFromRecord:(id)arg1;
- (void)mergeParentFromRecord:(id)arg1;
- (id)noteVisibilityTestingForSearchingAccount;
- (void)objectWasDeletedFromCloudByAnotherDevice;
- (void)objectWasFetchedFromCloudWithRecord:(id)arg1;
- (id)objectsToBeDeletedBeforeThisObject;
- (id)parentFolder;
- (id)predicateForAttachmentsInFolder;
- (id)predicateForFoldersInFolder;
- (id)predicateForNotesInFolder;
- (id)predicateForSearchableAttachments;
- (id)predicateForSearchableNotes;
- (id)predicateForVisibleAttachments;
- (id)predicateForVisibleAttachmentsInFolder;
- (id)predicateForVisibleNotes;
- (id)predicateForVisibleNotesInFolder;
- (void)prepareForDeletion;
- (id)recordType;
- (id)recordZoneID;
- (void)regenerateNestedTitleForSorting;
- (void)resetUniqueIdentifier;
- (void)setMarkedForDeletion:(BOOL)arg1;
- (void)setNeedsInitialFetchFromCloud:(BOOL)arg1;
- (BOOL)shouldTrackChanges;
- (BOOL)supportsEditingNotes;
- (id)threadUnsafeNewlyCreatedRecord;
- (id)titleForNavigationBar;
- (id)titleForTableViewCell;
- (void)unmarkForDeletionIncludingParentHierarchy;
- (void)updateSortOrder;
- (BOOL)validateTitle:(inout id *)arg1 error:(out id *)arg2;
- (BOOL)visibleChildFoldersContainsFolderWithTitle:(id)arg1;
- (id)visibleNoteContainerChildren;
- (id)visibleNotes;
- (unsigned long long)visibleNotesCount;
- (id)visibleNotesInFolder;
- (id)visibleNotesIncludingChildFolders;

@end

