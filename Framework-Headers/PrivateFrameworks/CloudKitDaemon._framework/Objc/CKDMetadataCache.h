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
- (id)appContainerIntersectionMetadataForAppContainerTuple:(id)arg1;
- (id)applicationMetadataForApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2;
- (id)containerInfoForContainerID:(id)arg1;
- (id)dateOfLastTokenUpdate;
- (void)expungeWithCurrentAccountIdentifier:(id)arg1 forceRemove:(BOOL)arg2;
- (id)globalConfiguration;
- (id)init;
- (id)inlock_applicationMetadataForApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2;
- (id)inlock_containerInfoForContainerID:(id)arg1;
- (void)inlock_setDateOfLastTokenUpdate:(id)arg1;
- (id)knownAppContainerTuples;
- (id)knownApplicationBundleIDs;
- (id)publicKeyOfType:(id)arg1 withIdentifier:(id)arg2;
- (id)pushTokenForAppContainerTuple:(id)arg1;
- (void)removeContainerID:(id)arg1;
- (void)removeKnownApplicationBundleID:(id)arg1;
- (void)setAppContainerIntersectionMetadata:(id)arg1 forAppContainerTuple:(id)arg2;
- (void)setApplicationMetadata:(id)arg1 forApplicationBundleID:(id)arg2 sourceApplicationBundleID:(id)arg3;
- (void)setContainerInfo:(id)arg1 forContainerID:(id)arg2;
- (void)setDateOfLastTokenUpdate:(id)arg1;
- (void)setGlobalConfiguration:(id)arg1;
- (void)setPublicKey:(id)arg1 ofType:(id)arg2 withIdentifier:(id)arg3;
- (void)setPushToken:(id)arg1 forAppContainerTuple:(id)arg2;

@end

