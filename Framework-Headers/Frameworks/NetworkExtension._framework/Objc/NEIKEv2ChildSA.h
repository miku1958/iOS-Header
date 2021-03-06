//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NEIKEv2ChildSAConfiguration, NEIKEv2ChildSAProposal, NEIKEv2ESPSPI, NEIKEv2IKESA, NSArray, NSData, NSError, NSMutableData;

@interface NEIKEv2ChildSA : NSObject
{
    CDUnion_07c5b791 _dhECKey;
    BOOL _shouldSendStateUpdate;
    BOOL _isFirstChild;
    BOOL _isInitiator;
    BOOL _sequencePerTrafficClassSupported;
    unsigned short _incomingDatabaseReqID;
    unsigned short _outgoingDatabaseReqID;
    unsigned int _childID;
    NEIKEv2IKESA *_ikeSA;
    unsigned long long _state;
    NSError *_error;
    NEIKEv2ChildSAConfiguration *_configuration;
    NEIKEv2ChildSAProposal *_chosenProposal;
    NSArray *_localTrafficSelectors;
    NSArray *_remoteTrafficSelectors;
    NSData *_localNonce;
    NSData *_remoteNonce;
    NSMutableData *_dhPublicKey;
    NSData *_dhRemotePublicKey;
    struct OpaqueSecDHContext *_dhContext;
    unsigned long long _dhPublicKeySize;
    NSMutableData *_incomingEncryptionKey;
    NSMutableData *_incomingIntegrityKey;
    NSMutableData *_outgoingEncryptionKey;
    NSMutableData *_outgoingIntegrityKey;
    NEIKEv2ChildSAProposal *_initiatorRekeyProposal;
    NEIKEv2ChildSAProposal *_initiatorRekeyNonPFSProposal;
    NEIKEv2ChildSAProposal *_responderRekeyProposal;
    NEIKEv2ESPSPI *_rekeyedSPI;
    NEIKEv2ESPSPI *_rekeyedRemoteSPI;
}

@property unsigned int childID; // @synthesize childID=_childID;
@property (strong) NEIKEv2ChildSAProposal *chosenProposal; // @synthesize chosenProposal=_chosenProposal;
@property (strong) NEIKEv2ChildSAConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly) NSArray *configuredInitiatorTrafficSelectors;
@property (readonly) NSArray *configuredResponderTrafficSelectors;
@property struct OpaqueSecDHContext *dhContext; // @synthesize dhContext=_dhContext;
@property (strong) NSMutableData *dhPublicKey; // @synthesize dhPublicKey=_dhPublicKey;
@property unsigned long long dhPublicKeySize; // @synthesize dhPublicKeySize=_dhPublicKeySize;
@property (strong) NSData *dhRemotePublicKey; // @synthesize dhRemotePublicKey=_dhRemotePublicKey;
@property (strong) NSError *error; // @synthesize error=_error;
@property (weak) NEIKEv2IKESA *ikeSA; // @synthesize ikeSA=_ikeSA;
@property unsigned short incomingDatabaseReqID; // @synthesize incomingDatabaseReqID=_incomingDatabaseReqID;
@property (strong) NSMutableData *incomingEncryptionKey; // @synthesize incomingEncryptionKey=_incomingEncryptionKey;
@property (strong) NSMutableData *incomingIntegrityKey; // @synthesize incomingIntegrityKey=_incomingIntegrityKey;
@property (strong) NSData *initiatorNonce;
@property (strong) NEIKEv2ChildSAProposal *initiatorRekeyNonPFSProposal; // @synthesize initiatorRekeyNonPFSProposal=_initiatorRekeyNonPFSProposal;
@property (strong) NEIKEv2ChildSAProposal *initiatorRekeyProposal; // @synthesize initiatorRekeyProposal=_initiatorRekeyProposal;
@property (strong) NSMutableData *initiatorSendEncryptionKey;
@property (strong) NSMutableData *initiatorSendIntegrityKey;
@property (strong) NSArray *initiatorTrafficSelectors;
@property BOOL isFirstChild; // @synthesize isFirstChild=_isFirstChild;
@property BOOL isInitiator; // @synthesize isInitiator=_isInitiator;
@property (readonly) BOOL isRekeying;
@property (strong) NSData *localNonce; // @synthesize localNonce=_localNonce;
@property (strong) NSArray *localTrafficSelectors; // @synthesize localTrafficSelectors=_localTrafficSelectors;
@property unsigned short outgoingDatabaseReqID; // @synthesize outgoingDatabaseReqID=_outgoingDatabaseReqID;
@property (strong) NSMutableData *outgoingEncryptionKey; // @synthesize outgoingEncryptionKey=_outgoingEncryptionKey;
@property (strong) NSMutableData *outgoingIntegrityKey; // @synthesize outgoingIntegrityKey=_outgoingIntegrityKey;
@property (strong) NEIKEv2ESPSPI *rekeyedRemoteSPI; // @synthesize rekeyedRemoteSPI=_rekeyedRemoteSPI;
@property (strong) NEIKEv2ESPSPI *rekeyedSPI; // @synthesize rekeyedSPI=_rekeyedSPI;
@property (strong) NSData *remoteNonce; // @synthesize remoteNonce=_remoteNonce;
@property (strong) NSArray *remoteTrafficSelectors; // @synthesize remoteTrafficSelectors=_remoteTrafficSelectors;
@property (strong) NSData *responderNonce;
@property (strong) NEIKEv2ChildSAProposal *responderRekeyProposal; // @synthesize responderRekeyProposal=_responderRekeyProposal;
@property (strong) NSMutableData *responderSendEncryptionKey;
@property (strong) NSMutableData *responderSendIntegrityKey;
@property (strong) NSArray *responderTrafficSelectors;
@property BOOL sequencePerTrafficClassSupported; // @synthesize sequencePerTrafficClassSupported=_sequencePerTrafficClassSupported;
@property BOOL shouldSendStateUpdate; // @synthesize shouldSendStateUpdate=_shouldSendStateUpdate;
@property unsigned long long state; // @synthesize state=_state;

+ (unsigned short)nextDatabaseReqID;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (unsigned char (*)[32])dhCurveKeyForDesc:(int)arg1;
- (struct ccec_full_ctx *)dhECPKeyForDesc:(int)arg1;
- (BOOL)generateAllValues;
- (BOOL)generateLocalDHValues;
- (BOOL)generateLocalNonce;
- (BOOL)generateLocalValues;
- (id)initWithConfiguration:(id)arg1 childID:(unsigned int)arg2 isFirstChild:(BOOL)arg3 ikeSA:(id)arg4;
- (void)reset;
- (void)resetIKESA:(id)arg1;
- (void)sentStateUpdate;
- (void)setState:(unsigned long long)arg1 error:(id)arg2;
- (BOOL)shouldGenerateNewDHKeys;

@end

