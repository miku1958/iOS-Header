//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>
#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>

@class HMDAccount, HMDDevice, HMFExponentialBackoffTimer, HMFTimer, IDSService, NSArray, NSMutableSet, NSString;
@protocol HMDAccountRegistryDelegate, OS_dispatch_queue;

@interface HMDAccountRegistry : NSObject <HMFTimerDelegate, IDSServiceDelegate, HMFLogging>
{
    NSMutableSet *_accounts;
    BOOL _monitoring;
    BOOL _resolved;
    HMDAccount *_currentAccount;
    HMDDevice *_currentDevice;
    id<HMDAccountRegistryDelegate> _delegate;
    IDSService *_service;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMFExponentialBackoffTimer *_accountChangeBackoffTimer;
    HMFTimer *_devicesChangeBackoffTimer;
}

@property (readonly, nonatomic) HMFExponentialBackoffTimer *accountChangeBackoffTimer; // @synthesize accountChangeBackoffTimer=_accountChangeBackoffTimer;
@property (strong, nonatomic) NSArray *accounts;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (weak, nonatomic) HMDAccount *currentAccount; // @synthesize currentAccount=_currentAccount;
@property (weak, nonatomic) HMDDevice *currentDevice; // @synthesize currentDevice=_currentDevice;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMDAccountRegistryDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HMFTimer *devicesChangeBackoffTimer; // @synthesize devicesChangeBackoffTimer=_devicesChangeBackoffTimer;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isMonitoring) BOOL monitoring; // @synthesize monitoring=_monitoring;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (nonatomic, getter=isResolved) BOOL resolved; // @synthesize resolved=_resolved;
@property (readonly, nonatomic) IDSService *service; // @synthesize service=_service;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)shortDescription;
- (void).cxx_destruct;
- (void)_updateLocalAccount;
- (void)_updateLocalDevices;
- (id)accountWithDestination:(id)arg1 shouldCreate:(BOOL)arg2;
- (void)addAccount:(id)arg1;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)deviceForDestination:(id)arg1 shouldCreate:(BOOL)arg2;
- (id)init;
- (id)initWithIDSService:(id)arg1;
- (void)notifyDelegateAccountAdded:(id)arg1;
- (void)notifyDelegateAccountRemove:(id)arg1;
- (void)notifyDelegateCurrentDeviceChanged:(id)arg1;
- (void)removeAccount:(id)arg1;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (id)shortDescription;
- (void)startMonitoring;
- (void)stopMonitoring;
- (void)timerDidFire:(id)arg1;
- (void)updateCurrentAccount;
- (void)updateCurrentDevice;

@end

