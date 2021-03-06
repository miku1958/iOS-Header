//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContainer, CKRecordZoneID, NSMutableArray, NSMutableSet;
@protocol MTIDSyncEngineDelegate, OS_dispatch_queue;

@interface MTIDSyncEngine : NSObject
{
    long long _state;
    id<MTIDSyncEngineDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    CKContainer *_container;
    CKRecordZoneID *_zoneID;
    long long _qualityOfService;
    NSMutableSet *_queuedRecordIDs;
    NSMutableSet *_pendingRecordIDs;
    NSMutableArray *_transactions;
}

@property (strong, nonatomic) CKContainer *container; // @synthesize container=_container;
@property (weak, nonatomic) id<MTIDSyncEngineDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSMutableSet *pendingRecordIDs; // @synthesize pendingRecordIDs=_pendingRecordIDs;
@property (nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) NSMutableSet *queuedRecordIDs; // @synthesize queuedRecordIDs=_queuedRecordIDs;
@property (nonatomic) long long state; // @synthesize state=_state;
@property (weak, nonatomic) NSMutableArray *transactions; // @synthesize transactions=_transactions;
@property (strong, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;

+ (void)setTransactionTimeout:(double)arg1;
+ (double)transactionTimeout;
- (void).cxx_destruct;
- (void)_beginTransaction;
- (void)_endTransaction;
- (void)accountDidChange:(id)arg1;
- (void)addPendingRecordID:(id)arg1;
- (void)addRecordIDsToSave:(id)arg1 recordIDsToDelete:(id)arg2 qualityOfService:(long long)arg3;
- (void)commit;
- (void)deleteRecordsWithIDs:(id)arg1;
- (void)fetchAllRecordsOfType:(id)arg1;
- (void)fetchRecordWithID:(id)arg1;
- (void)handleDeletedRecordID:(id)arg1 error:(id)arg2;
- (void)handleEngineStartedWithError:(id)arg1;
- (void)handleFetchedRecords:(id)arg1 error:(id)arg2;
- (void)handleSavedRecord:(id)arg1 error:(id)arg2;
- (void)handleUserRecordID:(id)arg1;
- (id)initWithContainerIdentifier:(id)arg1 zoneID:(id)arg2 queue:(id)arg3 delegate:(id)arg4;
- (void)performQuery:(id)arg1;
- (void)removePendingRecordID:(id)arg1;
- (void)saveRecordsWithIDs:(id)arg1 qualityOfService:(long long)arg2;
- (void)setupContainerWithIdentifier:(id)arg1;
- (void)start;
- (void)startEngine;

@end

