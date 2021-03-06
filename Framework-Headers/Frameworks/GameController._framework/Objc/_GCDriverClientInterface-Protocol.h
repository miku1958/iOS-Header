//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class _GCHapticEvent;
@protocol GCBatteryServiceClientInterface, GCLightServiceClientInterface, GCMotionServiceClientInterface;

@protocol _GCDriverClientInterface
- (void)connectToBatteryServiceWithClient:(id<GCBatteryServiceClientInterface>)arg1 reply:(void (^)(id<GCBatteryServiceServerInterface>, NSError *))arg2;
- (void)connectToLightServiceWithClient:(id<GCLightServiceClientInterface>)arg1 reply:(void (^)(id<GCLightServiceServerInterface>, NSError *))arg2;
- (void)connectToMotionServiceWithClient:(id<GCMotionServiceClientInterface>)arg1 reply:(void (^)(id<GCMotionServiceServerInterface>, NSError *))arg2;
- (void)enableHaptics;
- (void)enqueueTransient:(_GCHapticEvent *)arg1 hapticMotor:(unsigned long long)arg2;
- (void)fetchDeviceRegistryIDWithReply:(void (^)(NSNumber *))arg1;
- (void)setHapticMotor:(unsigned long long)arg1 frequency:(float)arg2 amplitude:(float)arg3;
@end

