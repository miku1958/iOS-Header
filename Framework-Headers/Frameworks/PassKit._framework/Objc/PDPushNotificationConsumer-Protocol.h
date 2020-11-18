//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/NSObject-Protocol.h>

@class NSDictionary, NSSet, NSString;

@protocol PDPushNotificationConsumer <NSObject>
- (void)applyPushNotificationToken:(NSString *)arg1;
- (void)handlePushNotificationForTopic:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (NSSet *)pushNotificationTopics;
@end
