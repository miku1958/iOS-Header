//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SleepDaemon/HDSPNotificationObserver-Protocol.h>

@class HKSPObserverSet, NSNumber, NSString;

@interface HDSPDevicePowerMonitor : NSObject <HDSPNotificationObserver>
{
    HKSPObserverSet *_observers;
    NSNumber *_isChargingOverride;
    NSNumber *_batteryLevelOverride;
}

@property (readonly, nonatomic) float batteryLevel;
@property (strong, nonatomic) NSNumber *batteryLevelOverride; // @synthesize batteryLevelOverride=_batteryLevelOverride;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isCharging;
@property (strong, nonatomic) NSNumber *isChargingOverride; // @synthesize isChargingOverride=_isChargingOverride;
@property (readonly, nonatomic) HKSPObserverSet *observers; // @synthesize observers=_observers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)init;
- (id)initWithCallbackScheduler:(id)arg1;
- (id)notificationListener:(id)arg1 didReceiveNotificationWithName:(id)arg2;
- (void)removeObserver:(id)arg1;

@end
