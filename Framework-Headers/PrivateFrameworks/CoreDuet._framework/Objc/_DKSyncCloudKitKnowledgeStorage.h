//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/APSConnectionDelegate-Protocol.h>

@class APSConnection, CKContainer, CKServerChangeToken, NSHashTable, NSMutableDictionary, NSMutableSet, NSOperation, NSString, _CDPeriodicSchedulerJob, _DKSyncPeerStatusTracker, _DKThrottledActivity;
@protocol _DKKeyValueStore, _DKSyncRemoteKnowledgeStorageFetchDelegate;

@interface _DKSyncCloudKitKnowledgeStorage : NSObject <APSConnectionDelegate>
{
    BOOL _started;
    id<_DKKeyValueStore> _keyValueStore;
    _DKThrottledActivity *_activityThrottler;
    _DKSyncPeerStatusTracker *_tracker;
    _CDPeriodicSchedulerJob *_updateSourceDeviceIdentifiersPeriodicJob;
    BOOL _cloudSyncAvailablityObserverRegistered;
    CKContainer *_container;
    APSConnection *_connection;
    double _updateSourceDeviceIdentifiersBackoffTimeInterval;
    NSMutableDictionary *_zoneIDsBySourceDeviceID;
    NSMutableDictionary *_recordZonesByZoneID;
    BOOL _databaseChangesExist;
    BOOL _isPrewarmed;
    NSMutableSet *_zoneIDsWithAdditionChanges;
    NSMutableSet *_zoneIDsWithDeletionChanges;
    NSMutableSet *_zoneIDsWithUnrecoverableDecryptionErrors;
    CKServerChangeToken *_fetchDatabaseChangesServerChangeToken;
    NSOperation *_previousDependentOperation;
    NSHashTable *_outstandingOperations;
    BOOL _available;
    id<_DKSyncRemoteKnowledgeStorageFetchDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)deviceIDFromZoneID:(id)arg1;
+ (id)mySyncZoneID;
+ (id)zoneIDWithDeviceID:(id)arg1;
- (void).cxx_destruct;
- (void)_cloudSyncAvailabilityDidChange:(id)arg1;
- (void)cancelOutstandingOperations;
- (void)clearPrewarmedFlag;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)dealloc;
- (void)fetchAdditionsHighWaterMarkWithPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchDeletedEventIDsFromPeer:(id)arg1 sinceDate:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 highPriority:(BOOL)arg5 completion:(CDUnknownBlockType)arg6;
- (void)fetchDeletionsHighWaterMarkWithPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchEventsFromPeer:(id)arg1 windows:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 highPriority:(BOOL)arg6 completion:(CDUnknownBlockType)arg7;
- (void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)hasAdditionsFlagForPeer:(id)arg1;
- (BOOL)hasDeletionsFlagForPeer:(id)arg1;
- (id)init;
- (id)name;
- (void)prewarmFetchWithCompletion:(CDUnknownBlockType)arg1;
- (void)setFetchDelegate:(id)arg1;
- (void)setHasAdditionsFlag:(BOOL)arg1 forPeer:(id)arg2;
- (void)setHasDeletionsFlag:(BOOL)arg1 forPeer:(id)arg2;
- (void)start;
- (long long)transportType;
- (void)updateStorageWithAddedEvents:(id)arg1 deletedEventIDs:(id)arg2 highPriority:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;

@end

