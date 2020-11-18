//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesUI/NSObject-Protocol.h>

@class CSSearchableItemAttributeSet, NSArray, NSData, NSDate, NSManagedObjectContext, NSManagedObjectID, NSString, NSURL;

@protocol ICSearchIndexable <NSObject>
- (NSArray *)authorsExcludingCurrentUser;
- (NSDate *)creationDate;
- (NSString *)identifier;
- (BOOL)isHiddenFromSearch;
- (NSManagedObjectContext *)managedObjectContext;
- (NSDate *)modificationDate;
- (NSManagedObjectID *)objectID;
- (NSString *)searchDomainIdentifier;
- (BOOL)searchResultCanBeDeletedFromNoteContext;
- (unsigned long long)searchResultType;
- (unsigned long long)searchResultsSection;
- (CSSearchableItemAttributeSet *)searchableItemAttributeSet;
- (NSString *)searchableItemIdentifier;
- (long long)visibilityTestingType;

@optional
- (NSData *)dataForTypeIdentifier:(NSString *)arg1;
- (NSURL *)fileURLForTypeIdentifier:(NSString *)arg1;
- (BOOL)ignoreInSearchIndexer;
@end

