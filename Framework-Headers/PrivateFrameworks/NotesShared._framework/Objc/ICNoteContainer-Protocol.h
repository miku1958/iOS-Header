//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/ICNoteVisibilityTesting-Protocol.h>

@class ICAccount, ICFolderCustomNoteSortType, ICNote, NSArray, NSData, NSManagedObjectContext, NSPredicate, NSString;
@protocol ICNoteVisibilityTesting;

@protocol ICNoteContainer <ICNoteVisibilityTesting>

@property (readonly, nonatomic) BOOL canBeSharedViaICloud;
@property (readonly, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) ICFolderCustomNoteSortType *customNoteSortType;
@property (readonly, nonatomic) BOOL isAllNotesContainer;
@property (readonly, nonatomic) BOOL isSharedReadOnly;
@property (readonly, nonatomic) BOOL isSharedViaICloud;
@property (readonly, nonatomic) BOOL isTrashFolder;
@property (readonly) NSManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) ICAccount *noteContainerAccount;
@property (strong, nonatomic) NSData *subFolderOrderMergeableData;
@property (readonly, nonatomic) BOOL supportsEditingNotes;
@property (readonly, nonatomic) NSArray *visibleSubFolders;

- (NSString *)accountName;
- (BOOL)isDeleted;
- (BOOL)isModernCustomFolder;
- (BOOL)mergeWithSubFolderMergeableData:(NSData *)arg1;
- (BOOL)noteIsVisible:(ICNote *)arg1;
- (id<ICNoteVisibilityTesting>)noteVisibilityTestingForSearchingAccount;
- (NSPredicate *)predicateForPinnedNotes;
- (NSPredicate *)predicateForVisibleNotes;
- (void)saveSubFolderMergeableDataIfNeeded;
- (NSString *)titleForNavigationBar;
- (NSString *)titleForTableViewCell;
- (void)updateSubFolderMergeableDataChangeCount;
- (NSArray *)visibleNotes;
- (unsigned long long)visibleNotesCount;
@end

