//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/PKPaymentWebServiceTargetDeviceProtocol-Protocol.h>

@class NSString, PKAssertion, PKPassLibrary, PKPaymentService;

@interface PKPaymentWebServiceTargetDevice : NSObject <PKPaymentWebServiceTargetDeviceProtocol>
{
    PKPassLibrary *_passLibrary;
    PKPaymentService *_paymentService;
    PKAssertion *_provisioningAssertion;
    BOOL _assertionActive;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)phoneTargetDevice;
- (id)bridgedClientInfo;
- (void)dealloc;
- (id)deviceDescriptionForPaymentWebService:(id)arg1;
- (id)deviceName;
- (id)deviceRegion;
- (void)downloadAllPaymentPassesForPaymentWebService:(id)arg1;
- (id)init;
- (void)noteProvisioningInProgress:(BOOL)arg1;
- (int)paymentSupportedInCurrentRegionForWebService:(id)arg1;
- (void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandlerV2:(CDUnknownBlockType)arg3;
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
- (void)paymentWebService:(id)arg1 shouldArchivePaymentWebServiceBackgroundContext:(id)arg2;
- (void)paymentWebService:(id)arg1 shouldArchivePaymentWebServiceContext:(id)arg2;
- (void)paymentWebService:(id)arg1 signData:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 validateAddPreconditionsWithCompletion:(CDUnknownBlockType)arg2;
- (void)paymentWebServiceDidUpdateConfiguration:(id)arg1;
- (BOOL)supportsAutomaticPassPresentation;

@end

