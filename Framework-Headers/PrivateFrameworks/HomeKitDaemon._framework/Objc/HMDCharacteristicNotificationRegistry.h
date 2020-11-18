//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;

@interface HMDCharacteristicNotificationRegistry : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_notificationRegistry;
}

@property (strong, nonatomic) NSMutableDictionary *notificationRegistry; // @synthesize notificationRegistry=_notificationRegistry;

+ (id)_keyForCharacteristic:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)allCharacteristicIdentifiers;
- (void)auditUsersForNotifications:(id)arg1 forHome:(id)arg2;
- (void)deregisterUsers:(id)arg1 forHome:(id)arg2;
- (void)disableNotification:(id)arg1 user:(id)arg2 unconditional:(BOOL)arg3 ignoreLockReq:(BOOL)arg4 home:(id)arg5;
- (BOOL)disableNotificationForCharacteristics:(id)arg1 forUser:(id)arg2 characteristicsToDisableEvents:(id *)arg3;
- (BOOL)enableNotificationForCharacteristics:(id)arg1 forUser:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)filterCharacteristics:(id)arg1 forUser:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)usersRegisteredForNotificationsForCharacteristics:(id)arg1;

@end
