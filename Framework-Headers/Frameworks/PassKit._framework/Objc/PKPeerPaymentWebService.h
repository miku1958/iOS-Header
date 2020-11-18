//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKWebService.h>

#import <PassKitCore/NSURLSessionTaskDelegate-Protocol.h>

@class NSString, NSURL, PKPeerPaymentService, PKPeerPaymentWebServiceContext, PKSecureElement;
@protocol PKPeerPaymentWebServiceArchiver, PKPeerPaymentWebServiceTargetDeviceProtocol;

@interface PKPeerPaymentWebService : PKWebService <NSURLSessionTaskDelegate>
{
    PKSecureElement *_secureElement;
    BOOL _sharedService;
    PKPeerPaymentWebServiceContext *_context;
    id<PKPeerPaymentWebServiceArchiver> _archiver;
    id<PKPeerPaymentWebServiceTargetDeviceProtocol> _targetDevice;
    PKPeerPaymentService *_peerPaymentService;
}

@property (readonly, nonatomic) id<PKPeerPaymentWebServiceArchiver> archiver; // @synthesize archiver=_archiver;
@property (strong, nonatomic) PKPeerPaymentWebServiceContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL needsRegistration;
@property (strong, nonatomic) PKPeerPaymentService *peerPaymentService; // @synthesize peerPaymentService=_peerPaymentService;
@property (readonly, nonatomic) NSURL *peerPaymentServiceURL;
@property (nonatomic, getter=isSharedService) BOOL sharedService; // @synthesize sharedService=_sharedService;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<PKPeerPaymentWebServiceTargetDeviceProtocol> targetDevice; // @synthesize targetDevice=_targetDevice;

+ (id)sharedService;
- (void).cxx_destruct;
- (void)_archiveContext;
- (id)_deviceIdentifier;
- (void)_deviceRegistrationDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)_deviceScoreForEndpoint:(id)arg1 recipientAddress:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_deviceScoreForEndpoint:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_handleRetryAfterRegisterWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_isValidResponse:(id)arg1 error:(id)arg2;
- (void)_updateRequestWithCurrentTargetDevice:(id)arg1;
- (id)badRequestErrorWithResponse:(id)arg1;
- (BOOL)canBypassTrustExtendedValidation;
- (id)forbiddenErrorWithResponse:(id)arg1;
- (void)handleResponse:(id)arg1 withError:(id)arg2 data:(id)arg3 task:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)handleWillPerformHTTPRedirectionWithResponse:(id)arg1 redirectHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithContext:(id)arg1 targetDevice:(id)arg2;
- (id)initWithContext:(id)arg1 targetDevice:(id)arg2 archiver:(id)arg3;
- (id)logFacility;
- (unsigned long long)peerPaymentAcceptTermsWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)peerPaymentAccountWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)peerPaymentBankLookupWithCountryCode:(id)arg1 query:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)peerPaymentDocumentSubmissionRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)peerPaymentIdentityVerificationRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)peerPaymentPassDetailsWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)peerPaymentPerformAction:(id)arg1 withPaymentIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)peerPaymentPerformQuoteWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)peerPaymentPreferencesWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)peerPaymentQuoteCertificatesForDestination:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)peerPaymentQuoteWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)peerPaymentRecipientForRecipientAddress:(id)arg1 source:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)peerPaymentRegisterWithURL:(id)arg1 pushToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)peerPaymentRequestStatementWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)peerPaymentRequestTokenWithRequst:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)peerPaymentStatusWithPaymentIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)peerPaymentUnregisterWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)peerPaymentUpdatePreferencesWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sharedPeerPaymentServiceChanged:(id)arg1;

@end

