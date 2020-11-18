//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/NSObject-Protocol.h>

@class NSError, VSWebServerConnection, VSWebServerRequest, VSWebServerResponse;

@protocol VSWebServerConnectionDelegate <NSObject>

@optional
- (void)webServerConnection:(VSWebServerConnection *)arg1 didReceiveError:(NSError *)arg2;
- (void)webServerConnection:(VSWebServerConnection *)arg1 didReceiveRequest:(VSWebServerRequest *)arg2;
- (void)webServerConnection:(VSWebServerConnection *)arg1 didSendResponse:(VSWebServerResponse *)arg2 toRequest:(VSWebServerRequest *)arg3;
- (void)webServerConnection:(VSWebServerConnection *)arg1 failedToSendResponse:(VSWebServerResponse *)arg2 toRequest:(VSWebServerRequest *)arg3;
@end

