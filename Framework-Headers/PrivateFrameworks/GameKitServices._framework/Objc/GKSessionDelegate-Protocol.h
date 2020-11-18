//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameKitServices/NSObject-Protocol.h>

@class GKSession, NSError, NSString;

@protocol GKSessionDelegate <NSObject>

@optional
- (void)session:(GKSession *)arg1 connectionWithPeerFailed:(NSString *)arg2 withError:(NSError *)arg3;
- (void)session:(GKSession *)arg1 didFailWithError:(NSError *)arg2;
- (void)session:(GKSession *)arg1 didReceiveConnectionRequestFromPeer:(NSString *)arg2;
- (void)session:(GKSession *)arg1 peer:(NSString *)arg2 didChangeState:(int)arg3;
@end

