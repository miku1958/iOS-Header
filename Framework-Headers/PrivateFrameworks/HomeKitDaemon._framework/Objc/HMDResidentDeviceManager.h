//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDMerging-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDCentralMessageDispatcher, HMDHome, HMDResidentDevice, HMFMessageDispatcher, HMFTimer, NSArray, NSMutableSet, NSString, NSUUID;
@protocol HMDResidentDeviceManagerDelegate, OS_dispatch_queue;

@interface HMDResidentDeviceManager : NSObject <HMFTimerDelegate, HMFLogging, HMFMessageReceiver, HMDMerging, NSSecureCoding>
{
    NSMutableSet *_residentDevices;
    BOOL _residentAvailable;
    BOOL _residentSupported;
    BOOL _confirming;
    HMDResidentDevice *_primaryResidentDevice;
    HMFTimer *_residentMonitorTimer;
    id<HMDResidentDeviceManagerDelegate> _delegate;
    HMDHome *_home;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMFMessageDispatcher *_messageDispatcher;
    HMDCentralMessageDispatcher *_remoteMessageDispatcher;
    long long _lastAtHomeLevel;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (nonatomic, getter=isConfirming) BOOL confirming; // @synthesize confirming=_confirming;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMDResidentDeviceManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) HMDHome *home; // @synthesize home=_home;
@property (nonatomic) long long lastAtHomeLevel; // @synthesize lastAtHomeLevel=_lastAtHomeLevel;
@property (readonly, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, weak, nonatomic) HMDResidentDevice *primaryResidentDevice; // @synthesize primaryResidentDevice=_primaryResidentDevice;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (readonly, nonatomic) HMDCentralMessageDispatcher *remoteMessageDispatcher; // @synthesize remoteMessageDispatcher=_remoteMessageDispatcher;
@property (readonly, nonatomic, getter=isResidentAvailable) BOOL residentAvailable; // @synthesize residentAvailable=_residentAvailable;
@property (readonly, copy, nonatomic) NSArray *residentDevices;
@property (strong) HMFTimer *residentMonitorTimer; // @synthesize residentMonitorTimer=_residentMonitorTimer;
@property (nonatomic, getter=isResidentSupported) BOOL residentSupported; // @synthesize residentSupported=_residentSupported;
@property (readonly) Class superclass;

+ (long long)compareElectionVersions:(id)arg1 otherVersion:(id)arg2;
+ (id)logCategory;
+ (id)shortDescription;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_confirmAsResident;
- (void)_electResidentDevice;
- (void)_handleResidentDeviceUpdateEnabled:(id)arg1;
- (void)_handleResidentElectionParameters:(id)arg1;
- (BOOL)_isAtHome;
- (void)_pingResident;
- (void)_registerForMessages;
- (void)_run;
- (void)_setupSessionWithPrimaryResidentDevice;
- (void)_startMonitoringResident;
- (void)_stopMonitoringResident;
- (void)_teardownSessionWithPrimaryResidentDevice;
- (void)_updateChargingTimer;
- (void)_updateDischargingTimer:(long long)arg1;
- (void)_updateReachability:(BOOL)arg1 forResidentDevice:(id)arg2;
- (void)addResidentDevice:(id)arg1;
- (void)atHomeLevelChanged:(long long)arg1;
- (id)availableResidentDevices;
- (long long)compareResidentDevice:(id)arg1 electionParameters:(id)arg2;
- (void)configureWithHome:(id)arg1;
- (void)dealloc;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)dumpState;
- (void)electResidentDevice;
- (void)encodeWithCoder:(id)arg1;
- (void)handleBatteryLevelChange:(id)arg1;
- (void)handleBatteryStateChange:(id)arg1;
- (void)handleCurrentDeviceChanged:(id)arg1;
- (void)handleCurrentDeviceUpdated:(id)arg1;
- (void)handleResidentDeviceIsNotReachable:(id)arg1;
- (void)handleResidentDeviceIsReachable:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)logIdentifier;
- (BOOL)mergeObject:(id)arg1;
- (void)notifyClientsOfAddedResidentDevice:(id)arg1;
- (void)notifyClientsOfRemovedResidentDevice:(id)arg1;
- (void)notifyClientsOfUpdatedResidentDevice:(id)arg1;
- (void)notifyResidentAvailable:(BOOL)arg1;
- (void)notifyUpdatedPrimaryResident:(id)arg1;
- (id)ourSelf;
- (void)removeResidentDevice:(id)arg1;
- (id)residentDeviceForDevice:(id)arg1;
- (void)setPrimaryResidentDevice:(id)arg1;
- (void)setResidentAvailable:(BOOL)arg1;
- (void)setResidentDevices:(id)arg1;
- (id)shortDescription;
- (void)timerDidFire:(id)arg1;
- (void)updateResidentAvailability;

@end

