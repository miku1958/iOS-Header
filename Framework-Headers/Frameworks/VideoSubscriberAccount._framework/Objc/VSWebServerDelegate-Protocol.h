//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/NSObject-Protocol.h>

@class NSError, VSWebServer, VSWebServerConnection;

@protocol VSWebServerDelegate <NSObject>

@optional
- (void)webServer:(VSWebServer *)arg1 didCloseConnection:(VSWebServerConnection *)arg2;
- (void)webServer:(VSWebServer *)arg1 didOpenConnection:(VSWebServerConnection *)arg2;
- (void)webServer:(VSWebServer *)arg1 didReceiveError:(NSError *)arg2;
@end

