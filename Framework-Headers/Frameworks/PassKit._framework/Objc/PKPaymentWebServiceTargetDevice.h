//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPaymentWebServiceTargetDeviceProtocol-Protocol.h>

@class NSString, PKAssertion, PKPassLibrary, PKPaymentService, PKSecureElement;

@interface PKPaymentWebServiceTargetDevice : NSObject <PKPaymentWebServiceTargetDeviceProtocol>
{
    PKPassLibrary *_passLibrary;
    PKPaymentService *_paymentService;
    PKSecureElement *_secureElement;
    PKAssertion *_provisioningAssertion;
    BOOL _provisioningAssertionActive;
    PKAssertion *_verificationAssertion;
    BOOL _verificationAssertionActive;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)localTargetDevice;
- (void).cxx_destruct;
- (void)_validateCommonPreconditionsWithCompletion:(CDUnknownBlockType)arg1;
- (id)appleAccountInformation;
- (id)bridgedClientInfo;
- (BOOL)claimSecureElementForCurrentUser;
- (void)claimSecureElementForCurrentUserWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)deviceDescriptionForPaymentWebService:(id)arg1;
- (id)deviceName;
- (id)deviceRegion;
- (void)downloadAllPaymentPassesForPaymentWebService:(id)arg1;
- (BOOL)felicaSecureElementIsAvailable;
- (id)init;
- (unsigned long long)maximumPaymentCards;
- (void)noteForegroundVerificationObserverActive:(BOOL)arg1;
- (void)noteProvisioningDidBegin;
- (void)noteProvisioningDidEnd;
- (void)noteProvisioningUserInterfaceDidAppear;
- (void)noteProvisioningUserInterfaceDidDisappear;
- (int)paymentSupportedInCurrentRegionForWebService:(id)arg1;
- (void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandlerV2:(CDUnknownBlockType)arg3;
- (BOOL)paymentWebService:(id)arg1 canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg2;
- (void)paymentWebService:(id)arg1 configurationDataWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)paymentWebService:(id)arg1 deleteApplicationWithAID:(id)arg2;
- (void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2 primaryRegionTopic:(id)arg3;
- (id)paymentWebService:(id)arg1 filterVerificationChannels:(id)arg2;
- (void)paymentWebService:(id)arg1 handlePotentialExpressPass:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)paymentWebService:(id)arg1 hasPassesOfType:(unsigned long long)arg2;
- (id)paymentWebService:(id)arg1 passesOfType:(unsigned long long)arg2;
- (void)paymentWebService:(id)arg1 provisioningDataWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)paymentWebService:(id)arg1 queueConnectionToTrustedServiceManagerForPushTopic:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 registrationDataWithAuthToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 registrationDataWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)paymentWebService:(id)arg1 removePass:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 setNewAuthRandom:(CDUnknownBlockType)arg2;
- (void)paymentWebService:(id)arg1 setNewAuthRandomIfNecessaryReturningPairingState:(CDUnknownBlockType)arg2;
- (void)paymentWebService:(id)arg1 signData:(id)arg2 signatureEntanglementMode:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)paymentWebService:(id)arg1 validateAddPreconditionsWithCompletion:(CDUnknownBlockType)arg2;
- (void)paymentWebService:(id)arg1 validateTransferPreconditionsWithCompletion:(CDUnknownBlockType)arg2;
- (void)paymentWebServiceDidUpdateConfiguration:(id)arg1;
- (BOOL)paymentWebServiceSupportsPeerPaymentRegistration:(id)arg1;
- (void)renewAppleAccountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)secureElementIdentifiers;
- (BOOL)secureElementIsAvailable;
- (unsigned long long)secureElementOwnershipStateForCurrentUser;
- (void)setMaximumPaymentCards:(unsigned long long)arg1;
- (void)startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2;
- (BOOL)supportsAutomaticPassPresentation;
- (BOOL)supportsCredentialType:(long long)arg1;
- (BOOL)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1;
- (id)trustedDeviceEnrollmentInfoForWebService:(id)arg1;

@end

