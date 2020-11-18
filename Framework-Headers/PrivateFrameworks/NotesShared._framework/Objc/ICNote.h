//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/ICCloudSyncingObject.h>

#import <NotesShared/ICCloudObject-Protocol.h>
#import <NotesShared/ICNoteUI-Protocol.h>
#import <NotesShared/ICSearchIndexableNote-Protocol.h>
#import <NotesShared/NSTextStorageDelegate-Protocol.h>
#import <NotesShared/TTMergeableStringDelegate-Protocol.h>

@class ICAccount, ICAttachment, ICFolder, ICMergableDictionary, ICNoteData, NSData, NSDate, NSNumber, NSSet, NSString, NSUUID, TTMergeableStringVersionedDocument, TTVectorMultiTimestamp;
@protocol ICNoteMergeabilityDelegate;

@interface ICNote : ICCloudSyncingObject <ICSearchIndexableNote, ICCloudObject, TTMergeableStringDelegate, ICNoteUI, NSTextStorageDelegate>
{
    NSUUID *_uuid;
    BOOL needsRefresh;
    BOOL needsToSaveLastViewedTimestamp;
    BOOL preventReleasingTextStorage;
    BOOL shouldAddMediaAsynchronously;
    TTVectorMultiTimestamp *archivedTimestamp;
    NSData *decryptedData;
    TTMergeableStringVersionedDocument *_document;
    TTVectorMultiTimestamp *_lastNotifiedTimestamp;
    TTVectorMultiTimestamp *_lastViewedTimestamp;
    id<ICNoteMergeabilityDelegate> mergeabilityDelegate;
    NSUUID *_replicaIDOverride;
    ICMergableDictionary *_replicaIDToUserIDDict;
    id _reservedForCollaborationColorManager;
    id _reservedForTextStorage;
}

@property (strong, nonatomic) ICAccount *account; // @dynamic account;
@property (copy, nonatomic) TTVectorMultiTimestamp *archivedTimestamp; // @synthesize archivedTimestamp;
@property (nonatomic) short attachmentViewType; // @dynamic attachmentViewType;
@property (strong, nonatomic) NSSet *attachments; // @dynamic attachments;
@property (strong, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (strong) NSData *decryptedData; // @synthesize decryptedData;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) TTMergeableStringVersionedDocument *document; // @synthesize document=_document;
@property (readonly, nonatomic) TTMergeableStringVersionedDocument *documentWithoutCreating;
@property (strong, nonatomic) ICFolder *folder; // @dynamic folder;
@property (strong, nonatomic) NSDate *folderModificationDate; // @dynamic folderModificationDate;
@property (readonly, nonatomic) BOOL hasUnreadChanges;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isModernNote;
@property (nonatomic) BOOL isPinned; // @dynamic isPinned;
@property (strong, nonatomic) NSDate *lastNotifiedDate; // @dynamic lastNotifiedDate;
@property (copy, nonatomic) TTVectorMultiTimestamp *lastNotifiedTimestamp; // @synthesize lastNotifiedTimestamp=_lastNotifiedTimestamp;
@property (strong, nonatomic) NSData *lastNotifiedTimestampData; // @dynamic lastNotifiedTimestampData;
@property (strong, nonatomic) NSDate *lastViewedModificationDate; // @dynamic lastViewedModificationDate;
@property (copy, nonatomic) TTVectorMultiTimestamp *lastViewedTimestamp; // @synthesize lastViewedTimestamp=_lastViewedTimestamp;
@property (strong, nonatomic) NSData *lastViewedTimestampData; // @dynamic lastViewedTimestampData;
@property (strong, nonatomic) NSString *legacyContentHashAtImport; // @dynamic legacyContentHashAtImport;
@property (strong, nonatomic) NSString *legacyImportDeviceIdentifier; // @dynamic legacyImportDeviceIdentifier;
@property (strong, nonatomic) NSString *legacyManagedObjectIDURIRepresentation; // @dynamic legacyManagedObjectIDURIRepresentation;
@property (strong, nonatomic) NSDate *legacyModificationDateAtImport; // @dynamic legacyModificationDateAtImport;
@property (strong, nonatomic) NSNumber *legacyNoteWasPlainText; // @dynamic legacyNoteWasPlainText;
@property (weak, nonatomic) id<ICNoteMergeabilityDelegate> mergeabilityDelegate; // @synthesize mergeabilityDelegate;
@property (strong, nonatomic) NSDate *modificationDate; // @dynamic modificationDate;
@property (nonatomic) BOOL needsRefresh; // @synthesize needsRefresh;
@property (nonatomic) BOOL needsToSaveLastViewedTimestamp; // @synthesize needsToSaveLastViewedTimestamp;
@property (strong, nonatomic) ICNoteData *noteData; // @dynamic noteData;
@property (strong, nonatomic) NSNumber *noteHasChanges; // @dynamic noteHasChanges;
@property (nonatomic) short paperStyleType; // @dynamic paperStyleType;
@property (nonatomic) BOOL preventReleasingTextStorage; // @synthesize preventReleasingTextStorage;
@property (strong, nonatomic) ICFolder *primitiveFolder; // @dynamic primitiveFolder;
@property (strong, nonatomic) NSUUID *replicaIDOverride; // @synthesize replicaIDOverride=_replicaIDOverride;
@property (readonly, strong, nonatomic) ICMergableDictionary *replicaIDToUserIDDict; // @synthesize replicaIDToUserIDDict=_replicaIDToUserIDDict;
@property (strong, nonatomic) NSData *replicaIDToUserIDDictData; // @dynamic replicaIDToUserIDDictData;
@property (strong, nonatomic) id reservedForCollaborationColorManager; // @synthesize reservedForCollaborationColorManager=_reservedForCollaborationColorManager;
@property (strong, nonatomic) id reservedForTextStorage; // @synthesize reservedForTextStorage=_reservedForTextStorage;
@property (strong, nonatomic) NSString *selectedInkColorString; // @dynamic selectedInkColorString;
@property (strong, nonatomic) NSString *selectedInkIdentifier; // @dynamic selectedInkIdentifier;
@property (nonatomic) BOOL shouldAddMediaAsynchronously; // @synthesize shouldAddMediaAsynchronously;
@property (nonatomic) BOOL shouldShowHighlights;
@property (strong, nonatomic) NSString *snippet; // @dynamic snippet;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSString *thumbnailAttachmentIdentifier; // @dynamic thumbnailAttachmentIdentifier;
@property (readonly, nonatomic) TTVectorMultiTimestamp *timestamp;
@property (strong, nonatomic) NSString *title; // @dynamic title;
@property (strong, nonatomic) ICAttachment *titleSourceAttachment; // @dynamic titleSourceAttachment;

+ (id)allNotesInContext:(id)arg1;
+ (unsigned long long)countOfAllNotesInContext:(id)arg1;
+ (unsigned long long)countOfNotesMatchingPredicate:(id)arg1 context:(id)arg2;
+ (unsigned long long)countOfVisibleNotesInContext:(id)arg1;
+ (id)createNoteFromNote:(id)arg1 inFolder:(id)arg2 isPasswordProtected:(BOOL)arg3 removingOriginalNote:(BOOL)arg4;
+ (id)createNoteFromNote:(id)arg1 isPasswordProtected:(BOOL)arg2 removingOriginalNote:(BOOL)arg3;
+ (id)defaultTitleForEmptyNote;
+ (void)deleteEmptyNote:(id)arg1;
+ (void)deleteNote:(id)arg1;
+ (id)existingCloudObjectForRecordID:(id)arg1 context:(id)arg2;
+ (id)keyPathsForValuesAffectingCanBeSharedViaICloud;
+ (id)keyPathsForValuesAffectingCloudAccount;
+ (id)keyPathsForValuesAffectingHasUnreadChanges;
+ (id)keyPathsForValuesAffectingIsEditable;
+ (id)keyPathsForValuesAffectingIsSharedViaICloud;
+ (id)keyPathsForValuesAffectingParentCloudObject;
+ (unsigned long long)maxNoteAttachments;
+ (unsigned long long)maxNoteTextLength;
+ (id)newCloudObjectForRecord:(id)arg1 context:(id)arg2;
+ (id)newEmptyNoteInContext:(id)arg1;
+ (id)newEmptyNoteWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)newEmptyNoteWithUUID:(id)arg1 context:(id)arg2;
+ (id)newFetchRequestForNotes;
+ (id)newNoteWithoutIdentifierInContext:(id)arg1;
+ (id)newObjectWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)noteWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)noteWithIdentifier:(id)arg1 includeDeleted:(BOOL)arg2 context:(id)arg3;
+ (id)noteWithLegacyManagedObjectID:(id)arg1 context:(id)arg2;
+ (id)noteWithUUID:(id)arg1 context:(id)arg2;
+ (id)notesMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)predicateForNote:(id)arg1;
+ (id)predicateForPinnedNotes;
+ (id)predicateForSearchableNotes;
+ (id)predicateForVisibleNotes;
+ (id)predicateForVisibleNotesIncludingTrash:(BOOL)arg1;
+ (void)purgeAllNotesInContext:(id)arg1;
+ (void)purgeNote:(id)arg1;
+ (void)redactNote:(id)arg1;
+ (id)refreshAllOfNoteWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)snippetForPasswordProtectedNote:(id)arg1;
+ (BOOL)supportsUserSpecificRecords;
+ (id)visibleNoteWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)visibleNotesInContext:(id)arg1;
- (void).cxx_destruct;
- (id)accountName;
- (id)addAttachment;
- (id)addAttachmentWithData:(id)arg1 filename:(id)arg2;
- (id)addAttachmentWithFileURL:(id)arg1;
- (id)addAttachmentWithFileURL:(id)arg1 updateFileBasedAttributes:(BOOL)arg2;
- (id)addAttachmentWithFileWrapper:(id)arg1;
- (id)addAttachmentWithIdentifier:(id)arg1;
- (id)addAttachmentWithRemoteFileURL:(id)arg1;
- (id)addAttachmentWithUTI:(id)arg1;
- (id)addAttachmentWithUTI:(id)arg1 data:(id)arg2 filename:(id)arg3;
- (id)addAttachmentWithUTI:(id)arg1 data:(id)arg2 filename:(id)arg3 updateFileBasedAttributes:(BOOL)arg4;
- (id)addAttachmentWithUTI:(id)arg1 data:(id)arg2 filenameExtension:(id)arg3;
- (id)addAttachmentWithUTI:(id)arg1 withURL:(id)arg2;
- (id)addAttachmentWithUTI:(id)arg1 withURL:(id)arg2 updateFileBasedAttributes:(BOOL)arg3;
- (id)addGalleryAttachment;
- (void)addMediaToAttachment:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)addReplicaID:(id)arg1 forUserID:(id)arg2;
- (void)addShareParticipantsToAttributeSet:(id)arg1;
- (id)addTableAttachment;
- (id)addTableAttachmentWithRows:(id)arg1;
- (id)addTableAttachmentWithTableData:(id)arg1;
- (id)addTableAttachmentWithText:(id)arg1;
- (id)addURLAttachmentWithURL:(id)arg1;
- (void)addUndoCommand:(id)arg1;
- (BOOL)allowsNewTextLength:(unsigned long long)arg1;
- (BOOL)attachmentExceedsMaxSizeAllowed:(unsigned long long)arg1;
- (id)attachmentForWebThumbnail;
- (id)attachmentWithIdentifier:(id)arg1;
- (id)attachmentsInOrder;
- (id)attributedString;
- (id)authorsExcludingCurrentUser;
- (void)awakeFromFetch;
- (void)beginEditing;
- (BOOL)canAddAttachment;
- (BOOL)canAddAttachments:(unsigned long long)arg1;
- (BOOL)canBeRootShareObject;
- (BOOL)canBeSharedViaICloud;
- (id)childCloudObjects;
- (id)cloudAccount;
- (BOOL)containsAttachmentsUnsupportedInPasswordProtection;
- (id)contentInfoText;
- (id)dateForCurrentSortType;
- (void)dealloc;
- (void)decrypt;
- (void)deduplicateSelfAndCreateNewObjectFromRecord:(id)arg1;
- (void)deleteFromLocalDatabase;
- (void)didAcceptShare:(id)arg1;
- (void)didChangeNoteText;
- (void)didRefresh:(BOOL)arg1;
- (void)edited:(unsigned long long)arg1 range:(struct _NSRange)arg2 changeInLength:(long long)arg3;
- (void)endEditing;
- (void)enumerateAttachmentsInOrderUsingBlock:(CDUnknownBlockType)arg1;
- (void)fixBrokenReferences;
- (id)folderName;
- (BOOL)hasAllMandatoryFields;
- (BOOL)hasLoadedDocument;
- (BOOL)hasThumbnailImage;
- (id)ic_loggingValues;
- (BOOL)isDeletedOrInTrash;
- (BOOL)isEditable;
- (BOOL)isEmpty;
- (BOOL)isHiddenFromSearch;
- (BOOL)isInICloudAccount;
- (BOOL)isSharedViaICloud;
- (BOOL)isVisible;
- (void)markForDeletion;
- (void)mergeDataFromRecord:(id)arg1;
- (void)mergeDataFromRecord:(id)arg1 withMergePolicy:(long long)arg2;
- (void)mergeDataFromUserSpecificRecord:(id)arg1;
- (void)mergeEncryptedDataFromRecord:(id)arg1;
- (void)mergeFoldersFromRecord:(id)arg1;
- (void)mergeNotePrimitiveData;
- (long long)mergePolicyForRecord:(id)arg1;
- (void)mergeReplicaAndUserIDsFromDictionary:(id)arg1;
- (void)mergeTextData:(id)arg1 record:(id)arg2 mergePolicy:(long long)arg3;
- (void)mergeTextDataFromRecord:(id)arg1 mergePolicy:(long long)arg2;
- (void)mergeUnappliedEncryptedRecordsIncludingAttachments;
- (void)mergeUnappliedEncryptedRecordsIncludingAttachmentsInBackground;
- (unsigned long long)mergeWithNoteData:(id)arg1;
- (unsigned long long)mergeWithNoteDocument:(id)arg1;
- (id)mergeableString;
- (BOOL)needsToDeleteShare;
- (BOOL)needsToFetchAfterServerRecordChanged:(id)arg1;
- (id)newlyCreatedRecord;
- (id)newlyCreatedUserSpecificRecord;
- (id)noteAsPlainText;
- (id)noteAsPlainTextWithoutTitle;
- (void)objectWasFetchedFromCloudWithRecord:(id)arg1;
- (id)objectsToBeDeletedBeforeThisObject;
- (id)parentCloudObject;
- (id)parentEncryptableObject;
- (BOOL)populateReplicaIDToUserIDDictIfNecessary;
- (id)quotedTitle;
- (struct _NSRange)rangeForAttachment:(id)arg1;
- (struct _NSRange)rangeForSnippet;
- (struct _NSRange)rangeForTitle:(BOOL *)arg1;
- (id)recordType;
- (id)recordZoneName;
- (void)refreshNoteTextFromDataStore;
- (void)regenerateTitle:(BOOL)arg1 snippet:(BOOL)arg2;
- (void)regenerateTitleAndSnippetIfNecessaryForEdit:(unsigned long long)arg1 range:(struct _NSRange)arg2 changeInLength:(long long)arg3;
- (void)replaceWithDocument:(id)arg1;
- (id)replicaID;
- (BOOL)requiresLegacyTombstoneAfterDeletion;
- (void)resetUniqueIdentifier;
- (void)saveAndClearDecryptedData;
- (void)saveNoteData;
- (id)searchDomainIdentifier;
- (BOOL)searchResultCanBeDeletedFromNoteContext;
- (unsigned long long)searchResultType;
- (unsigned long long)searchResultsSection;
- (id)searchableContentKeyPaths;
- (id)searchableItemAttributeSet;
- (id)searchableItemIdentifier;
- (id)searchableString;
- (void)setCryptoInitializationVector:(id)arg1;
- (void)setCryptoTag:(id)arg1;
- (void)setLegacyManagedObjectID:(id)arg1;
- (void)setNeedsInitialFetchFromCloud:(BOOL)arg1;
- (id)shareTitle;
- (id)shareType;
- (BOOL)shouldReleaseDocumentWhenTurningIntoFault;
- (BOOL)supportsDeletionByTTL;
- (BOOL)supportsEncryptedValuesDictionary;
- (id)textDataDecryptedIfNecessary;
- (struct _NSRange)textRangeForSearchRange:(struct _NSRange)arg1 inSearchableString:(id)arg2;
- (id)trimmedTitle;
- (void)unmarkForDeletion;
- (void)updateChangeCount;
- (BOOL)updateLastViewedTimestampWithCurrentTimestamp;
- (void)updateTimestampWithUnserializedChanges;
- (id)uuid;
- (long long)visibilityTestingType;
- (id)visibleAttachments;
- (id)visibleTopLevelAttachments;
- (BOOL)wantsUndoCommands;
- (void)willAddOrRemovePassword;
- (void)willRefresh:(BOOL)arg1;
- (void)willTurnIntoFault;

@end

