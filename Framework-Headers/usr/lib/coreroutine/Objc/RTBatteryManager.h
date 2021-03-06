//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTService.h>

@class RTDarwinNotificationHelper;

@interface RTBatteryManager : RTService
{
    BOOL _monitorBatteryStatusChanges;
    long long _externalConnectionState;
    RTDarwinNotificationHelper *_notificationHelper;
}

@property (nonatomic) long long externalConnectionState; // @synthesize externalConnectionState=_externalConnectionState;
@property (nonatomic) BOOL monitorBatteryStatusChanges; // @synthesize monitorBatteryStatusChanges=_monitorBatteryStatusChanges;
@property (readonly, nonatomic) RTDarwinNotificationHelper *notificationHelper; // @synthesize notificationHelper=_notificationHelper;

+ (BOOL)_ioDrawingUnlimitedPower;
+ (long long)currentExternalConnectionState;
+ (id)externalConnectionStateToString:(long long)arg1;
- (void).cxx_destruct;
- (void)_shutdown;
- (void)_unregisterForNotifications;
- (void)dealloc;
- (void)fetchCurrentChargerConnectionState:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1 notificationHelper:(id)arg2;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)startMonitoringBatteryStatusChanges;
- (void)stopMonitoringBatteryStatusChanges;
- (void)updateBatteryStatus:(long long)arg1;

@end

