//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRCryptoPairingSession.h>

@class MRPairedDevice, MRPasscodeCredentials, NSArray, NSData, NSMutableData, NSObject;
@protocol OS_dispatch_queue;

@interface MRCoreUtilsPairingSession : MRCryptoPairingSession
{
    unsigned long long _state;
    MRPasscodeCredentials *_credentials;
    struct PairingSessionPrivate *_pairingSession;
    struct {
        void *context;
        CDUnknownFunctionPointerType showSetupCode_f;
        CDUnknownFunctionPointerType hideSetupCode_f;
        CDUnknownFunctionPointerType promptForSetupCode_f;
        CDUnknownFunctionPointerType copyIdentity_f;
        CDUnknownFunctionPointerType findPeer_f;
        CDUnknownFunctionPointerType savePeer_f;
        CDUnknownFunctionPointerType resumeRequest_f;
        CDUnknownFunctionPointerType resumeResponse_f;
    } _pairingDelegate;
    NSObject<OS_dispatch_queue> *_queue;
    MRPairedDevice *_device;
    NSData *_inputKey;
    NSMutableData *_inputNonce;
    NSData *_outputKey;
    NSMutableData *_outputNonce;
}

@property (readonly, nonatomic) MRPairedDevice *device; // @synthesize device=_device;
@property (strong, nonatomic) NSData *inputKey; // @synthesize inputKey=_inputKey;
@property (strong, nonatomic) NSMutableData *inputNonce; // @synthesize inputNonce=_inputNonce;
@property (strong, nonatomic) NSData *outputKey; // @synthesize outputKey=_outputKey;
@property (strong, nonatomic) NSMutableData *outputNonce; // @synthesize outputNonce=_outputNonce;
@property (readonly, nonatomic, getter=isPaired) BOOL paired;
@property (readonly, nonatomic) NSArray *pairedDevices;

- (id)_addPeer:(struct PairingSessionPrivate *)arg1;
- (void)_delegateDidEnterPasscode:(id)arg1;
- (int)_displaySetupCode:(id)arg1;
- (id)_extendedInfoDictionary;
- (id)_generateSetupCodeWithMaximumLength:(unsigned long long)arg1;
- (void)_handlePairingFailureWithError:(id)arg1;
- (void)_handleSetupExchangeComplete;
- (void)_hideSetupCode;
- (void)_onQueueDeriveEncryptionKeys;
- (id)_onQueueInitializePairingSessionWithState:(unsigned long long)arg1;
- (id)_onQueuePerformPairingExchangeWithInputData:(id)arg1 error:(id *)arg2;
- (id)_peerIdentifier:(struct PairingSessionPrivate *)arg1;
- (int)_promptForSetupCodeWithDelay:(double)arg1;
- (id)_removePeer:(struct PairingSessionPrivate *)arg1;
- (id)_updatePeer:(struct PairingSessionPrivate *)arg1;
- (void)close;
- (void)dealloc;
- (id)decryptData:(id)arg1 withError:(id *)arg2;
- (BOOL)deleteIdentityWithError:(id *)arg1;
- (id)encryptData:(id)arg1 withError:(id *)arg2;
- (BOOL)handlePairingExchangeData:(id)arg1 withError:(id *)arg2;
- (void)handlePairingFailureWithStatus:(int)arg1;
- (id)initWithRole:(unsigned long long)arg1 device:(id)arg2;
- (BOOL)isValid;
- (void)open;
- (id)unpair;
- (id)updatePairing;

@end
