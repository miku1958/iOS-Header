//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchConnectivity/NSObject-Protocol.h>

@class NSData, NSError, NSString, WCMessageRequest, WCMessageResponse, WCSessionFile, WCSessionState, WCSessionUserInfoTransfer, WCXPCManager;

@protocol WCXPCManagerDelegate <NSObject>
- (void)xpcManager:(WCXPCManager *)arg1 handleApplicationContext:(NSData *)arg2;
- (void)xpcManager:(WCXPCManager *)arg1 handleFileTransferFinishedWithIdentifier:(NSString *)arg2 error:(NSError *)arg3;
- (void)xpcManager:(WCXPCManager *)arg1 handleRequest:(WCMessageRequest *)arg2;
- (void)xpcManager:(WCXPCManager *)arg1 handleResponse:(WCMessageResponse *)arg2;
- (void)xpcManager:(WCXPCManager *)arg1 handleSentMessageWithIdentifier:(NSString *)arg2 error:(NSError *)arg3;
- (void)xpcManager:(WCXPCManager *)arg1 handleSessionFile:(WCSessionFile *)arg2;
- (void)xpcManager:(WCXPCManager *)arg1 handleSessionStateChanged:(WCSessionState *)arg2 forceReachableChanged:(BOOL)arg3;
- (void)xpcManager:(WCXPCManager *)arg1 handleUserInfoTransfer:(WCSessionUserInfoTransfer *)arg2;
- (void)xpcManager:(WCXPCManager *)arg1 handleUserInfoTransferFinishedWithIdentifier:(NSString *)arg2 error:(NSError *)arg3;
- (void)xpcManagerHandleMessageSendingAllowed:(WCXPCManager *)arg1;
@end
