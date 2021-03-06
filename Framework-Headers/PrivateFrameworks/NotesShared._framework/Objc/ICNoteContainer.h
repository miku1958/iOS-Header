//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/ICCloudSyncingObject.h>

#import <NotesShared/ICNoteContainer-Protocol.h>

@class CROrderedSet, ICAccount, ICCRDTIdentifierOrderedSetVersionedDocument, ICFolderCustomNoteSortType, NSArray, NSData, NSManagedObjectContext, NSNumber, NSString;

@interface ICNoteContainer : ICCloudSyncingObject <ICNoteContainer>
{
    BOOL _subFolderOrderMergeableDataDirty;
    ICCRDTIdentifierOrderedSetVersionedDocument *_subFolderIdentifiersOrderedSetDocument;
    NSNumber *transientNoteCount;
}

@property (strong, nonatomic) NSString *accountNameForAccountListSorting; // @dynamic accountNameForAccountListSorting;
@property (readonly, nonatomic) BOOL canBeSharedViaICloud;
@property (readonly, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) ICFolderCustomNoteSortType *customNoteSortType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isAllNotesContainer;
@property (nonatomic) BOOL isHiddenNoteContainer; // @dynamic isHiddenNoteContainer;
@property (readonly, nonatomic) BOOL isSharedReadOnly;
@property (readonly, nonatomic) BOOL isSharedViaICloud;
@property (readonly, nonatomic) BOOL isTrashFolder;
@property (readonly) NSManagedObjectContext *managedObjectContext;
@property (strong, nonatomic) NSString *nestedTitleForSorting; // @dynamic nestedTitleForSorting;
@property (readonly, nonatomic) ICAccount *noteContainerAccount;
@property (strong, nonatomic) ICAccount *owner; // @dynamic owner;
@property (nonatomic) int sortOrder; // @dynamic sortOrder;
@property (readonly, nonatomic) CROrderedSet *subFolderIdentifiersOrderedSet;
@property (strong, nonatomic) ICCRDTIdentifierOrderedSetVersionedDocument *subFolderIdentifiersOrderedSetDocument; // @synthesize subFolderIdentifiersOrderedSetDocument=_subFolderIdentifiersOrderedSetDocument;
@property (strong, nonatomic) NSData *subFolderOrderMergeableData;
@property (nonatomic, getter=isSubFolderOrderMergeableDataDirty) BOOL subFolderOrderMergeableDataDirty; // @synthesize subFolderOrderMergeableDataDirty=_subFolderOrderMergeableDataDirty;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsEditingNotes;
@property (strong, nonatomic) NSNumber *transientNoteCount; // @synthesize transientNoteCount;
@property (readonly, nonatomic) NSArray *visibleSubFolders;

+ (id)keyPathsForValuesAffectingCloudAccount;
- (void).cxx_destruct;
- (id)accountName;
- (id)cacheKey;
- (id)cloudAccount;
- (BOOL)isModernCustomFolder;
- (BOOL)mergeWithSubFolderMergeableData:(id)arg1;
- (BOOL)noteIsVisible:(id)arg1;
- (id)noteVisibilityTestingForSearchingAccount;
- (id)predicateForPinnedNotes;
- (id)predicateForSearchableAttachments;
- (id)predicateForSearchableNotes;
- (id)predicateForVisibleNotes;
- (void)saveSubFolderMergeableDataIfNeeded;
- (BOOL)supportsVisibilityTestingType:(long long)arg1;
- (id)titleForNavigationBar;
- (id)titleForTableViewCell;
- (void)updateSubFolderMergeableDataChangeCount;
- (id)visibleNotes;
- (unsigned long long)visibleNotesCount;
- (void)willRefresh:(BOOL)arg1;
- (void)willSave;
- (void)willTurnIntoFault;
- (void)writeSubFolderMergeableData;

@end

