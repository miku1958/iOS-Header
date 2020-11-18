//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKSQLite.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface CKDMetadataCache : CKSQLite
{
    NSObject<OS_dispatch_queue> *_cacheQueue;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // @synthesize cacheQueue=_cacheQueue;

+ (id)dbFileName;
+ (id)sharedCache;
- (void).cxx_destruct;
- (id)_initWithCacheDir:(id)arg1;
- (id)appContainerIntersectionMetadataForAppContainerAccountTuple:(id)arg1;
- (id)applicationMetadataForApplicationID:(id)arg1;
- (id)cachedDSIDForAccountID:(id)arg1;
- (id)containerInfoForContainerID:(id)arg1 accountID:(id)arg2;
- (id)dateOfLastTokenUpdate;
- (void)expungeAllData;
- (void)expungeDataForAccountID:(id)arg1;
- (void)expungeOldData;
- (void)expungeStaleAccountIDs;
- (id)globalConfiguration;
- (id)inlock_applicationMetadataForApplicationID:(id)arg1;
- (id)inlock_containerInfoForContainerID:(id)arg1 accountID:(id)arg2;
- (void)inlock_expungeDataForAccountID:(id)arg1;
- (void)inlock_setDateOfLastTokenUpdate:(id)arg1;
- (id)knownAppContainerAccountTuples;
- (id)knownAppContainerTuplesForAccountID:(id)arg1;
- (id)knownApplicationBundleIDs;
- (id)knownContainerizedApplicationBundleIDs;
- (id)publicKeyOfType:(id)arg1 withIdentifier:(id)arg2;
- (id)pushTokenForAppContainerAccountTuple:(id)arg1 filterOldTokens:(BOOL)arg2;
- (void)removeContainerID:(id)arg1;
- (void)removeKnownApplicationID:(id)arg1;
- (void)setAppContainerIntersectionMetadata:(id)arg1 forAppContainerAccountTuple:(id)arg2;
- (void)setApplicationMetadata:(id)arg1 forApplicationID:(id)arg2;
- (void)setCachedDSID:(id)arg1 forAccountID:(id)arg2;
- (void)setContainerInfo:(id)arg1 forContainerID:(id)arg2 accountID:(id)arg3;
- (void)setDateOfLastTokenUpdate:(id)arg1;
- (void)setGlobalConfiguration:(id)arg1;
- (void)setPublicKey:(id)arg1 ofType:(id)arg2 withIdentifier:(id)arg3;
- (void)setPushToken:(id)arg1 forAppContainerAccountTuple:(id)arg2;
- (void)willCreateDatabase;

@end
