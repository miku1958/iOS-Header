//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDS/IDSDaemonListenerProtocol-Protocol.h>

@class IDSInternalQueueController, NSHashTable, NSMutableDictionary, NSProtocolChecker, NSString;
@protocol OS_dispatch_queue;

@interface IDSDaemonListener : NSObject <IDSDaemonListenerProtocol>
{
    IDSInternalQueueController *_internalQueueController;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSHashTable *_handlers;
    NSProtocolChecker *_protocol;
    NSMutableDictionary *_topicToAccountDictionaries;
    NSMutableDictionary *_topicToEnabledAccounts;
    NSMutableDictionary *_accountToDevices;
    NSMutableDictionary *_serviceToLinkedDevices;
    NSMutableDictionary *_accountToActiveDeviceUniqueID;
    NSMutableDictionary *_serviceToActiveDeviceUniqueID;
    NSString *_deviceIdentifier;
    BOOL _setupComplete;
    BOOL _postedSetupComplete;
    BOOL _setupInfoComplete;
    BOOL _connectionComplete;
    BOOL _hidingDisconnect;
}

@property (nonatomic, setter=_setHidingDisconnect:) BOOL _hidingDisconnect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) BOOL hasPostedSetupComplete;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isSetupComplete;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)__postSetupComplete;
- (void)_callHandlersAsyncWithBlock:(CDUnknownBlockType)arg1;
- (void)_callHandlersWithBlock:(CDUnknownBlockType)arg1;
- (void)_callHandlersWithBlockOnIvarQueue:(CDUnknownBlockType)arg1;
- (void)_callHandlersWithBlockOnIvarQueue:(CDUnknownBlockType)arg1 cleanup:(CDUnknownBlockType)arg2;
- (void)_internalDidSwitchActivePairedDevice:(id)arg1 forService:(id)arg2;
- (void)_internalSwitchActivePairedDevice:(id)arg1 forAccount:(id)arg2;
- (void)_internalSwitchActivePairedDevice:(id)arg1 forService:(id)arg2;
- (void)_noteDisconnected;
- (void)_performSyncBlock:(CDUnknownBlockType)arg1;
- (void)_removeAccountOnIvarQueue:(id)arg1;
- (id)_uniqueIDForDevice:(id)arg1;
- (id)_updateService:(id)arg1 withTinkerDevice:(id)arg2 shouldAdd:(BOOL)arg3 shouldSwitch:(BOOL)arg4;
- (void)account:(id)arg1 accountInfoChanged:(id)arg2;
- (void)account:(id)arg1 aliasesChanged:(id)arg2;
- (void)account:(id)arg1 dependentDevicesUpdated:(id)arg2;
- (void)account:(id)arg1 displayNameChanged:(id)arg2;
- (void)account:(id)arg1 localDeviceAdded:(id)arg2;
- (void)account:(id)arg1 localDeviceRemoved:(id)arg2;
- (void)account:(id)arg1 loginChanged:(id)arg2;
- (void)account:(id)arg1 profileChanged:(id)arg2;
- (void)account:(id)arg1 registrationStatusInfoChanged:(id)arg2;
- (void)account:(id)arg1 vettedAliasesChanged:(id)arg2;
- (void)accountAdded:(id)arg1;
- (id)accountDictionariesForService:(id)arg1;
- (void)accountDisabled:(id)arg1 onService:(id)arg2;
- (void)accountEnabled:(id)arg1 onService:(id)arg2;
- (void)accountRemoved:(id)arg1;
- (void)addHandler:(id)arg1;
- (void)connectionComplete:(BOOL)arg1 withResponse:(id)arg2;
- (void)continuityDidConnectToPeer:(id)arg1 withError:(id)arg2;
- (void)continuityDidDisconnectFromPeer:(id)arg1 withError:(id)arg2;
- (void)continuityDidDiscoverPeerWithData:(id)arg1 fromPeer:(id)arg2;
- (void)continuityDidDiscoverType:(long long)arg1 withData:(id)arg2 fromPeer:(id)arg3;
- (void)continuityDidFailToStartAdvertisingOfType:(long long)arg1 withError:(id)arg2;
- (void)continuityDidFailToStartScanningForType:(long long)arg1 withError:(id)arg2;
- (void)continuityDidLosePeer:(id)arg1;
- (void)continuityDidStartAdvertisingOfType:(long long)arg1;
- (void)continuityDidStartScanningForType:(long long)arg1;
- (void)continuityDidStopAdvertisingOfType:(long long)arg1;
- (void)continuityDidStopAdvertisingOfType:(long long)arg1 withError:(id)arg2;
- (void)continuityDidStopScanningForType:(long long)arg1;
- (void)continuityDidUpdateStateToState:(long long)arg1;
- (void)deactivatePairedDevices;
- (id)dependentDevicesForAccount:(id)arg1;
- (void)device:(id)arg1 nsuuidChanged:(id)arg2;
- (void)deviceIdentifierDidChange:(id)arg1;
- (void)didGetIdentities:(id)arg1 error:(id)arg2;
- (void)didSwitchActivePairedDevice:(id)arg1;
- (id)enabledAccountsForService:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)initWithQueueController:(id)arg1 ivarQueue:(id)arg2;
- (id)linkedDevicesForService:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)refreshRegistrationForAccount:(id)arg1;
- (void)registrationFailedForAccount:(id)arg1 needsDeletion:(id)arg2;
- (void)removeHandler:(id)arg1;
- (void)service:(id)arg1 tinkerDeviceAdded:(id)arg2;
- (void)service:(id)arg1 tinkerDeviceRemoved:(id)arg2;
- (void)service:(id)arg1 tinkerDeviceUpdated:(id)arg2;
- (void)setupCompleteWithInfo:(id)arg1;
- (void)switchActivePairedDevice:(id)arg1 forAccount:(id)arg2;
- (void)switchActivePairedDevice:(id)arg1 forService:(id)arg2;
- (void)updateAccount:(id)arg1 withAccountInfo:(id)arg2;
- (void)xpcObject:(id)arg1 objectContext:(id)arg2;

@end
