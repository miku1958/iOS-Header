//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSData, UNRemoteNotificationRegistrar;

@protocol UNRemoteNotificationRegistrarDelegate <NSObject>

@optional
- (void)remoteNotificationRegistrar:(UNRemoteNotificationRegistrar *)arg1 didReceiveDeviceToken:(NSData *)arg2;
@end
