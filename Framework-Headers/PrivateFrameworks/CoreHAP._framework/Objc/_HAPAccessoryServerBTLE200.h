//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAPAccessoryServerBTLE.h>

#import <CoreHAP/CBPeripheralDelegate-Protocol.h>
#import <CoreHAP/HAPAuthSessionDelegate-Protocol.h>
#import <CoreHAP/HAPBTLEControlOutputStreamDelegate-Protocol.h>
#import <CoreHAP/HAPPairSetupSessionClientDelegate-Protocol.h>
#import <CoreHAP/HAPSecuritySessionDelegate-Protocol.h>
#import <CoreHAP/HMFLogging-Protocol.h>
#import <CoreHAP/HMFTimerDelegate-Protocol.h>

@class HAPAccessoryProtocolInfo, HAPAuthSession, HAPBLEAccessoryCache, HAPCharacteristic, HAPPairSetupSession, HAPSecuritySession, HMFTimer, NSMapTable, NSMutableArray, NSOperationQueue, NSString, _HAPBTLEDiscoveryContext;

@interface _HAPAccessoryServerBTLE200 : HAPAccessoryServerBTLE <CBPeripheralDelegate, HAPBTLEControlOutputStreamDelegate, HAPPairSetupSessionClientDelegate, HAPSecuritySessionDelegate, HMFTimerDelegate, HAPAuthSessionDelegate, HMFLogging>
{
    BOOL _hasValidCache;
    BOOL _verified;
    BOOL _badPairSetupCode;
    BOOL _pairing;
    BOOL _authenticated;
    unsigned char _featureFlags;
    HAPSecuritySession *_securitySession;
    HAPBLEAccessoryCache *_accessoryCache;
    long long _connectionState;
    CDUnknownBlockType _connectionCompletionHandler;
    HMFTimer *_connectionIdleTimer;
    _HAPBTLEDiscoveryContext *_discoveryContext;
    HAPCharacteristic *_identifyCharacteristic;
    HAPPairSetupSession *_pairSetupSession;
    double _pairSetupBackoffTimeInterval;
    CDUnknownBlockType _setupCodeCompletionHandler;
    HAPAuthSession *_authSession;
    HAPAccessoryProtocolInfo *_authenticatedProtocolInfo;
    HAPCharacteristic *_pairingFeaturesCharacteristic;
    HAPCharacteristic *_pairSetupCharacteristic;
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

@property (strong) HAPBLEAccessoryCache *accessoryCache; // @synthesize accessoryCache=_accessoryCache;
@property (strong, nonatomic) HAPAuthSession *authSession; // @synthesize authSession=_authSession;
@property (nonatomic) BOOL authenticated; // @synthesize authenticated=_authenticated;
@property (strong, nonatomic) HAPAccessoryProtocolInfo *authenticatedProtocolInfo; // @synthesize authenticatedProtocolInfo=_authenticatedProtocolInfo;
@property (nonatomic, getter=isBadSetupCode) BOOL badPairSetupCode; // @synthesize badPairSetupCode=_badPairSetupCode;
@property (readonly, nonatomic) NSMapTable *characteristicEnableEventCompletionHandlers; // @synthesize characteristicEnableEventCompletionHandlers=_characteristicEnableEventCompletionHandlers;
@property (readonly, nonatomic) NSMapTable *characteristicWriteCompletionHandlers; // @synthesize characteristicWriteCompletionHandlers=_characteristicWriteCompletionHandlers;
@property (readonly, nonatomic) NSOperationQueue *clientOperationQueue; // @synthesize clientOperationQueue=_clientOperationQueue;
@property (copy, nonatomic) CDUnknownBlockType connectionCompletionHandler; // @synthesize connectionCompletionHandler=_connectionCompletionHandler;
@property (strong, nonatomic) HMFTimer *connectionIdleTimer; // @synthesize connectionIdleTimer=_connectionIdleTimer;
@property (nonatomic) long long connectionState; // @synthesize connectionState=_connectionState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) _HAPBTLEDiscoveryContext *discoveryContext; // @synthesize discoveryContext=_discoveryContext;
@property (nonatomic) unsigned char featureFlags; // @synthesize featureFlags=_featureFlags;
@property BOOL hasValidCache; // @synthesize hasValidCache=_hasValidCache;
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
@property (copy, nonatomic) CDUnknownBlockType setupCodeCompletionHandler; // @synthesize setupCodeCompletionHandler=_setupCodeCompletionHandler;
@property (readonly) Class superclass;
@property (nonatomic, getter=isVerified) BOOL verified; // @synthesize verified=_verified;

+ (id)configurationRequestForCharacteristic:(id)arg1 isBroadcasted:(BOOL)arg2 interval:(unsigned long long)arg3 error:(id *)arg4;
+ (id)configurationRequestForService:(id)arg1 configRequestType:(unsigned char)arg2 error:(id *)arg3;
+ (id)executeWriteRequestForCharacteristic:(id)arg1 options:(long long)arg2 error:(id *)arg3;
+ (BOOL)isHAPDescriptor:(id)arg1;
+ (BOOL)isHAPService:(id)arg1;
+ (id)logCategory;
+ (BOOL)parseCharacteristicConfigurationResponse:(id)arg1 error:(id *)arg2;
+ (BOOL)parseProtocolConfigurationResponse:(id)arg1 key:(id *)arg2 stateNumber:(id *)arg3 error:(id *)arg4;
+ (BOOL)parseReadResponse:(id)arg1 value:(id *)arg2 error:(id *)arg3;
+ (id)parseServiceSignatureResponse:(id)arg1 serviceInstanceID:(id)arg2 serviceType:(id)arg3 error:(id *)arg4;
+ (id)parseSignatureResponse:(id)arg1 error:(id *)arg2;
+ (BOOL)parseWriteResponse:(id)arg1 value:(id *)arg2 error:(id *)arg3;
+ (id)prepareWriteRequestForCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 error:(id *)arg5;
+ (id)readRequestForCharacteristic:(id)arg1 options:(long long)arg2 error:(id *)arg3;
+ (id)signatureRequestForCharacteristic:(id)arg1 requiresAuthentication:(BOOL)arg2 error:(id *)arg3;
+ (id)signatureRequestForService:(id)arg1 characteristic:(id)arg2 requiresAuthentication:(BOOL)arg3 error:(id *)arg4;
+ (id)writeRequestForCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 error:(id *)arg5;
- (void).cxx_destruct;
- (void)_cacheServices:(id)arg1;
- (void)_cancelAllQueuedOperationsWithError:(id)arg1;
- (void)_cancelConnectionWithError:(id)arg1;
- (BOOL)_cancelDiscoveryWithError:(id)arg1;
- (id)_characteristicForCBCharacteristic:(id)arg1;
- (void)_checkForAuthPrompt:(BOOL)arg1;
- (void)_configureBroadcastKeyGeneration:(unsigned char)arg1 service:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_configureCharacteristics:(id)arg1 queue:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_continuePairingAfterMFiCertValidation;
- (void)_createPrimaryAccessoryFromAdvertisementData;
- (id)_decryptData:(id)arg1 error:(id *)arg2;
- (BOOL)_delegateRespondsToSelector:(SEL)arg1;
- (void)_discoverCharacteristic:(id)arg1;
- (void)_discoverCharacteristicsForService:(id)arg1;
- (void)_discoverServices;
- (void)_discoverWithType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_enableBroadcastEvent:(BOOL)arg1 interval:(unsigned long long)arg2 forCharacteristic:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_enableEvent:(BOOL)arg1 forCharacteristic:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (void)_enableEvent:(BOOL)arg1 toCharacteristic:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (id)_encryptDataAndGenerateAuthTag:(id)arg1 error:(id *)arg2;
- (void)_enqueueRequest:(id)arg1;
- (void)_establishSecureSession;
- (void)_generateBroadcastKey:(unsigned char)arg1 queue:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)_getCBCharacteristic:(id)arg1 instanceId:(id)arg2 service:(id)arg3;
- (id)_getCBService:(id)arg1 instanceOrder:(unsigned long long)arg2;
- (id)_getCachedService:(id)arg1;
- (id)_getCharacteristicInstanceID:(id)arg1 error:(id *)arg2;
- (unsigned long long)_getPairSetupType;
- (void)_getPairingFeaturesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_getProtocolInfoService;
- (id)_getServiceInstanceID:(id)arg1;
- (void)_handleCompletedDiscovery;
- (void)_handleConnectionIdleTimeout;
- (void)_handleConnectionWithError:(id)arg1;
- (void)_handleDiscoveredCharacteristicsForService:(id)arg1 error:(id)arg2;
- (void)_handleDiscoveredCharactersitic:(id)arg1 error:(id)arg2;
- (void)_handleDiscoveredDescriptors:(id)arg1;
- (void)_handleDiscoveredServices:(id)arg1 error:(id)arg2;
- (void)_handleEventIndicationForCharacteristic:(id)arg1;
- (void)_handleHAPNotificationStateUpdateForCharacteristic:(id)arg1 error:(id)arg2;
- (void)_handlePairSetupSessionExchangeData:(id)arg1;
- (void)_handlePairingSetupCodeRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_handleReadCharacteristicSignature:(id)arg1 error:(id)arg2;
- (void)_handleReadCharacteristicValue:(id)arg1 error:(id)arg2;
- (void)_handleReadDescriptorValue:(id)arg1 error:(id)arg2;
- (void)_handleReadServiceInstanceId:(id)arg1;
- (void)_handleReadServiceSignature:(id)arg1 error:(id)arg2;
- (void)_handleResponseData:(id)arg1 fromCharacteristic:(id)arg2 error:(id)arg3;
- (void)_handleSecuritySessionSetupExchangeData:(id)arg1;
- (void)_handleWriteCompletionForCharacteristic:(id)arg1 error:(id)arg2;
- (id)_hapServicesFromCache;
- (void)_kickConnectionIdleTimer;
- (unsigned long long)_maximumControlWriteLengthForRequest:(id)arg1;
- (void)_notifyDelegateOfReceivedEncryptedAuthenticatedData:(id)arg1 forCharacteristic:(id)arg2;
- (void)_notifyDelegateOfReceivedPlaintextData:(id)arg1 forCharacteristic:(id)arg2;
- (void)_notifyDelegateOfSentEncryptedAuthenticatedData:(id)arg1 forCharacteristic:(id)arg2;
- (void)_notifyDelegateOfSentPlaintextData:(id)arg1 forCharacteristic:(id)arg2;
- (unsigned long long)_outstandingRequests;
- (void)_pairingCompletedWithError:(id)arg1;
- (id)_parseCharacteristic:(id)arg1 error:(id *)arg2;
- (BOOL)_parsePairingFeaturesCharacteristic:(id)arg1 authMethod:(unsigned long long *)arg2 error:(id *)arg3;
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
- (void)_readServiceSignature:(id)arg1;
- (void)_readValueForCharacteristic:(id)arg1 options:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_reallySendRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_requestResponseForRequest:(id)arg1;
- (void)_resetWithError:(id)arg1;
- (void)_restartConnectionIdleTimer:(double)arg1;
- (void)_resumeAllOperations;
- (void)_resumeConnectionIdleTimer;
- (void)_retryDiscovery;
- (void)_sendControlPacket:(id)arg1 forRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_sendData:(id)arg1 toCharacteristic:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_sendPairingRequestData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_sendProtocolInfoServiceExchangeData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_sendRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_serviceCacheFromHAPService:(id)arg1 serviceOrder:(unsigned long long)arg2;
- (id)_serviceForCBService:(id)arg1;
- (void)_suspendAllOperations;
- (void)_suspendConnectionIdleTimer;
- (void)_updateConnectionIdleTime:(unsigned char)arg1;
- (BOOL)_validateProtocolInfo:(id)arg1;
- (void)_writeValue:(id)arg1 toCharacteristic:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)addPairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authSession:(id)arg1 authComplete:(id)arg2;
- (void)authSession:(id)arg1 authenticateUUID:(id)arg2 token:(id)arg3;
- (void)authSession:(id)arg1 confirmUUID:(id)arg2 token:(id)arg3;
- (void)authSession:(id)arg1 sendAuthExchangeData:(id)arg2;
- (void)authSession:(id)arg1 validateUUID:(id)arg2 token:(id)arg3;
- (void)authenticateAccessory;
- (void)configureCharacteristics:(id)arg1 queue:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)connectWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)continueAuthAfterValidation:(BOOL)arg1;
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
- (void)generateBroadcastKey:(unsigned char)arg1 queue:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)getAccessoryInfo:(CDUnknownBlockType)arg1;
- (id)getLocalPairingIdentityWithError:(id *)arg1;
- (void)handleConnectionWithPeripheral:(id)arg1 withError:(id)arg2;
- (void)handleDisconnectionWithError:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)hapBLEProtocolVersion;
- (void)identifyWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithPeripheral:(id)arg1 name:(id)arg2 pairingUsername:(id)arg3 statusFlags:(id)arg4 stateNumber:(id)arg5 stateChanged:(BOOL)arg6 connectReason:(unsigned char)arg7 configNumber:(id)arg8 category:(id)arg9 setupHash:(id)arg10 connectionIdleTime:(unsigned char)arg11 browser:(id)arg12 keyStore:(id)arg13;
- (BOOL)isBLELinkConnected;
- (BOOL)isHAPCharacteristic:(id)arg1;
- (BOOL)isSecuritySessionOpen;
- (void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)markNotifyingCharacteristicUpdatedforCharacteristic:(id)arg1;
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
- (id)protocolInfoServiceSignatureCharacteristics;
- (void)provisionToken:(id)arg1;
- (void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)removePairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)securitySession:(id)arg1 didCloseWithError:(id)arg2;
- (id)securitySession:(id)arg1 didReceiveLocalPairingIdentityRequestWithError:(id *)arg2;
- (id)securitySession:(id)arg1 didReceiveRequestForPeerPairingIdentityWithIdentifier:(id)arg2 error:(id *)arg3;
- (void)securitySession:(id)arg1 didReceiveSetupExchangeData:(id)arg2;
- (void)securitySessionDidOpen:(id)arg1;
- (void)securitySessionIsOpening:(id)arg1;
- (void)setSecuritySessionOpen:(BOOL)arg1;
- (id)shortDescription;
- (BOOL)shouldVerifyHAPCharacteristic:(id)arg1;
- (BOOL)shouldVerifyHAPService:(id)arg1;
- (void)startPairingWithConsentRequired:(BOOL)arg1;
- (BOOL)stopPairingWithError:(id *)arg1;
- (void)tearDownSessionOnAuthCompletion;
- (void)timerDidFire:(id)arg1;
- (BOOL)tryPairingPassword:(id)arg1 error:(id *)arg2;
- (void)updateConnectionIdleTime:(unsigned char)arg1;
- (void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

