//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMFHTTPClientConnection, HMFHTTPServer, NSError;

@protocol HMFHTTPServerDelegate <NSObject>
- (void)server:(HMFHTTPServer *)arg1 didCloseConnection:(HMFHTTPClientConnection *)arg2;
- (void)server:(HMFHTTPServer *)arg1 didOpenConnection:(HMFHTTPClientConnection *)arg2;
- (void)server:(HMFHTTPServer *)arg1 didStopWithError:(NSError *)arg2;
- (BOOL)server:(HMFHTTPServer *)arg1 shouldAcceptConnection:(HMFHTTPClientConnection *)arg2;
@end
