//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAPAccessoryServerBTLE.h>

#import <CoreHAP/CBPeripheralDelegate-Protocol.h>
#import <CoreHAP/HAPSecuritySessionDelegate-Protocol.h>

@class CBCharacteristic, CBService, HAPSecuritySession, NSMapTable, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_source;

@interface _HAPAccessoryServerBTLE100 : HAPAccessoryServerBTLE <HAPSecuritySessionDelegate, CBPeripheralDelegate>
{
    struct PairingSessionPrivate *_pairingSession;
    BOOL _startPairingRequested;
    BOOL _pairingFeaturesRead;
    BOOL _securitySessionOpening;
    BOOL _disconnecting;
    BOOL _unpairedIdentifyRequested;
    BOOL _removeOnDisconnect;
    unsigned long long _state;
    unsigned long long _connectionRetryCount;
    NSMapTable *_btleServiceToHAPServiceMap;
    unsigned long long _characteristicDiscoveryRequestCount;
    unsigned long long _characteristicValueReadCount;
    unsigned long long _metadataDiscoveryRequestCount;
    unsigned long long _metadataValueReadCount;
    unsigned long long _availableInstanceID;
    NSMapTable *_btleCharacteristicToHAPCharacteristicMap;
    NSMapTable *_hapCharacteristicReadCompletionQueues;
    NSMapTable *_hapCharacteristicWriteCompletionQueues;
    NSMapTable *_hapCharacteristicEnableEventCompletionQueues;
    NSMutableArray *_addRemovePairingOperationsQueue;
    CBService *_pairingService;
    CBCharacteristic *_pairSetupCharacteristic;
    CBCharacteristic *_pairVerifyCharacteristic;
    CBCharacteristic *_pairingFeaturesCharacteristic;
    CBCharacteristic *_pairingsCharacteristic;
    CBService *_accessoryInfoService;
    CBCharacteristic *_identifyCharacteristic;
    CBCharacteristic *_modelCharacteristic;
    CBCharacteristic *_serialNumberCharacteristic;
    CBCharacteristic *_manufacturerCharacteristic;
    NSString *_controllerUsername;
    CDUnknownBlockType _pairVerifyCompletionBlock;
    unsigned long long _pairingFeatureFlags;
    HAPSecuritySession *_securitySession;
    NSObject<OS_dispatch_source> *_connectionLifetimeTimer;
    double _idleConnectionTimeoutInSec;
    CDUnknownBlockType _unpairedIdentifyCompletionBlock;
}

@property (strong, nonatomic) CBService *accessoryInfoService; // @synthesize accessoryInfoService=_accessoryInfoService;
@property (strong, nonatomic) NSMutableArray *addRemovePairingOperationsQueue; // @synthesize addRemovePairingOperationsQueue=_addRemovePairingOperationsQueue;
@property (nonatomic) unsigned long long availableInstanceID; // @synthesize availableInstanceID=_availableInstanceID;
@property (strong, nonatomic) NSMapTable *btleCharacteristicToHAPCharacteristicMap; // @synthesize btleCharacteristicToHAPCharacteristicMap=_btleCharacteristicToHAPCharacteristicMap;
@property (strong, nonatomic) NSMapTable *btleServiceToHAPServiceMap; // @synthesize btleServiceToHAPServiceMap=_btleServiceToHAPServiceMap;
@property (nonatomic) unsigned long long characteristicDiscoveryRequestCount; // @synthesize characteristicDiscoveryRequestCount=_characteristicDiscoveryRequestCount;
@property (nonatomic) unsigned long long characteristicValueReadCount; // @synthesize characteristicValueReadCount=_characteristicValueReadCount;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *connectionLifetimeTimer; // @synthesize connectionLifetimeTimer=_connectionLifetimeTimer;
@property (nonatomic) unsigned long long connectionRetryCount; // @synthesize connectionRetryCount=_connectionRetryCount;
@property (strong, nonatomic) NSString *controllerUsername; // @synthesize controllerUsername=_controllerUsername;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisconnecting) BOOL disconnecting; // @synthesize disconnecting=_disconnecting;
@property (strong, nonatomic) NSMapTable *hapCharacteristicEnableEventCompletionQueues; // @synthesize hapCharacteristicEnableEventCompletionQueues=_hapCharacteristicEnableEventCompletionQueues;
@property (strong, nonatomic) NSMapTable *hapCharacteristicReadCompletionQueues; // @synthesize hapCharacteristicReadCompletionQueues=_hapCharacteristicReadCompletionQueues;
@property (strong, nonatomic) NSMapTable *hapCharacteristicWriteCompletionQueues; // @synthesize hapCharacteristicWriteCompletionQueues=_hapCharacteristicWriteCompletionQueues;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) CBCharacteristic *identifyCharacteristic; // @synthesize identifyCharacteristic=_identifyCharacteristic;
@property (nonatomic) double idleConnectionTimeoutInSec; // @synthesize idleConnectionTimeoutInSec=_idleConnectionTimeoutInSec;
@property (strong, nonatomic) CBCharacteristic *manufacturerCharacteristic; // @synthesize manufacturerCharacteristic=_manufacturerCharacteristic;
@property (nonatomic) unsigned long long metadataDiscoveryRequestCount; // @synthesize metadataDiscoveryRequestCount=_metadataDiscoveryRequestCount;
@property (nonatomic) unsigned long long metadataValueReadCount; // @synthesize metadataValueReadCount=_metadataValueReadCount;
@property (strong, nonatomic) CBCharacteristic *modelCharacteristic; // @synthesize modelCharacteristic=_modelCharacteristic;
@property (strong, nonatomic) CBCharacteristic *pairSetupCharacteristic; // @synthesize pairSetupCharacteristic=_pairSetupCharacteristic;
@property (strong, nonatomic) CBCharacteristic *pairVerifyCharacteristic; // @synthesize pairVerifyCharacteristic=_pairVerifyCharacteristic;
@property (copy, nonatomic) CDUnknownBlockType pairVerifyCompletionBlock; // @synthesize pairVerifyCompletionBlock=_pairVerifyCompletionBlock;
@property (nonatomic) unsigned long long pairingFeatureFlags; // @synthesize pairingFeatureFlags=_pairingFeatureFlags;
@property (strong, nonatomic) CBCharacteristic *pairingFeaturesCharacteristic; // @synthesize pairingFeaturesCharacteristic=_pairingFeaturesCharacteristic;
@property (nonatomic) BOOL pairingFeaturesRead; // @synthesize pairingFeaturesRead=_pairingFeaturesRead;
@property (strong, nonatomic) CBService *pairingService; // @synthesize pairingService=_pairingService;
@property (strong, nonatomic) CBCharacteristic *pairingsCharacteristic; // @synthesize pairingsCharacteristic=_pairingsCharacteristic;
@property (nonatomic) BOOL removeOnDisconnect; // @synthesize removeOnDisconnect=_removeOnDisconnect;
@property (strong, nonatomic) HAPSecuritySession *securitySession; // @synthesize securitySession=_securitySession;
@property (nonatomic, getter=isSecuritySessionOpening) BOOL securitySessionOpening; // @synthesize securitySessionOpening=_securitySessionOpening;
@property (strong, nonatomic) CBCharacteristic *serialNumberCharacteristic; // @synthesize serialNumberCharacteristic=_serialNumberCharacteristic;
@property (nonatomic) BOOL startPairingRequested; // @synthesize startPairingRequested=_startPairingRequested;
@property (nonatomic) unsigned long long state; // @synthesize state=_state;
@property (readonly) Class superclass;
@property (copy, nonatomic) CDUnknownBlockType unpairedIdentifyCompletionBlock; // @synthesize unpairedIdentifyCompletionBlock=_unpairedIdentifyCompletionBlock;
@property (nonatomic) BOOL unpairedIdentifyRequested; // @synthesize unpairedIdentifyRequested=_unpairedIdentifyRequested;

+ (id)_convertFromBTLEToHAPUUID:(id)arg1;
+ (id)deserializeCharacteristicReadData:(id)arg1 characteristicFormat:(unsigned long long)arg2 supportsAdditonalAuthentication:(BOOL)arg3 error:(id *)arg4;
+ (id)serializeCharacteristicWriteValue:(id)arg1 characteristicFormat:(unsigned long long)arg2 supportsAdditonalAuthentication:(BOOL)arg3 authenticationData:(id)arg4 error:(id *)arg5;
- (void).cxx_destruct;
- (void)_addPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(BOOL)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_btleCharacteristicForHAPCharacteristic:(id)arg1;
- (void)_cancelConnectionLifetimeTimer;
- (void)_checkForAuthPrompt;
- (void)_createPrimaryAccessoryFromAdvertisementData;
- (id)_decryptData:(id)arg1 error:(id *)arg2;
- (BOOL)_delegateRespondsToSelector:(SEL)arg1;
- (void)_dequeueAndContinueOperation;
- (id)_dequeueEnableEventCompletionTupleForCharacteristic:(id)arg1;
- (id)_dequeueReadCompletionTupleForCharacteristic:(id)arg1;
- (CDUnknownBlockType)_dequeueWriteCompletionHandlerForCharacteristic:(id)arg1;
- (void)_enableEvent:(BOOL)arg1 forCharacteristic:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (void)_enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (id)_encryptDataAndGenerateAuthTag:(id)arg1 error:(id *)arg2;
- (void)_enqueueEnableEventCompletionHandler:(CDUnknownBlockType)arg1 queue:(id)arg2 forCharacteristic:(id)arg3;
- (void)_enqueueOperation:(long long)arg1 identifier:(id)arg2 publicKey:(id)arg3 admin:(BOOL)arg4 queue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_enqueueReadCompletionHandler:(CDUnknownBlockType)arg1 queue:(id)arg2 forCharacteristic:(id)arg3;
- (void)_enqueueWriteCompletionHandler:(CDUnknownBlockType)arg1 forCharacteristic:(id)arg2;
- (int)_ensurePairingSessionIsInitializedWithType:(unsigned int)arg1;
- (void)_establishSecureSession;
- (void)_getAttributeDatabase;
- (void)_handleConnectionLifetimeTimeout;
- (void)_handleConnectionWithError:(id)arg1;
- (void)_handleDescriptorDiscovery;
- (void)_handleDisconnectionWithQueue:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_handleHAPCharacteristicDiscoveryForService:(id)arg1 error:(id)arg2;
- (void)_handleHAPNotificationStateUpdateForCharacteristic:(id)arg1 error:(id)arg2;
- (void)_handleHAPServiceDiscovery;
- (void)_handleHAPServiceDiscoveryCompletionForService:(id)arg1 withInstanceId:(id)arg2;
- (void)_handleHAPWriteConfirmationForCharacteristic:(id)arg1 error:(id)arg2;
- (int)_handlePairSetupExchangeWithData:(id)arg1;
- (void)_handlePairingStateMachine;
- (void)_handlePairingsReadForCharacteristic:(id)arg1 readError:(id)arg2 removing:(BOOL)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_handlePairingsWriteForCharacteristic:(id)arg1 writeError:(id)arg2 removing:(BOOL)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_handleReadDescriptorValues;
- (void)_handleReceivedSecuritySessionSetupExchangeData:(id)arg1;
- (void)_handleSuccessfulBTLEConnection;
- (void)_handleUpdatedValueForBTLECharacteristic:(id)arg1 error:(id)arg2;
- (id)_hapCharacteristicForBTLECharacteristic:(id)arg1;
- (id)_nextInstanceID;
- (void)_notifyDelegateOfReceivedEncryptedAuthenticatedData:(id)arg1 forCharacteristic:(id)arg2;
- (void)_notifyDelegateOfReceivedPlaintextData:(id)arg1 forCharacteristic:(id)arg2;
- (void)_notifyDelegateOfSentEncryptedAuthenticatedData:(id)arg1 forCharacteristic:(id)arg2;
- (void)_notifyDelegateOfSentPlaintextData:(id)arg1 forCharacteristic:(id)arg2;
- (id)_pairSetupHAPCharacteristic;
- (int)_pairSetupStart;
- (int)_pairSetupTryPassword:(id)arg1;
- (id)_pairVerifyHAPCharacteristic;
- (BOOL)_parseBTLECharacteristicDescriptor:(id)arg1 existingDescriptors:(id)arg2 characteristics:(id)arg3;
- (id)_parseBTLEService:(id)arg1 withInstanceId:(id)arg2;
- (void)_readCharacteristicValues:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_readValueForCharacteristic:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_reallyEstablishSecureSession;
- (void)_removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_resetState;
- (void)_setupBTLEConnectionToPeripheral;
- (BOOL)_shouldEnableSessionSecurity;
- (void)_updateConnectionLifetimeTimer;
- (void)_writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4 queue:(id)arg5;
- (BOOL)addPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(BOOL)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)continuePairingAfterAuthPrompt;
- (void)dealloc;
- (void)discoverAccessories;
- (void)enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (id)getLocalPairingIdentityAndAllowCreation:(BOOL)arg1 error:(id *)arg2;
- (void)handleConnectionWithPeripheral:(id)arg1 withError:(id)arg2;
- (void)handleDisconnectionWithError:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)hapBLEProtocolVersion;
- (void)identifyWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithPeripheral:(id)arg1 name:(id)arg2 pairingUsername:(id)arg3 statusFlags:(id)arg4 stateNumber:(id)arg5 stateChanged:(BOOL)arg6 configNumber:(id)arg7 category:(id)arg8 connectionIdleTime:(unsigned char)arg9 browser:(id)arg10 keyStore:(id)arg11;
- (void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverDescriptorsForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheral:(id)arg1 didModifyServices:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForDescriptor:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)readValueForCharacteristic:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)securitySession:(id)arg1 didCloseWithError:(id)arg2;
- (id)securitySession:(id)arg1 didReceiveLocalPairingIdentityRequestWithError:(id *)arg2;
- (id)securitySession:(id)arg1 didReceiveRequestForPeerPairingIdentityWithIdentifier:(id)arg2 error:(id *)arg3;
- (void)securitySession:(id)arg1 didReceiveSetupExchangeData:(id)arg2;
- (void)securitySessionDidOpen:(id)arg1;
- (void)securitySessionIsOpening:(id)arg1;
- (void)startPairing;
- (BOOL)stopPairingWithError:(id *)arg1;
- (BOOL)tryPairingPassword:(id)arg1 error:(id *)arg2;
- (void)updateConnectionIdleTime:(unsigned char)arg1;
- (void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

