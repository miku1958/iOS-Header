//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CompanionSync/SYSyncEngine.h>

#import <CompanionSync/IDSServiceDelegate-Protocol.h>

@class IDSService, NSDictionary, NSMutableArray, NSMutableIndexSet, NSMutableSet, NSObject, NSString, NSURL, SYDevice, SYStartSyncSession, _SYInputStreamer, _SYOutputStreamer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SYFileTransferSyncEngine : SYSyncEngine <IDSServiceDelegate>
{
    BOOL _inSession;
    BOOL _sessionCanceled;
    SYStartSyncSession *_sessionStartMessage;
    NSURL *_outputFileURL;
    _SYOutputStreamer *_outputStream;
    NSURL *_inputFileURL;
    _SYInputStreamer *_inputStream;
    NSURL *_responseFileURL;
    _SYOutputStreamer *_responseStream;
    BOOL _responsesCanceled;
    IDSService *_idsService;
    NSObject<OS_dispatch_queue> *_idsQueue;
    SYDevice *_activeDevice;
    SYDevice *_sessionDevice;
    SYDevice *_responseDevice;
    NSMutableIndexSet *_messageRows;
    NSMutableIndexSet *_responseMessageRows;
    NSMutableArray *_deferredIncomingSessions;
    NSMutableSet *_singleMessageUUIDs;
    NSDictionary *_customIDSOptions;
}

@property (copy, nonatomic) NSDictionary *customIDSOptions; // @synthesize customIDSOptions=_customIDSOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_assumeOwnershipOfURL:(id)arg1 error:(id *)arg2;
- (void)_cancelResponses;
- (void)_cancelSession;
- (void)_consumeRemainingStreamDataWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_enqueueSingleMessage:(id)arg1 withMessageID:(unsigned short)arg2 priority:(long long)arg3 options:(id)arg4 userContext:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (id)_fileTransferHeader;
- (void)_handleIncomingSessionFileAtOwnedURL:(id)arg1 metadata:(id)arg2 identifier:(id)arg3;
- (void)_handleIncomingSessionFileAtURL:(id)arg1 metadata:(id)arg2 identifier:(id)arg3;
- (void)_handleIncomingStreamDataWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleProtobuf:(id)arg1 ofType:(unsigned short)arg2 identifier:(id)arg3 isResponse:(BOOL)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)_handleSessionRestart:(id)arg1 priority:(long long)arg2 options:(id)arg3 userContext:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)_processNMSMessageData:(id)arg1 context:(id)arg2;
- (void)_readNextProtobuf:(CDUnknownBlockType)arg1;
- (void)_reallyHandleSessionRestart:(id)arg1 priority:(long long)arg2 options:(id)arg3 userContext:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)_recordLastSeqNo:(id)arg1;
- (BOOL)_sessionDeviceCanUseSingleMessages;
- (BOOL)_shouldTreatAsSessionEnd:(id)arg1;
- (id)_wrapIncomingMessage:(id)arg1 ofType:(unsigned short)arg2 identifier:(id)arg3;
- (id)_wrapIncomingResponse:(id)arg1 ofType:(unsigned short)arg2 identifier:(id)arg3;
- (id)_wrapMessage:(id)arg1 ofType:(unsigned short)arg2 userInfo:(id)arg3;
- (id)_wrapResponse:(id)arg1 toRequest:(id)arg2 ofType:(unsigned short)arg3;
- (void)beginResponseSession;
- (void)beginSession;
- (BOOL)buffersHandshake;
- (BOOL)buffersSessions;
- (id)cancelMessagesReturningFailures:(id)arg1;
- (void)endFileTransferForStream:(id)arg1 atURL:(id)arg2 target:(id)arg3 wasCancelled:(BOOL)arg4 messageRows:(id)arg5;
- (void)endResponseSession;
- (void)endSession;
- (void)enqueueSyncRequest:(id)arg1 withMessageID:(unsigned short)arg2 priority:(long long)arg3 options:(id)arg4 userContext:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (id)idsOptions:(id)arg1;
- (id)idsOptions:(id)arg1 forFileTransfer:(BOOL)arg2;
- (id)initWithService:(id)arg1 queue:(id)arg2;
- (BOOL)isInSession;
- (id)outputStreamWithMetadata:(id)arg1 priority:(long long)arg2 options:(id)arg3 context:(id)arg4 error:(id *)arg5;
- (BOOL)resume:(id *)arg1;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 didSwitchActivePairedDevice:(id)arg2 acknowledgementBlock:(CDUnknownBlockType)arg3;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (id)stateForLogging;
- (void)suspend;
- (BOOL)targetIsNearby;

@end

