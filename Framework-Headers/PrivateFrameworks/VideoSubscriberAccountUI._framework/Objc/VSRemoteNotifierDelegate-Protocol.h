//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccountUI/NSObject-Protocol.h>

@class NSDictionary, VSRemoteNotifier;

@protocol VSRemoteNotifierDelegate <NSObject>

@optional
- (void)remoteNotifier:(VSRemoteNotifier *)arg1 didReceiveRemoteNotificationWithUserInfo:(NSDictionary *)arg2;
@end

