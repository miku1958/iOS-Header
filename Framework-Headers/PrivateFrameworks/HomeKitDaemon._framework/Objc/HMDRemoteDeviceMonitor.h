//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDIDSActivityMonitorObserverDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFNetMonitorDelegate-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>
#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>

@class HMDAccountRegistry, HMDIDSActivityMonitorObserver, HMFNetMonitor, HMFTimer, IDSService, NSArray, NSMapTable, NSObject, NSOperationQueue, NSString;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDRemoteDeviceMonitor : HMFObject <HMFLogging, HMFTimerDelegate, IDSServiceDelegate, HMDIDSActivityMonitorObserverDelegate, HMFNetMonitorDelegate>
{
    id<HMFLocking> _lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
    NSMapTable *_devices;
    BOOL _reachable;
    BOOL _started;
    HMDAccountRegistry *_accountRegistry;
    IDSService *_service;
    HMDIDSActivityMonitorObserver *_activityObserver;
    HMFNetMonitor *_netMonitor;
    HMFTimer *_deviceHealthTimer;
}

@property (readonly, nonatomic) HMDAccountRegistry *accountRegistry; // @synthesize accountRegistry=_accountRegistry;
@property (readonly, nonatomic) HMDIDSActivityMonitorObserver *activityObserver; // @synthesize activityObserver=_activityObserver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HMFTimer *deviceHealthTimer; // @synthesize deviceHealthTimer=_deviceHealthTimer;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HMFNetMonitor *netMonitor; // @synthesize netMonitor=_netMonitor;
@property (readonly, getter=isReachable) BOOL reachable; // @synthesize reachable=_reachable;
@property (readonly, nonatomic) IDSService *service; // @synthesize service=_service;
@property (readonly, getter=isStarted) BOOL started; // @synthesize started=_started;
@property (readonly) Class superclass;
@property (readonly) NSArray *unreachableDevices;

+ (id)logCategory;
+ (id)pingMessageForDevice:(id)arg1 timeout:(double)arg2 restriction:(unsigned long long)arg3;
- (void).cxx_destruct;
- (id)_deviceInformationForDevice:(id)arg1;
- (void)_handleGlobalReachabilityChange;
- (void)_sendPingToDevice:(id)arg1;
- (void)_startActivelyMonitoringDevice:(id)arg1;
- (id)_startMonitoringDevice:(id)arg1;
- (void)_stopActivelyMonitoringDevice:(id)arg1;
- (void)confirmDevice:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)devices;
- (id)dumpState;
- (void)handleAccountRemoved:(id)arg1;
- (void)handleAddedDeviceInformation:(id)arg1;
- (void)handleCurrentDeviceUpdate:(id)arg1;
- (void)handleDeviceRemovedFromAccount:(id)arg1;
- (void)handleRemovedDeviceInformation:(id)arg1;
- (id)init;
- (id)initWithAccountRegistry:(id)arg1 activityObserver:(id)arg2;
- (void)networkMonitorIsReachable:(id)arg1;
- (void)networkMonitorIsUnreachable:(id)arg1;
- (void)notifyDeviceReachabilityChange:(BOOL)arg1 forDevice:(id)arg2;
- (void)observer:(id)arg1 didUpdateDevice:(id)arg2 isOnline:(BOOL)arg3;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)setReachable:(BOOL)arg1;
- (void)setStarted:(BOOL)arg1;
- (void)start;
- (void)startMonitoringDevice:(id)arg1;
- (void)stopMonitoringDevice:(id)arg1;
- (void)timerDidFire:(id)arg1;

@end
