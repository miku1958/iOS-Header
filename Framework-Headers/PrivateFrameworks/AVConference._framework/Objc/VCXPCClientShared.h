//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/AVConferenceXPCClient.h>

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCXPCClientShared : AVConferenceXPCClient
{
    NSMutableDictionary *_registeredUUIDServiceBlocks;
    NSObject<OS_dispatch_queue> *_registeredBlocksQueue;
}

@property (readonly, nonatomic) NSMutableDictionary *registeredUUIDServiceBlocks; // @synthesize registeredUUIDServiceBlocks=_registeredUUIDServiceBlocks;

- (void)dealloc;
- (void)deregisterFromNotifications;
- (void)deregisterWithUUID:(id)arg1 service:(char *)arg2;
- (id)init;
- (void)registerBlockWithUUID:(id)arg1 service:(char *)arg2 block:(CDUnknownBlockType)arg3;

@end

