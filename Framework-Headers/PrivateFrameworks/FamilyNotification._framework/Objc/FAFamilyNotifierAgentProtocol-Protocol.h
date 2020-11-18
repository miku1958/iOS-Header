//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FamilyNotification/NSObject-Protocol.h>

@class FAFamilyNotification, NSString;

@protocol FAFamilyNotifierAgentProtocol <NSObject>
- (void)deliverNotificaton:(FAFamilyNotification *)arg1;
- (void)pendingNotificationsWithIdentifier:(NSString *)arg1 replyBlock:(void (^)(NSArray *, NSError *))arg2;
- (void)removeAllNotifications;
- (void)removeNotificationWithIdentifier:(NSString *)arg1;
- (void)setClientIdentifier:(NSString *)arg1;
- (void)setDelegateMachServiceName:(NSString *)arg1;
@end
