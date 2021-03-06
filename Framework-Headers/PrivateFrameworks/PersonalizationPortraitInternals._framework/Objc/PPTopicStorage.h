//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PPDKStorage, PPRecordStorageHelper, PPSQLDatabase, PPSourceStorage;
@protocol OS_dispatch_queue;

@interface PPTopicStorage : NSObject
{
    PPSQLDatabase *_db;
    PPDKStorage *_dkStorage;
    id _deletionObserver;
    PPRecordStorageHelper *_storageHelper;
    PPSourceStorage *_sourceStorage;
    NSObject<OS_dispatch_queue> *_populateDatabaseQueue;
}

+ (id)_loadTrieFromLocalAsset:(id)arg1;
+ (double)_scoreTopicWithInitialScore:(double)arg1 decayRate:(double)arg2 extractionDate:(id)arg3 scoringDate:(id)arg4;
- (void).cxx_destruct;
- (void)_asyncPopulateDatabaseFromDKEventsIfNecessary;
- (void)_asyncProcessNewDKEventDeletions;
- (id)_createRecordWithStatement:(id)arg1 txnWitness:(id)arg2;
- (id)_deletionQueue;
- (void)_dkEventImportToDatabaseWithEvent:(id)arg1 eventUUIDBlob:(id)arg2 txnWitness:(id)arg3;
- (BOOL)_donateTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 decayRate:(double)arg5 sentimentScore:(double)arg6 exactMatchesInSourceText:(id)arg7 txnWitness:(id)arg8;
- (id)_generateExportRowIdsWithBatchSize:(unsigned int)arg1 isComplete:(BOOL *)arg2;
- (void)_importDKEventsWithLimit:(unsigned int)arg1 remoteEventsOnly:(BOOL)arg2 isComplete:(BOOL *)arg3;
- (void)_importDKEventsWithShouldContinueBlock:(unsigned int)arg1 remoteEventsOnly:(BOOL)arg2 isComplete:(BOOL *)arg3 shouldContinueBlock:(CDUnknownBlockType)arg4;
- (struct _PASDBIterAction_)_populateEvents:(id)arg1 statement:(id)arg2 txnWitness:(id)arg3;
- (struct _PASDBIterAction_)_populateUpdates:(id)arg1 statement:(id)arg2 source:(id)arg3 weightMultiplier:(double)arg4 topicToScoredTopic:(id)arg5;
- (void)_prepareDonationStatement:(id)arg1 scoredTopic:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 decayRate:(double)arg5 sentimentScore:(double)arg6 occurrencesInSource:(unsigned short)arg7 algorithmResultPosition:(unsigned short)arg8 algorithmResultCount:(unsigned short)arg9 exactMatchInSourceText:(BOOL)arg10 weightMultiplier:(double)arg11 sourceRowId:(long long)arg12;
- (BOOL)_shouldSuppressRepeatedImpressions:(id)arg1;
- (void)_truncateRecordsByDroppingOldestMakingRoomForCount:(unsigned int)arg1 txnWitness:(id)arg2;
- (id)_updatePreexistingTopicsMatchingTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 txnWitness:(id)arg4;
- (void)clearRemoteRecordsMissingFromDuetWithShouldContinueBlock:(CDUnknownBlockType)arg1;
- (BOOL)clearWithError:(id *)arg1 deletedCount:(unsigned long long *)arg2;
- (id)clusterIdentifiersExistingBeforeDate:(id)arg1;
- (void)dealloc;
- (BOOL)decayFeedbackCountsWithDecayRate:(double)arg1 shouldContinueBlock:(CDUnknownBlockType)arg2;
- (id)decayedFeedbackCountsForClusterIdentifier:(id)arg1;
- (BOOL)deleteAllTopicFeedbackCountRecordsOlderThanDate:(id)arg1;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 algorithm:(unsigned long long)arg2 atLeastOneTopicRemoved:(BOOL *)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 atLeastOneTopicRemoved:(BOOL *)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 algorithm:(unsigned long long)arg3 atLeastOneTopicRemoved:(BOOL *)arg4 deletedCount:(unsigned long long *)arg5 error:(id *)arg6;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 atLeastOneTopicRemoved:(BOOL *)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 algorithm:(unsigned long long)arg4 atLeastOneTopicRemoved:(BOOL *)arg5 deletedCount:(unsigned long long *)arg6 error:(id *)arg7;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 atLeastOneTopicRemoved:(BOOL *)arg4 deletedCount:(unsigned long long *)arg5 error:(id *)arg6;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 algorithm:(unsigned long long)arg3 atLeastOneTopicRemoved:(BOOL *)arg4 deletedCount:(unsigned long long *)arg5 error:(id *)arg6;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 atLeastOneTopicRemoved:(BOOL *)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;
- (BOOL)deleteAllTopicsOlderThanDate:(id)arg1 atLeastOneTopicRemoved:(BOOL *)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
- (BOOL)deleteAllTopicsWithTopicId:(id)arg1 algorithm:(unsigned long long)arg2 atLeastOneTopicRemoved:(BOOL *)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;
- (BOOL)deleteAllTopicsWithTopicId:(id)arg1 atLeastOneTopicRemoved:(BOOL *)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
- (void)disableSyncForBundleIds:(id)arg1;
- (BOOL)donateTopicFeedback:(id)arg1;
- (BOOL)donateTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 decayRate:(double)arg5 sentimentScore:(double)arg6 exactMatchesInSourceText:(id)arg7 error:(id *)arg8;
- (unsigned int)duetReadBatchSize;
- (double)duetWriteBatchInterval;
- (unsigned int)duetWriteBatchSize;
- (void)exportRecordsToDKWithShouldContinueBlock:(CDUnknownBlockType)arg1;
- (void)fixupDKEventsMetadataWithShouldContinueBlock:(CDUnknownBlockType)arg1;
- (void)fixupDKEventsWithShouldContinueBlock:(CDUnknownBlockType)arg1;
- (void)importRemotelyGeneratedTopicDKEventsWithLimit:(unsigned int)arg1 isComplete:(BOOL *)arg2 shouldContinueBlock:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithDatabase:(id)arg1;
- (id)initWithDatabase:(id)arg1 maxRecords:(unsigned int)arg2 dkStorage:(id)arg3 loadEmptyDatabaseFromDK:(BOOL)arg4;
- (BOOL)iterTopicRecordsWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (id)lastDonationTimeForSourcesBeforeDate:(id)arg1;
- (void)processNewDKEventDeletions;
- (BOOL)pruneOrphanedTopicFeedbackCountRecordsWithLimit:(long long)arg1 rowOffset:(unsigned long long)arg2 deletedCount:(unsigned long long *)arg3 isComplete:(BOOL *)arg4;
- (id)sourceStatsWithExcludedAlgorithms:(id)arg1;
- (id)tempTableForSourceIdsExcludedAlgorithms:(id)arg1 txnWitness:(id)arg2;
- (id)thirdPartyBundleIdsFromToday;
- (unsigned int)uniqueClusterIdentifierCount;

@end

