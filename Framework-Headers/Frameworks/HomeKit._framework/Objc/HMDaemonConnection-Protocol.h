//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMXPCMessageTransport-Protocol.h>

@class NSDictionary, NSString, NSUUID;

@protocol HMDaemonConnection <HMXPCMessageTransport>
- (void)checkinWithName:(NSString *)arg1 handleMessageWithName:(NSString *)arg2 messageIdentifier:(NSUUID *)arg3 messagePayload:(NSDictionary *)arg4 target:(NSUUID *)arg5 responseHandler:(void (^)(NSError *, NSDictionary *))arg6;
- (void)recheckinWithName:(NSString *)arg1;
@end
