//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/NSObject-Protocol.h>

@protocol AMSDeviceMessengerClientInterface, AMSSecurityClientInterface;

@protocol AMSDaemonConnectionProtocol <NSObject>
- (void)getDeviceMessengerServiceProxyWithDelegate:(id<AMSDeviceMessengerClientInterface>)arg1 replyHandler:(void (^)(id<AMSDeviceMessengerServiceInterface>, NSError *))arg2;
- (void)getPushNotificationServiceProxyWithReplyHandler:(void (^)(id<AMSPushNotificationServiceInterface>, NSError *))arg1;
- (void)getSecurityServiceProxyWithDelegate:(id<AMSSecurityClientInterface>)arg1 replyHandler:(void (^)(id<AMSSecurityServiceInterface>, NSError *))arg2;
@end
