//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/NSObject-Protocol.h>

@protocol MCUserMDMXPCProtocol <NSObject>
- (void)scheduleTokenUpdateWithCompletion:(void (^)(NSError *))arg1;
- (void)simulatePushWithCompletion:(void (^)(NSError *))arg1;
- (void)userPushTokenWithCompletion:(void (^)(NSData *, NSError *))arg1;
@end

