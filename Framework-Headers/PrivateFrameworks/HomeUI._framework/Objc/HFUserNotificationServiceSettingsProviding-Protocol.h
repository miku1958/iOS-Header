//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HFHomeKitObject-Protocol.h>

@class HFUserNotificationServiceSettings, NAFuture;

@protocol HFUserNotificationServiceSettingsProviding <HFHomeKitObject>

@property (readonly, copy, nonatomic) HFUserNotificationServiceSettings *hf_userNotificationSettings;

- (NAFuture *)hf_updateUserNotificationSettings:(HFUserNotificationServiceSettings *)arg1;
@end

