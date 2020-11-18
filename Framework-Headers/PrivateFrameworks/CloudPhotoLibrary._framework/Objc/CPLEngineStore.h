//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>
#import <CloudPhotoLibrary/CPLEngineComponent-Protocol.h>

@class CPLEngineChangePipe, CPLEngineClientCache, CPLEngineCloudCache, CPLEngineDerivativesCache, CPLEngineIDMapping, CPLEngineLibrary, CPLEngineOutgoingResources, CPLEnginePushRepository, CPLEngineQuarantinedRecords, CPLEngineRemappedDeletes, CPLEngineResourceDownloadQueue, CPLEngineResourceStorage, CPLEngineStatusCenter, CPLEngineTransientRepository, CPLPlatformObject, CPLResetTracker, NSArray, NSDate, NSHashTable, NSMutableArray, NSSet, NSString, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CPLEngineStore : NSObject <CPLAbstractObject, CPLEngineComponent>
{
    NSHashTable *_storages;
    NSObject<OS_dispatch_queue> *_batchedTransactionsQueue;
    NSMutableArray *_batchedTransactions;
    BOOL _batchedTransactionDequeueIsScheduled;
    BOOL _dontDelayChangeSessionUpdate;
    NSURL *_resetEventsURL;
    NSMutableArray *_resetEvents;
    CPLResetTracker *_pendingTracker;
    NSSet *_lastInvalidRecordIdentifiers;
    NSDate *_lastInvalidRecordsDate;
    NSObject<OS_dispatch_source> *_pendingUpdateTimer;
    NSObject<OS_dispatch_queue> *_pendingUpdateQueue;
    double _pendingUpdateInterval;
    BOOL _unschedulePendingUpdateApplyOnWriteSuccess;
    BOOL _schedulePendingUpdateApplyOnWriteSuccess;
    BOOL _supportedFeatureVersionIsMostRecent;
    CPLPlatformObject *_platformObject;
    CPLEngineLibrary *_engineLibrary;
    CPLEnginePushRepository *_pushRepository;
    CPLEngineChangePipe *_pullQueue;
    CPLEngineIDMapping *_idMapping;
    CPLEngineClientCache *_clientCache;
    CPLEngineCloudCache *_cloudCache;
    CPLEngineTransientRepository *_transientPullRepository;
    CPLEngineResourceStorage *_resourceStorage;
    CPLEngineResourceDownloadQueue *_downloadQueue;
    CPLEngineOutgoingResources *_outgoingResources;
    CPLEngineRemappedDeletes *_remappedDeletes;
    CPLEngineQuarantinedRecords *_quarantinedRecords;
    CPLEngineStatusCenter *_statusCenter;
    CPLEngineDerivativesCache *_derivativesCache;
    unsigned long long _state;
}

@property (readonly, nonatomic) CPLEngineClientCache *clientCache; // @synthesize clientCache=_clientCache;
@property (readonly, nonatomic) CPLEngineCloudCache *cloudCache; // @synthesize cloudCache=_cloudCache;
@property (readonly, nonatomic) id corruptionInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CPLEngineDerivativesCache *derivativesCache; // @synthesize derivativesCache=_derivativesCache;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CPLEngineResourceDownloadQueue *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
@property (readonly, weak, nonatomic) CPLEngineLibrary *engineLibrary; // @synthesize engineLibrary=_engineLibrary;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) CPLEngineIDMapping *idMapping; // @synthesize idMapping=_idMapping;
@property (readonly) NSDate *libraryCreationDate;
@property (readonly, nonatomic) CPLEngineOutgoingResources *outgoingResources; // @synthesize outgoingResources=_outgoingResources;
@property (readonly, nonatomic) CPLPlatformObject *platformObject; // @synthesize platformObject=_platformObject;
@property (readonly, nonatomic) CPLEngineChangePipe *pullQueue; // @synthesize pullQueue=_pullQueue;
@property (readonly, nonatomic) CPLEnginePushRepository *pushRepository; // @synthesize pushRepository=_pushRepository;
@property (readonly, nonatomic) BOOL pushRepositoryIsFull;
@property (readonly, nonatomic) CPLEngineQuarantinedRecords *quarantinedRecords; // @synthesize quarantinedRecords=_quarantinedRecords;
@property (readonly, nonatomic) CPLEngineRemappedDeletes *remappedDeletes; // @synthesize remappedDeletes=_remappedDeletes;
@property (readonly, nonatomic) CPLEngineResourceStorage *resourceStorage; // @synthesize resourceStorage=_resourceStorage;
@property (readonly, nonatomic) BOOL shouldGenerateDerivatives;
@property (nonatomic) unsigned long long state; // @synthesize state=_state;
@property (readonly, nonatomic) CPLEngineStatusCenter *statusCenter; // @synthesize statusCenter=_statusCenter;
@property (readonly, nonatomic) NSArray *storages;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportedFeatureVersionIsMostRecent; // @synthesize supportedFeatureVersionIsMostRecent=_supportedFeatureVersionIsMostRecent;
@property (readonly, nonatomic) CPLEngineTransientRepository *transientPullRepository; // @synthesize transientPullRepository=_transientPullRepository;

+ (id)platformImplementationProtocol;
+ (id)stateDescriptionForState:(unsigned long long)arg1;
- (void).cxx_destruct;
- (BOOL)_applyPendingUpdate:(id)arg1 error:(id *)arg2;
- (BOOL)_canRead;
- (BOOL)_canWrite;
- (void)_commitWriteTransaction:(id)arg1 commitError:(id)arg2;
- (id)_currentTransaction;
- (void)_loadResetEvents;
- (void)_performTransaction:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_reallyPerformBatchedTransactionsLocked;
- (void)_reallySchedulePendingUpdateApply;
- (void)_reallyUnschedulePendingUpdateApply;
- (void)_removeTransactionOnCurrentThread:(id)arg1;
- (id)_resetEventsDescriptions;
- (BOOL)_resetLocalSyncStateWithError:(id *)arg1;
- (void)_scheduleBatchedTransactionsLocked;
- (void)_schedulePendingUpdateApply;
- (void)_setTransactionOnCurrentThread:(id)arg1;
- (void)_storeResetEvent:(id)arg1 date:(id)arg2 cause:(id)arg3;
- (void)_storeResetEvent:(id)arg1 date:(id)arg2 pending:(BOOL)arg3 cause:(id)arg4;
- (void)_unschedulePendingUpdateApply;
- (BOOL)applyPreviousChangeSessionUpdateWithExpectedLibraryVersion:(id)arg1 error:(id *)arg2;
- (void)assertCanRead;
- (void)assertCanWrite;
- (BOOL)beginChangeSession:(id)arg1 withLibraryVersion:(id)arg2 resetTracker:(id)arg3 error:(id *)arg4;
- (BOOL)checkExpectedLibraryVersion:(id)arg1 error:(id *)arg2;
- (id)clientCacheIdentifier;
- (void)closeAndDeactivate:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)componentName;
- (id)createNewLibraryVersion;
- (void)dealloc;
- (void)getStatusDictionaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithEngineLibrary:(id)arg1;
- (BOOL)isClientInSyncWithClientCache;
- (id)lastQuarantineCountReportDate;
- (id)libraryVersion;
- (id)libraryZoneName;
- (void)noteInvalidRecordIdentifiersInPushSession:(id)arg1;
- (void)noteOtherResetEvent:(id)arg1 cause:(id)arg2;
- (void)noteResetSyncFinished;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performBatchedWriteTransactionBarrier;
- (void)performBatchedWriteTransactionWithBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)performReadTransactionWithBlock:(CDUnknownBlockType)arg1;
- (id)performWriteTransactionWithBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerStorage:(id)arg1;
- (BOOL)resetCompleteSyncStateWithCause:(id)arg1 error:(id *)arg2;
- (BOOL)resetLocalSyncStateWithCause:(id)arg1 date:(id)arg2 error:(id *)arg3;
- (BOOL)resetLocalSyncStateWithCause:(id)arg1 error:(id *)arg2;
- (BOOL)resetSyncAnchorWithCause:(id)arg1 error:(id *)arg2;
- (BOOL)storeChangeSessionUpdate:(id)arg1 error:(id *)arg2;
- (BOOL)storeClientIsInSyncWithClientCacheWithError:(id *)arg1;
- (BOOL)storeLastQuarantineCountReportDate:(id)arg1 error:(id *)arg2;
- (BOOL)storeLibraryVersion:(id)arg1 withError:(id *)arg2;
- (BOOL)storeLibraryZoneName:(id)arg1 error:(id *)arg2;
- (BOOL)storeSupportedFeatureVersionInLastSync:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)storeUserIdentifier:(id)arg1 error:(id *)arg2;
- (unsigned long long)supportedFeatureVersionInLastSync;
- (id)userIdentifier;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;

@end
