//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MultipeerConnectivity/NSObject-Protocol.h>

@class MCNearbyServiceAdvertiser, MCPeerID, NSData, NSError;

@protocol MCNearbyServiceAdvertiserDelegate <NSObject>
- (void)advertiser:(MCNearbyServiceAdvertiser *)arg1 didReceiveInvitationFromPeer:(MCPeerID *)arg2 withContext:(NSData *)arg3 invitationHandler:(void (^)(BOOL, MCSession *))arg4;

@optional
- (void)advertiser:(MCNearbyServiceAdvertiser *)arg1 didNotStartAdvertisingPeer:(NSError *)arg2;
@end

