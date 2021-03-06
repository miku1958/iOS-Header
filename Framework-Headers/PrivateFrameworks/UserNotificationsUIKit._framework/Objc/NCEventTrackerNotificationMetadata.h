//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/NSCopying-Protocol.h>

@class NSDate, NSString;

@interface NCEventTrackerNotificationMetadata : NSObject <NSCopying>
{
    NSString *_notificationIdentifier;
    NSString *_bundleIdentifier;
    NSDate *_date;
}

@property (readonly, copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly, copy) NSDate *date; // @synthesize date=_date;
@property (readonly, copy) NSString *notificationIdentifier; // @synthesize notificationIdentifier=_notificationIdentifier;

+ (id)metadataForNotificationRequest:(id)arg1;
- (void).cxx_destruct;
- (id)_initWithNotificationIdentifier:(id)arg1 bundleIdentifier:(id)arg2 date:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

