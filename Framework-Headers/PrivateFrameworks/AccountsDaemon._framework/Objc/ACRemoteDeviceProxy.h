//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccountsDaemon/IDSServiceDelegate-Protocol.h>

@class ACRemoteCommandHandler, IDSService, NSLock, NSMutableDictionary, NSString;

@interface ACRemoteDeviceProxy : NSObject <IDSServiceDelegate>
{
    IDSService *_messageSendingService;
    ACRemoteCommandHandler *_remoteCommandHandler;
    NSMutableDictionary *_completionHandlersByInternalMessageID;
    NSMutableDictionary *_internalMessageIDsByTransportID;
    NSLock *_completionHandlersLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dequeueCompletionHandlersForMessageWithInternalID:(id)arg1 success:(BOOL)arg2 result:(id)arg3 error:(id)arg4;
- (void)_dequeueCompletionHandlersForMessageWithTransportID:(id)arg1 success:(BOOL)arg2 result:(id)arg3 error:(id)arg4;
- (void)_enqueueCompletionHandler:(CDUnknownBlockType)arg1 forMessageWithInternalID:(id)arg2 transportID:(id)arg3;
- (BOOL)_isValidCommandForOutgoingMessage:(id)arg1;
- (long long)_priorityForMessageCarryingCommand:(id)arg1;
- (void)_sendReplyForMessage:(id)arg1 withSuccess:(BOOL)arg2 result:(id)arg3 error:(id)arg4;
- (id)init;
- (void)sendCommand:(id)arg1 withAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendCommand:(id)arg1 withAccount:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;

@end

