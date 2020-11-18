//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/NSObject-Protocol.h>

@class FBSXPCMessage, NSObject;
@protocol OS_dispatch_queue;

@protocol FBSServiceFacilityClientMessaging <NSObject>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;

- (void)sendMessage:(FBSXPCMessage *)arg1 withType:(long long)arg2;
- (void)sendMessage:(FBSXPCMessage *)arg1 withType:(long long)arg2 replyHandler:(void (^)(FBSXPCMessage *))arg3 waitForReply:(BOOL)arg4 timeout:(double)arg5;
@end

