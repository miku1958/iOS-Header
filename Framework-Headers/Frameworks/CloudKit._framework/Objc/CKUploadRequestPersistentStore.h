//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol OS_dispatch_queue;

@interface CKUploadRequestPersistentStore : NSObject
{
    BOOL _firstInvocation;
    NSURL *_databaseURL;
    NSObject<OS_dispatch_queue> *_stateQueue;
}

@property (strong, nonatomic) NSURL *databaseURL; // @synthesize databaseURL=_databaseURL;
@property (nonatomic) BOOL firstInvocation; // @synthesize firstInvocation=_firstInvocation;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;

+ (id)repairRecordToMetadata:(id)arg1;
- (void).cxx_destruct;
- (id)allData;
- (id)assetRepairMetadata;
- (void)clearDatabase;
- (void)clearDelayedSyncRecords;
- (void)clearRepairRecords;
- (id)currentUser;
- (long long)delayedSyncCountForRecordName:(id)arg1;
- (id)delayedSyncDateForRecord:(id)arg1;
- (id)delayedSyncRecordNamesAfterDate:(id)arg1;
- (id)delayedSyncRecordNamesBeforeAndIncludingDate:(id)arg1;
- (void)deleteDatabase;
- (void)deleteDelayedSyncForRecordName:(id)arg1;
- (void)deleteRepairRecord:(id)arg1;
- (id)earliestDelayedSyncDateAfterDate:(id)arg1;
- (id)initWithDatabaseURL:(id)arg1;
- (id)lastFetchDate;
- (void)markRecordNameUnrecoverable:(id)arg1;
- (id)metadataForRecordName:(id)arg1;
- (id)packageRepairMetadata;
- (void)persistDelayedSyncForRecordName:(id)arg1 withDate:(id)arg2 increasingCount:(BOOL)arg3;
- (void)persistRepairRecord:(id)arg1;
- (void)persistSyncEngineMetadata:(id)arg1;
- (void)readDatabase:(CDUnknownBlockType)arg1 async:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)readWriteDatabase:(CDUnknownBlockType)arg1 async:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setCurrentUser:(id)arg1;
- (void)setLastFetchDate:(id)arg1;
- (id)sortedDelayedSyncRecordsForDatabase:(id)arg1;
- (id)syncEngineMetadata;
- (id)unarchivedObjectOfClass:(Class)arg1 fromData:(id)arg2 error:(id *)arg3;

@end
