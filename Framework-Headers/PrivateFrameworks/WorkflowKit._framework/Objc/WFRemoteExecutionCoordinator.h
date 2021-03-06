//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/IDSServiceDelegate-Protocol.h>
#import <WorkflowKit/WFRemoteExecutionSessionDelegate-Protocol.h>

@class IDSService, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface WFRemoteExecutionCoordinator : NSObject <WFRemoteExecutionSessionDelegate, IDSServiceDelegate>
{
    BOOL _allowRunRequests;
    NSMutableArray *_activeSessions;
    IDSService *_service;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (strong, nonatomic) NSMutableArray *activeSessions; // @synthesize activeSessions=_activeSessions;
@property (readonly, nonatomic) BOOL allowRunRequests; // @synthesize allowRunRequests=_allowRunRequests;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *pairedDeviceModelIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) IDSService *service; // @synthesize service=_service;
@property (readonly) Class superclass;

+ (id)sharedCoordinator;
- (void).cxx_destruct;
- (void)cancelAllSessions;
- (void)cancelPendingFileTransfers;
- (void)cancelRequest:(id)arg1;
- (void)cancelSessions:(id)arg1;
- (id)defaultIDSOptions;
- (void)finishSessionWithRequest:(id)arg1;
- (void)handleAceCommandResponse:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleAlertRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleAlertRequestResponse:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleAskWhenRunRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleAskWhenRunRequestResponse:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleIncomingAceCommand:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleRunRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleRunRequestResponse:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleStopRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleUnknownRequestMessage:(id)arg1;
- (BOOL)hasPairedDevice;
- (id)initAndAllowRunRequests:(BOOL)arg1;
- (void)mapSelectorsForIncomingProtobuf;
- (BOOL)messageCameFromPairedDevice:(id)arg1;
- (id)pairedDevice;
- (void)sendAceCommandDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendAlertRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendAskWhenRunRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendFileAtURL:(id)arg1 transferIdentifier:(id)arg2 requestIdentifier:(id)arg3 error:(id *)arg4;
- (void)sendRunRequest:(id)arg1 userInterface:(id)arg2 parameterInputProvider:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sendRunRequestResponse:(id)arg1;
- (BOOL)sendStopRequest:(id)arg1 error:(id *)arg2;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)sessionDidFinish:(id)arg1;
- (id)sessionFromRequestIdentifier:(id)arg1;
- (id)sessionsOfClass:(Class)arg1;
- (BOOL)shouldDropMessageDueToStaleness:(id)arg1;
- (id)unknownRequestError;
- (id)unknownRequestMessageWithIdentifier:(id)arg1;

@end

