//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/CBCentralManagerDelegate-Protocol.h>
#import <PassKitCore/PKContinuityPaymentCoordinatorDelegate-Protocol.h>

@class CBCentralManager, NSMutableArray, NSString, PKContinuityPaymentCoordinator, PKContinuityPaymentService, PKInAppPaymentSession, PKPaymentAuthorizationClientCallbackStateParam, PKPaymentAuthorizationDataModel, PKPaymentService, PKPaymentWebService, PKPeerPaymentSession;
@protocol OS_dispatch_group, OS_dispatch_source, PKAggregateDictionaryProtocol, PKPaymentAuthorizationStateMachineDelegate;

@interface PKPaymentAuthorizationStateMachine : NSObject <PKContinuityPaymentCoordinatorDelegate, CBCentralManagerDelegate>
{
    BOOL _hasReceivedRemoteDeviceUpdate;
    BOOL _awaitingClientCallbackReply;
    BOOL _awaitingWebServiceResponse;
    BOOL _detectedBluetoothOn;
    CBCentralManager *_bluetoothCentralManager;
    PKPaymentService *_paymentService;
    PKPaymentWebService *_paymentWebService;
    PKPaymentAuthorizationDataModel *_model;
    id<PKAggregateDictionaryProtocol> _aggregateDictionary;
    PKInAppPaymentSession *_inAppPaymentSession;
    PKPeerPaymentSession *_peerPaymentSession;
    PKContinuityPaymentService *_continuityPaymentService;
    double _updatePaymentDeviceTimeout;
    id<PKPaymentAuthorizationStateMachineDelegate> _delegate;
    unsigned long long _state;
    PKContinuityPaymentCoordinator *_continuityPaymentCoordinator;
    NSMutableArray *_callbackQueue;
    unsigned long long _hostApplicationState;
    NSObject<OS_dispatch_source> *_clientCallbackTimer;
    PKPaymentAuthorizationClientCallbackStateParam *_mostRecentClientCallback;
    NSString *_instanceIdentifier;
    unsigned long long _prepareTransactionDetailsCounter;
    NSObject<OS_dispatch_group> *_delayAuthorizedStateGroup;
}

@property (strong, nonatomic) id<PKAggregateDictionaryProtocol> aggregateDictionary; // @synthesize aggregateDictionary=_aggregateDictionary;
@property (nonatomic) BOOL awaitingClientCallbackReply; // @synthesize awaitingClientCallbackReply=_awaitingClientCallbackReply;
@property (nonatomic) BOOL awaitingWebServiceResponse; // @synthesize awaitingWebServiceResponse=_awaitingWebServiceResponse;
@property (strong, nonatomic) CBCentralManager *bluetoothCentralManager; // @synthesize bluetoothCentralManager=_bluetoothCentralManager;
@property (strong, nonatomic) NSMutableArray *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *clientCallbackTimer; // @synthesize clientCallbackTimer=_clientCallbackTimer;
@property (strong, nonatomic) PKContinuityPaymentCoordinator *continuityPaymentCoordinator; // @synthesize continuityPaymentCoordinator=_continuityPaymentCoordinator;
@property (strong, nonatomic) PKContinuityPaymentService *continuityPaymentService; // @synthesize continuityPaymentService=_continuityPaymentService;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) NSObject<OS_dispatch_group> *delayAuthorizedStateGroup; // @synthesize delayAuthorizedStateGroup=_delayAuthorizedStateGroup;
@property (weak, nonatomic) id<PKPaymentAuthorizationStateMachineDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL detectedBluetoothOn; // @synthesize detectedBluetoothOn=_detectedBluetoothOn;
@property (nonatomic) BOOL hasReceivedRemoteDeviceUpdate; // @synthesize hasReceivedRemoteDeviceUpdate=_hasReceivedRemoteDeviceUpdate;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long hostApplicationState; // @synthesize hostApplicationState=_hostApplicationState;
@property (strong, nonatomic) PKInAppPaymentSession *inAppPaymentSession; // @synthesize inAppPaymentSession=_inAppPaymentSession;
@property (strong, nonatomic) NSString *instanceIdentifier; // @synthesize instanceIdentifier=_instanceIdentifier;
@property (strong, nonatomic) PKPaymentAuthorizationDataModel *model; // @synthesize model=_model;
@property (strong, nonatomic) PKPaymentAuthorizationClientCallbackStateParam *mostRecentClientCallback; // @synthesize mostRecentClientCallback=_mostRecentClientCallback;
@property (strong, nonatomic) PKPaymentService *paymentService; // @synthesize paymentService=_paymentService;
@property (strong, nonatomic) PKPaymentWebService *paymentWebService; // @synthesize paymentWebService=_paymentWebService;
@property (strong, nonatomic) PKPeerPaymentSession *peerPaymentSession; // @synthesize peerPaymentSession=_peerPaymentSession;
@property (nonatomic) unsigned long long prepareTransactionDetailsCounter; // @synthesize prepareTransactionDetailsCounter=_prepareTransactionDetailsCounter;
@property (nonatomic, setter=_setState:) unsigned long long state; // @synthesize state=_state;
@property (readonly) Class superclass;
@property (nonatomic) double updatePaymentDeviceTimeout; // @synthesize updatePaymentDeviceTimeout=_updatePaymentDeviceTimeout;
@property (readonly, nonatomic) BOOL useSecureElement;

- (void).cxx_destruct;
- (void)__setState:(unsigned long long)arg1 param:(id)arg2;
- (void)_advanceToNextState;
- (void)_applyBillingInformationToAuthorizedQuote:(id)arg1;
- (void)_applyBillingInformationToPayment:(id)arg1;
- (void)_applyShippingInformationToPayment:(id)arg1;
- (void)_applyShippingMethodToPayment:(id)arg1;
- (void)_applyWebServiceConfigurationIfNeeded;
- (id)_billingInformationFromPaymentRequest:(id)arg1;
- (void)_cancelClientCallbackTimer;
- (void)_clientCallbackTimedOut;
- (id)_createNewRemotePaymentRequest;
- (id)_dequeuePendingCallbackParam;
- (void)_deviceUpdateDidTimeout;
- (void)_dispatchNextCallbackParam;
- (void)_enqeueDidAuthorizePurchaseWithParam:(id)arg1;
- (void)_enqueueCallbackOfKind:(long long)arg1 withObject:(id)arg2;
- (void)_enqueueDidAuthorizeDisbursementWithVoucher:(id)arg1;
- (void)_enqueueDidAuthorizePaymentWithByPassPayment:(id)arg1;
- (void)_enqueueDidAuthorizePaymentWithPayment:(id)arg1;
- (void)_enqueueDidAuthorizePaymentWithRemotePayment:(id)arg1;
- (void)_enqueueDidAuthorizePaymentWithToken:(id)arg1;
- (void)_enqueueDidAuthorizePeerPaymentQuoteWithAuthorizedQuote:(id)arg1;
- (void)_enqueueDidRequestMerchantSession;
- (void)_enqueueDidSelectPaymentMethodWithQuote:(id)arg1;
- (void)_enqueueDidSelectPaymentPass:(id)arg1;
- (void)_enqueueDidSelectPaymentPass:(id)arg1 paymentApplication:(id)arg2;
- (void)_enqueueDidSelectRemotePaymentInstrument:(id)arg1;
- (void)_enqueueDidSelectRemotePaymentInstrument:(id)arg1 paymentApplication:(id)arg2;
- (void)_enqueueDidSelectShippingContact:(id)arg1;
- (void)_enqueueInitialCallbacks;
- (void)_handleStateMachineWillStartNotification:(id)arg1;
- (id)_pendingTransactionOnAlternateFundingSourceForAutorizedPeerPaymentQuote:(id)arg1;
- (id)_pendingTransactionOnPeerPaymentPassForAuthorizedPeerPaymentQuote:(id)arg1;
- (void)_performAuthorizationWithParam:(id)arg1;
- (void)_performCancelRemotePaymentRequest;
- (void)_performDidAuthorizeCallbackWithParam:(id)arg1;
- (void)_performNonceRequestWithParam:(id)arg1;
- (void)_performPrepareTransactionDetailsRequestWithParam:(id)arg1;
- (void)_performRewrapRequestWithParam:(id)arg1;
- (void)_performSendClientUpdateWithShippingMethods:(id)arg1 paymentSummaryItems:(id)arg2 paymentApplication:(id)arg3 status:(long long)arg4;
- (void)_performSendPaymentResult:(id)arg1;
- (void)_performSendRemotePaymentRequest;
- (void)_performUpdatePaymentDevices;
- (void)_postStateMachineWillStartNotification;
- (void)_processBluetoothState:(long long)arg1;
- (void)_processErrorsForDataType:(long long)arg1;
- (void)_registerForNotifications;
- (void)_removeWebServiceConfigurationIfNeeded;
- (void)_sendDidTransitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 withParam:(id)arg3;
- (void)_setState:(unsigned long long)arg1 param:(id)arg2;
- (void)_simulatePayment;
- (void)_start;
- (void)_startClientCallbackTimer;
- (void)_startHandoff;
- (void)_startPayment;
- (void)_startRemoteDeviceUpdate;
- (id)_transactionWithPaymentToken:(id)arg1;
- (id)_transactionWithPurchase:(id)arg1 paymentHash:(id)arg2;
- (void)_unregisterForNotifications;
- (void)_updateModelWithShippingMethods:(id)arg1 paymentSummaryItems:(id)arg2;
- (void)beginDelayingAuthorizedState;
- (BOOL)canSelectPaymentOptions;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)continuityPaymentCoordinator:(id)arg1 didReceivePayment:(id)arg2;
- (void)continuityPaymentCoordinator:(id)arg1 didReceiveUpdatedPaymentDevices:(id)arg2;
- (void)continuityPaymentCoordinator:(id)arg1 didTimeoutTotalWithPaymentDevices:(id)arg2;
- (void)continuityPaymentCoordinatorDidReceiveCancellation:(id)arg1;
- (void)continuityPaymentCoordinatorDidTimeoutUpdatePaymentDevices:(id)arg1;
- (void)dealloc;
- (void)delayAuthorizedStateByDuration:(double)arg1;
- (void)didAuthenticateWithAuthenticatorEvaluationResponse:(id)arg1;
- (void)didAuthenticateWithCredential:(id)arg1;
- (void)didBecomeActive:(BOOL)arg1;
- (void)didBecomeOccluded:(BOOL)arg1;
- (void)didCancel;
- (void)didEncounterError:(id)arg1;
- (void)didEncounterFatalError:(id)arg1;
- (void)didReceiveMerchantSessionCompleteWithSession:(id)arg1 error:(id)arg2;
- (void)didReceivePaymentAuthorizationResult:(id)arg1;
- (void)didReceivePaymentAuthorizationStatus:(long long)arg1;
- (void)didReceivePaymentMethodCompleteWithSummaryItems:(id)arg1;
- (void)didReceivePaymentMethodCompleteWithUpdate:(id)arg1;
- (void)didReceiveShippingContactCompleteWithStatus:(long long)arg1 shippingMethods:(id)arg2 paymentSummaryItems:(id)arg3;
- (void)didReceiveShippingContactCompleteWithUpdate:(id)arg1;
- (void)didReceiveShippingMethodCompleteWithStatus:(long long)arg1 paymentSummaryItems:(id)arg2;
- (void)didReceiveShippingMethodCompleteWithUpdate:(id)arg1;
- (void)didRequestMerchantSession;
- (void)didResignActive:(BOOL)arg1;
- (void)didResolveError;
- (void)didSelectBillingAddress:(id)arg1;
- (void)didSelectPaymentPass:(id)arg1;
- (void)didSelectPaymentPass:(id)arg1 paymentApplication:(id)arg2;
- (void)didSelectRemotePaymentInstrument:(id)arg1;
- (void)didSelectRemotePaymentInstrument:(id)arg1 paymentApplication:(id)arg2;
- (void)didSelectShippingContact:(id)arg1;
- (void)didSelectShippingEmail:(id)arg1;
- (void)didSelectShippingMethod:(id)arg1;
- (void)didSelectShippingName:(id)arg1;
- (void)didSelectShippingPhoneNumber:(id)arg1;
- (void)endDelayingAuthorizedState;
- (BOOL)hasPendingCallbacks;
- (id)init;
- (void)start;

@end

