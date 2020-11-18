//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/IDSServiceDelegate-Protocol.h>
#import <NanoPassKit/PKPaymentWebServiceArchiver-Protocol.h>
#import <NanoPassKit/PKPaymentWebServiceTargetDeviceProtocol-Protocol.h>

@class IDSService, NPKCompanionAgentConnection, NPKSubcredentialInvitationCoordinator, NPKTapToRadarManager, NPKTargetDeviceAssertionManager, NRActiveDeviceAssertion, NSMutableDictionary, NSString;
@protocol NPKPasscodeChangeCoordinatorProtocol, NPKPaymentWebServiceCompanionTargetDeviceDelegate, OS_dispatch_queue;

@interface NPKPaymentWebServiceCompanionTargetDevice : NSObject <IDSServiceDelegate, PKPaymentWebServiceTargetDeviceProtocol, PKPaymentWebServiceArchiver>
{
    id<NPKPaymentWebServiceCompanionTargetDeviceDelegate> _delegate;
    unsigned long long _context;
    IDSService *_provisioningService;
    NPKCompanionAgentConnection *_companionAgentConnection;
    NSMutableDictionary *_outstandingRequests;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_responseQueue;
    NRActiveDeviceAssertion *_provisioningActiveDeviceAssertion;
    NPKTargetDeviceAssertionManager *_remoteDeviceAssertionManager;
    NPKTapToRadarManager *_manager;
    id<NPKPasscodeChangeCoordinatorProtocol> _passcodeChangeCoordinator;
    id _passcodeUpgradeFlowController;
    NPKSubcredentialInvitationCoordinator *_subcredentialInvitationCoordinator;
}

@property (strong, nonatomic) NPKCompanionAgentConnection *companionAgentConnection; // @synthesize companionAgentConnection=_companionAgentConnection;
@property (nonatomic) unsigned long long context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NPKPaymentWebServiceCompanionTargetDeviceDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property (strong, nonatomic) NPKTapToRadarManager *manager; // @synthesize manager=_manager;
@property (strong, nonatomic) NSMutableDictionary *outstandingRequests; // @synthesize outstandingRequests=_outstandingRequests;
@property (strong, nonatomic) id<NPKPasscodeChangeCoordinatorProtocol> passcodeChangeCoordinator; // @synthesize passcodeChangeCoordinator=_passcodeChangeCoordinator;
@property (weak, nonatomic) id passcodeUpgradeFlowController; // @synthesize passcodeUpgradeFlowController=_passcodeUpgradeFlowController;
@property (strong, nonatomic) NRActiveDeviceAssertion *provisioningActiveDeviceAssertion; // @synthesize provisioningActiveDeviceAssertion=_provisioningActiveDeviceAssertion;
@property (strong, nonatomic) IDSService *provisioningService; // @synthesize provisioningService=_provisioningService;
@property (strong, nonatomic) NPKTargetDeviceAssertionManager *remoteDeviceAssertionManager; // @synthesize remoteDeviceAssertionManager=_remoteDeviceAssertionManager;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *responseQueue; // @synthesize responseQueue=_responseQueue;
@property (strong, nonatomic) NPKSubcredentialInvitationCoordinator *subcredentialInvitationCoordinator; // @synthesize subcredentialInvitationCoordinator=_subcredentialInvitationCoordinator;
@property (readonly) Class superclass;

+ (id)bridgedClientInfoHTTPHeader;
- (void).cxx_destruct;
- (void)_acquireAssertionOfType:(unsigned long long)arg1;
- (id)_categoryIdentifierForPass:(id)arg1;
- (BOOL)_deviceIsConnected;
- (BOOL)_deviceIsDaytonaOrLater;
- (BOOL)_deviceIsFortuneOrLater;
- (id)_deviceSupportedFeatureIdentifiers;
- (id)_expressModesFromExpressPassesInformation:(id)arg1;
- (id)_expressPassInformationWithPass:(id)arg1 upgradeRequst:(id)arg2;
- (id)_expressPassesInformationFromDataArray:(id)arg1;
- (void)_getPairingInfoAndSetAuthRandomIfNotPaired:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_invalidateAssertionOfType:(unsigned long long)arg1;
- (BOOL)_isSubcredentialProvisioningSupported;
- (void)_multipleExpressTransitPassPaymentWebService:(id)arg1 handlePotentialExpressPassInformation:(id)arg2 upgradeRequest:(id)arg3 pass:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
- (void)_paymentWebService:(id)arg1 registrationDataWithAuthToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_sendProtobuf:(id)arg1 responseExpected:(BOOL)arg2;
- (id)_sendProtobuf:(id)arg1 responseExpected:(BOOL)arg2 extraOptions:(id)arg3;
- (id)_sendProtobuf:(id)arg1 responseIdentifier:(id)arg2;
- (id)_serialNumbersOfAllPairedDevices;
- (void)_setNewAuthRandomIfNecessaryReturningPairingState:(CDUnknownBlockType)arg1;
- (void)_setNewAuthRandomReturningPairingState:(CDUnknownBlockType)arg1;
- (void)_singleExpressTransitPassPaymentWebService:(id)arg1 handlePotentialExpressPassInformation:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)_statusUpdaterWithResponseClass:(Class)arg1 type:(unsigned short)arg2 responseIdentifier:(id)arg3;
- (id)_supportedRegionsForWebService:(id)arg1;
- (BOOL)_supportsFeaturesForWebService:(id)arg1;
- (void)_trackOutstandingRequestWithMessageIdentifier:(id)arg1 completionHandler:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (id)_upgradeExpressAutomaticSelectionCriteriaRequestForPass:(id)arg1;
- (id)_upgradeExpressAutomaticSelectionCriteriaRequestForPass:(id)arg1 deviceClass:(id)arg2 OSVersion:(id)arg3 SEID:(id)arg4;
- (void)acceptSubcredentialInvitationResponse:(id)arg1;
- (void)accountAttestationAnonymizationSaltResponse:(id)arg1;
- (id)appleAccountInformation;
- (void)applyPasscodeRestrictionsResponse:(id)arg1;
- (void)archiveBackgroundContext:(id)arg1;
- (void)archiveContext:(id)arg1;
- (void)availableProductsResponse:(id)arg1;
- (void)availableProductsWithCompletion:(CDUnknownBlockType)arg1;
- (void)balanceReminderForBalance:(id)arg1 pass:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)balanceReminderWithBalanceAndPassResponse:(id)arg1;
- (id)bridgedClientInfo;
- (void)canAcceptInvitationResponse:(id)arg1;
- (void)cancelOutstandingEnableServiceModeRequests;
- (void)cancelOutstandingRemotePassUpdateRequest:(id)arg1 pass:(id)arg2;
- (void)cancelOutstandingSetDefaultExpressPassRequestsWithExpressMode:(id)arg1;
- (void)checkCompanionPeerPaymentRegistrationState:(id)arg1;
- (void)checkPasscodePolicyComplianceResponse:(id)arg1;
- (void)checkTLKsMissingResponse:(id)arg1;
- (void)checkTLKsMissingWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)claimSecureElementForCurrentUser;
- (void)claimSecureElementForCurrentUserWithCompletion:(CDUnknownBlockType)arg1;
- (void)cloudStoreStatusResponse:(id)arg1;
- (void)cloudStoreStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)commutePlanReminderForCommutePlan:(id)arg1 pass:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)commutePlanReminderWithCommutePlanAndPassResponse:(id)arg1;
- (void)configurationDataResponse:(id)arg1;
- (void)conflictingExpressPassIdentifiersForPassInformation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withReferenceExpressState:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)conflictingExpressPassIdentifiersForPassInformationResponse:(id)arg1;
- (void)consistencyCheck;
- (void)declineRelatedSharingInvitationsIfNecessaryRequest:(id)arg1;
- (void)declineRelatedSharingInvitationsIfNecessaryResponse:(id)arg1;
- (id)deviceClass;
- (id)deviceDescriptionForPaymentWebService:(id)arg1;
- (id)deviceIDSIdentifier;
- (void)deviceMetadataResponse:(id)arg1;
- (id)deviceName;
- (id)deviceRegion;
- (BOOL)deviceSupportMultipleExpressPasses;
- (BOOL)deviceSupportTransitReminderSetting;
- (id)deviceVersion;
- (void)didRegisterResponse:(id)arg1;
- (void)downloadAllPaymentPasses:(id)arg1;
- (void)downloadAllPaymentPassesForPaymentWebService:(id)arg1;
- (void)dumpLogsResponse:(id)arg1;
- (void)dumpLogsWithCompletion:(CDUnknownBlockType)arg1;
- (void)enableServiceModeForPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enableServiceModeResponse:(id)arg1;
- (void)endRequiringUpgradedPasscodeIfNecessary;
- (void)enforceUpgradedPasscodePolicyWithCompletion:(CDUnknownBlockType)arg1;
- (void)exitPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg1 withShouldContinue:(BOOL)arg2 error:(id)arg3;
- (void)familyMembersResponse:(id)arg1;
- (void)familyMembersWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)felicaSecureElementIsAvailable;
- (void)fetchOrInitializeAccountAttestationAnonymizationSaltRequest:(id)arg1;
- (void)getPairingInfoResponse:(id)arg1;
- (void)handleAcceptSubcredentialProvisioningRequest:(id)arg1;
- (void)handleBalanceChange:(id)arg1;
- (void)handleBalanceReminderWithBalanceAndPassRequest:(id)arg1;
- (void)handleCompanionMigrationResponse:(id)arg1;
- (void)handleCompanionMigrationWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleCompanionPeerPaymentRegistration;
- (void)handleCompanioniCloudSignout;
- (void)handleCredentialsChange:(id)arg1;
- (void)handleDeletePaymentTransactionWithIdentifier:(id)arg1 passUniqueIdentifier:(id)arg2;
- (void)handleDeviceUnlockedForPendingProvisioningRequest:(id)arg1;
- (void)handlePasscodeUpgradeFlowShouldExitRequest:(id)arg1;
- (void)handlePaymentTransactions:(id)arg1;
- (void)handlePeerPaymentTermsAndConditionsAcceptanceRequest:(id)arg1;
- (void)handlePendingRemovalOfPaymentPass:(id)arg1 uniqueID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handlePreferredAID:(id)arg1 forPassWithUniqueID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleRemovedTransaction:(id)arg1;
- (void)handleShowPaymentSetupRequest:(id)arg1;
- (void)handleTransactionDefaultsNeededRequest:(id)arg1;
- (void)handleUpdatedAppletState:(id)arg1;
- (void)handleUpdatedPeerPaymentWebServiceContext:(id)arg1;
- (void)handleValueAddedServiceTransactions:(id)arg1;
- (void)handleWebServiceContextDidChangeRequest:(id)arg1;
- (void)handleWebServiceContextNeededRequest:(id)arg1;
- (id)init;
- (id)initWithContext:(unsigned long long)arg1 responseQueue:(id)arg2;
- (void)initializeCloudStoreIfNecessaryResponse:(id)arg1;
- (void)initializeCloudStoreIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)initializeCloudStoreIfNecessaryWithHandler:(CDUnknownBlockType)arg1;
- (void)initializeCloudStoreIfNecessaryWithHandlerResponse:(id)arg1;
- (BOOL)isGymKitEnabled;
- (void)markAllAppletsForDeletionResponse:(id)arg1;
- (void)markAllAppletsForDeletionWithCompletion:(CDUnknownBlockType)arg1;
- (void)matchingCredentialOnDeviceResponse:(id)arg1;
- (unsigned long long)maximumPaymentCards;
- (void)noteForegroundVerificationObserverActive:(BOOL)arg1;
- (void)noteProvisioningDidBegin;
- (void)noteProvisioningDidEnd;
- (void)noteProvisioningUserInterfaceDidAppear;
- (void)noteProvisioningUserInterfaceDidDisappear;
- (void)openURLWithRequest:(id)arg1;
- (id)osVersion;
- (int)paymentSupportedInCurrentRegionForWebService:(id)arg1;
- (void)paymentWebService:(id)arg1 acceptSubcredentialInvitationWithIdentifier:(id)arg2 metadata:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)paymentWebService:(id)arg1 accountAttestationAnonymizationSaltWithCompletion:(CDUnknownBlockType)arg2;
- (void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 canAcceptInvitation:(id)arg2 withCompletionV2:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 canHandlePotentialExpressPass:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)paymentWebService:(id)arg1 canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg2;
- (void)paymentWebService:(id)arg1 configurationDataWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)paymentWebService:(id)arg1 declineRelatedSharingInvitationsIfNecessary:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 deleteApplicationWithAID:(id)arg2;
- (void)paymentWebService:(id)arg1 deviceMetadataWithFields:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2;
- (void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2 primaryRegionTopic:(id)arg3;
- (id)paymentWebService:(id)arg1 filterVerificationChannels:(id)arg2;
- (void)paymentWebService:(id)arg1 handlePotentialExpressPass:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)paymentWebService:(id)arg1 hasPassesOfType:(unsigned long long)arg2;
- (void)paymentWebService:(id)arg1 matchingInvitationOnDevice:(id)arg2 withTimeout:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)paymentWebService:(id)arg1 passesOfType:(unsigned long long)arg2;
- (void)paymentWebService:(id)arg1 provisioningDataIncludingDeviceMetadata:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 queueConnectionToTrustedServiceManagerForPushTopic:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 registrationDataWithAuthToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 registrationDataWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)paymentWebService:(id)arg1 removePass:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 removeSharingInvitation:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 requestPassUpgrade:(id)arg2 pass:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)paymentWebService:(id)arg1 requestSubcredentialInvitation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 setAccountAttestationAnonymizationSalt:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 setDefaultPaymentPassUniqueIdentifier:(id)arg2;
- (void)paymentWebService:(id)arg1 setNewAuthRandom:(CDUnknownBlockType)arg2;
- (void)paymentWebService:(id)arg1 setNewAuthRandomIfNecessaryReturningPairingState:(CDUnknownBlockType)arg2;
- (void)paymentWebService:(id)arg1 signData:(id)arg2 signatureEntanglementMode:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)paymentWebService:(id)arg1 signData:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 subcredentialInvitationsWithCompletion:(CDUnknownBlockType)arg2;
- (id)paymentWebService:(id)arg1 supportedRegionFeatureOfType:(long long)arg2;
- (void)paymentWebService:(id)arg1 updateAccountWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 updateMetadataOnPass:(id)arg2 withCredential:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)paymentWebService:(id)arg1 validateAcceptInvitationPreconditionsWithCompletion:(CDUnknownBlockType)arg2;
- (void)paymentWebService:(id)arg1 validateAddPreconditionsWithCompletion:(CDUnknownBlockType)arg2;
- (void)paymentWebService:(id)arg1 validateTransferPreconditionsWithCompletion:(CDUnknownBlockType)arg2;
- (void)paymentWebServiceDidUpdateConfiguration:(id)arg1;
- (BOOL)paymentWebServiceSupportsAccounts:(id)arg1;
- (BOOL)paymentWebServiceSupportsPeerPaymentRegistration:(id)arg1;
- (void)peerPaymentRegisterResponse:(id)arg1;
- (void)peerPaymentRegisterWithURL:(id)arg1 forceReRegistration:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)peerPaymentUnregisterResponse:(id)arg1;
- (void)peerPaymentUnregisterWithCompletion:(CDUnknownBlockType)arg1;
- (void)pendingRemovalResponse:(id)arg1;
- (void)performDeviceCheckInResponse:(id)arg1;
- (void)performDeviceCheckInWithCompletion:(CDUnknownBlockType)arg1;
- (void)performProductActionRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performProductActionResponse:(id)arg1;
- (void)photosForFamilyMembersWithDSIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)photosForFamilyMembersWithDSIDsResponse:(id)arg1;
- (void)preconditionNotMet:(id)arg1;
- (void)preferredAIDRequest:(id)arg1;
- (void)preferredAIDResponse:(id)arg1;
- (void)provisionPeerPaymentPassResponse:(id)arg1;
- (void)provisionPeerPaymentPassWithCompletion:(CDUnknownBlockType)arg1;
- (void)provisioningDataResponse:(id)arg1;
- (void)queueTSMConnectionResponse:(id)arg1;
- (void)registerCredentialsResponse:(id)arg1;
- (void)registerCredentialsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registrationDataResponse:(id)arg1;
- (int)registrationSupportedInCurrentRegionForWebService:(id)arg1;
- (void)remotePassUpgradeResponse:(id)arg1;
- (void)remotePassUpgradeWithRequest:(id)arg1 pass:(id)arg2 requireAuthorization:(BOOL)arg3 notifyUserOnPairedDevice:(BOOL)arg4 updateBlock:(CDUnknownBlockType)arg5;
- (void)removeAIDsFromSecureElement:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)removeExpressPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeExpressPassWithUniqueIdentifierResponse:(id)arg1;
- (void)removeExpressPassesWithCardType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeExpressPassesWithCardTypeResponse:(id)arg1;
- (void)removeSharingInvitationResponse:(id)arg1;
- (void)renewAppleAccountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestAutomaticProvisioningForCompanionPaymentPass:(id)arg1;
- (void)requestPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg1 withVisibleViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestSubcredentialInvitationResponse:(id)arg1;
- (void)resetApplePayManateeViewResponse:(id)arg1;
- (void)resetApplePayManateeViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)retrieveTransactionsForPassWithUniqueID:(id)arg1;
- (void)revokeCredentialsResponse:(id)arg1;
- (void)revokeCredentialsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)secureElementCardsWithCompletion:(CDUnknownBlockType)arg1;
- (void)secureElementGetAppletsResponse:(id)arg1;
- (id)secureElementIdentifiers;
- (unsigned long long)secureElementOwnershipStateForCurrentUser;
- (void)secureElementRemoveAppletsResponse:(id)arg1;
- (void)sendPaymentOptionsDefaultsToWatch;
- (void)sendWebServiceContextToWatch:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)setAccountAttestationAnonymizationSaltResponse:(id)arg1;
- (void)setBalanceReminder:(id)arg1 forBalance:(id)arg2 pass:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setBalanceReminderWithBalanceAndPassResponse:(id)arg1;
- (void)setCommutePlanReminder:(id)arg1 forCommutePlan:(id)arg2 pass:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setCommutePlanReminderWithCommutePlanAndPassResponse:(id)arg1;
- (void)setExpressPassResponse:(id)arg1;
- (void)setExpressWithPassInformation:(id)arg1 requestAuthorization:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setMaximumPaymentCards:(unsigned long long)arg1;
- (void)setNewAuthRandomIfNecessaryAtBeginningOfProvisioningFlow:(CDUnknownBlockType)arg1;
- (void)setNewAuthRandomResponse:(id)arg1;
- (void)setPeerPaymentPreferences:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setPeerPaymentPreferencesResponse:(id)arg1;
- (void)signDataResponse:(id)arg1;
- (void)startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2;
- (void)startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(BOOL)arg1;
- (void)subcredentialInvitationsResponse:(id)arg1;
- (id)supportedFeatureIdentifiersForAccountProvisioningWithPaymentWebService:(id)arg1;
- (id)supportedFeatureIdentifiersWithPaymentWebService:(id)arg1;
- (BOOL)supportsAutomaticPassPresentation;
- (BOOL)supportsCredentialType:(long long)arg1;
- (BOOL)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1;
- (id)trustedDeviceEnrollmentInfoForWebService:(id)arg1;
- (void)updateAccountWithIdentifierResponse:(id)arg1;
- (void)updatePaymentPass:(id)arg1;
- (void)updatePeerPaymentAccountResponse:(id)arg1;
- (void)updatePeerPaymentAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)updatePushToken:(id)arg1;
- (void)updateSubcredentialMetadataResponse:(id)arg1;
- (void)updatedAccountsForProvisioningWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1;

@end
