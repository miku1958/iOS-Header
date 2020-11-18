//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface AVConferenceXPCClient : NSObject
{
    NSObject<OS_xpc_object> *connection;
    NSMutableDictionary *registeredBlocks;
    NSObject<OS_dispatch_queue> *replyQueue;
    NSObject<OS_dispatch_queue> *connectionQueue;
    BOOL connectionPersists;
}

@property (readonly) NSObject<OS_xpc_object> *connection; // @synthesize connection;
@property (readonly) BOOL connectionPersists; // @synthesize connectionPersists;
@property (readonly) NSMutableDictionary *registeredBlocks; // @synthesize registeredBlocks;

+ (id)AVConferenceXPCClientSingleton;
+ (id)dictionaryForAudioConfig:(id)arg1;
+ (id)dictionaryForCommonStreamConfig:(id)arg1;
+ (id)dictionaryForMediaStreamConfig:(id)arg1;
+ (id)dictionaryForVideoConfig:(id)arg1;
- (void)closeConnectionToServer;
- (id)copyConnection;
- (id)createConnectionToServer;
- (void)dealloc;
- (void)deregisterFromService:(char *)arg1;
- (id)init;
- (id)newNSDictionaryFromNSError:(id)arg1;
- (id)newNSDictionaryFromXPCDictionary:(id)arg1;
- (id)newNSErrorFromNSDictionary:(id)arg1;
- (id)newServerDiedDictionary;
- (id)newTimeoutDictionary;
- (id)newXPCDictionaryFromNSDictionary:(id)arg1;
- (void)registerBlockForService:(char *)arg1 block:(CDUnknownBlockType)arg2;
- (void)registerBlockForService:(char *)arg1 block:(CDUnknownBlockType)arg2 queue:(id)arg3;
- (void)registerBlockForService:(char *)arg1 block:(CDUnknownBlockType)arg2 queue:(id)arg3 eventLogLevel:(int)arg4;
- (void)sendMessageAsync:(char *)arg1;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2 reply:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2 xpcArguments:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2 xpcArguments:(id)arg3 reply:(CDUnknownBlockType)arg4 queue:(id)arg5;
- (id)sendMessageSync:(char *)arg1;
- (id)sendMessageSync:(char *)arg1 arguments:(id)arg2;
- (id)sendMessageSync:(char *)arg1 arguments:(id)arg2 xpcArguments:(id)arg3;

@end

