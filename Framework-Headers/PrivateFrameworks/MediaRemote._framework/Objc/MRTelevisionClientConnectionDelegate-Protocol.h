//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/NSObject-Protocol.h>

@class MRProtocolMessage, MRTelevisionClientConnection;

@protocol MRTelevisionClientConnectionDelegate <NSObject>

@optional
- (void)clientConnection:(MRTelevisionClientConnection *)arg1 didReceiveMessage:(MRProtocolMessage *)arg2;
- (void)clientDidDisconnect:(MRTelevisionClientConnection *)arg1;
@end

