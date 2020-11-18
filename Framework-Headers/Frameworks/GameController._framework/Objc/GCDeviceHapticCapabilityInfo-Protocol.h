//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameController/GCControllerComponent-Protocol.h>

@class GCDeviceHaptics, NSArray;

@protocol GCDeviceHapticCapabilityInfo <GCControllerComponent>

@property (readonly) GCDeviceHaptics *deviceHaptics;
@property (readonly, copy) NSArray *hapticEngines;

- (void)initializeHapticEngines;
- (void)removeHapticEngines;
@end
