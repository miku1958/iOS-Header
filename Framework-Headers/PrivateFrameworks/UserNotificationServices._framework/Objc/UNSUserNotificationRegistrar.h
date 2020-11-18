//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface UNSUserNotificationRegistrar : NSObject
{
    NSString *_bundleIdentifier;
}

@property (copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;

- (void)dealloc;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (void)invalidateTokenForRemoteNotifications;
- (void)registerBadgeSetting;
- (void)registerUserNotificationSettings:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)requestTokenForRemoteNotificationsWithResult:(CDUnknownBlockType)arg1;
- (id)userNotificationSettings;
- (void)userNotificationSettingsWithResult:(CDUnknownBlockType)arg1;
- (unsigned long long)userNotificationTypes;
- (void)userNotificationTypesWithResult:(CDUnknownBlockType)arg1;

@end

