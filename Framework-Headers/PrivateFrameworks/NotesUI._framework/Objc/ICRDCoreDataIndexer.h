//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesUI/ICRDExpansionStateContextProviding-Protocol.h>
#import <NotesUI/NSFetchedResultsControllerDelegate-Protocol.h>

@class NSManagedObjectContext, NSSet, NSString;
@protocol ICRDCoreDataIndexerDelegate, OS_dispatch_queue;

@interface ICRDCoreDataIndexer : NSObject <NSFetchedResultsControllerDelegate, ICRDExpansionStateContextProviding>
{
    BOOL _shouldIncludeOutlineParentItems;
    id<ICRDCoreDataIndexerDelegate> _delegate;
    NSManagedObjectContext *_legacyManagedObjectContext;
    NSManagedObjectContext *_modernManagedObjectContext;
    id _firstRelevantItemIdentifier;
    NSSet *_activeFetchedResultsControllers;
    NSObject<OS_dispatch_queue> *_reloadDataSerialQueue;
}

@property (readonly, nonatomic) NSSet *activeFetchedResultsControllers; // @synthesize activeFetchedResultsControllers=_activeFetchedResultsControllers;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ICRDCoreDataIndexerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *expansionStateContext;
@property (readonly, nonatomic) id firstRelevantItemIdentifier; // @synthesize firstRelevantItemIdentifier=_firstRelevantItemIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSManagedObjectContext *legacyManagedObjectContext; // @synthesize legacyManagedObjectContext=_legacyManagedObjectContext;
@property (readonly, nonatomic) NSManagedObjectContext *modernManagedObjectContext; // @synthesize modernManagedObjectContext=_modernManagedObjectContext;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *reloadDataSerialQueue; // @synthesize reloadDataSerialQueue=_reloadDataSerialQueue;
@property (nonatomic) BOOL shouldIncludeOutlineParentItems; // @synthesize shouldIncludeOutlineParentItems=_shouldIncludeOutlineParentItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activeManagedObjectContexts;
- (void)clearIndex;
- (void)controller:(id)arg1 didChangeContentWithDifference:(id)arg2;
- (void)deleteWithDecisionController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)indexObjectsInSection:(id)arg1 sectionIndex:(unsigned long long)arg2 fetchedResultsController:(id)arg3;
- (void)indexObjectsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithLegacyManagedObjectContext:(id)arg1 modernManagedObjectContext:(id)arg2;
- (id)newSnapshotFromIndex;
- (id)nextRelevantItemIdentifierAfter:(id)arg1;
- (void)performAndWaitForFetchedResultsControllers:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)reloadData:(CDUnknownBlockType)arg1;
- (void)reloadDataAndWait;
- (id)sectionIdentifierForHeaderInSection:(long long)arg1;
- (id)sectionIdentifiersForSectionControllerType:(unsigned long long)arg1;
- (id)sectionSnapshotsForSectionControllerType:(unsigned long long)arg1;
- (void)unsafelyIndexAllObjectsForFetchedResultsController:(id)arg1;
- (void)unsafelyReloadData:(CDUnknownBlockType)arg1;

@end
