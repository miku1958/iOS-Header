//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/CNSpotlightIndexingLogger-Protocol.h>

@class NSString;
@protocol OS_os_log;

@interface _CNSpotlightIndexingLogger : NSObject <CNSpotlightIndexingLogger>
{
    NSObject<OS_os_log> *_log;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_stringForSpotlightError:(id)arg1 willRetry:(BOOL)arg2;
- (void)deferringReindexAsFailedToPrepareForReindexing;
- (void)didNotFinishIndexingForDeltaSync:(id)arg1;
- (void)didNotFinishIndexingForFullSync:(id)arg1;
- (void)failedToBeginIndexBatchWithSpotlight:(id)arg1;
- (void)failedToClearChangeHistory:(id)arg1 toChangeAnchor:(id)arg2 error:(id)arg3;
- (void)failedToCreateSearchableItemForContactIdentifier:(id)arg1;
- (void)failedToDeleteAllSearchableItemsWithSpotlight:(id)arg1 willRetry:(BOOL)arg2;
- (void)failedToEndIndexBatchWithSpotlight:(id)arg1 willRetry:(BOOL)arg2;
- (void)failedToFetchClientStateFromSpotlight:(id)arg1 willRetry:(BOOL)arg2;
- (void)failedToFetchContactForChange:(id)arg1;
- (void)failedToFetchSearchableForContactIdentifiers:(id)arg1 error:(id)arg2;
- (void)failedToJournalItemIdentifiersForDeletionWithSpotlight:(id)arg1 identifiers:(id)arg2 willRetry:(BOOL)arg3;
- (void)failedToJournalSearchableItemsForIndexingWithSpotlight:(id)arg1 identifiers:(id)arg2 willRetry:(BOOL)arg3;
- (void)failedToUnarchiveClientStateData:(id)arg1;
- (void)finishedIndexingForDeltaSyncWithUpdateCount:(unsigned long long)arg1 deleteCount:(unsigned long long)arg2;
- (void)finishedIndexingForFullSync;
- (void)indexingContacts:(CDUnknownBlockType)arg1;
- (id)init;
- (void)noContactChangesToIndex;
- (void)reindexingAllSearchableItems:(CDUnknownBlockType)arg1;
- (void)reindexingSearchableItemsWithIdentifiers:(CDUnknownBlockType)arg1;
- (void)willBatchIndexForDeltaSyncWithUpdateCount:(unsigned long long)arg1 deleteCount:(unsigned long long)arg2;
- (void)willBatchIndexForFullSyncWithCount:(unsigned long long)arg1 lastOffset:(long long)arg2 doneFullSync:(BOOL)arg3;
- (void)willClearChangeHistory:(id)arg1 toChangeAnchor:(id)arg2;
- (void)willReindexAsChangeHistoryIsTruncated:(id)arg1;
- (void)willReindexAsFailedToFetchChangeHistory:(id)arg1 error:(id)arg2;
- (void)willReindexAsFailedToFetchClientState;
- (void)willReindexAsFailedToRegisterForChangeHistory:(id)arg1 error:(id)arg2;
- (void)willReindexAsIndexVersionChangedFrom:(long long)arg1 to:(long long)arg2;
- (void)willReindexAsSnapshotAnchorChangedFrom:(id)arg1 to:(id)arg2;
- (void)willReindexItemsWithIdentifiers:(id)arg1;
- (void)willResumeIndexingAfterOffset:(long long)arg1;
- (void)willResumeReindexingAsNotFinished;
- (void)willStartIndexingWithClientState:(id)arg1;

@end

