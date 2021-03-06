//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpotlight/CSSearchableItemAttributeSet.h>

@class NSString;

@interface CSSearchableItemAttributeSet (IC)

@property (copy, nonatomic) NSString *ic_dataSourceIdentifier;
@property (nonatomic) BOOL ic_hasAttachments;
@property (nonatomic) BOOL ic_hasChecklists;
@property (nonatomic) BOOL ic_hasDrawings;
@property (nonatomic) BOOL ic_hasScannedDocuments;
@property (nonatomic) BOOL ic_isLocked;
@property (nonatomic) BOOL ic_isShared;
@property (strong, nonatomic) NSString *ic_relatedNoteUniqueIdentifier;
@property (nonatomic) unsigned long long ic_searchResultType;

+ (id)ic_customAttributeKeyDictionary;
+ (id)ic_customAttributeKeyWithName:(id)arg1 searchable:(BOOL)arg2 searchableByDefault:(BOOL)arg3 unique:(BOOL)arg4 multiValued:(BOOL)arg5;
+ (id)ic_dataSourceIdentifierCustomKey;
+ (id)ic_itemHasAttachmentsCustomKey;
+ (id)ic_itemHasChecklistsCustomKey;
+ (id)ic_itemHasDrawingsCustomKey;
+ (id)ic_itemHasScannedDocumentsCustomKey;
+ (id)ic_itemIsLockedCustomKey;
+ (id)ic_itemIsSharedCustomKey;
+ (id)ic_relatedNoteUniqueIdentifierCustomKey;
+ (id)ic_searchResultTypeCustomKey;
+ (id)ic_specializedIndexFieldAttributeKeyForStringField:(id)arg1;
- (void)ic_populateValuesForSpecializedFields;
- (unsigned long long)ic_relevance;
@end

