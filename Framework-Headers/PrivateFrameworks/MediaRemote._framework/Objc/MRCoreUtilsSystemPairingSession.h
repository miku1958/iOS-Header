//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRCoreUtilsPairingSession.h>

@interface MRCoreUtilsSystemPairingSession : MRCoreUtilsPairingSession
{
}

+ (id)pairingManager;
+ (BOOL)systemPairingAvailable;
- (id)addPeer;
- (id)initializePairingSession:(struct PairingSessionPrivate *)arg1;
- (id)mediaRemotePairedDevices;
- (id)pairedPeerDevice;
- (id)pairedPeerDevices;
- (id)removePeer;
- (BOOL)shouldAutoRetryPairingExchange:(id)arg1;
- (id)updatePeer;

@end

