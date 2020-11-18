//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchConnectivity/NSXPCConnectionDelegate-Protocol.h>
#import <WatchConnectivity/WCXPCManagerClientProtocol-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue, WCXPCManagerDelegate;

@interface WCXPCManager : NSObject <NSXPCConnectionDelegate, WCXPCManagerClientProtocol>
{
    BOOL _connectionInvalidated;
    NSXPCConnection *_connection;
    NSObject<WCXPCManagerDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly) NSXPCConnection *connection; // @synthesize connection=_connection;
@property BOOL connectionInvalidated; // @synthesize connectionInvalidated=_connectionInvalidated;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<WCXPCManagerDelegate> *delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)clientInterface;
+ (id)daemonInterface;
+ (void)initialize;
+ (id)sharedManager;
- (void).cxx_destruct;
- (void)acknowledgeFileIndexWithIdentifier:(id)arg1;
- (void)acknowledgeFileResultIndexWithIdentifier:(id)arg1;
- (void)acknowledgeUserInfoIndexWithIdentifier:(id)arg1;
- (void)acknowledgeUserInfoResultIndexWithIdentifier:(id)arg1;
- (void)cancelAllOutstandingMessages;
- (void)cancelSendWithIdentifier:(id)arg1;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3;
- (void)handleApplicationContext:(id)arg1;
- (void)handleFileTransferFinishedWithIdentifier:(id)arg1 error:(id)arg2;
- (void)handleMessageSendingAllowed;
- (void)handleRequest:(id)arg1;
- (void)handleResponse:(id)arg1;
- (void)handleSentMessageWithIdentifier:(id)arg1 error:(id)arg2;
- (void)handleSessionFile:(id)arg1;
- (void)handleSessionStateChanged:(id)arg1;
- (void)handleSessionStateChanged:(id)arg1 forceReachableChanged:(BOOL)arg2;
- (void)handleUserInfoTransfer:(id)arg1;
- (void)handleUserInfoTransferFinishedWithIdentifier:(id)arg1 error:(id)arg2;
- (id)init;
- (void)invalidateConnection;
- (void)onqueue_reconnect;
- (void)retrieveSessionStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)sendMessage:(id)arg1 acceptanceHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setupConnection;
- (void)transferFile:(id)arg1 sandboxToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)transferUserInfo:(id)arg1 withURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateApplicationContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
