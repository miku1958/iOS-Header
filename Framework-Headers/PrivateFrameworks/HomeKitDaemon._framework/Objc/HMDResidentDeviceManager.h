//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDCentralMessageDispatcher, HMDHome, HMDResidentDevice, HMFMessageDispatcher, HMFTimer, NSArray, NSMutableSet, NSObject, NSString, NSUUID;
@protocol HMDResidentDeviceManagerDelegate, OS_dispatch_queue;

@interface HMDResidentDeviceManager : HMFObject <HMFTimerDelegate, HMFLogging, HMFMessageReceiver, NSSecureCoding, HMDBackingStoreObjectProtocol>
{
    NSMutableSet *_residentDevices;
    BOOL _residentAvailable;
    BOOL _residentSupported;
    BOOL _firstLegacyFetch;
    BOOL _firstHomeZoneFetch;
    BOOL _confirming;
    HMFTimer *_residentMonitorTimer;
    NSUUID *_primaryResidentUUID;
    id<HMDResidentDeviceManagerDelegate> _delegate;
    NSUUID *_uuid;
    HMDHome *_home;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMFMessageDispatcher *_messageDispatcher;
    HMDCentralMessageDispatcher *_remoteMessageDispatcher;
    long long _lastAtHomeLevel;
}

@property (readonly, nonatomic) NSArray *availableResidentDevices;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (nonatomic, getter=isConfirming) BOOL confirming; // @synthesize confirming=_confirming;
@property (readonly, nonatomic, getter=isCurrentDeviceAvaliableResident) BOOL currentDeviceAvaliableResident;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMDResidentDeviceManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=hasFirstHomeZoneFetch) BOOL firstHomeZoneFetch; // @synthesize firstHomeZoneFetch=_firstHomeZoneFetch;
@property (nonatomic, getter=hasFirstLegacyFetch) BOOL firstLegacyFetch; // @synthesize firstLegacyFetch=_firstLegacyFetch;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) HMDHome *home; // @synthesize home=_home;
@property (nonatomic) long long lastAtHomeLevel; // @synthesize lastAtHomeLevel=_lastAtHomeLevel;
@property (readonly, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, weak, nonatomic) HMDResidentDevice *primaryResidentDevice;
@property (strong, nonatomic) NSUUID *primaryResidentUUID; // @synthesize primaryResidentUUID=_primaryResidentUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (readonly, nonatomic) HMDCentralMessageDispatcher *remoteMessageDispatcher; // @synthesize remoteMessageDispatcher=_remoteMessageDispatcher;
@property (readonly, nonatomic, getter=isResidentAvailable) BOOL residentAvailable; // @synthesize residentAvailable=_residentAvailable;
@property (readonly, copy, nonatomic) NSArray *residentDevices;
@property (strong) HMFTimer *residentMonitorTimer; // @synthesize residentMonitorTimer=_residentMonitorTimer;
@property (nonatomic, getter=isResidentSupported) BOOL residentSupported; // @synthesize residentSupported=_residentSupported;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;

+ (long long)compareElectionVersions:(id)arg1 otherVersion:(id)arg2;
+ (id)logCategory;
+ (id)shortDescription;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_addResidentDevice:(id)arg1;
- (void)_addResidentDeviceWithModel:(id)arg1 message:(id)arg2;
- (void)_confirmResidentDevice:(id)arg1 electionParameters:(id)arg2 againstDevices:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_electResidentDevice;
- (id)_electionParameters;
- (id)_electionParameters:(id)arg1;
- (void)_handleCloudManagerDidCompleteInitialFetchNotification:(id)arg1;
- (void)_handleConfirmResidentDevice:(id)arg1;
- (void)_handleResidentDeviceUpdateEnabled:(id)arg1;
- (void)_handleResidentElectionParameters:(id)arg1;
- (BOOL)_isAtHome;
- (void)_notifyClientsOfAddedResidentDevice:(id)arg1;
- (void)_notifyClientsOfRemovedResidentDevice:(id)arg1;
- (id)_orderedDevicesForElection;
- (void)_pingResident;
- (void)_registerForMessages;
- (void)_removeResidentDevice:(id)arg1;
- (void)_removeResidentDeviceWithModel:(id)arg1 message:(id)arg2;
- (void)_run;
- (void)_setupSessionWithPrimaryResidentDevice;
- (void)_startMonitoringResident;
- (void)_stopMonitoringResident;
- (void)_teardownSessionWithPrimaryResidentDevice;
- (void)_updateChargingTimer;
- (void)_updateDischargingTimer:(long long)arg1;
- (void)_updateReachability:(BOOL)arg1 forResidentDevice:(id)arg2;
- (void)_updateResidentAvailability;
- (void)atHomeLevelChanged:(long long)arg1;
- (long long)compareResidentDevice:(id)arg1 electionParameters:(id)arg2;
- (long long)compareResidentDeviceA:(id)arg1 electionParametersA:(id)arg2 residentDeviceB:(id)arg3 electionParametersB:(id)arg4;
- (void)conditionallyConfirmOnBoot;
- (void)configureWithHome:(id)arg1;
- (void)confirmAsResident;
- (void)confirmOnAvailability;
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
- (void)notifyClientsOfUpdatedResidentDevice:(id)arg1;
- (void)notifyResidentAvailable:(BOOL)arg1;
- (void)notifyUpdatedPrimaryResident:(id)arg1;
- (id)ourSelf;
- (void)removeResidentDevice:(id)arg1;
- (id)residentDeviceForDevice:(id)arg1;
- (id)residentWithUUID:(id)arg1;
- (void)run;
- (void)setResidentAvailable:(BOOL)arg1;
- (void)setResidentDevices:(id)arg1;
- (id)shortDescription;
- (void)timerDidFire:(id)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)updatePrimaryResidentWithUUID:(id)arg1;
- (void)updateResidentAvailability;

@end

