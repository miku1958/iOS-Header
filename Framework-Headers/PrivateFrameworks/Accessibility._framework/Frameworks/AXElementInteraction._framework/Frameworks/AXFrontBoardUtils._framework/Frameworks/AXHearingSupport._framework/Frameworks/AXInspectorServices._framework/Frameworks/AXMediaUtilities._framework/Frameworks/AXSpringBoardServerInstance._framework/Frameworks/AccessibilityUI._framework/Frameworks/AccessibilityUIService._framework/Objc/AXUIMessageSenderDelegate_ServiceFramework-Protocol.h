//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessibilityUIService/NSObject-Protocol.h>

@class AXUIMessageSender_ServiceFramework, NSObject;
@protocol OS_xpc_object;

@protocol AXUIMessageSenderDelegate_ServiceFramework <NSObject>
- (void)messageSender:(AXUIMessageSender_ServiceFramework *)arg1 accessXPCConnectionForMessageWithContext:(void *)arg2 usingBlock:(void (^)(NSObject<OS_xpc_object> *))arg3;

@optional
- (void *)messageSender:(AXUIMessageSender_ServiceFramework *)arg1 extractCustomDataFromXPCReply:(NSObject<OS_xpc_object> *)arg2 numberOfKeyValuePairsForCustomData:(unsigned long long *)arg3;
- (void)messageSender:(AXUIMessageSender_ServiceFramework *)arg1 processCustomDataFromXPCReply:(void *)arg2;
- (void)messageSender:(AXUIMessageSender_ServiceFramework *)arg1 willSendXPCMessage:(NSObject<OS_xpc_object> *)arg2 context:(void *)arg3;
@end
