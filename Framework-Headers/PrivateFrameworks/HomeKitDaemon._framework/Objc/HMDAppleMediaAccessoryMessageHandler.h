//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDMessageHandler.h>

@interface HMDAppleMediaAccessoryMessageHandler : HMDMessageHandler
{
}

- (void)handleAppleMediaAccessoryDeviceIsReachableNotification:(id)arg1;
- (void)handleAppleMediaAccessoryDeviceUpdatedNotification:(id)arg1;
- (id)initWithMessageTargetUUID:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 ownerPrivateRemoteMessages:(id)arg4 adminPrivateRemoteMessages:(id)arg5 internalMessages:(id)arg6 notifications:(id)arg7 notificationsToObject:(id)arg8;

@end
