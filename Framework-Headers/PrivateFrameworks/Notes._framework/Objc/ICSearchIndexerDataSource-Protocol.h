//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Notes/NSObject-Protocol.h>

@class CSSearchableItem, NSArray, NSError, NSManagedObjectContext, NSPersistentStoreCoordinator, NSString;
@protocol ICSearchIndexable;

@protocol ICSearchIndexerDataSource <NSObject>
- (NSArray *)allIndexableObjectIDsInReversedReindexingOrder;
- (void)clearObjectIDsToProcess;
- (NSString *)dataSourceIdentifier;
- (NSArray *)indexableObjectIDsWithURIs:(NSArray *)arg1;
- (unsigned long long)indexingPriority;
- (BOOL)isObservingChanges;
- (BOOL)needsReindexing;
- (NSManagedObjectContext *)newManagedObjectContext;
- (id<ICSearchIndexable>)objectForManagedObjectIDURI:(NSString *)arg1 context:(NSManagedObjectContext *)arg2;
- (id<ICSearchIndexable>)objectForSearchableItem:(CSSearchableItem *)arg1 context:(NSManagedObjectContext *)arg2;
- (NSArray *)objectIDURIsToBeDeleted;
- (NSArray *)objectIDsNeedingIndexing;
- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;
- (void)searchIndexerDidFinishDeletingSearchableItemsWithObjectIDURIs:(NSArray *)arg1 error:(NSError *)arg2;
- (void)searchIndexerDidFinishIndexingObjectIDs:(NSArray *)arg1 error:(NSError *)arg2;
- (void)searchIndexerWillDeleteSearchableItemsWithObjectIDURIs:(NSArray *)arg1;
- (void)searchIndexerWillIndexObjectIDs:(NSArray *)arg1;
- (NSArray *)searchableItemsForObjectIDs:(NSArray *)arg1;
- (void)stageForReindexing;
- (void)stageObjectIDURIsForIndexing:(NSArray *)arg1;
- (void)startObservingChanges;
- (void)stopObservingChanges;
@end
