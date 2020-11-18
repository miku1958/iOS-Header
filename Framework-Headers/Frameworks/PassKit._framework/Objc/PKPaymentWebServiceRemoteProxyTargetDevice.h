//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPaymentWebServiceProxyObjectExportedInterface-Protocol.h>

@class NSString, NSXPCConnection, PKPaymentWebService;
@protocol OS_dispatch_queue, PKPaymentWebServiceTargetDeviceProtocol;

@interface PKPaymentWebServiceRemoteProxyTargetDevice : NSObject <PKPaymentWebServiceProxyObjectExportedInterface>
{
    NSObject<OS_dispatch_queue> *_handlerQueue;
    PKPaymentWebService *_webService;
    id<PKPaymentWebServiceTargetDeviceProtocol> _targetDevice;
    NSXPCConnection *_connection;
}

@property (readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addPassData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)appleAccountInformationWithCompletion:(CDUnknownBlockType)arg1;
- (void)applePayTrustKeyForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)archiveBackgroundContext:(id)arg1;
- (void)archiveContext:(id)arg1;
- (void)canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)claimSecureElementForCurrentUserWithCompletion:(CDUnknownBlockType)arg1;
- (void)createApplePayTrustKeyWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)deleteApplePayTrustKeyWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteApplicationWithAID:(id)arg1;
- (void)deviceMetadataWithFields:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didRegisterWithRegionMap:(id)arg1 primaryRegionTopic:(id)arg2;
- (void)downloadAllPaymentPasses;
- (void)featureApplicationsForProvisioningWithCompletion:(CDUnknownBlockType)arg1;
- (void)getConfigurationDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)getContextWithCompletion:(CDUnknownBlockType)arg1;
- (void)getProvisioningDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)getRegistrationDataWithAuthToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getRegistrationDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)getTrustedDeviceEnrollmentInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)handlePotentialExpressPass:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)hasPassesOfType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithWebService:(id)arg1 connection:(id)arg2;
- (void)invalidateRemoteProxyTargetDevice;
- (void)noteProvisioningDidBegin;
- (void)noteProvisioningDidEnd;
- (void)noteProvisioningUserInterfaceDidAppear;
- (void)noteProvisioningUserInterfaceDidDisappear;
- (void)passOwnershipTokenWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)passesOfType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)paymentSupportedInCurrentRegion:(CDUnknownBlockType)arg1;
- (void)performDeviceCheckInWithCompletion:(CDUnknownBlockType)arg1;
- (void)queueConnectionToTrustedServiceManagerForPushTopic:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)removePass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)renewAppleAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)secureElementOwnershipStateForCurrentUserWithCompletion:(CDUnknownBlockType)arg1;
- (void)setDefaultPaymentPassUniqueIdentifier:(id)arg1;
- (void)setNewAuthRandom:(CDUnknownBlockType)arg1;
- (void)setNewAuthRandomIfNecessaryReturningPairingState:(CDUnknownBlockType)arg1;
- (void)signData:(id)arg1 signatureEntanglementMode:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)storePassOwnershipToken:(id)arg1 withIdentifier:(id)arg2;
- (void)supportedFeatureIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)supportsAccountsWithCompletion:(CDUnknownBlockType)arg1;
- (void)supportsPeerPaymentRegistrationWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updatedAccountsForProvisioningWithCompletion:(CDUnknownBlockType)arg1;
- (void)validateAddPreconditionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)validateTransferPreconditionsWithCompletion:(CDUnknownBlockType)arg1;

@end

