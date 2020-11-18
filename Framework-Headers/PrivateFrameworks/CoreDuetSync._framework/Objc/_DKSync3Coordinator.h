//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDuet/_DKSync2Coordinator.h>

#import <CoreDuetSync/_CDRemoteUserContextServer-Protocol.h>
#import <CoreDuetSync/_DKSyncRemoteContextStorageDelegate-Protocol.h>

@class NSObject, NSUUID;
@protocol OS_os_transaction, _DKSyncRemoteContextStorage;

@interface _DKSync3Coordinator : _DKSync2Coordinator <_DKSyncRemoteContextStorageDelegate, _CDRemoteUserContextServer>
{
    unsigned long long _watchingDeviceTypes;
    NSObject<OS_os_transaction> *_watchingDevicesTransaction;
    id<_DKSyncRemoteContextStorage> _transportMDCSRapport;
}

@property (readonly, nonatomic) NSUUID *deviceUUID;
@property (strong, nonatomic) id<_DKSyncRemoteContextStorage> transportMDCSRapport; // @synthesize transportMDCSRapport=_transportMDCSRapport;

- (void).cxx_destruct;
- (void)_fetchPropertiesOfRemoteKeyPaths:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_requestActivateDevicesWithHandler:(CDUnknownBlockType)arg1;
- (void)_syncDisabledToggle;
- (void)_syncEnabledToggle;
- (id)archivedObjectsForKeyPaths:(id)arg1;
- (void)dealloc;
- (void)fetchPropertiesOfRemoteKeyPaths:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)handleContextChangedNotification:(id)arg1;
- (void)handleStatusChangeForPeer:(id)arg1 previousTransports:(long long)arg2;
- (id)initWithContext:(id)arg1;
- (id)keyPathsByDeviceIDFromRemoteKeyPaths:(id)arg1;
- (id)multiDeviceContextStoreDevices;
- (id)peersForContextStoreDeviceIDs:(id)arg1;
- (id)registrationIdentifierForPeer:(id)arg1 remoteRegistrationIdentifier:(id)arg2;
- (id)remoteContextStorage:(id)arg1 archivedObjectsForKeyPaths:(id)arg2;
- (BOOL)remoteContextStorage:(id)arg1 hasKnowledgeOfKeyPath:(id)arg2;
- (void)remoteContextStorage:(id)arg1 registrationIdentifier:(id)arg2 setArchivedObjects:(id)arg3 peer:(id)arg4;
- (void)remoteContextStorage:(id)arg1 subscribeToChangesWithPeer:(id)arg2 registrationIdentifier:(id)arg3 predicate:(id)arg4;
- (void)remoteContextStorage:(id)arg1 unsubscribeFromChangesWithPeer:(id)arg2 registrationIdentifier:(id)arg3 predicate:(id)arg4;
- (void)requestActivateDevicesWithHandler:(CDUnknownBlockType)arg1;
- (void)sendContextValuesToPeer:(id)arg1 registrationIdentifier:(id)arg2 keyPaths:(id)arg3;
- (void)setArchivedObjects:(id)arg1 peer:(id)arg2;
- (void)setupStorage;
- (id)sourceDeviceUUID;
- (void)start;
- (BOOL)subscribeToContextValueChangeNotificationsWithRegistration:(id)arg1 deviceIDs:(id)arg2 error:(id *)arg3;
- (void)subscribeToContextValueChangeNotificationsWithRegistration:(id)arg1 deviceIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (BOOL)subscribeToDeviceStatusChangeNotificationsForDeviceTypes:(unsigned long long)arg1 error:(id *)arg2;
- (void)subscribeToDeviceStatusChangeNotificationsForDeviceTypes:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (BOOL)unsubscribeFromContextValueChangeNotificationsWithRegistration:(id)arg1 deviceIDs:(id)arg2 error:(id *)arg3;
- (void)unsubscribeFromContextValueChangeNotificationsWithRegistration:(id)arg1 deviceIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end
