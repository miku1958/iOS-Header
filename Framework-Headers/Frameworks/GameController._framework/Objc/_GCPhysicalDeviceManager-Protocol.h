//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameController/_GCDeviceManager-Protocol.h>

@class NSNumber, _GCCControllerHIDServiceInfo;
@protocol GCPhysicalDeviceRegistry, _GCDeviceDriverConnection;

@protocol _GCPhysicalDeviceManager <_GCDeviceManager>

@property (weak) id<GCPhysicalDeviceRegistry> deviceRegistry;

- (void)claimHIDDevice:(_GCCControllerHIDServiceInfo *)arg1;
- (NSNumber *)matchHIDDevice:(_GCCControllerHIDServiceInfo *)arg1;
- (void)relinquishHIDDevice:(_GCCControllerHIDServiceInfo *)arg1;

@optional
- (BOOL)acceptDriverConnection:(id<_GCDeviceDriverConnection>)arg1 forHIDDevice:(_GCCControllerHIDServiceInfo *)arg2;
- (id<_GCDeviceDriverConnection>)driverConnectionForHIDDevice:(_GCCControllerHIDServiceInfo *)arg1;
@end

