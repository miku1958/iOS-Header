//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSError, NSSet, NSString, PKAppleAccountInformation, PKApplePayTrustKeyRequest, PKOSVersionRequirement, PKPass, PKPassUpgradeRequest, PKPaymentPass, PKPaymentProductsActionRequest, PKPaymentWebService, PKTrustedDeviceEnrollmentInfo, PKVerificationChannel;

@protocol PKPaymentWebServiceTargetDeviceProtocol <NSObject>
- (PKAppleAccountInformation *)appleAccountInformation;
- (NSString *)bridgedClientInfo;
- (BOOL)claimSecureElementForCurrentUser;
- (void)claimSecureElementForCurrentUserWithCompletion:(void (^)(BOOL))arg1;
- (NSString *)deviceClass;
- (NSString *)deviceDescriptionForPaymentWebService:(PKPaymentWebService *)arg1;
- (NSString *)deviceName;
- (NSString *)deviceRegion;
- (PKOSVersionRequirement *)deviceVersion;
- (void)downloadAllPaymentPassesForPaymentWebService:(PKPaymentWebService *)arg1;
- (void)noteProvisioningDidBegin;
- (void)noteProvisioningDidEnd;
- (void)noteProvisioningUserInterfaceDidAppear;
- (void)noteProvisioningUserInterfaceDidDisappear;
- (int)paymentSupportedInCurrentRegionForWebService:(PKPaymentWebService *)arg1;
- (void)paymentWebService:(PKPaymentWebService *)arg1 addPaymentPass:(PKPaymentPass *)arg2 withCompletionHandler:(void (^)(void))arg3;
- (BOOL)paymentWebService:(PKPaymentWebService *)arg1 canProvisionPaymentPassWithPrimaryAccountIdentifier:(NSString *)arg2;
- (void)paymentWebService:(PKPaymentWebService *)arg1 configurationDataWithCompletionHandler:(void (^)(PKPaymentDeviceConfigurationData *, NSError *))arg2;
- (void)paymentWebService:(PKPaymentWebService *)arg1 deleteApplicationWithAID:(NSString *)arg2;
- (void)paymentWebService:(PKPaymentWebService *)arg1 didRegisterWithRegionMap:(NSDictionary *)arg2 primaryRegionTopic:(NSString *)arg3;
- (NSArray *)paymentWebService:(PKPaymentWebService *)arg1 filterVerificationChannels:(NSArray *)arg2;
- (BOOL)paymentWebService:(PKPaymentWebService *)arg1 hasPassesOfType:(unsigned long long)arg2;
- (void)paymentWebService:(PKPaymentWebService *)arg1 provisioningDataWithCompletionHandler:(void (^)(PKPaymentDeviceProvisioningData *, NSError *))arg2;
- (void)paymentWebService:(PKPaymentWebService *)arg1 queueConnectionToTrustedServiceManagerForPushTopic:(NSString *)arg2 withCompletion:(void (^)(BOOL, NSError *))arg3;
- (void)paymentWebService:(PKPaymentWebService *)arg1 registrationDataWithCompletionHandler:(void (^)(PKPaymentDeviceRegistrationData *, NSError *))arg2;
- (void)paymentWebService:(PKPaymentWebService *)arg1 requestPassUpgrade:(PKPassUpgradeRequest *)arg2 pass:(PKPaymentPass *)arg3 completion:(void (^)(NSError *, PKPaymentPass *))arg4;
- (void)paymentWebService:(PKPaymentWebService *)arg1 setNewAuthRandom:(void (^)(BOOL))arg2;
- (void)paymentWebService:(PKPaymentWebService *)arg1 setNewAuthRandomIfNecessaryReturningPairingState:(void (^)(BOOL, NSData *, NSData *))arg2;
- (void)paymentWebService:(PKPaymentWebService *)arg1 signData:(NSData *)arg2 signatureEntanglementMode:(unsigned long long)arg3 withCompletionHandler:(void (^)(NSData *, PKSecureElementSignatureInfo *, NSError *))arg4;
- (void)paymentWebService:(PKPaymentWebService *)arg1 validateAddPreconditionsWithCompletion:(void (^)(BOOL, NSError *))arg2;
- (void)paymentWebService:(PKPaymentWebService *)arg1 validateTransferPreconditionsWithCompletion:(void (^)(BOOL, NSError *))arg2;
- (void)paymentWebServiceDidUpdateConfiguration:(PKPaymentWebService *)arg1;
- (void)renewAppleAccountWithCompletionHandler:(void (^)(long long, PKAppleAccountInformation *))arg1;
- (NSArray *)secureElementIdentifiers;
- (unsigned long long)secureElementOwnershipStateForCurrentUser;
- (BOOL)supportsAutomaticPassPresentation;

@optional
- (void)applePayTrustKeyForIdentifier:(NSString *)arg1 completion:(void (^)(PKApplePayTrustKey *))arg2;
- (void)availableProductsWithCompletion:(void (^)(PKPaymentAvailableProductsResponse *, NSError *))arg1;
- (NSString *)cellularNetworkRegion;
- (void)createApplePayTrustKeyWithRequest:(PKApplePayTrustKeyRequest *)arg1 completion:(void (^)(PKApplePayTrustKey *, NSError *))arg2;
- (void)deleteApplePayTrustKeyWithIdentifier:(NSString *)arg1 completion:(void (^)(BOOL))arg2;
- (void)endRequiringUpgradedPasscodeIfNecessary;
- (void)enforceUpgradedPasscodePolicyWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)exitPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg1 withShouldContinue:(BOOL)arg2 error:(NSError *)arg3;
- (void)featureApplicationsForProvisioningWithCompletion:(void (^)(NSArray *))arg1;
- (BOOL)felicaSecureElementIsAvailable;
- (unsigned long long)maximumPaymentCards;
- (void)noteForegroundVerificationObserverActive:(BOOL)arg1;
- (void)notePasscodeUpgradeFlowDidEnd;
- (void)notePasscodeUpgradeFlowWillBeginWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)paymentWebService:(PKPaymentWebService *)arg1 addPaymentPass:(PKPaymentPass *)arg2 withCompletionHandlerV2:(void (^)(PKPaymentPass *))arg3;
- (void)paymentWebService:(PKPaymentWebService *)arg1 deviceMetadataWithFields:(unsigned long long)arg2 completion:(void (^)(PKPaymentDeviceMetadata *))arg3;
- (void)paymentWebService:(PKPaymentWebService *)arg1 handlePotentialExpressPass:(PKPaymentPass *)arg2 withCompletionHandler:(void (^)(NSSet *))arg3;
- (void)paymentWebService:(PKPaymentWebService *)arg1 passOwnershipTokenWithIdentifier:(NSString *)arg2 completion:(void (^)(NSString *))arg3;
- (NSArray *)paymentWebService:(PKPaymentWebService *)arg1 passesOfType:(unsigned long long)arg2;
- (void)paymentWebService:(PKPaymentWebService *)arg1 registrationDataWithAuthToken:(NSString *)arg2 completionHandler:(void (^)(PKPaymentDeviceRegistrationData *, NSError *))arg3;
- (void)paymentWebService:(PKPaymentWebService *)arg1 removePass:(PKPass *)arg2 withCompletionHandler:(void (^)(BOOL, NSError *))arg3;
- (void)paymentWebService:(PKPaymentWebService *)arg1 setDefaultPaymentPassUniqueIdentifier:(NSString *)arg2;
- (void)paymentWebService:(PKPaymentWebService *)arg1 storePassOwnershipToken:(NSString *)arg2 withIdentifier:(NSString *)arg3;
- (void)paymentWebService:(PKPaymentWebService *)arg1 updateAccountWithIdentifier:(NSString *)arg2 completion:(void (^)(PKAccount *, NSError *))arg3;
- (BOOL)paymentWebServiceSupportsAccounts:(PKPaymentWebService *)arg1;
- (BOOL)paymentWebServiceSupportsPeerPaymentRegistration:(PKPaymentWebService *)arg1;
- (void)performDeviceCheckInWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)performProductActionRequest:(PKPaymentProductsActionRequest *)arg1 completion:(void (^)(PKPaymentAvailableProductsResponse *, NSError *))arg2;
- (void)requestPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg1 withVisibleViewController:(id)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (BOOL)secureElementIsAvailable;
- (void)setMaximumPaymentCards:(unsigned long long)arg1;
- (void)signatureForAuthToken:(NSString *)arg1 webService:(PKPaymentWebService *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (void)startBackgroundVerificationObserverForPass:(PKPaymentPass *)arg1 verificationMethod:(PKVerificationChannel *)arg2;
- (void)startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(BOOL)arg1;
- (NSSet *)supportedFeatureIdentifiersForAccountProvisioningWithPaymentWebService:(PKPaymentWebService *)arg1;
- (NSSet *)supportedFeatureIdentifiersWithPaymentWebService:(PKPaymentWebService *)arg1;
- (BOOL)supportsCredentialType:(long long)arg1;
- (BOOL)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1;
- (BOOL)supportsExpressMode:(NSString *)arg1;
- (BOOL)supportsExpressModeForExpressPassType:(long long)arg1;
- (PKTrustedDeviceEnrollmentInfo *)trustedDeviceEnrollmentInfoForWebService:(PKPaymentWebService *)arg1;
- (void)updatedAccountsForProvisioningWithCompletion:(void (^)(NSArray *, NSArray *))arg1;
- (BOOL)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(NSString *)arg1;
@end
