//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/IDSServiceDelegate-Protocol.h>
#import <CoreUtils/IDSSessionDelegate-Protocol.h>

@class CUIDSReadRequest, CUIDSWriteRequest, IDSService, IDSSession, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUIDSSession : NSObject <IDSServiceDelegate, IDSSessionDelegate>
{
    IDSService *_idsService;
    IDSSession *_idsSession;
    BOOL _idsInviting;
    int _idsSock;
    CUIDSReadRequest *_readRequestList;
    id *_readRequestNext;
    CUIDSReadRequest *_readRequestCurr;
    NSObject<OS_dispatch_source> *_readSource;
    BOOL _readSuspended;
    CUIDSWriteRequest *_writeRequestList;
    id *_writeRequestNext;
    CUIDSWriteRequest *_writeRequestCurr;
    NSObject<OS_dispatch_source> *_writeSource;
    BOOL _writeSuspended;
    struct LogCategory *_ucat;
    BOOL _idsEncryption;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_idsDestination;
    NSString *_idsInviteToken;
    NSString *_idsServiceName;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *idsDestination; // @synthesize idsDestination=_idsDestination;
@property (nonatomic) BOOL idsEncryption; // @synthesize idsEncryption=_idsEncryption;
@property (copy, nonatomic) NSString *idsInviteToken; // @synthesize idsInviteToken=_idsInviteToken;
@property (copy, nonatomic) NSString *idsServiceName; // @synthesize idsServiceName=_idsServiceName;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_completeReadRequest:(id)arg1 error:(id)arg2;
- (void)_handleError:(id)arg1;
- (void)_invalidate;
- (void)_processReadRequests;
- (void)_processWriteRequests;
- (int)_setupSocket;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)readMinLength:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withOptions:(id)arg5;
- (void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2;
- (void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2;
- (void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2;
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (void)sessionStarted:(id)arg1;
- (void)writeData:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

