//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCPrivateZoneController.h>

#import <NewsCore/FCAppConfigurationObserving-Protocol.h>
#import <NewsCore/FCDerivedPersonalizationData-Protocol.h>
#import <NewsCore/FCOperationThrottlerDelegate-Protocol.h>
#import <NewsCore/FCUserInfoObserving-Protocol.h>

@class CKRecord, FCPersonalizationTreatment, FCUserInfo, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol FCOperationThrottler, OS_dispatch_queue;

@interface FCPersonalizationData : FCPrivateZoneController <FCOperationThrottlerDelegate, FCAppConfigurationObserving, FCUserInfoObserving, FCDerivedPersonalizationData>
{
    BOOL _attemptingUpload;
    NSMutableDictionary *_aggregates;
    NSMutableDictionary *_openChangeGroupDeltas;
    NSMutableArray *_closedChangeGroups;
    CKRecord *_remoteRecord;
    NSObject<OS_dispatch_queue> *_readWriteQueue;
    FCPersonalizationTreatment *_treatment;
    id<FCOperationThrottler> _saveThrottler;
    FCUserInfo *_userInfo;
}

@property (strong, nonatomic) NSMutableDictionary *aggregates; // @synthesize aggregates=_aggregates;
@property BOOL attemptingUpload; // @synthesize attemptingUpload=_attemptingUpload;
@property (strong, nonatomic) NSMutableArray *closedChangeGroups; // @synthesize closedChangeGroups=_closedChangeGroups;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableDictionary *openChangeGroupDeltas; // @synthesize openChangeGroupDeltas=_openChangeGroupDeltas;
@property (readonly, nonatomic) FCPersonalizationTreatment *personalizationTreatment;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *readWriteQueue; // @synthesize readWriteQueue=_readWriteQueue;
@property (strong, nonatomic) CKRecord *remoteRecord; // @synthesize remoteRecord=_remoteRecord;
@property (strong, nonatomic) id<FCOperationThrottler> saveThrottler; // @synthesize saveThrottler=_saveThrottler;
@property (readonly) Class superclass;
@property (strong) FCPersonalizationTreatment *treatment; // @synthesize treatment=_treatment;
@property (strong, nonatomic) FCUserInfo *userInfo; // @synthesize userInfo=_userInfo;

+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (id)desiredKeys;
+ (void)initialize;
+ (id)localStoreFilename;
+ (id)localStoreMigrator;
+ (unsigned long long)localStoreVersion;
+ (id)recordIDsToSync;
+ (BOOL)requiresBatchedSync;
+ (BOOL)requiresHighPriorityFirstSync;
+ (BOOL)requiresPushNotificationSupport;
- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_closeOpenChangeGroup;
- (id)_instanceIdentifier;
- (void)_reloadTreatment;
- (void)_updateWithRemoteRecord:(id)arg1 profile:(id)arg2;
- (void)_writeToLocalStoreWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addObserver:(id)arg1;
- (id)aggregateForFeatureKey:(id)arg1;
- (id)aggregatesForFeatureKeys:(id)arg1;
- (void)appConfigurationDidChange:(id)arg1;
- (void)clearPersonalizationData;
- (id)d_allGlobalAggregates;
- (id)featureKeysWithNoAggregates:(id)arg1;
- (void)generateDerivedDataWithQualityOfService:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordIDs:(id)arg2;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 recordZone:(id)arg3 storeDirectory:(id)arg4;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 recordZone:(id)arg3 storeDirectory:(id)arg4 userInfo:(id)arg5;
- (void)loadLocalCachesFromStore;
- (id)modifyLocalAggregatesForFeatureKeys:(id)arg1 withAction:(unsigned long long)arg2 actionCount:(unsigned long long)arg3 defaultClicks:(double)arg4 defaultImpressions:(double)arg5;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(CDUnknownBlockType)arg2;
- (void)removeObserver:(id)arg1;
- (void)syncWithCompletion:(CDUnknownBlockType)arg1;
- (void)userInfoDidChangeFeldsparID:(id)arg1 fromCloud:(BOOL)arg2;

@end

