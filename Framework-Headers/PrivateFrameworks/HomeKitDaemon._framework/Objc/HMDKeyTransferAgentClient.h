//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDKeyTransferAgent.h>

#import <HomeKitDaemon/HMFNetMonitorDelegate-Protocol.h>
#import <HomeKitDaemon/HMFNetServiceBrowserDelegate-Protocol.h>
#import <HomeKitDaemon/HMFNetServiceDelegate-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMFExponentialBackoffTimer, HMFNetMonitor, HMFNetServiceBrowser, NSMutableDictionary, NSMutableSet, NSString;

@interface HMDKeyTransferAgentClient : HMDKeyTransferAgent <HMFNetServiceDelegate, HMFTimerDelegate, HMFNetMonitorDelegate, HMFNetServiceBrowserDelegate>
{
    BOOL _resolutionInProgress;
    BOOL _haveCulledPlist;
    unsigned long long _residentProvisioningStatus;
    HMFNetServiceBrowser *_serviceBrowser;
    NSMutableDictionary *_idsKeys;
    NSMutableDictionary *_bonjourKeys;
    NSMutableSet *_targetsToProcess;
    NSString *_pairingWithUUID;
    HMFExponentialBackoffTimer *_atHomeRetryTimer;
    HMFNetMonitor *_netMonitor;
}

@property (strong, nonatomic) HMFExponentialBackoffTimer *atHomeRetryTimer; // @synthesize atHomeRetryTimer=_atHomeRetryTimer;
@property (strong, nonatomic) NSMutableDictionary *bonjourKeys; // @synthesize bonjourKeys=_bonjourKeys;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL haveCulledPlist; // @synthesize haveCulledPlist=_haveCulledPlist;
@property (strong, nonatomic) NSMutableDictionary *idsKeys; // @synthesize idsKeys=_idsKeys;
@property (strong, nonatomic) HMFNetMonitor *netMonitor; // @synthesize netMonitor=_netMonitor;
@property (strong, nonatomic) NSString *pairingWithUUID; // @synthesize pairingWithUUID=_pairingWithUUID;
@property (nonatomic) unsigned long long residentProvisioningStatus; // @synthesize residentProvisioningStatus=_residentProvisioningStatus;
@property (nonatomic) BOOL resolutionInProgress; // @synthesize resolutionInProgress=_resolutionInProgress;
@property (strong, nonatomic) HMFNetServiceBrowser *serviceBrowser; // @synthesize serviceBrowser=_serviceBrowser;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSMutableSet *targetsToProcess; // @synthesize targetsToProcess=_targetsToProcess;

+ (id)logCategory;
+ (void)twoFactorAuthenticationEnabledForAccount:(id)arg1 altDSID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)__accessoryIsReachable:(id)arg1;
- (void)__accountChanged:(id)arg1;
- (void)__deviceAddedToAccount:(id)arg1;
- (void)__deviceRemovedFromAccount:(id)arg1;
- (void)__deviceUpdated:(id)arg1;
- (void)_beginBonjourResolution:(BOOL)arg1;
- (void)_device:(id)arg1 addedToAccount:(id)arg2;
- (void)_device:(id)arg1 removedFromAccount:(id)arg2;
- (id)_deviceWithUUID:(id)arg1;
- (void)_endPairingWithError:(id)arg1 suspendingTimer:(BOOL)arg2;
- (void)_handleKeyTransferAgentMessage:(id)arg1;
- (void)_handleResidentProvisioningStatusChanged:(id)arg1;
- (void)_havePairVerifiedAccessoryWithKeyUUID:(id)arg1 forDevice:(id)arg2;
- (void)_haveVerifiedTwoFactorAuthenticationWithKeyUUID:(id)arg1 forTarget:(id)arg2;
- (BOOL)_newDeviceSeen:(id)arg1;
- (void)_reallyBeginBonjourResolution;
- (void)_restartKeyTransfer:(id)arg1;
- (void)_saveKeyPlist;
- (void)_sendATVPrivateKey:(id)arg1 withDevice:(id)arg2 retry:(unsigned long long)arg3;
- (void)_sendIOSPublicKey:(id)arg1 withDevice:(id)arg2;
- (void)_startBrowser;
- (void)_startPairingWithKeyUUID:(id)arg1 forTarget:(id)arg2;
- (void)_stopBrowser;
- (void)_tryPairingWithAccessories:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithHomeManager:(id)arg1;
- (id)logIdentifier;
- (void)netService:(id)arg1 didUpdateTXTRecord:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didAddService:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didStopBrowsingWithError:(id)arg2;
- (void)networkMonitorIsReachable:(id)arg1;
- (void)queryPlistDevices;
- (void)receivedBonjourTXTFrom:(id)arg1 withUUIDData:(id)arg2;
- (void)resetConfig;
- (void)timerDidFire:(id)arg1;

@end

