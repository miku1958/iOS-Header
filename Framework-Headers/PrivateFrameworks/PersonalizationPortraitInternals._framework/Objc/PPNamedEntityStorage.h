//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PPDKStorage, PPRecordStorageHelper, PPSQLDatabase, PPSourceStorage;
@protocol OS_dispatch_queue;

@interface PPNamedEntityStorage : NSObject
{
    PPSQLDatabase *_db;
    PPDKStorage *_dkStorage;
    id _deletionObserver;
    PPRecordStorageHelper *_storageHelper;
    PPSourceStorage *_sourceStorage;
    NSObject<OS_dispatch_queue> *_populateDatabaseQueue;
}

+ (id)_loadTrieFromLocalAsset:(id)arg1;
+ (double)_scoreEntityWithInitialScore:(double)arg1 decayRate:(double)arg2 extractionDate:(id)arg3 scoringDate:(id)arg4;
- (void).cxx_destruct;
- (void)_asyncPopulateDatabaseFromDKEventsIfNecessary;
- (void)_asyncProcessNewDKEventDeletions;
- (id)_createRecordWithStatement:(id)arg1 txnWitness:(id)arg2;
- (id)_deletionQueue;
- (void)_dkEventImportToDatabaseWithEvent:(id)arg1 eventUUIDBlob:(id)arg2 txnWitness:(id)arg3 filter:(id)arg4;
- (BOOL)_donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 decayRate:(double)arg5 sentimentScore:(double)arg6 txnWitness:(id)arg7;
- (id)_generateExportRowIdsWithBatchSize:(unsigned int)arg1 isComplete:(BOOL *)arg2;
- (void)_importDKEventsWithLimit:(unsigned int)arg1 remoteEventsOnly:(BOOL)arg2 isComplete:(BOOL *)arg3;
- (void)_importDKEventsWithShouldContinueBlock:(unsigned int)arg1 remoteEventsOnly:(BOOL)arg2 isComplete:(BOOL *)arg3 shouldContinueBlock:(CDUnknownBlockType)arg4;
- (struct _PASDBIterAction_)_populateEvents:(id)arg1 statement:(id)arg2 txnWitness:(id)arg3;
- (struct _PASDBIterAction_)_populateUpdates:(id)arg1 statement:(id)arg2 source:(id)arg3 weightMultiplier:(double)arg4 entityToScoredEntityMap:(id)arg5;
- (void)_prepareDonationStatement:(id)arg1 scoredNamedEntity:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 decayRate:(double)arg5 sentimentScore:(double)arg6 occurrencesInSource:(unsigned short)arg7 weightMultiplier:(double)arg8 sourceRowId:(long long)arg9;
- (BOOL)_shouldSuppressRepeatedImpressions:(id)arg1;
- (void)_truncateRecordsByDroppingOldestMakingRoomForCount:(unsigned int)arg1 txnWitness:(id)arg2;
- (id)_updatePreexistingEntitiesMatchingEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 txnWitness:(id)arg4;
- (void)clearRemoteRecordsMissingFromDuetWithShouldContinueBlock:(CDUnknownBlockType)arg1;
- (BOOL)clearWithError:(id *)arg1 deletedCount:(unsigned long long *)arg2;
- (id)clusterIdentifiersExistingBeforeDate:(id)arg1;
- (void)dealloc;
- (BOOL)decayFeedbackCountsWithDecayRate:(double)arg1 shouldContinueBlock:(CDUnknownBlockType)arg2;
- (id)decayedFeedbackCountsForClusterIdentifier:(id)arg1;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 atLeastOneNamedEntityRemoved:(BOOL *)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 atLeastOneNamedEntityRemoved:(BOOL *)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 atLeastOneNamedEntityRemoved:(BOOL *)arg4 deletedCount:(unsigned long long *)arg5 error:(id *)arg6;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 atLeastOneNamedEntityRemoved:(BOOL *)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;
- (BOOL)deleteAllNamedEntitiesOlderThanDate:(id)arg1 atLeastOneNamedEntityRemoved:(BOOL *)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
- (BOOL)deleteAllNamedEntityFeedbackCountRecordsOlderThanDate:(id)arg1;
- (BOOL)deleteNamedEntitiesMatchingRowIds:(id)arg1 atLeastOneNamedEntityRemoved:(BOOL *)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
- (void)disableSyncForBundleIds:(id)arg1;
- (BOOL)donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 decayRate:(double)arg5 sentimentScore:(double)arg6 error:(id *)arg7;
- (BOOL)donateNamedEntityFeedback:(id)arg1;
- (unsigned int)duetReadBatchSize;
- (double)duetWriteBatchInterval;
- (unsigned int)duetWriteBatchSize;
- (void)exportRecordsToDKWithShouldContinueBlock:(CDUnknownBlockType)arg1;
- (void)fixupDKEventsMetadataWithShouldContinueBlock:(CDUnknownBlockType)arg1;
- (void)fixupDKEventsWithShouldContinueBlock:(CDUnknownBlockType)arg1;
- (void)importRemotelyGeneratedNamedEntityDKEventsWithLimit:(unsigned int)arg1 isComplete:(BOOL *)arg2 shouldContinueBlock:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithDatabase:(id)arg1;
- (id)initWithDatabase:(id)arg1 maxRecords:(unsigned int)arg2 dkStorage:(id)arg3 loadEmptyDatabaseFromDK:(BOOL)arg4;
- (BOOL)iterNamedEntityRecordsAndIdsWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (BOOL)iterNamedEntityRecordsWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (id)lastDonationTimeForSourcesBeforeDate:(id)arg1;
- (id)namedEntityFilterLastRecordDate;
- (id)namedEntityFilterLastRunDateWithError:(id *)arg1;
- (void)processNewDKEventDeletions;
- (BOOL)pruneOrphanedNamedEntityFeedbackCountRecordsWithLimit:(unsigned long long)arg1 rowOffset:(unsigned long long)arg2 deletedCount:(unsigned long long *)arg3 isComplete:(BOOL *)arg4;
- (BOOL)setNamedEntityFilterLastRecordDate:(id)arg1 error:(id *)arg2;
- (BOOL)setNamedEntityFilterLastRunDate:(id)arg1 error:(id *)arg2;
- (id)sourceStatsWithExcludedAlgorithms:(id)arg1;
- (id)tempTableForSourceIdsExcludedAlgorithms:(id)arg1 txnWitness:(id)arg2;
- (id)thirdPartyBundleIdsFromToday;
- (unsigned int)uniqueClusterIdentifierCount;

@end

