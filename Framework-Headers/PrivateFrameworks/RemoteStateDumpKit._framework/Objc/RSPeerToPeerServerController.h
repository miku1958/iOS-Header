//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteStateDumpKit/RSPeerToPeerConnectionController.h>

#import <RemoteStateDumpKit/MCNearbyServiceAdvertiserDelegate-Protocol.h>

@class MCNearbyServiceAdvertiser, NSString;

@interface RSPeerToPeerServerController : RSPeerToPeerConnectionController <MCNearbyServiceAdvertiserDelegate>
{
    BOOL _advertiserDidNotStartAdvertising;
    MCNearbyServiceAdvertiser *_serviceAdvertiser;
}

@property (nonatomic) BOOL advertiserDidNotStartAdvertising; // @synthesize advertiserDidNotStartAdvertising=_advertiserDidNotStartAdvertising;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MCNearbyServiceAdvertiser *serviceAdvertiser; // @synthesize serviceAdvertiser=_serviceAdvertiser;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)abort;
- (void)advertiser:(id)arg1 didNotStartAdvertisingPeer:(id)arg2;
- (void)advertiser:(id)arg1 didReceiveInvitationFromPeer:(id)arg2 withContext:(id)arg3 invitationHandler:(CDUnknownBlockType)arg4;
- (BOOL)didStartAcceptingConnections;
- (void)prepareForConnection;

@end
