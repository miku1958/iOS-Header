//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDIDSProxyMessageTransport.h>

#import <HomeKitDaemon/_HMDLegacyWatchSessionDelegate-Protocol.h>

@class NSMapTable, NSString;

@interface HMDLegacyIDSProxyMessageTransport : HMDIDSProxyMessageTransport <_HMDLegacyWatchSessionDelegate>
{
    NSMapTable *_clientSessions;
    NSMapTable *_serverSessions;
}

@property (readonly, nonatomic) NSMapTable *clientSessions; // @synthesize clientSessions=_clientSessions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSMapTable *serverSessions; // @synthesize serverSessions=_serverSessions;
@property (readonly) Class superclass;

+ (BOOL)transportSupportsDevice:(id)arg1;
- (void).cxx_destruct;
- (void)_handleClientSessionInvalidationMessage:(id)arg1;
- (void)_handleReceivedClientMessage:(id)arg1;
- (void)_handleReceivedServerMessage:(id)arg1;
- (int)awdTransportType;
- (id)initWithAccountRegistry:(id)arg1;
- (void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)watchSession:(id)arg1 receivedRequestToSendMessage:(id)arg2;

@end

