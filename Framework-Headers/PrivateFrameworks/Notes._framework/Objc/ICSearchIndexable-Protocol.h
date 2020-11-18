//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Notes/NSObject-Protocol.h>

@class CSSearchableItemAttributeSet, ICGenerateSearchIndexStringsOperation, NSArray, NSDate, NSDictionary, NSManagedObjectContext, NSManagedObjectID, NSString;

@protocol ICSearchIndexable <NSObject>
- (NSString *)identifier;
- (BOOL)isHiddenFromSearch;
- (NSManagedObjectContext *)managedObjectContext;
- (NSDate *)modificationDate;
- (NSManagedObjectID *)objectID;
- (NSString *)objectIdentifier;
- (NSString *)searchDomainIdentifier;
- (NSArray *)searchIndexStringsOutHasAdditionalStrings:(BOOL *)arg1;
- (NSString *)searchIndexableTitleUsingContentTextIfNecessary:(NSString *)arg1;
- (BOOL)searchResultCanBeDeletedFromNoteContext;
- (unsigned long long)searchResultsSection;
- (CSSearchableItemAttributeSet *)searchableItemAttributeSet;
- (NSString *)searchableItemIdentifier;
- (BOOL)shouldUpdateIndexForChangedValues:(NSDictionary *)arg1;
- (long long)visibilityTestingType;

@optional
- (ICGenerateSearchIndexStringsOperation *)generateSearchIndexStringsOperation;
- (BOOL)ignoreInSearchIndexer;
- (void)releaseMemoryForIndexing;
@end

