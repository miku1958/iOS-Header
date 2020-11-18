//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAPAccessoryServerBTLE.h>

#import <CoreHAP/CBPeripheralDelegate-Protocol.h>
#import <CoreHAP/HAPBTLEControlOutputStreamDelegate-Protocol.h>
#import <CoreHAP/HAPPairSetupSessionClientDelegate-Protocol.h>
#import <CoreHAP/HAPSecuritySessionDelegate-Protocol.h>
#import <CoreHAP/HAPTimerDelegate-Protocol.h>

@class HAPCharacteristic, HAPPairSetupSession, HAPSecuritySession, HAPTimer, NSMapTable, NSMutableArray, NSOperationQueue, NSString, _HAPBTLEDiscoveryContext;

@interface _HAPAccessoryServerBTLE200 : HAPAccessoryServerBTLE <CBPeripheralDelegate, HAPBTLEControlOutputStreamDelegate, HAPPairSetupSessionClientDelegate, HAPSecuritySessionDelegate, HAPTimerDelegate>
{
    BOOL _verified;
    BOOL _badPairSetupCode;
    BOOL _pairing;
    BOOL _supportsMFiPairSetup;
    BOOL _securitySessionOpen;
    BOOL _securitySessionOpening;
    long long _connectionState;
    CDUnknownBlockType _connectionCompletionHandler;
    HAPTimer *_connectionIdleTimer;
    _HAPBTLEDiscoveryContext *_discoveryContext;
    HAPCharacteristic *_identifyCharacteristic;
    HAPPairSetupSession *_pairSetupSession;
    double _pairSetupBackoffTimeInterval;
    CDUnknownBlockType _setupCodeCompletionHandler;
    HAPCharacteristic *_pairingFeaturesCharacteristic;
    HAPCharacteristic *_pairSetupCharacteristic;
    HAPSecuritySession *_securitySession;
    HAPCharacteristic *_pairVerifyCharacteristic;
    NSOperationQueue *_pairVerifyOperationQueue;
    HAPCharacteristic *_pairingsCharacteristic;
    NSMutableArray *_pendingRequests;
    NSOperationQueue *_requestOperationQueue;
    NSMutableArray *_pendingResponses;
    NSOperationQueue *_clientOperationQueue;
    NSMapTable *_characteristicWriteCompletionHandlers;
    NSMapTable *_characteristicEnableEventCompletionHandlers;
}

@property (nonatomic, getter=isBadSetupCode) BOOL badPairSetupCode; // @synthesize badPairSetupCode=_badPairSetupCode;
@property (readonly, nonatomic) NSMapTable *characteristicEnableEventCompletionHandlers; // @synthesize characteristicEnableEventCompletionHandlers=_characteristicEnableEventCompletionHandlers;
@property (readonly, nonatomic) NSMapTable *characteristicWriteCompletionHandlers; // @synthesize characteristicWriteCompletionHandlers=_characteristicWriteCompletionHandlers;
@property (readonly, nonatomic) NSOperationQueue *clientOperationQueue; // @synthesize clientOperationQueue=_clientOperationQueue;
@property (copy, nonatomic) CDUnknownBlockType connectionCompletionHandler; // @synthesize connectionCompletionHandler=_connectionCompletionHandler;
@property (strong, nonatomic) HAPTimer *connectionIdleTimer; // @synthesize connectionIdleTimer=_connectionIdleTimer;
@property (nonatomic) long long connectionState; // @synthesize connectionState=_connectionState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) _HAPBTLEDiscoveryContext *discoveryContext; // @synthesize discoveryContext=_discoveryContext;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) HAPCharacteristic *identifyCharacteristic; // @synthesize identifyCharacteristic=_identifyCharacteristic;
@property (nonatomic) double pairSetupBackoffTimeInterval; // @synthesize pairSetupBackoffTimeInterval=_pairSetupBackoffTimeInterval;
@property (weak, nonatomic) HAPCharacteristic *pairSetupCharacteristic; // @synthesize pairSetupCharacteristic=_pairSetupCharacteristic;
@property (strong, nonatomic) HAPPairSetupSession *pairSetupSession; // @synthesize pairSetupSession=_pairSetupSession;
@property (weak, nonatomic) HAPCharacteristic *pairVerifyCharacteristic; // @synthesize pairVerifyCharacteristic=_pairVerifyCharacteristic;
@property (readonly, nonatomic) NSOperationQueue *pairVerifyOperationQueue; // @synthesize pairVerifyOperationQueue=_pairVerifyOperationQueue;
@property (nonatomic, getter=isPairing) BOOL pairing; // @synthesize pairing=_pairing;
@property (weak, nonatomic) HAPCharacteristic *pairingFeaturesCharacteristic; // @synthesize pairingFeaturesCharacteristic=_pairingFeaturesCharacteristic;
@property (weak, nonatomic) HAPCharacteristic *pairingsCharacteristic; // @synthesize pairingsCharacteristic=_pairingsCharacteristic;
@property (readonly, nonatomic) NSMutableArray *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property (readonly, nonatomic) NSMutableArray *pendingResponses; // @synthesize pendingResponses=_pendingResponses;
@property (readonly, nonatomic) NSOperationQueue *requestOperationQueue; // @synthesize requestOperationQueue=_requestOperationQueue;
@property (strong, nonatomic) HAPSecuritySession *securitySession; // @synthesize securitySession=_securitySession;
@property (nonatomic, getter=isSecuritySessionOpen) BOOL securitySessionOpen; // @synthesize securitySessionOpen=_securitySessionOpen;
@property (nonatomic, getter=isSecuritySessionOpening) BOOL securitySessionOpening; // @synthesize securitySessionOpening=_securitySessionOpening;
@property (copy, nonatomic) CDUnknownBlockType setupCodeCompletionHandler; // @synthesize setupCodeCompletionHandler=_setupCodeCompletionHandler;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsMFiPairSetup; // @synthesize supportsMFiPairSetup=_supportsMFiPairSetup;
@property (nonatomic, getter=isVerified) BOOL verified; // @synthesize verified=_verified;

+ (id)executeWriteRequestForCharacteristic:(id)arg1 options:(long long)arg2 error:(id *)arg3;
+ (BOOL)isHAPDescriptor:(id)arg1;
+ (BOOL)isHAPService:(id)arg1;
+ (BOOL)parseReadResponse:(id)arg1 value:(id *)arg2 error:(id *)arg3;
+ (id)parseSignatureResponse:(id)arg1 error:(id *)arg2;
+ (BOOL)parseWriteResponse:(id)arg1 value:(id *)arg2 error:(id *)arg3;
+ (id)prepareWriteRequestForCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 error:(id *)arg5;
+ (id)readRequestForCharacteristic:(id)arg1 options:(long long)arg2 error:(id *)arg3;
+ (id)signatureRequestForCharacteristic:(id)arg1 requiresAuthentication:(BOOL)arg2 error:(id *)arg3;
+ (id)writeRequestForCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 error:(id *)arg5;
- (void).cxx_destruct;
- (void)_cancelAllQueuedOperationsWithError:(id)arg1;
- (void)_cancelConnectionWithError:(id)arg1;
- (void)_cancelDiscoveryWithError:(id)arg1;
- (id)_characteristicForCBCharacteristic:(id)arg1;
- (void)_checkForAuthPrompt;
- (void)_createPrimaryAccessoryFromAdvertisementData;
- (id)_decryptData:(id)arg1 error:(id *)arg2;
- (BOOL)_delegateRespondsToSelector:(SEL)arg1;
- (void)_discoverCharacteristic:(id)arg1;
- (void)_discoverService:(id)arg1;
- (void)_discoverServices;
- (void)_discoverWithType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_enableEvent:(BOOL)arg1 forCharacteristic:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (void)_enableEvent:(BOOL)arg1 toCharacteristic:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (id)_encryptDataAndGenerateAuthTag:(id)arg1 error:(id *)arg2;
- (void)_enqueueRequest:(id)arg1;
- (void)_establishSecureSession;
- (id)_getCharacteristicInstanceID:(id)arg1 error:(id *)arg2;
- (void)_getPairingFeaturesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_getServiceInstanceID:(id)arg1;
- (void)_handleCompletedDiscovery;
- (void)_handleConnectionIdleTimeout;
- (void)_handleDiscoveredCharactersitic:(id)arg1 error:(id)arg2;
- (void)_handleDiscoveredService:(id)arg1 error:(id)arg2;
- (void)_handleDiscoveredServices:(id)arg1 error:(id)arg2;
- (void)_handleEventIndicationForCharacteristic:(id)arg1;
- (void)_handleHAPNotificationStateUpdateForCharacteristic:(id)arg1 error:(id)arg2;
- (void)_handlePairSetupSessionExchangeData:(id)arg1;
- (void)_handlePairingSetupCodeRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_handleReadCharacteristicSignature:(id)arg1 error:(id)arg2;
- (void)_handleReadCharacteristicValue:(id)arg1 error:(id)arg2;
- (void)_handleReadDescriptorValue:(id)arg1 error:(id)arg2;
- (void)_handleReadServiceInstanceId:(id)arg1;
- (void)_handleResponseData:(id)arg1 fromCharacteristic:(id)arg2 error:(id)arg3;
- (void)_handleSecuritySessionSetupExchangeData:(id)arg1;
- (void)_handleWriteCompletionForCharacteristic:(id)arg1 error:(id)arg2;
- (void)_kickConnectionIdleTimer;
- (unsigned long long)_maximumControlWriteLengthForRequest:(id)arg1;
- (void)_notifyDelegateOfReceivedEncryptedAuthenticatedData:(id)arg1 forCharacteristic:(id)arg2;
- (void)_notifyDelegateOfReceivedPlaintextData:(id)arg1 forCharacteristic:(id)arg2;
- (void)_notifyDelegateOfSentEncryptedAuthenticatedData:(id)arg1 forCharacteristic:(id)arg2;
- (void)_notifyDelegateOfSentPlaintextData:(id)arg1 forCharacteristic:(id)arg2;
- (unsigned long long)_outstandingRequests;
- (void)_pairingCompletedWithError:(id)arg1;
- (id)_parseCharacteristic:(id)arg1 error:(id *)arg2;
- (BOOL)_parsePairingFeaturesCharacteristic:(id)arg1 supportsMFiPairSetup:(BOOL *)arg2 error:(id *)arg3;
- (id)_parseService:(id)arg1 error:(id *)arg2;
- (id)_pendingRequestForCharacteristic:(id)arg1;
- (id)_pendingResponseForRequest:(id)arg1;
- (void)_performEnableEvent:(BOOL)arg1 toCharacteristic:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_performTimedWriteExecuteForCharacteristic:(id)arg1 value:(id)arg2 options:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_performTimedWritePrepareWithValue:(id)arg1 toCharacteristic:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_performTimedWriteValue:(id)arg1 toCharacteristic:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_performWriteValue:(id)arg1 toCharacteristic:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_readCharacteristicSignature:(id)arg1;
- (void)_readCharacteristicSignatures;
- (void)_readCharacteristicValue:(id)arg1;
- (void)_readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_readDescriptorValue:(id)arg1;
- (void)_readValueForCharacteristic:(id)arg1 options:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_reallySendRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_requestResponseForRequest:(id)arg1;
- (void)_resetWithError:(id)arg1;
- (void)_resumeAllOperations;
- (void)_resumeConnectionIdleTimer;
- (void)_retryDiscovery;
- (void)_sendControlPacket:(id)arg1 forRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_sendData:(id)arg1 toCharacteristic:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_sendPairingRequestData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_sendRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_serviceForCBService:(id)arg1;
- (void)_suspendAllOperations;
- (void)_suspendConnectionIdleTimer;
- (void)_writeValue:(id)arg1 toCharacteristic:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (BOOL)addPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(BOOL)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)connectWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)continuePairingAfterAuthPrompt;
- (void)controlOutputStream:(id)arg1 didCloseWithError:(id)arg2;
- (void)controlOutputStream:(id)arg1 didReceiveRequestToSendControlPacket:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)controlOutputStreamDidComplete:(id)arg1;
- (void)controlOutputStreamDidOpen:(id)arg1;
- (void)dealloc;
- (id)descriptionWithPointer:(BOOL)arg1;
- (void)disconnectWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)discoverAccessories;
- (void)enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (id)getLocalPairingIdentityAndAllowCreation:(BOOL)arg1 error:(id *)arg2;
- (void)handleConnectionWithError:(id)arg1;
- (void)handleDisconnectionWithError:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)hapBLEProtocolVersion;
- (void)identifyWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithPeripheral:(id)arg1 name:(id)arg2 pairingUsername:(id)arg3 statusFlags:(id)arg4 stateNumber:(id)arg5 category:(id)arg6 browser:(id)arg7 keyStore:(id)arg8;
- (BOOL)isHAPCharacteristic:(id)arg1;
- (void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)pairSetupSession:(id)arg1 didPairWithPeer:(id)arg2 error:(id *)arg3;
- (BOOL)pairSetupSession:(id)arg1 didReceiveBackoffRequestWithTimeInterval:(double)arg2;
- (id)pairSetupSession:(id)arg1 didReceiveLocalPairingIdentityRequestWithError:(id *)arg2;
- (void)pairSetupSession:(id)arg1 didReceiveSetupCodeRequestWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)pairSetupSession:(id)arg1 didReceiveSetupExchangeData:(id)arg2;
- (void)pairSetupSession:(id)arg1 didStopWithError:(id)arg2;
- (void)pairSetupSessionDidReceiveInvalidSetupCode:(id)arg1;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverDescriptorsForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheral:(id)arg1 didModifyServices:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForDescriptor:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)readValueForCharacteristic:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)securitySession:(id)arg1 didCloseWithError:(id)arg2;
- (id)securitySession:(id)arg1 didReceiveLocalPairingIdentityRequestWithError:(id *)arg2;
- (id)securitySession:(id)arg1 didReceiveRequestForPeerPairingIdentityWithIdentifier:(id)arg2 error:(id *)arg3;
- (void)securitySession:(id)arg1 didReceiveSetupExchangeData:(id)arg2;
- (void)securitySessionDidOpen:(id)arg1;
- (void)securitySessionIsOpening:(id)arg1;
- (id)shortDescription;
- (BOOL)shouldVerifyHAPCharacteristic:(id)arg1;
- (void)startPairing;
- (BOOL)stopPairingWithError:(id *)arg1;
- (void)timerDidFire:(id)arg1;
- (BOOL)tryPairingPassword:(id)arg1 error:(id *)arg2;
- (void)writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end

