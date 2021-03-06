//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NEIKEv2AuthenticationProtocol, NEIKEv2ConfigurationMessage, NEIKEv2DHProtocol, NEIKEv2EAP, NEIKEv2IKESAConfiguration, NEIKEv2IKESAProposal, NEIKEv2IKESPI, NEIKEv2Identifier, NEIKEv2SessionConfiguration, NEIKEv2Transport, NSArray, NSData, NSError, NSMutableData, NSString, NWAddressEndpoint;
@protocol NEIKEv2ConfigurationDelegate, NEIKEv2PacketDelegate, NEIKEv2TransportDelegate, OS_dispatch_queue;

@interface NEIKEv2IKESA : NSObject
{
    CDUnion_07c5b791 _dhECKey;
    BOOL _shouldSendStateUpdate;
    BOOL _isInitiator;
    BOOL _fragmentationSupported;
    BOOL _mobikeSupported;
    BOOL _useNATTraversal;
    BOOL _useTCPEncapsulation;
    BOOL _detectedOutgoingNAT;
    BOOL _detectedIncomingNAT;
    BOOL _isRekeying;
    BOOL _eapInProgress;
    BOOL _peerAuthenticated;
    BOOL _reportShortDPD;
    BOOL _usesPacketDelegate;
    unsigned short _shortDPDCounter;
    NEIKEv2IKESPI *_localSPI;
    NEIKEv2IKESPI *_remoteSPI;
    unsigned long long _state;
    NSError *_error;
    NWAddressEndpoint *_localAddress;
    NWAddressEndpoint *_remoteAddress;
    NEIKEv2IKESAConfiguration *_configuration;
    NEIKEv2SessionConfiguration *_sessionConfiguration;
    NEIKEv2IKESAProposal *_chosenProposal;
    double _lastReceivedDPD;
    NSData *_localNonce;
    NSData *_remoteNonce;
    NSMutableData *_dhPublicKey;
    NSData *_dhRemotePublicKey;
    struct OpaqueSecDHContext *_dhContext;
    unsigned long long _dhPublicKeySize;
    NEIKEv2DHProtocol *_remotePreferredDHProtocol;
    NSMutableData *_sKeySeed;
    NSMutableData *_skD;
    NSMutableData *_skAi;
    NSMutableData *_skAr;
    NSMutableData *_skEi;
    NSMutableData *_skEr;
    NSMutableData *_skPi;
    NSMutableData *_skPr;
    NSMutableData *_encryptCryptoCtx;
    NSMutableData *_localCertificateIdentity;
    NSMutableData *_digitalSignatureLocalPrivateKey;
    NSMutableData *_digitalSignatureLocalPublicKey;
    NSMutableData *_digitalSignatureRemotePublicKey;
    NSData *_cookie;
    NSData *_responderCookie2;
    NSData *_initiatorCookie2;
    NSData *_signHashData;
    NSString *_outgoingInterfaceName;
    NSData *_localFirstMessage;
    NSData *_remoteFirstMessage;
    NEIKEv2Identifier *_localIdentifierFromPacket;
    NEIKEv2Identifier *_remoteIdentifierFromPacket;
    unsigned long long _childSAModeFromPacket;
    NSArray *_childSAProposalsFromPacket;
    NEIKEv2AuthenticationProtocol *_authProtocolFromPacket;
    NSData *_authenticationDataFromPacket;
    NEIKEv2ConfigurationMessage *_configMessageFromPacket;
    NSArray *_initiatorTrafficSelectorsFromPacket;
    NSArray *_responderTrafficSelectorsFromPacket;
    NEIKEv2EAP *_eapClient;
    NEIKEv2Transport *_transport;
    NEIKEv2Transport *_natTransport;
    NEIKEv2Transport *_tcpTransport;
    NEIKEv2ConfigurationMessage *_activeConfiguration;
    NSData *_receivedDestinationHash;
    NEIKEv2Identifier *_internalRemoteIdentifier;
    NSMutableData *_fetchedPassword;
    NSMutableData *_fetchedSharedSecret;
    NSObject<OS_dispatch_queue> *_queue;
    id<NEIKEv2TransportDelegate> _transportDelegate;
    CDUnknownBlockType _socketGetBlock;
    id<NEIKEv2PacketDelegate> _packetDelegate;
    id<NEIKEv2ConfigurationDelegate> _configurationDelegate;
    unsigned long long _ikeSessionUniqueIndex;
    unsigned long long _ikeSAUniqueIndex;
}

@property (strong) NEIKEv2ConfigurationMessage *activeConfiguration; // @synthesize activeConfiguration=_activeConfiguration;
@property (strong, nonatomic) NEIKEv2AuthenticationProtocol *authProtocolFromPacket; // @synthesize authProtocolFromPacket=_authProtocolFromPacket;
@property (strong, nonatomic) NSData *authenticationDataFromPacket; // @synthesize authenticationDataFromPacket=_authenticationDataFromPacket;
@property (readonly, nonatomic) NEIKEv2AuthenticationProtocol *authenticationProtocol;
@property (nonatomic) unsigned long long childSAModeFromPacket; // @synthesize childSAModeFromPacket=_childSAModeFromPacket;
@property (strong, nonatomic) NSArray *childSAProposalsFromPacket; // @synthesize childSAProposalsFromPacket=_childSAProposalsFromPacket;
@property (strong) NEIKEv2IKESAProposal *chosenProposal; // @synthesize chosenProposal=_chosenProposal;
@property (strong, nonatomic) NEIKEv2ConfigurationMessage *configMessageFromPacket; // @synthesize configMessageFromPacket=_configMessageFromPacket;
@property (strong) NEIKEv2IKESAConfiguration *configuration; // @synthesize configuration=_configuration;
@property (weak) id<NEIKEv2ConfigurationDelegate> configurationDelegate; // @synthesize configurationDelegate=_configurationDelegate;
@property (strong) NSData *cookie; // @synthesize cookie=_cookie;
@property (readonly) NSData *decryptionKey;
@property BOOL detectedIncomingNAT; // @synthesize detectedIncomingNAT=_detectedIncomingNAT;
@property BOOL detectedOutgoingNAT; // @synthesize detectedOutgoingNAT=_detectedOutgoingNAT;
@property struct OpaqueSecDHContext *dhContext; // @synthesize dhContext=_dhContext;
@property (strong) NSMutableData *dhPublicKey; // @synthesize dhPublicKey=_dhPublicKey;
@property unsigned long long dhPublicKeySize; // @synthesize dhPublicKeySize=_dhPublicKeySize;
@property (strong) NSData *dhRemotePublicKey; // @synthesize dhRemotePublicKey=_dhRemotePublicKey;
@property (strong) NSMutableData *digitalSignatureLocalPrivateKey; // @synthesize digitalSignatureLocalPrivateKey=_digitalSignatureLocalPrivateKey;
@property (strong) NSMutableData *digitalSignatureLocalPublicKey; // @synthesize digitalSignatureLocalPublicKey=_digitalSignatureLocalPublicKey;
@property (strong) NSMutableData *digitalSignatureRemotePublicKey; // @synthesize digitalSignatureRemotePublicKey=_digitalSignatureRemotePublicKey;
@property (strong) NEIKEv2EAP *eapClient; // @synthesize eapClient=_eapClient;
@property BOOL eapInProgress; // @synthesize eapInProgress=_eapInProgress;
@property (strong) NSMutableData *encryptCryptoCtx; // @synthesize encryptCryptoCtx=_encryptCryptoCtx;
@property (readonly) NSData *encryptionKey;
@property (strong) NSError *error; // @synthesize error=_error;
@property (strong) NSMutableData *fetchedPassword; // @synthesize fetchedPassword=_fetchedPassword;
@property (strong) NSMutableData *fetchedSharedSecret; // @synthesize fetchedSharedSecret=_fetchedSharedSecret;
@property BOOL fragmentationSupported; // @synthesize fragmentationSupported=_fragmentationSupported;
@property (readonly) BOOL hasTransport;
@property (nonatomic) unsigned long long ikeSAUniqueIndex; // @synthesize ikeSAUniqueIndex=_ikeSAUniqueIndex;
@property (nonatomic) unsigned long long ikeSessionUniqueIndex; // @synthesize ikeSessionUniqueIndex=_ikeSessionUniqueIndex;
@property (readonly) NWAddressEndpoint *initiatorAddress;
@property (strong) NSData *initiatorCookie2; // @synthesize initiatorCookie2=_initiatorCookie2;
@property (strong) NSData *initiatorFirstMessage;
@property (strong) NSData *initiatorNonce;
@property (strong) NEIKEv2IKESPI *initiatorSPI;
@property (strong, nonatomic) NSArray *initiatorTrafficSelectorsFromPacket; // @synthesize initiatorTrafficSelectorsFromPacket=_initiatorTrafficSelectorsFromPacket;
@property (strong) NEIKEv2Identifier *internalRemoteIdentifier; // @synthesize internalRemoteIdentifier=_internalRemoteIdentifier;
@property BOOL isInitiator; // @synthesize isInitiator=_isInitiator;
@property BOOL isRekeying; // @synthesize isRekeying=_isRekeying;
@property double lastReceivedDPD; // @synthesize lastReceivedDPD=_lastReceivedDPD;
@property (strong) NWAddressEndpoint *localAddress; // @synthesize localAddress=_localAddress;
@property (strong) NSMutableData *localCertificateIdentity; // @synthesize localCertificateIdentity=_localCertificateIdentity;
@property (strong) NSData *localFirstMessage; // @synthesize localFirstMessage=_localFirstMessage;
@property (readonly, nonatomic) NEIKEv2Identifier *localIdentifier;
@property (strong, nonatomic) NEIKEv2Identifier *localIdentifierFromPacket; // @synthesize localIdentifierFromPacket=_localIdentifierFromPacket;
@property (readonly) NSData *localIntegrityKey;
@property (strong) NSData *localNonce; // @synthesize localNonce=_localNonce;
@property (strong) NEIKEv2IKESPI *localSPI; // @synthesize localSPI=_localSPI;
@property BOOL mobikeSupported; // @synthesize mobikeSupported=_mobikeSupported;
@property (strong) NEIKEv2Transport *natTransport; // @synthesize natTransport=_natTransport;
@property (strong) NSString *outgoingInterfaceName; // @synthesize outgoingInterfaceName=_outgoingInterfaceName;
@property (weak) id<NEIKEv2PacketDelegate> packetDelegate; // @synthesize packetDelegate=_packetDelegate;
@property (readonly) NSMutableData *password;
@property BOOL peerAuthenticated; // @synthesize peerAuthenticated=_peerAuthenticated;
@property (readonly) NEIKEv2DHProtocol *preferredDHProtocol;
@property (strong) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong) NSData *receivedDestinationHash; // @synthesize receivedDestinationHash=_receivedDestinationHash;
@property (strong) NWAddressEndpoint *remoteAddress; // @synthesize remoteAddress=_remoteAddress;
@property (strong) NSData *remoteFirstMessage; // @synthesize remoteFirstMessage=_remoteFirstMessage;
@property (strong, nonatomic) NEIKEv2Identifier *remoteIdentifier;
@property (strong, nonatomic) NEIKEv2Identifier *remoteIdentifierFromPacket; // @synthesize remoteIdentifierFromPacket=_remoteIdentifierFromPacket;
@property (readonly) NSData *remoteIntegrityKey;
@property (strong) NSData *remoteNonce; // @synthesize remoteNonce=_remoteNonce;
@property (strong) NEIKEv2DHProtocol *remotePreferredDHProtocol; // @synthesize remotePreferredDHProtocol=_remotePreferredDHProtocol;
@property (strong) NEIKEv2IKESPI *remoteSPI; // @synthesize remoteSPI=_remoteSPI;
@property BOOL reportShortDPD; // @synthesize reportShortDPD=_reportShortDPD;
@property (readonly) NWAddressEndpoint *responderAddress;
@property (strong) NSData *responderCookie2; // @synthesize responderCookie2=_responderCookie2;
@property (strong) NSData *responderFirstMessage;
@property (strong) NSData *responderNonce;
@property (strong) NEIKEv2IKESPI *responderSPI;
@property (strong, nonatomic) NSArray *responderTrafficSelectorsFromPacket; // @synthesize responderTrafficSelectorsFromPacket=_responderTrafficSelectorsFromPacket;
@property (strong) NSMutableData *sKeySeed; // @synthesize sKeySeed=_sKeySeed;
@property (strong) NEIKEv2SessionConfiguration *sessionConfiguration; // @synthesize sessionConfiguration=_sessionConfiguration;
@property (readonly) NSMutableData *sharedSecret;
@property unsigned short shortDPDCounter; // @synthesize shortDPDCounter=_shortDPDCounter;
@property BOOL shouldSendStateUpdate; // @synthesize shouldSendStateUpdate=_shouldSendStateUpdate;
@property (strong) NSData *signHashData; // @synthesize signHashData=_signHashData;
@property (strong) NSMutableData *skAi; // @synthesize skAi=_skAi;
@property (strong) NSMutableData *skAr; // @synthesize skAr=_skAr;
@property (strong) NSMutableData *skD; // @synthesize skD=_skD;
@property (strong) NSMutableData *skEi; // @synthesize skEi=_skEi;
@property (strong) NSMutableData *skEr; // @synthesize skEr=_skEr;
@property (strong) NSMutableData *skPi; // @synthesize skPi=_skPi;
@property (strong) NSMutableData *skPr; // @synthesize skPr=_skPr;
@property (copy) CDUnknownBlockType socketGetBlock; // @synthesize socketGetBlock=_socketGetBlock;
@property unsigned long long state; // @synthesize state=_state;
@property (strong) NEIKEv2Transport *tcpTransport; // @synthesize tcpTransport=_tcpTransport;
@property (strong) NEIKEv2Transport *transport; // @synthesize transport=_transport;
@property (weak) id<NEIKEv2TransportDelegate> transportDelegate; // @synthesize transportDelegate=_transportDelegate;
@property BOOL useNATTraversal; // @synthesize useNATTraversal=_useNATTraversal;
@property BOOL useTCPEncapsulation; // @synthesize useTCPEncapsulation=_useTCPEncapsulation;
@property BOOL usesPacketDelegate; // @synthesize usesPacketDelegate=_usesPacketDelegate;

+ (BOOL)checkValidityOfDigitalSignature:(id)arg1 authenticationProtocol:(id)arg2 sessionConfiguration:(id)arg3 remoteSignedOctets:(id)arg4;
+ (BOOL)checkValidityOfDigitalSignature:(id)arg1 sessionConfiguration:(id)arg2 remoteSignedOctets:(id)arg3;
+ (id)copySharedSecretFromConfig:(id)arg1;
+ (id)createAuthenticationDataForSharedSecret:(id)arg1 octets:(id)arg2 prfProtocol:(id)arg3;
- (void).cxx_destruct;
- (void)assignRemoteSPI:(id)arg1;
- (void)assignRemoteSPI:(id)arg1 disableWildCard:(BOOL)arg2;
- (BOOL)calculateSKEYSEEDDerivatives;
- (BOOL)calculateSKEYSEEDForRekey:(id)arg1;
- (BOOL)checkNonCertAuthData:(id)arg1;
- (BOOL)checkValidityOfCertificates:(id)arg1 signature:(id)arg2;
- (BOOL)checkValidityOfDigitalSignature:(id)arg1;
- (id)copyCertSignedData:(id)arg1;
- (id)copyChildConfig;
- (id)copyDigitalSignatureSignedData:(id)arg1;
- (id)copyForRekey;
- (id)copyInitiatorIdentifier;
- (id)copyLocalCertificateData;
- (struct __SecIdentity *)copyLocalSecIdentity;
- (id)copyRemoteCertificateAuthorityArray;
- (id)copyRemoteCertificateAuthorityDataArray;
- (id)copyRemoteCertificateAuthorityHashData;
- (id)copyResponderIdentifier;
- (id)copySessionConfig;
- (id)copyTransport;
- (CDUnknownBlockType)copyValidateAuthBlock;
- (id)createAuthenticationDataForSharedSecret:(id)arg1 octets:(id)arg2;
- (id)createInitiatorAuthenticationData;
- (id)createInitiatorEAPAuthenticationData;
- (id)createInitiatorSignedOctets;
- (id)createLocalSPIForLocalAddress:(id)arg1 remoteAddress:(id)arg2;
- (id)createRemoteSignedOctets;
- (id)createResponderAuthenticationData;
- (id)createResponderEAPAuthenticationData;
- (id)createResponderSignedOctets;
- (void)dealloc;
- (id)description;
- (void)detachTransportWithShouldInvalidate:(BOOL)arg1;
- (unsigned char (*)[32])dhCurveKeyForDesc:(int)arg1;
- (struct ccec_full_ctx *)dhECPKeyForDesc:(int)arg1;
- (void)disableWildcard;
- (unsigned long long)dpdRetryIntervalMilliseconds;
- (BOOL)fetchLocalCertificateIdentity;
- (BOOL)generateAllValuesForRekey:(id)arg1;
- (BOOL)generateLocalDHValues;
- (BOOL)generateLocalNonce;
- (BOOL)generateLocalValues;
- (id)initIKESAWithConfiguration:(id)arg1 sessionConfiguration:(id)arg2 queue:(id)arg3 initialTransport:(id)arg4 transportDelegate:(id)arg5 socketGetBlock:(CDUnknownBlockType)arg6 packetDelegate:(id)arg7 configurationDelegate:(id)arg8 ikeSessionUniqueIndex:(unsigned long long)arg9;
- (void)reset;
- (BOOL)resetRemoteAddress:(id)arg1;
- (void)resetSessionConfiguration:(id)arg1;
- (void)resetShortDPDParameters;
- (void)resyncAddress;
- (void)sentStateUpdate;
- (void)setState:(unsigned long long)arg1 error:(id)arg2;
- (BOOL)shouldReceiveWildcard;
- (BOOL)shouldReportShortDPD;
- (BOOL)supportsSignHash:(unsigned long long)arg1;
- (BOOL)switchToNATTraversalPorts;
- (BOOL)switchToTCPEncapsulation;
- (void)updateConfiguration:(id)arg1;

@end

