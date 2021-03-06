//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface HMFPowerManager : HMFObject
{
    struct os_unfair_lock_s _lock;
    BOOL _hasBattery;
    BOOL _running;
    float _batteryLevel;
    unsigned int _interestNotification;
    long long _batteryState;
    NSObject<OS_dispatch_queue> *_clientQueue;
    struct IONotificationPort *_notificationPort;
}

@property (readonly) float batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property (readonly) long long batteryState; // @synthesize batteryState=_batteryState;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (readonly) BOOL hasBattery; // @synthesize hasBattery=_hasBattery;
@property (readonly, nonatomic) unsigned int interestNotification; // @synthesize interestNotification=_interestNotification;
@property (readonly, nonatomic) struct IONotificationPort *notificationPort; // @synthesize notificationPort=_notificationPort;
@property (nonatomic, getter=isRunning) BOOL running; // @synthesize running=_running;

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_deregisterForPowerSourceNotifications:(BOOL)arg1;
- (void)_registerForPowerSourceNotifications;
- (void)dealloc;
- (id)init;
- (void)start;
- (void)stop;
- (void)updateBatteryState:(unsigned int)arg1;

@end

