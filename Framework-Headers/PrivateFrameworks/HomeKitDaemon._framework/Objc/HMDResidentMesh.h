//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDAccountRegistry, HMDCentralMessageDispatcher, HMDHomeManager, HMDResidentMeshMeshStorage, HMFTimer, NSMutableArray, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDResidentMesh : NSObject <HMFTimerDelegate, HMFMessageReceiver, HMFLogging>
{
    NSUUID *_uuid;
    unsigned long long _broadcastRate;
    HMDHomeManager *_homeManager;
    HMDAccountRegistry *_accountRegistry;
    HMDCentralMessageDispatcher *_remoteMessageDispatcher;
    NSMutableArray *_residents;
    HMDResidentMeshMeshStorage *_resident;
    NSMutableArray *_reachableAccessories;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFTimer *_startupTimer;
    long long _startupTickCount;
    HMFTimer *_devicesChangedTimer;
    NSSet *_primaryResidentForHomes;
}

@property (weak, nonatomic) HMDAccountRegistry *accountRegistry; // @synthesize accountRegistry=_accountRegistry;
@property unsigned long long broadcastRate; // @synthesize broadcastRate=_broadcastRate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HMFTimer *devicesChangedTimer; // @synthesize devicesChangedTimer=_devicesChangedTimer;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (strong, nonatomic) NSSet *primaryResidentForHomes; // @synthesize primaryResidentForHomes=_primaryResidentForHomes;
@property (strong, nonatomic) NSMutableArray *reachableAccessories; // @synthesize reachableAccessories=_reachableAccessories;
@property (weak, nonatomic) HMDCentralMessageDispatcher *remoteMessageDispatcher; // @synthesize remoteMessageDispatcher=_remoteMessageDispatcher;
@property (weak, nonatomic) HMDResidentMeshMeshStorage *resident; // @synthesize resident=_resident;
@property (strong, nonatomic) NSMutableArray *residents; // @synthesize residents=_residents;
@property (nonatomic) long long startupTickCount; // @synthesize startupTickCount=_startupTickCount;
@property (readonly, nonatomic) HMFTimer *startupTimer; // @synthesize startupTimer=_startupTimer;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)__accessoryIsNotReachable:(id)arg1;
- (void)__accessoryIsReachable:(id)arg1;
- (void)__deviceIsNotReachable:(id)arg1;
- (void)__deviceIsReachable:(id)arg1;
- (void)__deviceResidentChanged:(id)arg1;
- (void)__rebuildResidents:(id)arg1;
- (void)__rebuildResidentsViaElection:(id)arg1;
- (void)_addConnectivityFromDeviceToAccessory:(id)arg1 activateTimer:(BOOL)arg2;
- (id)_addDeviceInMesh:(id)arg1;
- (id)_addDeviceInResidents:(id)arg1;
- (void)_buildResidentsWithElection:(id)arg1 device:(id)arg2;
- (BOOL)_checkReachabilityWithTimerActivation:(BOOL)arg1;
- (void)_deviceIsNotReachable:(id)arg1;
- (void)_deviceIsReachable:(id)arg1;
- (void)_dumpDebug;
- (id)_dumpState;
- (id)_findDeviceInMesh:(id)arg1;
- (id)_findDeviceInMeshByUUID:(id)arg1;
- (id)_findDeviceInResidents:(id)arg1;
- (void)_flushWorkQueue;
- (void)_handleMeshUpdateMessage:(id)arg1;
- (void)_handleMeshUpdateRequestMessage:(id)arg1;
- (void)_removeConnectivityFromDeviceToAccessory:(id)arg1 activateTimer:(BOOL)arg2;
- (void)_sendMessage:(id)arg1 payload:(id)arg2 target:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)deviceForAccessory:(id)arg1;
- (void)dumpDebug;
- (id)dumpState;
- (id)initWithHomeManager:(id)arg1 residentEnabled:(BOOL)arg2;
- (id)logIdentifier;
- (void)timerDidFire:(id)arg1;

@end

