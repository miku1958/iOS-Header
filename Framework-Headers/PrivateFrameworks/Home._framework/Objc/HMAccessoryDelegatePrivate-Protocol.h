//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HMAccessoryDelegate-Protocol.h>

@class HMAccessory, HMCharacteristic, HMService, NSString;

@protocol HMAccessoryDelegatePrivate <HMAccessoryDelegate>

@optional
- (void)accessory:(HMAccessory *)arg1 didUpdateApplicationDataForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateBulletinBoardNotificationForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateBulletinBoardNotificationServiceGroupForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateBundleID:(NSString *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateFirmwareUpdateAvailable:(BOOL)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateFirmwareVersion:(NSString *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateHasAuthorizationDataForCharacteristic:(HMCharacteristic *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateStoreID:(NSString *)arg2;
- (void)accessoryDidUpdateAdditionalSetupRequired:(HMAccessory *)arg1;
- (void)accessoryDidUpdateApplicationData:(HMAccessory *)arg1;
@end

