//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCMDMClientProtocol-Protocol.h>
#import <ManagedConfiguration/NSObject-Protocol.h>

@class NSDictionary;

@protocol MCUserMDMXPCProtocol <NSObject, MCMDMClientProtocol>
- (void)processUserRequest:(NSDictionary *)arg1 encodeResponse:(BOOL)arg2 completion:(void (^)(NSError *, NSDictionary *, NSData *))arg3;
- (void)scheduleTokenUpdateWithCompletion:(void (^)(NSError *))arg1;
- (void)simulatePushWithCompletion:(void (^)(NSError *))arg1;
- (void)userPushTokenWithCompletion:(void (^)(NSData *, NSError *))arg1;
@end

