//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMServiceGroup.h>

#import <Home/HFUserNotificationServiceSettingsProviding-Protocol.h>

@class HFUserNotificationServiceSettings, NSString, NSUUID;

@interface HMServiceGroup (HFUserNotificationServiceSettings) <HFUserNotificationServiceSettingsProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) HFUserNotificationServiceSettings *hf_userNotificationSettings;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;

- (id)_hf_allBulletinBoardNotifications;
- (id)hf_updateUserNotificationSettings:(id)arg1;
@end

