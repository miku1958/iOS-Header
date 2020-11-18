//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSHistoryServiceDatabaseProtocol-Protocol.h>

@class NSString;
@protocol NSXPCProxyCreating;

@interface WBSHistoryServiceDatabaseProxy : NSObject <WBSHistoryServiceDatabaseProtocol>
{
    id<NSXPCProxyCreating> _proxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (CDUnknownBlockType)_defaultProxyErrorHandlerWithSimpleReplyCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addAutocompleteTrigger:(id)arg1 forURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)assignHistoryItemWithID:(long long)arg1 toTopicTagsWithIDs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)checkIfLocalVisitExistsForDatabaseIDs:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)clearAllHistoryInsertingTombstoneUpToDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clearHistoryItems:(id)arg1 afterDate:(id)arg2 beforeDate:(id)arg3 tombstoneMode:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 tombstoneMode:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)close;
- (void)computeFrequentlyVisitedSites:(unsigned long long)arg1 minimalVisitCountScore:(unsigned long long)arg2 disallowList:(id)arg3 allowList:(id)arg4 options:(unsigned long long)arg5 currentTime:(double)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)convertTombstoneWithGenerationToSecureFormat:(long long)arg1 lastSyncedGeneration:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)createTagsForIdentifiers:(id)arg1 withTitles:(id)arg2 type:(unsigned long long)arg3 level:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)dispatchEvent:(id)arg1 listenersToIgnore:(id)arg2 persistForDelayedDispatching:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)expireOldVisits:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchAllTombstonesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchAutocompleteTriggersForURLString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchCloudClientVersionTable:(CDUnknownBlockType)arg1;
- (void)fetchDatabaseURL:(CDUnknownBlockType)arg1;
- (void)fetchDomainExpansions:(CDUnknownBlockType)arg1;
- (void)fetchEventsForListener:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchMetadataForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchWithOptions:(unsigned long long)arg1 predicate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)finishClearingHistoryIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)flushWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithProxy:(id)arg1;
- (BOOL)isOpen;
- (void)lastSeenDateForCloudClientVersion:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)markEventsAsReceivedByListener:(id)arg1 eventIDs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)performMaintenanceWithAgeLimit:(double)arg1 itemCountLimit:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)pruneTombstonesWithEndDatePriorToDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)recomputeItemScoresWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)recordVisitWithIdentifier:(id)arg1 sourceVisit:(id)arg2 title:(id)arg3 wasHTTPNonGet:(BOOL)arg4 loadSuccessful:(BOOL)arg5 origin:(long long)arg6 attributes:(unsigned long long)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)replayAndAddTombstones:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resetCloudHistoryDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)searchForUserTypedString:(id)arg1 options:(unsigned long long)arg2 currentTime:(double)arg3 writeHandle:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)setLastSeenDate:(id)arg1 forCloudClientVersion:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setTitle:(id)arg1 ofTagWithID:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateDatabaseAfterSuccessfulSyncWithGeneration:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateVisitWithIdentifier:(id)arg1 removeAttributes:(unsigned long long)arg2 addAttributes:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)updateVisitWithIdentifier:(id)arg1 title:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateWithType:(unsigned long long)arg1 addOrModifyObjects:(id)arg2 updateCurrentGeneration:(id)arg3 updateLastSyncGeneration:(id)arg4 updateLastMaintenance:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)vacuumHistoryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)visitIdentifiersMatchingExistingVisits:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)visitsAndTombstonesNeedingSyncWithVisitSyncWindow:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
