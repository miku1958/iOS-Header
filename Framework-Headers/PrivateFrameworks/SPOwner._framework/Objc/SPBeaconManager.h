//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SPOwner/SPBLEStateMonitorDelegate-Protocol.h>
#import <SPOwner/SPMonitorsWrapperDelegate-Protocol.h>

@class FMXPCServiceDescription, FMXPCSession, FMXPCTimer, NSString, SPBLEStateMonitor, SPMonitorsWrapper;
@protocol OS_dispatch_queue, OS_dispatch_source, SPBeaconManagerXPCProtocol;

@interface SPBeaconManager : NSObject <SPMonitorsWrapperDelegate, SPBLEStateMonitorDelegate>
{
    BOOL _currentBeaconingState;
    BOOL _forceBeaconingOff;
    unsigned char _currentStatus;
    BOOL _initialStateChangeSent;
    CDUnknownBlockType _stateChangedBlock;
    CDUnknownBlockType _stateChangedBlockWithCompletion;
    CDUnknownBlockType _statusChangedBlock;
    CDUnknownBlockType _statusChangedBlockWithCompletion;
    CDUnknownBlockType _beaconingKeyChangedBlock;
    CDUnknownBlockType _beaconingKeyChangedBlockWithCompletion;
    CDUnknownBlockType _nearbyTokensChangedBlock;
    CDUnknownBlockType _nearbyTokensChangedBlockWithCompletion;
    FMXPCServiceDescription *_serviceDescription;
    FMXPCSession *_session;
    id<SPBeaconManagerXPCProtocol> _proxy;
    id<SPBeaconManagerXPCProtocol> _userAgentProxy;
    NSObject<OS_dispatch_queue> *_queue;
    FMXPCTimer *_periodicActionXpcTimer;
    NSObject<OS_dispatch_source> *_periodicActionDispatchTimer;
    SPMonitorsWrapper *_monitorWrapper;
    SPBLEStateMonitor *_bleMonitor;
    long long _cachedLocalBeaconManagerState;
}

@property (copy, nonatomic) CDUnknownBlockType beaconingKeyChangedBlock; // @synthesize beaconingKeyChangedBlock=_beaconingKeyChangedBlock;
@property (copy, nonatomic) CDUnknownBlockType beaconingKeyChangedBlockWithCompletion; // @synthesize beaconingKeyChangedBlockWithCompletion=_beaconingKeyChangedBlockWithCompletion;
@property (strong, nonatomic) SPBLEStateMonitor *bleMonitor; // @synthesize bleMonitor=_bleMonitor;
@property (nonatomic) long long cachedLocalBeaconManagerState; // @synthesize cachedLocalBeaconManagerState=_cachedLocalBeaconManagerState;
@property (nonatomic) BOOL currentBeaconingState; // @synthesize currentBeaconingState=_currentBeaconingState;
@property (nonatomic) unsigned char currentStatus; // @synthesize currentStatus=_currentStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceBeaconingOff; // @synthesize forceBeaconingOff=_forceBeaconingOff;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL initialStateChangeSent; // @synthesize initialStateChangeSent=_initialStateChangeSent;
@property (strong, nonatomic) SPMonitorsWrapper *monitorWrapper; // @synthesize monitorWrapper=_monitorWrapper;
@property (copy, nonatomic) CDUnknownBlockType nearbyTokensChangedBlock; // @synthesize nearbyTokensChangedBlock=_nearbyTokensChangedBlock;
@property (copy, nonatomic) CDUnknownBlockType nearbyTokensChangedBlockWithCompletion; // @synthesize nearbyTokensChangedBlockWithCompletion=_nearbyTokensChangedBlockWithCompletion;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *periodicActionDispatchTimer; // @synthesize periodicActionDispatchTimer=_periodicActionDispatchTimer;
@property (strong, nonatomic) FMXPCTimer *periodicActionXpcTimer; // @synthesize periodicActionXpcTimer=_periodicActionXpcTimer;
@property (strong, nonatomic) id<SPBeaconManagerXPCProtocol> proxy; // @synthesize proxy=_proxy;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) FMXPCServiceDescription *serviceDescription; // @synthesize serviceDescription=_serviceDescription;
@property (strong, nonatomic) FMXPCSession *session; // @synthesize session=_session;
@property (copy, nonatomic) CDUnknownBlockType stateChangedBlock; // @synthesize stateChangedBlock=_stateChangedBlock;
@property (copy, nonatomic) CDUnknownBlockType stateChangedBlockWithCompletion; // @synthesize stateChangedBlockWithCompletion=_stateChangedBlockWithCompletion;
@property (copy, nonatomic) CDUnknownBlockType statusChangedBlock; // @synthesize statusChangedBlock=_statusChangedBlock;
@property (copy, nonatomic) CDUnknownBlockType statusChangedBlockWithCompletion; // @synthesize statusChangedBlockWithCompletion=_statusChangedBlockWithCompletion;
@property (readonly) Class superclass;
@property (strong, nonatomic) id<SPBeaconManagerXPCProtocol> userAgentProxy; // @synthesize userAgentProxy=_userAgentProxy;

+ (void)afterFirstUnlock:(CDUnknownBlockType)arg1;
+ (id)scheduleDateInterval:(id)arg1;
- (void).cxx_destruct;
- (void)_invalidate;
- (void)allBeaconsOfType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)allBeaconsWithCompletion:(CDUnknownBlockType)arg1;
- (void)beaconForUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beaconingKeysForUUID:(id)arg1 dateInterval:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)beaconingStateChanged:(long long)arg1;
- (void)beaconingStateChangedNotification:(id)arg1;
- (void)beaconsChanged:(id)arg1;
- (void)bleMonitor:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)checkInPeriodicActionXpcTimer;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (BOOL)isBeaconing;
- (void)notificationBeaconForSubscriptionId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)notifyBeaconingKeysChangedBlockWithCompletion:(CDUnknownBlockType)arg1;
- (void)notifyNearbyTokensChangedBlockWithCompletion:(CDUnknownBlockType)arg1;
- (void)notifyStateChange:(BOOL)arg1;
- (void)notifyStatusChange:(unsigned char)arg1;
- (void)periodicActionWithCompletion:(CDUnknownBlockType)arg1;
- (id)remoteInterface;
- (void)setPeriodicActionDispatchTimerWithInterval:(double)arg1;
- (void)setPeriodicActionXpcTimerWithDateInterval:(id)arg1;
- (void)start;
- (void)stateDidChange:(BOOL)arg1 powerState:(unsigned long long)arg2;
- (void)timerFired;
- (void)unacceptedBeaconsWithCompletion:(CDUnknownBlockType)arg1;

@end
