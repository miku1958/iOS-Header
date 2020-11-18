//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPaymentWebServiceDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSMutableSet, NSSet, NSString, NSTimer, PKPaymentEligibilityResponse, PKPaymentPass, PKPaymentProvisioningResponse, PKPaymentRequirementsResponse, PKPaymentSetupProductModel, PKPaymentWebService;

@interface PKPaymentProvisioningController : NSObject <PKPaymentWebServiceDelegate>
{
    NSMutableSet *_tasks;
    NSTimer *_descriptionTimer;
    NSMutableArray *_associatedCredentials;
    BOOL _provisioningUserInterfaceIsVisible;
    BOOL _proxyTargetDeviceWebServiceInUse;
    NSString *_provisioningNonce;
    NSString *_productIdentifier;
    PKPaymentWebService *_webService;
    long long _state;
    NSString *_localizedProgressDescription;
    PKPaymentSetupProductModel *_paymentSetupProductModel;
    PKPaymentRequirementsResponse *_requirementsResponse;
    PKPaymentEligibilityResponse *_eligibilityResponse;
    PKPaymentProvisioningResponse *_provisioningResponse;
    PKPaymentPass *_provisionedPass;
    NSArray *_moreInfoItems;
    NSSet *_automaticExpressModes;
}

@property (readonly, copy, nonatomic) NSArray *associatedCredentials; // @synthesize associatedCredentials=_associatedCredentials;
@property (readonly, nonatomic) NSSet *automaticExpressModes; // @synthesize automaticExpressModes=_automaticExpressModes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKPaymentEligibilityResponse *eligibilityResponse; // @synthesize eligibilityResponse=_eligibilityResponse;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *localizedProgressDescription; // @synthesize localizedProgressDescription=_localizedProgressDescription;
@property (readonly, nonatomic) NSArray *moreInfoItems; // @synthesize moreInfoItems=_moreInfoItems;
@property (readonly, nonatomic) PKPaymentSetupProductModel *paymentSetupProductModel; // @synthesize paymentSetupProductModel=_paymentSetupProductModel;
@property (readonly, copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property (readonly, nonatomic) PKPaymentPass *provisionedPass; // @synthesize provisionedPass=_provisionedPass;
@property (readonly, nonatomic) PKPaymentProvisioningResponse *provisioningResponse; // @synthesize provisioningResponse=_provisioningResponse;
@property (readonly, nonatomic) PKPaymentRequirementsResponse *requirementsResponse; // @synthesize requirementsResponse=_requirementsResponse;
@property (nonatomic) long long state; // @synthesize state=_state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PKPaymentWebService *webService; // @synthesize webService=_webService;

- (void).cxx_destruct;
- (void)_addAssociatedCredential:(id)arg1;
- (void)_associateCredential:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (long long)_defaultResetState;
- (id)_displayableErrorOverrideForUnderlyingError:(id)arg1;
- (void)_downloadMoreInfoItemURLs:(id)arg1 withMetadata:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_filterPaymentSetupProducts:(id)arg1;
- (void)_handleProvisioningError:(id)arg1 forRequest:(id)arg2;
- (void)_passAlreadyProvisioned;
- (void)_provisioningNonceWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queryEligibilityForCredential:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queryRequirementsForCredential:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_registerWhileRetrievingRemoteCredentials:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_requestEligibility:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_requestProvisioning:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_requestRequirements:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_setLocalizedProgressDescription:(id)arg1;
- (void)_setState:(long long)arg1 notify:(BOOL)arg2;
- (void)_updateLocalizedProgressAndInvalidateTimer;
- (void)_validatePreconditionsWhileRetrievingRemoteCredentials:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)acceptTerms;
- (void)associateCredentials:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)displayableErrorForError:(id)arg1;
- (id)displayableErrorForProvisioningError:(id)arg1;
- (id)initWithWebService:(id)arg1;
- (void)noteProvisioningUserInterfaceDidAppear;
- (void)noteProvisioningUserInterfaceDidDisappear;
- (void)paymentWebService:(id)arg1 didCompleteTSMConnectionForTaskID:(unsigned long long)arg2;
- (void)paymentWebService:(id)arg1 didQueueTSMConnectionForTaskID:(unsigned long long)arg2;
- (BOOL)provisioningUserInterfaceIsVisible;
- (void)registerDevice:(CDUnknownBlockType)arg1;
- (void)removeProvisionedPass;
- (void)requestEligibility:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)requestProvisioning:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)requestRemoteCredentials:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)requestRequirements:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)reset;
- (void)resolveAmbiguousRequirementsWithProductIdentifier:(id)arg1;
- (void)resolveRequirementsUsingProduct:(id)arg1;
- (void)retrieveRemoteCredentials:(CDUnknownBlockType)arg1;
- (void)updatePaymentSetupProductModelWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)validatePreconditions:(CDUnknownBlockType)arg1;
- (void)validatePreconditionsAndRegister:(CDUnknownBlockType)arg1;
- (void)validatePreconditionsRegisterAndAssociateRemoteCredentials:(CDUnknownBlockType)arg1;

@end

