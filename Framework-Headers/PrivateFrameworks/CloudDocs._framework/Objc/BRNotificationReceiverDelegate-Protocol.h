//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocs/NSObject-Protocol.h>

@class BRNotificationReceiver;

@protocol BRNotificationReceiverDelegate <NSObject>
- (void)notificationReceiverDidReceiveNotifications:(BRNotificationReceiver *)arg1;
- (void)notificationsReceiverDidFinishGathering:(BRNotificationReceiver *)arg1;
- (void)notificationsReceiverDidInvalidate:(BRNotificationReceiver *)arg1;
- (void)notificationsReceiverDidReceiveNotificationsBatch:(BRNotificationReceiver *)arg1;
@end

