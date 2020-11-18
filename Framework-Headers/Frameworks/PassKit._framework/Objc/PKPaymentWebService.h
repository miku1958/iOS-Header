//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSURLSessionDelegate-Protocol.h>
#import <PassKitCore/NSURLSessionDownloadDelegate-Protocol.h>

@class ACAccount, ACAccountStore, NSArray, NSHashTable, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, NSURL, NSURLSession, NSURLSessionConfiguration, PKPaymentDevice, PKPaymentWebServiceBackgroundContext, PKPaymentWebServiceContext;
@protocol OS_dispatch_queue, PKPaymentWebServiceArchiver, PKPaymentWebServiceBackgroundDelegate, PKPaymentWebServiceTargetDeviceProtocol;

@interface PKPaymentWebService : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate>
{
    NSURLSession *_urlSession;
    NSURLSession *_backgroundSession;
    ACAccountStore *_accountStore;
    PKPaymentDevice *_paymentDevice;
    NSMutableDictionary *_passesByLocalURL;
    NSOperationQueue *_delegateOperationQueue;
    NSObject<OS_dispatch_queue> *_backgroundDownloadQueue;
    NSHashTable *_delegates;
    unsigned long long _taskIDCounter;
    NSMutableDictionary *_webServiceTasks;
    NSString *_webServiceSessionMarker;
    NSMutableDictionary *_diagnosticReasonsByTaskID;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSMutableArray *_diagnosticReasons;
    NSObject<OS_dispatch_queue> *_diagnosticReasonsQueue;
    NSObject<OS_dispatch_queue> *_diagnosticSessionQueue;
    BOOL _sharedService;
    PKPaymentWebServiceContext *_context;
    PKPaymentWebServiceBackgroundContext *_backgroundContext;
    id<PKPaymentWebServiceArchiver> _archiver;
    id<PKPaymentWebServiceBackgroundDelegate> _backgroundDelegate;
    id<PKPaymentWebServiceTargetDeviceProtocol> _targetDevice;
}

@property (readonly) ACAccount *account;
@property (strong) id<PKPaymentWebServiceArchiver> archiver; // @synthesize archiver=_archiver;
@property (strong) PKPaymentWebServiceBackgroundContext *backgroundContext; // @synthesize backgroundContext=_backgroundContext;
@property id<PKPaymentWebServiceBackgroundDelegate> backgroundDelegate; // @synthesize backgroundDelegate=_backgroundDelegate;
@property (strong) PKPaymentWebServiceContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSArray *delegates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) BOOL needsConfiguration;
@property (readonly) BOOL needsRegistration;
@property (readonly) int paymentSetupSupportedInRegion;
@property (readonly) NSURL *primaryBrokerURL;
@property (readonly) NSURLSessionConfiguration *sessionConfiguration;
@property (nonatomic) BOOL sharedService; // @synthesize sharedService=_sharedService;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<PKPaymentWebServiceTargetDeviceProtocol> targetDevice; // @synthesize targetDevice=_targetDevice;
@property (readonly, nonatomic) NSString *webServiceSessionMarker;

+ (id)_sharedCookieStorage;
+ (id)sharedService;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_accountStore;
- (void)_addVerificationRequestRecord:(id)arg1;
- (void)_archiveBackgroundContext;
- (void)_archiveContext;
- (void)_associateDiagnosticReasonsWithTaskID:(unsigned long long)arg1;
- (BOOL)_canBypassTrustExtendedValidation;
- (void)_cleanUpDiagnosticReasonsForTaskID:(unsigned long long)arg1;
- (void)_cleanupPassDownloadCache;
- (void)_deviceConfigurationDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)_deviceProvisioningDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)_deviceRegistrationDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)_downloadCacheLocation;
- (unsigned long long)_downloadPassAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_downloadPassesWithURLs:(id)arg1;
- (id)_errorUserInfoWithData:(id)arg1;
- (id)_errorUserInfoWithErrorCode:(long long)arg1;
- (id)_errorWithResult:(int)arg1 data:(id)arg2;
- (id)_fakeVerificationChannelsWithRealChannels:(id)arg1;
- (void)_handleAuthenticationFailureWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_handlePassDownloadTask:(id)arg1 data:(id)arg2;
- (void)_handlePassListDownloadTask:(id)arg1 data:(id)arg2;
- (void)_handleRemoteAssetDownloadTask:(id)arg1 data:(id)arg2;
- (void)_handleRetryAfterRegisterWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleRetryAfterTSMSyncForPushTopic:(id)arg1 withRequest:(id)arg2 taskIdentifier:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)_hasConfiguration;
- (BOOL)_isSandboxAccount;
- (id)_movePassToDownloadCache:(id)arg1;
- (unsigned long long)_nextTaskID;
- (void)_passWithData:(id)arg1 response:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_passWithFileURL:(id)arg1;
- (id)_paymentDevice;
- (void)_performRequest:(id)arg1 taskIdentifier:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_performRequest:(id)arg1 taskIdentifier:(unsigned long long)arg2 retries:(unsigned long long)arg3 authHandling:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (unsigned long long)_performRewrapRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performVerificationRequest:(id)arg1 selectedChannel:(id)arg2 paymentPass:(id)arg3 taskID:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_primaryAppleAccount;
- (id)_reencryptPayload:(id)arg1 forRegion:(id)arg2;
- (void)_removeVerificationRequestRecord:(id)arg1;
- (int)_resultForResponse:(id)arg1 error:(id)arg2 successHandler:(CDUnknownBlockType)arg3;
- (int)_resultForUnexpectedStatusCode:(long long)arg1;
- (void)_startBackgroundURLSessionWithIdentifier:(id)arg1 context:(id)arg2 backgroundDelegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)_trustPassesExtendedValidation:(struct __SecTrust *)arg1;
- (void)_updateRequest:(id)arg1 responseData:(id)arg2 orginalRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_updateRequestWithCurrentTargetDevice:(id)arg1;
- (id)_urlRequestTaggedWithDiagnosticReasonHeader:(id)arg1 forTaskID:(unsigned long long)arg2;
- (id)_urlRequestTaggedWithWebServiceSessionMarkerHeader:(id)arg1;
- (void)addDelegate:(id)arg1;
- (unsigned long long)availableDevicesWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)availableProductsOfType:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)backgroundDownloadPassAtURL:(id)arg1;
- (void)backgroundDownloadPassesForPushTopic:(id)arg1 sinceLastUpdatedTag:(BOOL)arg2;
- (void)backgroundDownloadPassesSinceLastUpdatedTag:(BOOL)arg1;
- (void)backgroundDownloadRemotePassAssets:(id)arg1;
- (void)backgroundDownloadRemotePassAssets:(id)arg1 forSuffixesAndScreenScales:(id)arg2;
- (void)backgroundDownloadWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (void)calculateDeviceScoreForRequest:(id)arg1 deviceData:(id)arg2 cryptogram:(id)arg3 challengeResponse:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (unsigned long long)checkMerchantStatus:(id)arg1 forDomain:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (unsigned long long)completeSession:(id)arg1 wrappedPayment:(id)arg2 pass:(id)arg3 applicationData:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (unsigned long long)configurePaymentServiceWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (unsigned long long)deprovisionForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)devicePassesSinceLastUpdatedTag:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)diagnosticSessionWithReason:(id)arg1 sessionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)eligibilityForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)inAppPaymentNonceForPass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithContext:(id)arg1 targetDevice:(id)arg2;
- (id)initWithContext:(id)arg1 targetDevice:(id)arg2 archiver:(id)arg3;
- (void)invalidate;
- (void)invalidateBackgroundSession;
- (unsigned long long)issuerProvisioningCertificatesForRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (unsigned long long)networkManifestWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)passAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)paymentProvisioningNonceWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)provisionForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)provisionRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)redeemSession:(id)arg1 remotePaymentInstrument:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)registerDeviceAtBrokerURL:(id)arg1 withConsistencyData:(id)arg2 retries:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (unsigned long long)registerDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)registerDeviceWithConsistencyData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)remotePaymentCredentialsForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeDelegate:(id)arg1;
- (unsigned long long)requestVerificationCodeForPass:(id)arg1 usingChannel:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)requirementsForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetWebServiceSessionMarker;
- (unsigned long long)retainSession:(id)arg1 wrappedPayment:(id)arg2 pass:(id)arg3 applicationData:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (unsigned long long)rewrapInAppPayment:(id)arg1 merchantIdentifier:(id)arg2 hostApplicationIdentifier:(id)arg3 applicationData:(id)arg4 pass:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (unsigned long long)rewrapInAppPayment:(id)arg1 merchantIdentifier:(id)arg2 merchantSession:(id)arg3 hostApplicationIdentifier:(id)arg4 applicationData:(id)arg5 pass:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)sharedPaymentServiceChanged:(id)arg1;
- (void)sharedServiceDidRegister;
- (void)signNonce:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)startBackgroundURLSessionWithIdentifier:(id)arg1 context:(id)arg2 backgroundDelegate:(id)arg3;
- (void)startBackgroundURLSessionWithIdentifier:(id)arg1 context:(id)arg2 backgroundDelegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (unsigned long long)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forPass:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (unsigned long long)unregisterDeviceWithCompanionSerialNumber:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)unregisterDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)updateVerification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)verificationChannelsForPass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)verificationOptionsForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)verificationRecordForPass:(id)arg1;

@end

