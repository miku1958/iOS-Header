//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTService.h>

#import <coreroutine/RTIORegistryEntryMatchObserver-Protocol.h>
#import <coreroutine/RTIOServiceChangeObserver-Protocol.h>

@class NSString, RTIONotificationPort;
@protocol RTIOServiceStrategy;

@interface RTBatteryManager : RTService <RTIORegistryEntryMatchObserver, RTIOServiceChangeObserver>
{
    unsigned int _battery;
    unsigned int _batteryInterestNotification;
    BOOL _monitorBatteryStatusChanges;
    RTIONotificationPort *_port;
    long long _externalConnectionState;
    id<RTIOServiceStrategy> _ioServiceStrategy;
}

@property (nonatomic) unsigned int battery;
@property (nonatomic) unsigned int batteryInterestNotification;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long externalConnectionState; // @synthesize externalConnectionState=_externalConnectionState;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<RTIOServiceStrategy> ioServiceStrategy; // @synthesize ioServiceStrategy=_ioServiceStrategy;
@property (nonatomic) BOOL monitorBatteryStatusChanges; // @synthesize monitorBatteryStatusChanges=_monitorBatteryStatusChanges;
@property (strong, nonatomic) RTIONotificationPort *port; // @synthesize port=_port;
@property (readonly) Class superclass;

+ (id)externalConnectionStateToString:(long long)arg1;
- (void).cxx_destruct;
- (void)_shutdown;
- (void)_unregisterForNotifications;
- (void)batteryStatusChange:(unsigned int)arg1 messageType:(unsigned int)arg2;
- (void)dealloc;
- (void)fetchCurrentChargerConnectionState:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithStrategy:(id)arg1;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)matchedBattery:(unsigned int)arg1;
- (void)onRegistryEntriesMatched:(unsigned int)arg1;
- (void)onServiceChanged:(unsigned int)arg1 messageType:(unsigned int)arg2;
- (void)startMonitoringBatteryStatusChanges;
- (void)stopMonitoringBatteryStatusChanges;
- (void)updateBatteryStatus:(unsigned int)arg1;

@end

