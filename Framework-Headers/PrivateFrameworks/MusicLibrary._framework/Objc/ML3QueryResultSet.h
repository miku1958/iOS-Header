//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MusicLibrary/NSCopying-Protocol.h>

@class ML3Query, ML3QueryResultSet_BackingStore, NSMutableArray;
@protocol OS_dispatch_queue;

@interface ML3QueryResultSet : NSObject <NSCopying>
{
    ML3QueryResultSet_BackingStore *_backingStore;
    ML3Query *_query;
    long long _revision;
    long long _localRevision;
    BOOL _supportsIncrementalUpdate;
    NSMutableArray *_updateToLibraryCurrentRevisionCompletionBlocks;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_fixedPriorityQueue;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) long long localRevision; // @synthesize localRevision=_localRevision;
@property (readonly, nonatomic) ML3Query *query; // @synthesize query=_query;
@property (readonly, nonatomic) long long revision; // @synthesize revision=_revision;

- (void).cxx_destruct;
- (id)_initWithQuery:(id)arg1 supportsIncrementalUpdate:(BOOL)arg2;
- (void)_loadCurrentFullResults;
- (void)_mergeChangesWithFromNewPIDs:(const vector_bbba3654 *)arg1 changedPIDs:(unordered_set_da619913 *)arg2;
- (void)_onQueueAddUpdateFinishedBlock:(CDUnknownBlockType)arg1;
- (void)_onQueueInvokeAndClearUpdateFinishedBlocksWithDidUpdateResult:(BOOL)arg1;
- (BOOL)_updateToLibraryCurrentRevision;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)entityLimit;
- (void)enumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithQuery:(id)arg1;
- (long long)persistentIDAtIndex:(unsigned long long)arg1;
- (BOOL)updateToLibraryCurrentRevision;

@end
