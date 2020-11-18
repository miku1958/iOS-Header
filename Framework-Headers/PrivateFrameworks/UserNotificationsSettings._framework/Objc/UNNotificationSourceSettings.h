//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsSettings/NSCopying-Protocol.h>
#import <UserNotificationsSettings/NSSecureCoding-Protocol.h>

@class NSArray, UNNotificationSettings;

@interface UNNotificationSourceSettings : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isRestricted;
    UNNotificationSettings *_notificationSettings;
    NSArray *_topicSettings;
}

@property (readonly, nonatomic) BOOL isRestricted; // @synthesize isRestricted=_isRestricted;
@property (readonly, copy, nonatomic) UNNotificationSettings *notificationSettings; // @synthesize notificationSettings=_notificationSettings;
@property (readonly, copy, nonatomic) NSArray *topicSettings; // @synthesize topicSettings=_topicSettings;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNotificationSettings:(id)arg1 topicSettings:(id)arg2 isRestricted:(BOOL)arg3;

@end
