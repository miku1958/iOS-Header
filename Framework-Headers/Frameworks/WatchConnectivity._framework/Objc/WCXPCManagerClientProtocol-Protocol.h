//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchConnectivity/NSObject-Protocol.h>

@class NSData, NSError, NSString, WCMessageRequest, WCMessageResponse, WCSessionFile, WCSessionState, WCSessionUserInfoTransfer;

@protocol WCXPCManagerClientProtocol <NSObject>
- (void)handleApplicationContext:(NSData *)arg1;
- (void)handleFileTransferFinishedWithIdentifier:(NSString *)arg1 error:(NSError *)arg2;
- (void)handleMessageSendingAllowed;
- (void)handleRequest:(WCMessageRequest *)arg1;
- (void)handleResponse:(WCMessageResponse *)arg1;
- (void)handleSentMessageWithIdentifier:(NSString *)arg1 error:(NSError *)arg2;
- (void)handleSessionFile:(WCSessionFile *)arg1;
- (void)handleSessionStateChanged:(WCSessionState *)arg1;
- (void)handleUserInfoTransfer:(WCSessionUserInfoTransfer *)arg1;
- (void)handleUserInfoTransferFinishedWithIdentifier:(NSString *)arg1 error:(NSError *)arg2;
- (void)invalidateConnection;
@end

