//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFHomeKitItemProtocol-Protocol.h>

@class HFAccessorySettingsEntity, NSString;
@protocol HFHomeKitSettingsVendor;

@protocol HFHomeKitSettingItemProtocol <HFHomeKitItemProtocol>

@property (readonly, nonatomic) HFAccessorySettingsEntity *entity;
@property (readonly, nonatomic) id<HFHomeKitSettingsVendor> homeKitSettingsVendor;
@property (readonly, nonatomic) NSString *settingKeyPath;

@end

