//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MCNearbyDiscoveryPeerConnection, MCPeerID, NSMutableArray, NSNetService;

@interface MCNearbyDiscoveryPeer : NSObject
{
    MCPeerID *_peerID;
    NSNetService *_netService;
    int _state;
    MCNearbyDiscoveryPeerConnection *_connection;
    MCNearbyDiscoveryPeerConnection *_trialConnection;
    NSMutableArray *_sendDataBuffer;
}

@property (strong, nonatomic) MCNearbyDiscoveryPeerConnection *connection; // @synthesize connection=_connection;
@property (strong, nonatomic) NSNetService *netService; // @synthesize netService=_netService;
@property (copy, nonatomic) MCPeerID *peerID; // @synthesize peerID=_peerID;
@property (strong, nonatomic) NSMutableArray *sendDataBuffer; // @synthesize sendDataBuffer=_sendDataBuffer;
@property (nonatomic) int state; // @synthesize state=_state;
@property (strong, nonatomic) MCNearbyDiscoveryPeerConnection *trialConnection; // @synthesize trialConnection=_trialConnection;

- (void)attachConnection:(id)arg1;
- (void)closeConnection;
- (void)dealloc;
- (id)description;
- (void)flushDataBuffer;
- (id)init;
- (id)initWithPeerID:(id)arg1;
- (void)invalidate;
- (void)sendData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)stringForState:(int)arg1;

@end

