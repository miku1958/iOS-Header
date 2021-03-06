//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMBMirrorProtocol-Protocol.h>
#import <HomeKitDaemon/HMDNetworkRouterFirewallRuleManagerBackingStoreMirror-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMBCloudDatabase, HMBLocalDatabase, HMBLocalZone, HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorInternalStateModel, NAFuture, NAPromise, NSObject, NSString;
@protocol HMBLocalZoneID, NAScheduler, OS_dispatch_queue;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirror : HMFObject <HMFLogging, HMDNetworkRouterFirewallRuleManagerBackingStoreMirror, HMBMirrorProtocol>
{
    BOOL _shuttingDown;
    BOOL _useAnonymousRequests;
    id<HMBLocalZoneID> _zoneID;
    HMBLocalZone *_localZone;
    NAFuture *_lastAsyncFuture;
    HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorInternalStateModel *_internalState;
    HMBCloudDatabase *_cloudDatabase;
    HMBLocalDatabase *_localDatabase;
    NSObject<OS_dispatch_queue> *_workQueue;
    NAPromise *_startupPromise;
    NAPromise *_shutdownPromise;
    id<NAScheduler> _workQueueScheduler;
}

@property (readonly, nonatomic) HMBCloudDatabase *cloudDatabase; // @synthesize cloudDatabase=_cloudDatabase;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorInternalStateModel *internalState; // @synthesize internalState=_internalState;
@property (strong, nonatomic) NAFuture *lastAsyncFuture; // @synthesize lastAsyncFuture=_lastAsyncFuture;
@property (readonly, nonatomic) HMBLocalDatabase *localDatabase; // @synthesize localDatabase=_localDatabase;
@property (strong, nonatomic) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic) NAFuture *shutdownFuture;
@property (readonly, nonatomic) NAPromise *shutdownPromise; // @synthesize shutdownPromise=_shutdownPromise;
@property (nonatomic, getter=isShuttingDown) BOOL shuttingDown; // @synthesize shuttingDown=_shuttingDown;
@property (readonly, nonatomic) NAFuture *startUp;
@property (readonly, nonatomic) NAFuture *startupFuture;
@property (readonly, nonatomic) NAPromise *startupPromise; // @synthesize startupPromise=_startupPromise;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL useAnonymousRequests; // @synthesize useAnonymousRequests=_useAnonymousRequests;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property (readonly, nonatomic) id<NAScheduler> workQueueScheduler; // @synthesize workQueueScheduler=_workQueueScheduler;
@property (readonly, nonatomic) id<HMBLocalZoneID> zoneID; // @synthesize zoneID=_zoneID;

+ (id)__certificatesRecordID;
+ (id)__createSignatureVerificationPolicy;
+ (BOOL)__errorIsNotFound:(id)arg1;
+ (unsigned long long)__maxSizeForCKRecordSignatureVerificationCertificateChain;
+ (id)__overrideParentModelID;
+ (id)__publicKeyFromCertificateRecord:(id)arg1 dataKey:(id)arg2 assetKey:(id)arg3;
+ (id)__recordKeyCertificatePrefix:(id)arg1;
+ (id)logCategory;
+ (id)publicKeysFromCertificateRecord:(id)arg1;
- (void).cxx_destruct;
- (BOOL)__addOverrides:(id)arg1 replace:(BOOL)arg2 options:(id)arg3 activity:(id)arg4 error:(id *)arg5;
- (id)__asyncFutureWithActivity:(id)arg1 ignoreErrors:(BOOL)arg2 block:(CDUnknownBlockType)arg3;
- (BOOL)__canRecoverFromFetchDatabaseChangesError:(id)arg1 fetchInfo:(id)arg2;
- (BOOL)__canRecoverFromVerificationCertificatesError:(id)arg1 fetchInfo:(id)arg2;
- (id)__createCloudZoneIDForZoneID:(id)arg1;
- (BOOL)__createCloudZonesForFetchInfo:(id)arg1 error:(id *)arg2;
- (id)__fetchAllDataForRecordIDs:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id *)arg4;
- (id)__fetchAllDataForZoneID:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id *)arg4;
- (id)__fetchAllDataForZoneName:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id *)arg4;
- (void)__fetchCloudRecordsWithFetchInfo:(id)arg1;
- (void)__fetchDatabaseChangesCompleted:(id)arg1 error:(id)arg2;
- (void)__fetchDatabaseChangesWithFetchInfo:(id)arg1;
- (id)__fetchOverridesForRecordIDs:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id *)arg4;
- (id)__fetchOverridesForZoneName:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id *)arg4;
- (void)__fetchRecordByID:(id)arg1;
- (void)__fetchRecordsByQuery:(id)arg1;
- (void)__fetchVerificationCertificatesCompleted:(id)arg1 record:(id)arg2 error:(id)arg3;
- (void)__fetchVerificationCertificatesWithFetchInfo:(id)arg1;
- (void)__fetchZoneChangesWithFetchInfo:(id)arg1;
- (id)__loadOrCreateInternalStateModelWithLocalZone:(id)arg1 activity:(id)arg2;
- (id)__localZonesForRecordIDs:(id)arg1 activity:(id)arg2 error:(id *)arg3;
- (id)__openLocalZoneForCloudZoneID:(id)arg1 error:(id *)arg2;
- (void)__performCloudZonePullsWithFetchInfo:(id)arg1;
- (BOOL)__removeAllLocalRulesWithOptions:(id)arg1 activity:(id)arg2 error:(id *)arg3;
- (BOOL)__removeAllOverridesWithOptions:(id)arg1 activity:(id)arg2 error:(id *)arg3;
- (void)__removeDeletedZonesWithFetchInfo:(id)arg1;
- (BOOL)__removeOverridesForRecordIDs:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id *)arg4;
- (BOOL)__removeOverridesForZoneName:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id *)arg4;
- (BOOL)__removeOverridesForZoneName:(id)arg1 recordName:(id)arg2 options:(id)arg3 activity:(id)arg4 error:(id *)arg5;
- (void)__retryFetchDatabaseChangesWithFetchInfo:(id)arg1;
- (void)__retryFetchVerificationCertificatesWithFetchInfo:(id)arg1;
- (void)__saveInternalStateWithActivity:(id)arg1;
- (BOOL)__shouldFailCloudRecordFetchError:(id)arg1 error:(id)arg2;
- (void)__shutdownLocalZones:(id)arg1 activity:(id)arg2;
- (void)__shutdownWithActivity:(id)arg1;
- (void)__startQueryOperation:(id)arg1 operation:(id)arg2;
- (void)__startUpCloudZonesWithFetchInfo:(id)arg1;
- (void)__startupWithLocalZone:(id)arg1 activity:(id)arg2;
- (void)__updateChangeTokenWithFetchInfo:(id)arg1;
- (id)_fetchAllDataForZoneName:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)_fetchCloudRecordsForZoneID:(id)arg1 recordID:(id)arg2 options:(id)arg3 desiredKeys:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_fetchOverridesForZoneName:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (BOOL)_removeOverridesForZoneName:(id)arg1 recordName:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (BOOL)addOverrides:(id)arg1 replace:(BOOL)arg2 options:(id)arg3 error:(id *)arg4;
- (id)cloudFetchNeededForRecordIDs:(id)arg1 error:(id *)arg2;
- (id)desiredKeys;
- (id)destroy;
- (id)fetchAllDataForRecordIDs:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)fetchAllDataForZoneName:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)fetchAllDataWithOptions:(id)arg1 error:(id *)arg2;
- (id)fetchAllOverridesWithOptions:(id)arg1 error:(id *)arg2;
- (void)fetchCloudChangesForRecordIDs:(id)arg1 options:(id)arg2 ignoreLastSynchronizedRecords:(BOOL)arg3 xpcActivity:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)fetchCloudRecordIDsForZoneID:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchCloudRecordsForZoneID:(id)arg1 recordID:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)fetchOverridesForRecordIDs:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)fetchOverridesForZoneName:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)fetchVerificationCertificatesRecordWithOperationGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)flush;
- (id)initWithLocalDatabase:(id)arg1 cloudDatabase:(id)arg2 useAnonymousRequests:(BOOL)arg3 ownerQueue:(id)arg4;
- (BOOL)removeAllLocalRulesWithOptions:(id)arg1 error:(id *)arg2;
- (BOOL)removeAllOverridesWithOptions:(id)arg1 error:(id *)arg2;
- (BOOL)removeOverridesForRecordIDs:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (BOOL)removeOverridesForZoneName:(id)arg1 recordName:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)shutdown;
- (void)startUpWithLocalZone:(id)arg1;
- (id)triggerOutputForOutputRow:(unsigned long long)arg1 options:(id)arg2;

@end

