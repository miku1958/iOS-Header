//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRCryptoPairingSession.h>

@class MRCoreUtilsPairingSession, MRCryptoPairingSessionBlockDelegate;

@interface MRExternalDevicePairingSession : MRCryptoPairingSession
{
    MRCoreUtilsPairingSession *_pairingSession;
    MRCryptoPairingSessionBlockDelegate *_pairingDelegate;
}

@property (readonly, nonatomic) BOOL hasExchangedMessage;
@property (strong, nonatomic) MRCryptoPairingSessionBlockDelegate *pairingDelegate; // @synthesize pairingDelegate=_pairingDelegate;
@property (strong, nonatomic) MRCoreUtilsPairingSession *pairingSession; // @synthesize pairingSession=_pairingSession;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic, getter=isUsingSystemPairing) BOOL usingSystemPairing;

- (void).cxx_destruct;
- (void)close;
- (id)decryptData:(id)arg1 withError:(id *)arg2;
- (BOOL)deleteIdentityWithError:(id *)arg1;
- (id)encryptData:(id)arg1 withError:(id *)arg2;
- (void)handlePairingExchangeData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handlePairingFailureWithStatus:(int)arg1;
- (id)initWithDevice:(id)arg1;
- (BOOL)isPaired;
- (BOOL)isValid;
- (void)open;
- (id)pairedDevices;
- (id)removePeer;
- (void)setDelegate:(id)arg1;
- (id)updatePeer;

@end
