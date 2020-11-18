//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import <Notes/ICSearchIndexableNote-Protocol.h>

@class NSData, NSDate, NSNumber, NSSet, NSString, NSURL, NoteBodyObject, NoteStoreObject;

@interface NoteObject : NSManagedObject <ICSearchIndexableNote>
{
}

@property (strong, nonatomic) NSSet *attachments; // @dynamic attachments;
@property (strong, nonatomic) NSString *author; // @dynamic author;
@property (strong, nonatomic) NoteBodyObject *body; // @dynamic body;
@property (strong, nonatomic) NSNumber *containsCJK; // @dynamic containsCJK;
@property (strong, nonatomic) NSString *content;
@property (readonly, nonatomic) NSString *contentAsPlainText;
@property (strong, nonatomic) NSNumber *contentType; // @dynamic contentType;
@property (strong, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) NSNumber *deletedFlag; // @dynamic deletedFlag;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSString *externalContentRef;
@property (strong, nonatomic) NSNumber *externalFlags; // @dynamic externalFlags;
@property (strong, nonatomic) NSData *externalRepresentation;
@property (strong, nonatomic) NSNumber *externalSequenceNumber; // @dynamic externalSequenceNumber;
@property (strong, nonatomic) NSNumber *externalServerIntId; // @dynamic externalServerIntId;
@property (nonatomic) unsigned long long flags;
@property (readonly, strong, nonatomic) NSString *guid; // @dynamic guid;
@property (readonly, nonatomic) BOOL hasValidServerIntId;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSNumber *integerId; // @dynamic integerId;
@property (readonly, nonatomic) BOOL isBeingMarkedForDeletion;
@property (strong, nonatomic) NSNumber *isBookkeepingEntry; // @dynamic isBookkeepingEntry;
@property (readonly, nonatomic) BOOL isMarkedForDeletion;
@property (nonatomic) BOOL isPlainText;
@property (strong, nonatomic) NSDate *modificationDate; // @dynamic modificationDate;
@property (readonly, nonatomic) NSURL *noteId;
@property (nonatomic) unsigned long long sequenceNumber;
@property (strong, nonatomic) NSString *serverId; // @dynamic serverId;
@property (nonatomic) long long serverIntId;
@property (strong, nonatomic) NoteStoreObject *store; // @dynamic store;
@property (strong, nonatomic) NSString *summary; // @dynamic summary;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSString *title; // @dynamic title;

+ (BOOL)didChooseToMigrateNote:(id)arg1 context:(struct NoteContext *)arg2;
+ (id)searchIndexableObjectWithIdentifier:(id)arg1 includeDeleted:(BOOL)arg2 inNoteContext:(id)arg3;
- (BOOL)belongsToCollection:(id)arg1;
- (BOOL)containsAttachments;
- (id)contentAsPlainTextPreservingNewlines;
- (id)contentInfoText;
- (id)dateForCurrentSortType;
- (id)defaultTitleForEmptyNote;
- (id)identifier;
- (BOOL)ignoreInSearchIndexer;
- (BOOL)isHiddenFromSearch;
- (BOOL)isPasswordProtected;
- (void)markForDeletion;
- (id)noteAsPlainTextWithoutTitle;
- (id)objectIdentifier;
- (void)releaseMemoryForIndexing;
- (id)searchDomainIdentifier;
- (id)searchIndexStringsOutHasAdditionalStrings:(BOOL *)arg1;
- (id)searchIndexableTitleUsingContentTextIfNecessary:(id)arg1;
- (BOOL)searchResultCanBeDeletedFromNoteContext;
- (unsigned long long)searchResultsSection;
- (id)searchableContentKeyPaths;
- (id)searchableItemAttributeSet;
- (id)searchableItemIdentifier;
- (BOOL)shouldUpdateIndexForChangedValues:(id)arg1;
- (long long)visibilityTestingType;

@end

