//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/C2RequestDelegate-Protocol.h>
#import <CloudKitDaemon/CKDFlowControllable-Protocol.h>
#import <CloudKitDaemon/CKDProtobufMessageSigningDelegate-Protocol.h>
#import <CloudKitDaemon/CKDZoneGatekeeperWaiter-Protocol.h>

@class C2RequestOptions, CKDClientContext, CKDOperation, CKDOperationMetrics, CKDProtobufStreamWriter, CKDProtocolTranslator, CKDResponseBodyParser, CKDTapToRadarRequest, CKDTrafficLogger, CKTimeLogger, NSArray, NSData, NSDate, NSDictionary, NSError, NSHTTPURLResponse, NSInputStream, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSString, NSURL, NSURLRequest, NSURLSession, NSURLSessionDataTask;
@protocol CKDAccountInfoProvider, CKDURLRequestAuthRetryDelegate, CKDURLRequestMetricsDelegate, OS_dispatch_queue, OS_os_activity, OS_voucher;

__attribute__((visibility("hidden")))
@interface CKDURLRequest : NSObject <C2RequestDelegate, CKDZoneGatekeeperWaiter, CKDProtobufMessageSigningDelegate, CKDFlowControllable>
{
    id<CKDAccountInfoProvider> _accountInfoProvider;
    long long _responseStatusCode;
    NSString *_requestUUID;
    BOOL _didSendRequest;
    BOOL _didFinishLoading;
    BOOL _finished;
    BOOL _didRetrySignature;
    CKDResponseBodyParser *_responseBodyParser;
    BOOL _allowAutomaticRedirects;
    CDUnknownBlockType _requestProgressBlock;
    CDUnknownBlockType _responseProgressBlock;
    CDUnknownBlockType _completionBlock;
    NSData *_fakeResponseData;
    BOOL _haveParsedFakeResponseData;
    CKDProtobufStreamWriter *_streamWriter;
    struct CC_SHA256state_st _mescalTxSignature;
    NSObject<OS_os_activity> *_osActivity;
    NSObject<OS_os_activity> *_transmissionActivity;
    BOOL _needsAuthRetry;
    BOOL _isWaitingOnAuthRenew;
    BOOL _isHandlingAuthRetry;
    BOOL _didRetryAuth;
    BOOL _cancelled;
    BOOL _haveCachedServerType;
    BOOL _haveCachedPartitionType;
    BOOL _didReceiveResponseBodyData;
    NSDictionary *_requestProperties;
    NSArray *_requestOperations;
    CKTimeLogger *_timeLogger;
    id<CKDURLRequestMetricsDelegate> _metricsDelegate;
    id<CKDURLRequestAuthRetryDelegate> _authRetryDelegate;
    CKDProtocolTranslator *_translator;
    NSString *_automatedDeviceGroup;
    NSDictionary *_clientProvidedAdditionalHeaderValues;
    NSDictionary *_fakeResponseOperationResultByItemID;
    NSError *_error;
    CKDOperation *_operation;
    NSObject<OS_dispatch_queue> *_lifecycleQueue;
    NSURLSessionDataTask *_urlSessionTask;
    C2RequestOptions *_c2RequestOptions;
    NSURLRequest *_request;
    NSHTTPURLResponse *_response;
    NSURLSession *_urlSession;
    NSMutableSet *_responseObjectUUIDs;
    CKDTrafficLogger *_trafficLogger;
    NSString *_deviceID;
    unsigned long long _numDownloadedElements;
    long long _cachedServerType;
    long long _cachedPartitionType;
    NSDate *_dateRequestWentOut;
    CKDOperationMetrics *_metrics;
    NSDictionary *_timingData;
    NSObject<OS_voucher> *_voucher;
    NSString *_cloudKitAuthToken;
    NSString *_iCloudAuthToken;
    NSString *_serverProvidedAutoBugCaptureReason;
    CKDTapToRadarRequest *_serverProvidedTapToRadarRequest;
    NSString *_serverProvidedAutoSysdiagnoseCollectionReason;
    NSMutableDictionary *_countsByRequestOperationType;
    NSMutableDictionary *_overriddenHeaders;
    NSMutableArray *_redirectHistory;
}

@property (readonly, nonatomic) NSString *acceptContentType;
@property (strong, nonatomic) id<CKDAccountInfoProvider> accountInfoProvider; // @synthesize accountInfoProvider=_accountInfoProvider;
@property (readonly, nonatomic) NSDictionary *additionalHeaderValues;
@property (nonatomic) BOOL allowAutomaticRedirects; // @synthesize allowAutomaticRedirects=_allowAutomaticRedirects;
@property (readonly, nonatomic) BOOL allowsBackgroundNetworking;
@property (readonly, nonatomic) BOOL allowsCellularAccess;
@property (readonly, nonatomic) BOOL allowsPowerNapScheduling;
@property (readonly, nonatomic) NSString *authPromptReason;
@property (weak, nonatomic) id<CKDURLRequestAuthRetryDelegate> authRetryDelegate; // @synthesize authRetryDelegate=_authRetryDelegate;
@property (strong, nonatomic) NSString *automatedDeviceGroup; // @synthesize automatedDeviceGroup=_automatedDeviceGroup;
@property (readonly, nonatomic) BOOL automaticallyRetryNetworkFailures;
@property (strong) C2RequestOptions *c2RequestOptions; // @synthesize c2RequestOptions=_c2RequestOptions;
@property (nonatomic) long long cachedPartitionType; // @synthesize cachedPartitionType=_cachedPartitionType;
@property (nonatomic) long long cachedServerType; // @synthesize cachedServerType=_cachedServerType;
@property (getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property (strong, nonatomic) NSDictionary *clientProvidedAdditionalHeaderValues; // @synthesize clientProvidedAdditionalHeaderValues=_clientProvidedAdditionalHeaderValues;
@property (strong, nonatomic) NSString *cloudKitAuthToken; // @synthesize cloudKitAuthToken=_cloudKitAuthToken;
@property (copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property (readonly, nonatomic) CKDClientContext *context;
@property (strong, nonatomic) NSMutableDictionary *countsByRequestOperationType; // @synthesize countsByRequestOperationType=_countsByRequestOperationType;
@property (readonly, nonatomic) long long databaseScope;
@property (strong) NSDate *dateRequestWentOut; // @synthesize dateRequestWentOut=_dateRequestWentOut;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property (nonatomic) BOOL didReceiveResponseBodyData; // @synthesize didReceiveResponseBodyData=_didReceiveResponseBodyData;
@property (nonatomic) BOOL didRetryAuth; // @synthesize didRetryAuth=_didRetryAuth;
@property (readonly, nonatomic) unsigned long long discretionaryNetworkBehavior;
@property (strong) NSError *error; // @synthesize error=_error;
@property (readonly, nonatomic) BOOL expectsResponseBody;
@property (strong, nonatomic) NSDictionary *fakeResponseOperationResultByItemID; // @synthesize fakeResponseOperationResultByItemID=_fakeResponseOperationResultByItemID;
@property (readonly, nonatomic) NSString *flowControlKey;
@property (readonly, nonatomic) BOOL hasRequestBody;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL haveCachedPartitionType; // @synthesize haveCachedPartitionType=_haveCachedPartitionType;
@property (nonatomic) BOOL haveCachedServerType; // @synthesize haveCachedServerType=_haveCachedServerType;
@property (readonly, nonatomic) NSString *httpMethod;
@property (strong, nonatomic) NSString *iCloudAuthToken; // @synthesize iCloudAuthToken=_iCloudAuthToken;
@property (readonly) BOOL isFinished;
@property BOOL isHandlingAuthRetry; // @synthesize isHandlingAuthRetry=_isHandlingAuthRetry;
@property BOOL isWaitingOnAuthRenew; // @synthesize isWaitingOnAuthRenew=_isWaitingOnAuthRenew;
@property (readonly, nonatomic) int isolationLevel;
@property (readonly, nonatomic) NSURL *lastRedirectURL;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *lifecycleQueue; // @synthesize lifecycleQueue=_lifecycleQueue;
@property (strong, nonatomic) CKDOperationMetrics *metrics; // @synthesize metrics=_metrics;
@property (weak, nonatomic) id<CKDURLRequestMetricsDelegate> metricsDelegate; // @synthesize metricsDelegate=_metricsDelegate;
@property BOOL needsAuthRetry; // @synthesize needsAuthRetry=_needsAuthRetry;
@property (readonly, nonatomic) unsigned long long networkServiceType;
@property (nonatomic) unsigned long long numDownloadedElements; // @synthesize numDownloadedElements=_numDownloadedElements;
@property (weak, nonatomic) CKDOperation *operation; // @synthesize operation=_operation;
@property (readonly, nonatomic) NSString *operationGroupID;
@property (readonly, nonatomic) NSString *operationGroupName;
@property (readonly, nonatomic) NSNumber *operationGroupQuantity;
@property (readonly, nonatomic) NSString *operationID;
@property (readonly, nonatomic) NSString *operationIDForProtobuf;
@property (readonly, nonatomic) int operationType;
@property (strong, nonatomic) NSMutableDictionary *overriddenHeaders; // @synthesize overriddenHeaders=_overriddenHeaders;
@property (readonly, nonatomic) long long partitionType;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) BOOL preferAnonymousRequests;
@property (readonly, nonatomic) NSString *protobufOperationName;
@property (readonly, nonatomic) long long qualityOfService;
@property (strong, nonatomic) NSMutableArray *redirectHistory; // @synthesize redirectHistory=_redirectHistory;
@property (strong) NSURLRequest *request; // @synthesize request=_request;
@property (readonly, nonatomic) NSInputStream *requestBodyStream;
@property (readonly, nonatomic) NSString *requestContentType;
@property (readonly, nonatomic) BOOL requestGETPreAuth;
@property (readonly, nonatomic) NSArray *requestOperationClasses;
@property (readonly, nonatomic) NSArray *requestOperations; // @synthesize requestOperations=_requestOperations;
@property (copy, nonatomic) CDUnknownBlockType requestProgressBlock; // @synthesize requestProgressBlock=_requestProgressBlock;
@property (strong, nonatomic) NSDictionary *requestProperties; // @synthesize requestProperties=_requestProperties;
@property (readonly, nonatomic) NSString *requestUUID; // @synthesize requestUUID=_requestUUID;
@property (strong) NSHTTPURLResponse *response; // @synthesize response=_response;
@property (strong, nonatomic) CKDResponseBodyParser *responseBodyParser; // @synthesize responseBodyParser=_responseBodyParser;
@property (readonly, nonatomic) NSDictionary *responseHeaders;
@property (strong, nonatomic) NSMutableSet *responseObjectUUIDs; // @synthesize responseObjectUUIDs=_responseObjectUUIDs;
@property (copy, nonatomic) CDUnknownBlockType responseProgressBlock; // @synthesize responseProgressBlock=_responseProgressBlock;
@property (readonly, nonatomic) long long responseStatusCode; // @synthesize responseStatusCode=_responseStatusCode;
@property (readonly, nonatomic) NSString *sectionID;
@property (readonly, nonatomic) BOOL sendRequestAnonymously;
@property (copy, nonatomic) NSString *serverProvidedAutoBugCaptureReason; // @synthesize serverProvidedAutoBugCaptureReason=_serverProvidedAutoBugCaptureReason;
@property (strong, nonatomic) NSString *serverProvidedAutoSysdiagnoseCollectionReason; // @synthesize serverProvidedAutoSysdiagnoseCollectionReason=_serverProvidedAutoSysdiagnoseCollectionReason;
@property (strong, nonatomic) CKDTapToRadarRequest *serverProvidedTapToRadarRequest; // @synthesize serverProvidedTapToRadarRequest=_serverProvidedTapToRadarRequest;
@property (readonly, nonatomic) long long serverType;
@property (readonly, nonatomic) BOOL shouldCompressBody;
@property (readonly, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (readonly, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property (readonly, nonatomic) CKDProtobufStreamWriter *streamWriter; // @synthesize streamWriter=_streamWriter;
@property (readonly) Class superclass;
@property (strong, nonatomic) CKTimeLogger *timeLogger; // @synthesize timeLogger=_timeLogger;
@property (strong, nonatomic) NSDictionary *timingData; // @synthesize timingData=_timingData;
@property (strong, nonatomic) CKDTrafficLogger *trafficLogger; // @synthesize trafficLogger=_trafficLogger;
@property (strong, nonatomic) CKDProtocolTranslator *translator; // @synthesize translator=_translator;
@property (readonly, nonatomic) NSURL *url;
@property (strong) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property (strong) NSURLSessionDataTask *urlSessionTask; // @synthesize urlSessionTask=_urlSessionTask;
@property (readonly, nonatomic) BOOL usesBackgroundSession;
@property (strong, nonatomic) NSObject<OS_voucher> *voucher; // @synthesize voucher=_voucher;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3;
- (void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2;
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(BOOL)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_CFNetworkTaskIdentifierString;
- (void)_acquireZoneGates;
- (void)_addRequestHeadersToTransmittedSignature:(id)arg1;
- (void)_authTokenWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_errorFromHTTPResponse:(id)arg1;
- (void)_fetchContainerScopedUserID;
- (void)_fetchDeviceID;
- (void)_finishOnLifecycleQueueWithError:(id)arg1;
- (void)_handleAuthFailure;
- (void)_handleBadPasswordResponse;
- (long long)_handlePlistResult:(id)arg1;
- (long long)_handleServerJSONResult:(id)arg1;
- (long long)_handleServerProtobufResult:(id)arg1 rawData:(id)arg2;
- (CDUnknownBlockType)_jsonObjectParsedBlock;
- (void)_loadRequest:(id)arg1;
- (BOOL)_onLifecycleQueue;
- (void)_performRequest;
- (void)_prepareAuthTokens;
- (void)_prepareCloudKitAuthToken;
- (CDUnknownBlockType)_protobufObjectParsedBlock;
- (void)_registerPushTokens;
- (void)_registerRequestOperationTypesForOperations:(id)arg1;
- (void)_renewAuthTokenWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_setupConfiguration;
- (void)_setupMescal;
- (void)_setupPrivateDatabaseURL;
- (void)_setupPublicDatabaseURL;
- (void)_tearDownStreamWriter;
- (void)_triggerAutoBugCaptureWithErrorPayload:(id)arg1;
- (id)_wrapErrorIfNecessary:(id)arg1;
- (CDUnknownBlockType)_xmlObjectParsedBlock;
- (BOOL)allowsAnonymousAccount;
- (BOOL)allowsAuthedAccount;
- (void)cancel;
- (id)ckShortDescription;
- (id)createAssetAuthorizeGetRequestOptionsHeaderInfoWithKey:(id)arg1 value:(id)arg2;
- (void)dealloc;
- (id)defaultParserForContentType:(id)arg1;
- (id)deviceIdentifier;
- (Class)expectedResponseClass;
- (BOOL)expectsSingleObject;
- (void)finishWithError:(id)arg1;
- (id)generateRequestOperations;
- (void)generateSignature:(CDUnknownBlockType)arg1;
- (BOOL)includeContainerInfo;
- (id)init;
- (BOOL)markAsFinished;
- (id)operationRequestWithType:(int)arg1;
- (void)overrideRequestHeader:(id)arg1 withValue:(id)arg2;
- (BOOL)parsingStandaloneMessage;
- (void)performASyncOnLifecycleQueueIfNotFinished:(CDUnknownBlockType)arg1;
- (void)performOnLifecycleQueueIfNotFinished:(CDUnknownBlockType)arg1;
- (void)performRequest;
- (void)prepareRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)reportStatusWithError:(id)arg1;
- (void)requestDidComplete;
- (void)requestDidParse509CertObject:(id)arg1;
- (void)requestDidParseJSONObject:(id)arg1;
- (void)requestDidParseNodeFailure:(id)arg1;
- (void)requestDidParsePlaintextObject:(id)arg1;
- (void)requestDidParsePlistObject:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (Class)requestMessageClass;
- (id)requestOperationCountsByOperationType;
- (id)requestOptions;
- (BOOL)requiresAppPartitionURL;
- (BOOL)requiresConfiguration;
- (BOOL)requiresDeviceID;
- (BOOL)requiresSignature;
- (BOOL)requiresTokenRegistration;
- (BOOL)requiresUserPartitionURL;
- (BOOL)shouldLogResponseBody;
- (id)statusReportWithIndent:(unsigned long long)arg1;
- (void)tearDownResources;
- (void)tearDownResourcesAndReleaseTheZoneLocks;
- (double)timeoutIntervalForRequest;
- (double)timeoutIntervalForResource;
- (void)updateSignatureWithTransmittedBytes:(id)arg1;
- (BOOL)usesCloudKitAuthToken;
- (BOOL)usesiCloudAuthToken;
- (BOOL)validate:(id *)arg1;
- (id)zoneIDsToLock;

@end

