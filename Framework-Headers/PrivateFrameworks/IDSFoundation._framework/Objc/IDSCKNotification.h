//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDSCKNotification : NSObject
{
    long long _notificationType;
    NSString *_subscriptionID;
}

@property (readonly, nonatomic) long long notificationType; // @synthesize notificationType=_notificationType;
@property (readonly, copy, nonatomic) NSString *subscriptionID; // @synthesize subscriptionID=_subscriptionID;

+ (Class)__class;
+ (id)notificationFromRemoteNotificationDictionary:(id)arg1;
- (void).cxx_destruct;

@end

