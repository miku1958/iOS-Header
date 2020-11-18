//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitBackingStore/HMBModel.h>

@class NSData;

@interface HMDPersonSettingsModel : HMBModel
{
}

@property (strong) NSData *classificationNotificationSettingsData; // @dynamic classificationNotificationSettingsData;

+ (BOOL)hmbExcludeFromCloudStorage;
+ (id)hmbProperties;
+ (id)sentinelModelUUID;
+ (id)sentinelParentUUID;
- (void)archiveClassificationNotificationsEnabledForPersonUUID:(id)arg1;
- (id)classificationNotificationsEnabledForPersonUUID:(id)arg1;
- (id)init;
- (void)setClassificationNotificationsEnabled:(id)arg1 forPersonUUID:(id)arg2;
- (id)unarchivedClassificationNotificationsEnabledForPersonUUID;

@end
