//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDSyncStore-Protocol.h>
#import <HealthDaemon/NRDevicePropertyObserver-Protocol.h>

@class HDNanoPairingEntity, HDNanoSyncRestoreSession, HDProfile, IDSDevice, NRDevice, NSArray, NSDate, NSError, NSMutableArray, NSMutableDictionary, NSString, NSUUID;
@protocol HDNanoSyncStoreDelegate;

@interface HDNanoSyncStore : NSObject <NRDevicePropertyObserver, HDSyncStore>
{
    NSString *_remoteSystemBuildVersion;
    NSString *_remoteProductType;
    HDNanoPairingEntity *_pairingEntity;
    NSMutableDictionary *_pendingRequestContexts;
    int _protocolVersion;
    BOOL _active;
    BOOL _invalidated;
    NSMutableArray *_incomingSyncObserverTimers;
    NSUUID *_lastIncompleteIncomingSyncUUID;
    NSDate *_lastIncompleteIncomingSyncDate;
    NSDate *_lastCompleteIncomingSyncDate;
    NSError *_lastCompleteIncomingSyncError;
    NSMutableDictionary *_expectedSequenceNumbers;
    NSArray *_orderedSyncEntities;
    BOOL _master;
    BOOL _needsSyncOnUnlock;
    HDProfile *_profile;
    IDSDevice *_identityServicesDevice;
    NRDevice *_nanoRegistryDevice;
    id<HDNanoSyncStoreDelegate> _delegate;
    long long _restoreState;
    HDNanoSyncRestoreSession *_restoreSession;
}

@property (readonly, getter=isActive) BOOL active;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HDNanoSyncStoreDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) IDSDevice *device;
@property (readonly, copy) NSString *deviceName;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSUUID *healthUUID;
@property (strong, nonatomic) IDSDevice *identityServicesDevice; // @synthesize identityServicesDevice=_identityServicesDevice;
@property (readonly, getter=isInvalidated) BOOL invalidated;
@property (readonly) NSDate *lastInactiveDate;
@property (readonly, getter=isMaster) BOOL master; // @synthesize master=_master;
@property (strong, nonatomic) NRDevice *nanoRegistryDevice; // @synthesize nanoRegistryDevice=_nanoRegistryDevice;
@property (readonly) NSUUID *nanoRegistryUUID;
@property (nonatomic) BOOL needsSyncOnUnlock; // @synthesize needsSyncOnUnlock=_needsSyncOnUnlock;
@property (strong, nonatomic) NSUUID *persistentUUID;
@property (weak, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property (readonly) int protocolVersion;
@property (readonly, copy) NSString *remoteProductType;
@property (readonly, copy) NSString *remoteSystemBuildVersion;
@property (readonly, nonatomic, getter=isRestoreComplete) BOOL restoreComplete;
@property (readonly, nonatomic) HDNanoSyncRestoreSession *restoreSession; // @synthesize restoreSession=_restoreSession;
@property (readonly, nonatomic) long long restoreState; // @synthesize restoreState=_restoreState;
@property (readonly, copy) NSString *sourceBundleIdentifier;
@property (readonly) Class superclass;
@property (readonly) long long syncStoreType;

+ (id)_observedDeviceProperties;
+ (id)nanoSyncStoreWithProfile:(id)arg1 device:(id)arg2 delegate:(id)arg3;
+ (id)orderedSyncEntitiesForProfile:(id)arg1 protocolVersion:(int)arg2 companion:(BOOL)arg3;
- (void).cxx_destruct;
- (id)_initWithIdentityServicesDevice:(id)arg1 nanoRegistryDevice:(id)arg2 pairingEntity:(id)arg3 protocolVersion:(int)arg4 delegate:(id)arg5 profile:(id)arg6;
- (void)_notifyIncomingSyncObservers;
- (BOOL)_savePairingEntity;
- (void)_setRestoreState:(long long)arg1;
- (void)addIncomingSyncObserverWithTimeout:(double)arg1 timeoutHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addPendingRequestContext:(id)arg1 forUUID:(id)arg2;
- (id)beginRestoreSessionWithUUID:(id)arg1 timeout:(double)arg2 timeoutHandler:(CDUnknownBlockType)arg3;
- (BOOL)canRecieveSyncObjectsForEntityClass:(Class)arg1;
- (void)configureOutgoingResponse:(id)arg1;
- (id)createRequestWithMessageID:(unsigned short)arg1;
- (id)databaseIdentifier;
- (void)dealloc;
- (void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3;
- (id)deviceInfo;
- (id)diagnosticDescription;
- (void)didReceiveRequestWithChangeSet:(id)arg1;
- (BOOL)enforceSyncEntityOrdering;
- (long long)expectedSequenceNumberForSyncEntityClass:(Class)arg1;
- (void)finishRestoreSessionWithError:(id)arg1;
- (void)invalidate;
- (id)orderedSyncEntities;
- (id)pendingRequestContextForUUID:(id)arg1;
- (void)removeExpiredIncomingSyncObservers;
- (void)removePendingRequestContextForUUID:(id)arg1;
- (void)setExpectedSequenceNumber:(long long)arg1 forSyncEntityClass:(Class)arg2;
- (BOOL)shouldContinueAfterAnchorValidationError:(id)arg1;
- (BOOL)shouldEnforceSequenceOrdering;
- (BOOL)supportsSpeculativeChangesForSyncEntityClass:(Class)arg1;
- (id)syncEntityDependenciesForSyncEntity:(Class)arg1;
- (long long)syncEpoch;
- (long long)syncProvenance;
- (id)syncStoreDefaultSourceBundleIdentifier;
- (id)syncStoreIdentifier;
- (BOOL)validatePairingUUIDsWithIncomingMessage:(id)arg1;
- (BOOL)validateVersionWithIncomingMessage:(id)arg1;

@end
