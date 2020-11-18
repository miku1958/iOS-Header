//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDSyncStore-Protocol.h>

@class HDNanoPairingEntity, NRDevice, NSString, NSUUID;
@protocol HDHealthDaemon, HDNanoSyncStoreDelegate;

@interface HDNanoSyncStore : NSObject <HDSyncStore>
{
    BOOL _isMaster;
    int _protocolVersion;
    id<HDNanoSyncStoreDelegate> _delegate;
    NRDevice *_nanoRegistryDevice;
    NSString *_remoteSystemBuildVersion;
    NSString *_remoteProductType;
    NSString *_sourceBundleIdentifier;
    NSString *_storagePath;
    id<HDHealthDaemon> _healthDaemon;
    HDNanoPairingEntity *_pairingEntity;
}

@property (nonatomic, getter=isActivated) BOOL activated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<HDNanoSyncStoreDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<HDHealthDaemon> healthDaemon; // @synthesize healthDaemon=_healthDaemon;
@property (strong, nonatomic) NSUUID *healthUUID;
@property (nonatomic) BOOL isMaster; // @synthesize isMaster=_isMaster;
@property (readonly, nonatomic) NRDevice *nanoRegistryDevice; // @synthesize nanoRegistryDevice=_nanoRegistryDevice;
@property (readonly, nonatomic) NSUUID *nanoRegistryUUID;
@property (strong, nonatomic) HDNanoPairingEntity *pairingEntity; // @synthesize pairingEntity=_pairingEntity;
@property (strong, nonatomic) NSUUID *persistentUUID;
@property (readonly, nonatomic) int protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property (readonly, copy, nonatomic) NSString *remoteProductType; // @synthesize remoteProductType=_remoteProductType;
@property (readonly, copy, nonatomic) NSString *remoteSystemBuildVersion; // @synthesize remoteSystemBuildVersion=_remoteSystemBuildVersion;
@property (readonly, nonatomic) BOOL shouldSynthesizeProvenance;
@property (readonly, copy, nonatomic) NSString *sourceBundleIdentifier; // @synthesize sourceBundleIdentifier=_sourceBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *storagePath; // @synthesize storagePath=_storagePath;
@property (readonly) Class superclass;
@property (readonly, nonatomic) long long syncProvenance;
@property (readonly, nonatomic) NSString *syncStoreDefaultSourceBundleIdentifier;
@property (readonly, nonatomic) NSUUID *syncStoreDefaultSourceUUID;
@property (readonly, nonatomic) NSString *syncStoreIdentifier;

+ (id)_version2SyncEntityClassesForCompanion:(BOOL)arg1;
+ (id)_version3SyncEntityClassesForCompanion:(BOOL)arg1;
+ (id)nanoSyncStoreWithRegistryDevice:(id)arg1 delegate:(id)arg2 healthDaemon:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
- (id)_initWithNanoRegistryDevice:(id)arg1 pairingEntity:(id)arg2 sourceIdentifier:(id)arg3 delegate:(id)arg4 healthDaemon:(id)arg5;
- (BOOL)_savePairingEntity;
- (id)_syncEntitiesForCompanion:(BOOL)arg1;
- (id)newChangeWithSyncEntityClass:(Class)arg1;
- (id)restoreSyncEntities;
- (void)sendChange:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncDidFinishWithSuccess:(BOOL)arg1 error:(id)arg2 context:(id)arg3;
- (id)syncEntities;
- (unsigned long long)syncObjectLimitForEntityClass:(Class)arg1;
- (BOOL)validatePairingUUIDsWithIncomingMessage:(id)arg1;
- (BOOL)validateVersionWithIncomingMessage:(id)arg1;

@end

