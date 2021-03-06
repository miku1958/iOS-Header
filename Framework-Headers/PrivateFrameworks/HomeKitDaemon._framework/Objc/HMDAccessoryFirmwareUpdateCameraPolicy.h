//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDAccessoryFirmwareUpdatePolicy.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDHAPAccessory, NSString;

@interface HMDAccessoryFirmwareUpdateCameraPolicy : HMDAccessoryFirmwareUpdatePolicy <HMFLogging>
{
    HMDHAPAccessory *_accessory;
}

@property (readonly, weak) HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)_checkStreamingStatus;
- (void)_handleStreamStatusCharacteristicChanges;
- (void)_handleStreamStatusMultireadResponse:(id)arg1;
- (void)_processStreamingStatus:(id)arg1;
- (void)configure;
- (BOOL)evaluate;
- (void)handleAccessoryConnectedNotification:(id)arg1;
- (void)handleAccessoryDisconnectedNotification:(id)arg1;
- (void)handleCharacteristicValuesChanged:(id)arg1;
- (void)handleSettingsChange:(id)arg1;
- (id)initWithAccessory:(id)arg1 workQueue:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)monitorStreamStatus:(BOOL)arg1;
- (void)registerForNotifications;

@end

