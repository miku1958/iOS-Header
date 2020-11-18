//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/IDSServiceDelegate-Protocol.h>
#import <NanoPassKit/PKPaymentWebServiceArchiver-Protocol.h>
#import <NanoPassKit/PKPaymentWebServiceTargetDeviceProtocol-Protocol.h>

@class IDSService, NSMutableDictionary, NSString;
@protocol NPKPaymentWebServiceTargetDeviceDelegate, OS_dispatch_queue;

@interface NPKPaymentWebServiceTargetDevice : NSObject <IDSServiceDelegate, PKPaymentWebServiceTargetDeviceProtocol, PKPaymentWebServiceArchiver>
{
    id<NPKPaymentWebServiceTargetDeviceDelegate> _delegate;
    unsigned long long _context;
    IDSService *_provisioningService;
    NSMutableDictionary *_outstandingRequests;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_responseQueue;
}

@property (nonatomic) unsigned long long context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NPKPaymentWebServiceTargetDeviceDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property (strong, nonatomic) NSMutableDictionary *outstandingRequests; // @synthesize outstandingRequests=_outstandingRequests;
@property (strong, nonatomic) IDSService *provisioningService; // @synthesize provisioningService=_provisioningService;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *responseQueue; // @synthesize responseQueue=_responseQueue;
@property (readonly) Class superclass;

+ (id)bridgedClientInfoHTTPHeader;
- (void).cxx_destruct;
- (id)_sendProtobuf:(id)arg1 responseExpected:(BOOL)arg2;
- (id)_sendProtobuf:(id)arg1 responseExpected:(BOOL)arg2 extraOptions:(id)arg3;
- (void)_setOrResetCleanupTimerForRequest:(id)arg1;
- (id)_supportedRegionsForWebService:(id)arg1;
- (void)archiveBackgroundContext:(id)arg1;
- (void)archiveContext:(id)arg1;
- (id)bridgedClientInfo;
- (void)configurationDataResponse:(id)arg1;
- (id)deviceDescriptionForPaymentWebService:(id)arg1;
- (id)deviceName;
- (id)deviceRegion;
- (void)didRegisterResponse:(id)arg1;
- (void)downloadAllPaymentPassesForPaymentWebService:(id)arg1;
- (void)dumpLogsResponse:(id)arg1;
- (void)dumpLogsWithCompletion:(CDUnknownBlockType)arg1;
- (void)handlePendingRemovalOfPassWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handlePreferredAID:(id)arg1 forPassWithUniqueID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleValueAddedServiceTransactions:(id)arg1;
- (id)init;
- (id)initWithContext:(unsigned long long)arg1 responseQueue:(id)arg2;
- (void)noteProvisioningInProgress:(BOOL)arg1;
- (int)paymentSupportedInCurrentRegionForWebService:(id)arg1;
- (void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)paymentWebService:(id)arg1 canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg2;
- (void)paymentWebService:(id)arg1 configurationDataWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)paymentWebService:(id)arg1 deleteApplicationWithAID:(id)arg2;
- (void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2;
- (id)paymentWebService:(id)arg1 filterVerificationChannels:(id)arg2;
- (BOOL)paymentWebService:(id)arg1 hasPassesOfType:(unsigned long long)arg2;
- (void)paymentWebService:(id)arg1 provisioningDataWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)paymentWebService:(id)arg1 queueConnectionToTrustedServiceManagerForPushTopic:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 registrationDataWithAuthToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 setNewAuthRandomIfNecessary:(CDUnknownBlockType)arg2;
- (void)paymentWebService:(id)arg1 signData:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 validateAddPreconditionsWithCompletion:(CDUnknownBlockType)arg2;
- (void)paymentWebServiceDidUpdateConfiguration:(id)arg1;
- (void)pendingRemovalResponse:(id)arg1;
- (void)preconditionNotMet:(id)arg1;
- (void)preferredAIDRequest:(id)arg1;
- (void)preferredAIDResponse:(id)arg1;
- (void)provisioningDataResponse:(id)arg1;
- (void)queueTSMConnectionResponse:(id)arg1;
- (void)registrationDataResponse:(id)arg1;
- (void)removeAIDsFromSecureElement:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)secureElementCardsWithCompletion:(CDUnknownBlockType)arg1;
- (void)secureElementGetAppletsResponse:(id)arg1;
- (void)secureElementRemoveAppletsResponse:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)setNewAuthRandomIfNecessaryAtBeginningOfProvisioningFlow:(CDUnknownBlockType)arg1;
- (void)setNewAuthRandomIfNecessaryResponse:(id)arg1;
- (void)signDataResponse:(id)arg1;
- (BOOL)supportsAutomaticPassPresentation;
- (void)updatePaymentPass:(id)arg1;
- (void)updatePushToken:(id)arg1;

@end

