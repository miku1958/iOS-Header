//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIArrayController.h>

#import <CloudDocsUI/_UIDocumentPickerDirectoryObserver-Protocol.h>

@class NSArray, NSDate, NSMetadataQuery, NSObject, NSOperationQueue, NSOrderedSet, NSPredicate, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface _UIDocumentPickerCloudDirectoryObserver : _UIArrayController <_UIDocumentPickerDirectoryObserver>
{
    NSOrderedSet *_staticItems;
    NSPredicate *_queryPredicate;
    NSURL *_firstURL;
    BOOL _recursive;
    BOOL _afterInitialUpdate;
    NSMetadataQuery *_query;
    NSArray *_scopes;
    NSDate *_lastSnapshotDate;
    NSObject<OS_dispatch_queue> *_queryQueue;
    NSOperationQueue *_queryWorkerQueue;
}

@property (nonatomic) BOOL afterInitialUpdate; // @synthesize afterInitialUpdate=_afterInitialUpdate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSDate *lastSnapshotDate; // @synthesize lastSnapshotDate=_lastSnapshotDate;
@property (strong, nonatomic) NSMetadataQuery *query; // @synthesize query=_query;
@property (strong, nonatomic) NSPredicate *queryPredicate;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queryQueue; // @synthesize queryQueue=_queryQueue;
@property (strong, nonatomic) NSOperationQueue *queryWorkerQueue; // @synthesize queryWorkerQueue=_queryWorkerQueue;
@property (strong, nonatomic) NSArray *scopes; // @synthesize scopes=_scopes;
@property (strong, nonatomic) NSOrderedSet *staticItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_initialGatherFinished:(id)arg1;
- (id)_queryResultsWithChangedObjects:(id)arg1 changedResults:(id *)arg2;
- (void)_queryUpdated:(id)arg1;
- (void)_updateObservers:(id)arg1;
- (void)_updateQuery;
- (void)assertOnQueryQueue;
- (void)callUpdateHandler:(id)arg1 changeDictionary:(id)arg2;
- (void)dealloc;
- (id)initWithRecursiveScopes:(id)arg1 delegate:(id)arg2;
- (id)initWithScopes:(id)arg1 delegate:(id)arg2;
- (void)invalidate;
- (id)isVisiblePredicate;
- (BOOL)objectAttributeModified:(id)arg1 newObject:(id)arg2;

@end

