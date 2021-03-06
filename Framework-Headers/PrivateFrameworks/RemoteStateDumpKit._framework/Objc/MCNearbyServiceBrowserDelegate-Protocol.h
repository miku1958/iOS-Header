//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteStateDumpKit/NSObject-Protocol.h>

@class MCNearbyServiceBrowser, MCPeerID, NSDictionary, NSError;

@protocol MCNearbyServiceBrowserDelegate <NSObject>
- (void)browser:(MCNearbyServiceBrowser *)arg1 foundPeer:(MCPeerID *)arg2 withDiscoveryInfo:(NSDictionary *)arg3;
- (void)browser:(MCNearbyServiceBrowser *)arg1 lostPeer:(MCPeerID *)arg2;

@optional
- (void)browser:(MCNearbyServiceBrowser *)arg1 didNotStartBrowsingForPeers:(NSError *)arg2;
@end

