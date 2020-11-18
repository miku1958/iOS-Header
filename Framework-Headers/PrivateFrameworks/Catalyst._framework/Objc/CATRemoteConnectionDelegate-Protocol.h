//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/NSObject-Protocol.h>

@class CATRemoteConnection, CATRemoteConnectionTrustDecision, NSData, NSError, NSInputStream, NSURL;

@protocol CATRemoteConnectionDelegate <NSObject>

@optional
- (void)connection:(CATRemoteConnection *)arg1 didFailToSendData:(NSData *)arg2 userInfo:(id)arg3 error:(NSError *)arg4;
- (void)connection:(CATRemoteConnection *)arg1 didFailToSendDataWithStream:(NSInputStream *)arg2 userInfo:(id)arg3 error:(NSError *)arg4;
- (void)connection:(CATRemoteConnection *)arg1 didInterruptWithError:(NSError *)arg2;
- (void)connection:(CATRemoteConnection *)arg1 didReceiveData:(NSData *)arg2;
- (void)connection:(CATRemoteConnection *)arg1 didReceiveDataRequestWithURL:(NSURL *)arg2;
- (void)connection:(CATRemoteConnection *)arg1 didReceiveStreamData:(NSData *)arg2 moreComing:(BOOL)arg3;
- (void)connection:(CATRemoteConnection *)arg1 didSendData:(NSData *)arg2 userInfo:(id)arg3;
- (void)connection:(CATRemoteConnection *)arg1 didSendDataWithStream:(NSInputStream *)arg2 userInfo:(id)arg3;
- (void)connection:(CATRemoteConnection *)arg1 encounteredTrustDecisionWhileTryingToSecure:(CATRemoteConnectionTrustDecision *)arg2;
- (void)connectionDidClose:(CATRemoteConnection *)arg1;
- (void)connectionDidOpen:(CATRemoteConnection *)arg1;
- (void)connectionDidSecure:(CATRemoteConnection *)arg1;
- (void)connectionWillSecure:(CATRemoteConnection *)arg1;
@end

