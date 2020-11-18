//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface AVConferenceXPCServer : NSObject
{
    NSObject<OS_xpc_object> *listener;
    NSMutableArray *clientConnections;
    NSMutableDictionary *registeredBlocks;
    NSObject<OS_dispatch_queue> *incomingMessageQueue;
    NSObject<OS_dispatch_queue> *outgoingMessageQueue;
    NSObject<OS_dispatch_queue> *clientConnectionsQueue;
}

@property (readonly) NSObject<OS_xpc_object> *listener; // @synthesize listener;
@property (readonly) NSMutableDictionary *registeredBlocks; // @synthesize registeredBlocks;

+ (id)AVConferenceXPCServerSingleton;
+ (id)newMediaStreamConfigFromDictionary:(id)arg1;
+ (void)setupAudioConfig:(id)arg1 fromDictionary:(id)arg2;
+ (void)setupCommonStreamConfig:(id)arg1 fromDictionary:(id)arg2;
+ (void)setupVideoConfig:(id)arg1 fromDictionary:(id)arg2;
- (void)_xpc_add_connection_to_list:(id)arg1;
- (id)_xpc_get_connection_from_list_for_connection:(id)arg1;
- (id)_xpc_get_connection_from_list_for_context:(id)arg1;
- (id)_xpc_get_connections_from_list_for_context:(id)arg1;
- (void)_xpc_handle_incoming_request:(id)arg1;
- (void)_xpc_remove_connection_from_list:(id)arg1;
- (void)_xpc_remove_connections_from_list;
- (void)_xpc_start_listening_for_connections;
- (id)allocWithZone:(struct _NSZone *)arg1;
- (void)appendContextToDictionary:(id)arg1 forConnection:(id)arg2;
- (void)appendPIDToDictionary:(id)arg1 pid:(int)arg2;
- (id)authorizedTokenData;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)deregisterFromService:(char *)arg1;
- (id)init;
- (id)newClientDiedDictionary;
- (id)newNSDictionaryFromNSError:(id)arg1;
- (id)newNSDictionaryFromXPCDictionary:(id)arg1;
- (id)newNSErrorFromNSDictionary:(id)arg1;
- (id)newXPCDictionaryFromNSDictionary:(id)arg1 forEvent:(id)arg2;
- (void)registerBlockForService:(char *)arg1 block:(CDUnknownBlockType)arg2;
- (void)registerBlockForService:(char *)arg1 block:(CDUnknownBlockType)arg2 queue:(id)arg3;
- (void)registerBlockForService:(char *)arg1 block:(CDUnknownBlockType)arg2 queue:(id)arg3 eventLogLevel:(int)arg4;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2 context:(id)arg3;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2 toAllClientsWithContext:(id)arg3;

@end

