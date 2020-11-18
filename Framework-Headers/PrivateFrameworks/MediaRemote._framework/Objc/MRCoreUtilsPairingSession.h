//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRCryptoPairingSession.h>

@class MRPasscodeCredentials, NSArray, NSData, NSMutableData, NSMutableDictionary, NSObject, NSString, _MRDeviceInfoMessageProtobuf;
@protocol OS_dispatch_queue;

@interface MRCoreUtilsPairingSession : MRCryptoPairingSession
{
    MRPasscodeCredentials *_credentials;
    struct PairingSessionPrivate *_pairingSession;
    CDStruct_1af33fde _pairingDelegate;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _hasExchangedMessage;
    unsigned int _pairingFlags;
    unsigned long long _state;
    NSData *_inputKey;
    NSMutableData *_inputNonce;
    NSData *_outputKey;
    NSMutableData *_outputNonce;
}

@property (readonly, nonatomic) BOOL hasExchangedMessage; // @synthesize hasExchangedMessage=_hasExchangedMessage;
@property (strong, nonatomic) NSData *inputKey; // @synthesize inputKey=_inputKey;
@property (strong, nonatomic) NSMutableData *inputNonce; // @synthesize inputNonce=_inputNonce;
@property (readonly, nonatomic) NSMutableDictionary *mediaRemotePairedDevices;
@property (strong, nonatomic) NSData *outputKey; // @synthesize outputKey=_outputKey;
@property (strong, nonatomic) NSMutableData *outputNonce; // @synthesize outputNonce=_outputNonce;
@property (readonly, nonatomic) _MRDeviceInfoMessageProtobuf *pairedPeerDevice;
@property (readonly, nonatomic) NSArray *pairedPeerDevices;
@property (nonatomic) unsigned int pairingFlags; // @synthesize pairingFlags=_pairingFlags;
@property (readonly, nonatomic) NSString *peerIdentifier;
@property (readonly, nonatomic) unsigned long long state; // @synthesize state=_state;

- (void).cxx_destruct;
- (void *)_createDeviceFromPeer:(id)arg1;
- (id)_createPeerDeviceFromPeer:(id)arg1;
- (void)_delegateDidEnterPasscode:(id)arg1;
- (int)_displaySetupCode:(id)arg1;
- (id)_generateSetupCodeWithMaximumLength:(unsigned long long)arg1;
- (void)_handlePairingCompleteWithError:(id)arg1;
- (void)_handlePairingFailureWithError:(id)arg1;
- (void)_handleSetupExchangeComplete;
- (void)_hideSetupCode;
- (void)_onQueueDeriveEncryptionKeys;
- (id)_onQueueInitializePairingSessionWithState:(unsigned long long)arg1;
- (id)_onQueuePerformPairingExchangeWithInputData:(id)arg1 error:(id *)arg2;
- (int)_promptForSetupCodeWithDelay:(double)arg1;
- (id)addPeer;
- (void)close;
- (void)dealloc;
- (id)decryptData:(id)arg1 withError:(id *)arg2;
- (BOOL)deleteIdentityWithError:(id *)arg1;
- (id)encryptData:(id)arg1 withError:(id *)arg2;
- (id)extendedPeerInfo;
- (void)handlePairingExchangeData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handlePairingFailureWithStatus:(int)arg1;
- (id)initWithRole:(unsigned long long)arg1 device:(id)arg2;
- (id)initializePairingSession:(struct PairingSessionPrivate *)arg1;
- (BOOL)isPaired;
- (BOOL)isValid;
- (void)open;
- (void)openInState:(unsigned long long)arg1;
- (id)pairedDevices;
- (id)removePeer;
- (void)retry;
- (BOOL)shouldAutoRetry;
- (BOOL)shouldAutoRetryPairingExchange:(id)arg1;
- (id)updatePeer;

@end
