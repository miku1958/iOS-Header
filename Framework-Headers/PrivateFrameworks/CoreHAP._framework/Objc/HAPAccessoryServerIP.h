//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAPAccessoryServer.h>

#import <CoreHAP/HAPAuthSessionDelegate-Protocol.h>
#import <CoreHAP/HAPHTTPClientDebugDelegate-Protocol.h>
#import <CoreHAP/HAPHTTPClientDelegate-Protocol.h>
#import <CoreHAP/HMFNetMonitorDelegate-Protocol.h>
#import <CoreHAP/HMFTimerDelegate-Protocol.h>

@class HAPAccessory, HAPAccessoryProtocolInfo, HAPAccessoryServerBrowserIP, HAPAuthSession, HAPHTTPClient, HAPWACClient, HMFBlockOperation, HMFNetMonitor, HMFTimer, NSArray, NSData, NSDictionary, NSMutableArray, NSOperationQueue, NSString;

@interface HAPAccessoryServerIP : HAPAccessoryServer <HAPHTTPClientDelegate, HAPHTTPClientDebugDelegate, HMFTimerDelegate, HAPAuthSessionDelegate, HMFNetMonitorDelegate>
{
    struct PairingSessionPrivate *_pairingSession;
    unsigned long long _featureFlags;
    BOOL _wacComplete;
    BOOL _wacLegacy;
    BOOL _wacSoftToken;
    BOOL _preSoftAuthWacStarted;
    BOOL _postSoftAuthWacStarted;
    BOOL _authenticated;
    BOOL _establishingSecureConnection;
    BOOL _hasTunnelService;
    BOOL _econnresetRetryInProgress;
    BOOL _continuingLegacyWACpairing;
    BOOL _wacStarted;
    BOOL _hasStartedPairing;
    BOOL _networkReachable;
    BOOL _tokenRequestPending;
    BOOL _tokenValidationPending;
    NSString *_model;
    NSString *_sourceVersion;
    unsigned long long _statusFlags;
    NSData *_token;
    NSDictionary *_bonjourDeviceInfo;
    HAPAccessoryServerBrowserIP *_browser;
    NSArray *_ipServices;
    NSMutableArray *_queuedOperations;
    HAPAccessory *_primaryAccessoryForServer;
    HAPHTTPClient *_httpClient;
    HAPAuthSession *_authSession;
    HAPAccessoryProtocolInfo *_authenticatedProtocolInfo;
    CDUnknownBlockType _pairVerifyCompletionBlock;
    NSString *_controllerUsername;
    CDUnknownBlockType _netServiceResolveCompletionBlock;
    HMFBlockOperation *_pairOperation;
    NSOperationQueue *_clientOperationQueue;
    NSDictionary *_wacDeviceInfo;
    HAPWACClient *_pairUsingWAC;
    HMFTimer *_bonjourEventTimer;
    HMFNetMonitor *_networkMonitor;
}

@property (readonly, nonatomic) HAPAuthSession *authSession; // @synthesize authSession=_authSession;
@property (nonatomic) BOOL authenticated; // @synthesize authenticated=_authenticated;
@property (strong, nonatomic) HAPAccessoryProtocolInfo *authenticatedProtocolInfo; // @synthesize authenticatedProtocolInfo=_authenticatedProtocolInfo;
@property (strong, nonatomic) NSDictionary *bonjourDeviceInfo; // @synthesize bonjourDeviceInfo=_bonjourDeviceInfo;
@property (strong, nonatomic) HMFTimer *bonjourEventTimer; // @synthesize bonjourEventTimer=_bonjourEventTimer;
@property (weak, nonatomic) HAPAccessoryServerBrowserIP *browser; // @synthesize browser=_browser;
@property (readonly, nonatomic) NSOperationQueue *clientOperationQueue; // @synthesize clientOperationQueue=_clientOperationQueue;
@property (nonatomic, getter=isContinuingLegacyWACpairing) BOOL continuingLegacyWACpairing; // @synthesize continuingLegacyWACpairing=_continuingLegacyWACpairing;
@property (strong, nonatomic) NSString *controllerUsername; // @synthesize controllerUsername=_controllerUsername;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL econnresetRetryInProgress; // @synthesize econnresetRetryInProgress=_econnresetRetryInProgress;
@property BOOL establishingSecureConnection; // @synthesize establishingSecureConnection=_establishingSecureConnection;
@property (nonatomic) BOOL hasStartedPairing; // @synthesize hasStartedPairing=_hasStartedPairing;
@property (nonatomic) BOOL hasTunnelService; // @synthesize hasTunnelService=_hasTunnelService;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HAPHTTPClient *httpClient; // @synthesize httpClient=_httpClient;
@property (strong, nonatomic) NSArray *ipServices; // @synthesize ipServices=_ipServices;
@property (copy, nonatomic) NSString *model; // @synthesize model=_model;
@property (copy, nonatomic) CDUnknownBlockType netServiceResolveCompletionBlock; // @synthesize netServiceResolveCompletionBlock=_netServiceResolveCompletionBlock;
@property (readonly, nonatomic) HMFNetMonitor *networkMonitor; // @synthesize networkMonitor=_networkMonitor;
@property (nonatomic, getter=isNetworkReachable) BOOL networkReachable; // @synthesize networkReachable=_networkReachable;
@property (strong, nonatomic) HMFBlockOperation *pairOperation; // @synthesize pairOperation=_pairOperation;
@property (strong, nonatomic) HAPWACClient *pairUsingWAC; // @synthesize pairUsingWAC=_pairUsingWAC;
@property (copy, nonatomic) CDUnknownBlockType pairVerifyCompletionBlock; // @synthesize pairVerifyCompletionBlock=_pairVerifyCompletionBlock;
@property (nonatomic, getter=isPostSoftAuthWacStarted) BOOL postSoftAuthWacStarted; // @synthesize postSoftAuthWacStarted=_postSoftAuthWacStarted;
@property (nonatomic, getter=isPreSoftAuthWacStarted) BOOL preSoftAuthWacStarted; // @synthesize preSoftAuthWacStarted=_preSoftAuthWacStarted;
@property (strong, nonatomic) HAPAccessory *primaryAccessoryForServer; // @synthesize primaryAccessoryForServer=_primaryAccessoryForServer;
@property (strong, nonatomic) NSMutableArray *queuedOperations; // @synthesize queuedOperations=_queuedOperations;
@property (copy, nonatomic) NSString *sourceVersion; // @synthesize sourceVersion=_sourceVersion;
@property (nonatomic) unsigned long long statusFlags; // @synthesize statusFlags=_statusFlags;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSData *token; // @synthesize token=_token;
@property (nonatomic, getter=isTokenRequestPending) BOOL tokenRequestPending; // @synthesize tokenRequestPending=_tokenRequestPending;
@property (nonatomic, getter=isTokenValidationPending) BOOL tokenValidationPending; // @synthesize tokenValidationPending=_tokenValidationPending;
@property (readonly, nonatomic, getter=isWacAccessory) BOOL wacAccessory;
@property (nonatomic, getter=isWacComplete) BOOL wacComplete; // @synthesize wacComplete=_wacComplete;
@property (readonly, copy, nonatomic) NSDictionary *wacDeviceInfo; // @synthesize wacDeviceInfo=_wacDeviceInfo;
@property (nonatomic, getter=isWacLegacy) BOOL wacLegacy; // @synthesize wacLegacy=_wacLegacy;
@property (nonatomic, getter=isWacSoftToken) BOOL wacSoftToken; // @synthesize wacSoftToken=_wacSoftToken;
@property (nonatomic, getter=isWacStarted) BOOL wacStarted; // @synthesize wacStarted=_wacStarted;

+ (id)sharedPairOperationQueue;
- (void).cxx_destruct;
- (void)__registerForInternalCharacteristicNotifications;
- (int)_continuePairingAfterAuthPrompt;
- (void)_continuePairingAfterConfirmingSecureWAC;
- (void)_continuePairingAfterConfirmingSoftAuthWAC;
- (void)_continuePairingAfterWAC:(id)arg1;
- (void)_continuePairingUsingWAC;
- (int)_continuePairingWithSetupCode:(id)arg1;
- (BOOL)_delegateRespondsToSelector:(SEL)arg1;
- (void)_enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (int)_ensureHTTPClientSetUp;
- (int)_ensurePairingSessionIsInitializedWithType:(unsigned int)arg1;
- (void)_error:(id)arg1 forReadCharacteristicValues:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_error:(id)arg1 forWriteCharacteristicValues:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_establishSecureConnectionAndFetchAttributeDatabase;
- (void)_establishSecureSession;
- (void)_getAttributeDatabase;
- (void)_handleEventResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 error:(id)arg4 characteristics:(id)arg5 requestedEventState:(BOOL)arg6 completion:(CDUnknownBlockType)arg7 queue:(id)arg8;
- (void)_handleHTTPClientErrors;
- (void)_handleListPairingsResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 httpError:(id)arg4 completionQueue:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (int)_handlePairSetupCompletionWithData:(id)arg1;
- (int)_handlePairVerifyCompletionWithData:(id)arg1;
- (void)_handlePairingsResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 httpError:(id)arg4 removeRequest:(BOOL)arg5 completionQueue:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)_handlePrepareWriteResponseObject:(id)arg1 type:(unsigned long long)arg2 prepareIdentifier:(id)arg3 httpStatus:(int)arg4 error:(id)arg5 requestTuples:(id)arg6 timeout:(double)arg7 queue:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (void)_handleReadResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 error:(id)arg4 characteristics:(id)arg5 queue:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_handleUpdatesForCharacteristics:(id)arg1 stateNumber:(id)arg2;
- (void)_handleWriteResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 error:(id)arg4 requestTuples:(id)arg5 queue:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (BOOL)_hasBonjourDeviceInfo;
- (void)_insertReadCharacteristicValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_insertWriteCharacteristicValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)_invalidateWAC;
- (void)_invokePairVerifyCompletionBlock:(id)arg1;
- (void)_isAccessoryPublicKeyPresent:(BOOL *)arg1 registeredWithHomeKit:(BOOL *)arg2;
- (BOOL)_isSessionEstablished;
- (void)_listPairingsWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_mergeExistingAccessory:(id)arg1 withNewAccessory:(id)arg2;
- (BOOL)_mergeExistingService:(id)arg1 withNewService:(id)arg2;
- (void)_notifyDelegatesOfAddAccessoryFailure;
- (void)_notifyDelegatesPairingStopped:(id)arg1;
- (void)_pairSetupContinueWAC;
- (void)_pairSetupStartWAC;
- (int)_pairSetupStartWithConsentRequired:(BOOL)arg1;
- (int)_pairSetupTryPassword:(id)arg1;
- (void)_pairVerifyContinueWAC;
- (int)_pairVerifyStart;
- (void)_pairVerifyStartWAC;
- (BOOL)_parseAndValidateTXTRecord;
- (void)_parseAttributeDatabase:(id)arg1 transaction:(id)arg2;
- (BOOL)_parseTXTRecordDictionary:(id)arg1;
- (void)_performExecuteWriteValues:(id)arg1 prepareIdentifier:(id)arg2 timeout:(double)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_performTimedWriteValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_performWriteValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)_processEvent:(id)arg1 matchedCharacteristic:(id *)arg2;
- (void)_processQueuedOperationsWithError:(id)arg1;
- (void)_queueAddPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(BOOL)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_queueEnableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (void)_queueListPairingWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_queueReadCharacteristicValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_queueWriteCharacteristicValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (CDUnknownBlockType)_queuedReadOperationBlock:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (CDUnknownBlockType)_queuedWriteOperationBlock:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_readCharacteristicValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_requestResource:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_reset;
- (void)_startAddPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(BOOL)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_tearDownSession;
- (void)_tearDownWAC;
- (BOOL)_updateAccessories:(id)arg1;
- (void)_updateProtocolVersionFromPrimaryAccessory:(id)arg1;
- (void)_updateWithBonjourDeviceInfo:(id)arg1;
- (BOOL)_validateProtocolInfo:(id)arg1;
- (void)_writeCharacteristicValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)addPairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authSession:(id)arg1 authComplete:(id)arg2;
- (void)authSession:(id)arg1 authenticateUUID:(id)arg2 token:(id)arg3;
- (void)authSession:(id)arg1 confirmUUID:(id)arg2 token:(id)arg3;
- (void)authSession:(id)arg1 sendAuthExchangeData:(id)arg2;
- (void)authSession:(id)arg1 validateUUID:(id)arg2 token:(id)arg3;
- (void)authenticateAccessory;
- (void)continueAuthAfterValidation:(BOOL)arg1;
- (void)continuePairingAfterAuthPrompt;
- (void)continuePairingUsingWAC;
- (void)dealloc;
- (void)discoverAccessories;
- (void)enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (void)getAccessoryInfo:(CDUnknownBlockType)arg1;
- (void)handleUpdatesForCharacteristics:(id)arg1 stateNumber:(id)arg2;
- (BOOL)hasBonjourDeviceInfo;
- (void)httpClient:(id)arg1 didReceiveEvent:(id)arg2;
- (void)httpClient:(id)arg1 didReceiveHTTPMessageWithHeaders:(id)arg2 body:(id)arg3;
- (void)httpClient:(id)arg1 willSendHTTPMessageWithHeaders:(id)arg2 body:(id)arg3;
- (void)httpClientDidCloseConnectionDueToServer:(id)arg1;
- (void)identifyWithCompletion:(CDUnknownBlockType)arg1;
- (id)initCommon:(id)arg1 browser:(id)arg2;
- (id)initWithBonjourDeviceInfo:(id)arg1 keyStore:(id)arg2 browser:(id)arg3;
- (id)initWithWACDeviceDictionary:(id)arg1 keyStore:(id)arg2 browser:(id)arg3;
- (void)invalidateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)invokePairVerifyCompletionBlock:(id)arg1;
- (BOOL)isSessionEstablised;
- (long long)linkType;
- (void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)networkMonitorIsReachable:(id)arg1;
- (void)networkMonitorIsUnreachable:(id)arg1;
- (void)pairSetupStartSoftAuthWAC;
- (id)primaryAccessory;
- (void)provisionToken:(id)arg1;
- (void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)reconfirm;
- (void)removePairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestResource:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)services;
- (void)startPairingWithConsentRequired:(BOOL)arg1;
- (void)startReprovisioning;
- (BOOL)stopPairingWithError:(id *)arg1;
- (void)tearDownSessionOnAuthCompletion;
- (void)timerDidFire:(id)arg1;
- (BOOL)tryPairingPassword:(id)arg1 error:(id *)arg2;
- (void)updateWithBonjourDeviceInfo:(id)arg1;
- (void)updateWithWACDevice:(id)arg1;
- (void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

