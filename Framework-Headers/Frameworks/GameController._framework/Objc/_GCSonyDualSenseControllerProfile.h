//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameController/_GCControllerProfile-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GCSonyDualSenseControllerProfile : NSObject <_GCControllerProfile>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)deviceManager;
+ (void)deviceManager:(id)arg1 prepareLogicalDevice:(id)arg2;
+ (void)deviceManager:(id)arg1 willPublishPhysicalDevice:(id)arg2;
+ (id)logicalDevice:(id)arg1 makeControllerMotionWithIdentifier:(id)arg2;
+ (id)logicalDevice:(id)arg1 makeControllerPhysicalInputProfileWithIdentifier:(id)arg2;
+ (id)logicalDeviceControllerProductCategory:(id)arg1;
+ (void)physicalDevice:(id)arg1 getBatteryWithReply:(CDUnknownBlockType)arg2;
+ (void)physicalDevice:(id)arg1 getLightWithReply:(CDUnknownBlockType)arg2;
+ (void)physicalDevice:(id)arg1 getSensorsEnabledWithReply:(CDUnknownBlockType)arg2;
+ (void)physicalDevice:(id)arg1 setIndicatedPlayerIndex:(long long)arg2;
+ (void)physicalDevice:(id)arg1 setLight:(id)arg2;
+ (void)physicalDevice:(id)arg1 setSensorsActive:(BOOL)arg2;
+ (id)physicalDeviceGetHapticCapabilities:(id)arg1;
+ (id)physicalDeviceGetHapticCapabilityGraph:(id)arg1;
+ (long long)physicalDeviceGetIndicatedPlayerIndex:(id)arg1;
+ (BOOL)physicalDeviceSupportsMotion:(id)arg1;

@end

