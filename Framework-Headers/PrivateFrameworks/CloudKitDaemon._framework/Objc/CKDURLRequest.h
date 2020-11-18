//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKDFlowControllable-Protocol.h>
#import <CloudKitDaemon/CKDProtobufMessageSigningDelegate-Protocol.h>
#import <CloudKitDaemon/CKDURLSessionTaskDelegate-Protocol.h>
#import <CloudKitDaemon/CKDZoneGatekeeperWaiter-Protocol.h>

@class CKBlockingAsyncQueue, CKDClientContext, CKDOperationMetrics, CKDProtobufStreamWriter, CKDProtocolTranslator, CKDResponseBodyParser, CKTimeLogger, NSArray, NSData, NSDate, NSDictionary, NSError, NSFileHandle, NSHTTPURLResponse, NSInputStream, NSMutableArray, NSMutableData, NSMutableDictionary, NSOperationQueue, NSString, NSURL, NSURLRequest, NSURLSessionConfiguration, NSURLSessionDataTask;
@protocol CKDAccountInfoProvider, CKDURLRequestAuthRetryDelegate, CKDURLRequestMetricsDelegate, OS_dispatch_queue, OS_os_activity, OS_voucher;

__attribute__((visibility("hidden")))
@interface CKDURLRequest : NSObject <CKDURLSessionTaskDelegate, CKDZoneGatekeeperWaiter, CKDProtobufMessageSigningDelegate, CKDFlowControllable>
{
    id<CKDAccountInfoProvider> _accountInfoProvider;
    long long _responseStatusCode;
    NSString *_requestUUID;
    BOOL _didSendRequest;
    BOOL _didFinishLoading;
    BOOL _finished;
    BOOL _didRetryAuth;
    BOOL _didRetrySignature;
    CKDResponseBodyParser *_responseBodyParser;
    BOOL _allowAutomaticRedirects;
    CDUnknownBlockType _requestProgressBlock;
    CDUnknownBlockType _responseProgressBlock;
    CDUnknownBlockType _completionBlock;
    NSMutableDictionary *_overriddenHeaders;
    NSMutableArray *_redirectHistory;
    NSData *_fakeResponseData;
    BOOL _haveParsedFakeResponseData;
    CKDProtobufStreamWriter *_streamWriter;
    struct CC_SHA256state_st _mescalTxSignature;
    struct CC_SHA256state_st _mescalRxSignature;
    NSMutableData *_receivedMescalData;
    NSObject<OS_os_activity> *_osActivity;
    NSObject<OS_os_activity> *_transmissionActivity;
    BOOL _allowsCellularAccess;
    BOOL _allowsPowerNapScheduling;
    BOOL _preferAnonymousRequests;
    BOOL _allowsBackgroundNetworking;
    BOOL _needsAuthRetry;
    BOOL _isWaitingOnAuthRenew;
    BOOL _isHandlingAuthRetry;
    BOOL _cancelled;
    BOOL _haveCachedServerType;
    BOOL _haveCachedPartitionType;
    NSDictionary *_requestProperties;
    CKTimeLogger *_timeLogger;
    id<CKDURLRequestMetricsDelegate> _metricsDelegate;
    id<CKDURLRequestAuthRetryDelegate> _authRetryDelegate;
    double _timeoutIntervalForRequest;
    double _timeoutIntervalForResource;
    CKDClientContext *_context;
    long long _databaseScope;
    CKDProtocolTranslator *_translator;
    long long _qualityOfService;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_sourceApplicationSecondaryIdentifier;
    NSString *_authPromptReason;
    NSDictionary *_clientProvidedAdditionalHeaderValues;
    NSArray *_requestOperations;
    NSString *_flowControlKey;
    NSString *_hardwareIDOverride;
    NSDictionary *_fakeResponseOperationResultByItemID;
    NSError *_error;
    NSOperationQueue *_delegateQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSURLSessionConfiguration *_sessionConfiguration;
    NSString *_sessionConfigurationName;
    NSURLSessionDataTask *_urlSessionTask;
    NSURLRequest *_request;
    NSHTTPURLResponse *_response;
    NSFileHandle *_responseFileHandle;
    NSFileHandle *_requestFileHandle;
    NSFileHandle *_binaryResponseFileHandle;
    NSFileHandle *_binaryRequestFileHandle;
    CKBlockingAsyncQueue *_trafficQueue;
    NSString *_responseLogFilePath;
    NSString *_requestLogFilePath;
    NSString *_binaryResponseLogFilePath;
    NSString *_binaryRequestLogFilePath;
    NSString *_deviceID;
    unsigned long long _numDownloadedElements;
    long long _cachedServerType;
    long long _cachedPartitionType;
    NSDate *_dateRequestWentOut;
    CKDOperationMetrics *_metrics;
    NSDictionary *_timingData;
    NSObject<OS_voucher> *_voucher;
    NSString *_cloudKitAuthToken;
}

@property (readonly, nonatomic) NSString *acceptContentType;
@property (strong, nonatomic) id<CKDAccountInfoProvider> accountInfoProvider; // @synthesize accountInfoProvider=_accountInfoProvider;
@property (readonly, nonatomic) NSDictionary *additionalHeaderValues;
@property (nonatomic) BOOL allowAutomaticRedirects; // @synthesize allowAutomaticRedirects=_allowAutomaticRedirects;
@property (nonatomic) BOOL allowsBackgroundNetworking; // @synthesize allowsBackgroundNetworking=_allowsBackgroundNetworking;
@property (nonatomic) BOOL allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property (nonatomic) BOOL allowsPowerNapScheduling; // @synthesize allowsPowerNapScheduling=_allowsPowerNapScheduling;
@property (strong, nonatomic) NSString *authPromptReason; // @synthesize authPromptReason=_authPromptReason;
@property (weak, nonatomic) id<CKDURLRequestAuthRetryDelegate> authRetryDelegate; // @synthesize authRetryDelegate=_authRetryDelegate;
@property (strong, nonatomic) NSFileHandle *binaryRequestFileHandle; // @synthesize binaryRequestFileHandle=_binaryRequestFileHandle;
@property (strong, nonatomic) NSString *binaryRequestLogFilePath; // @synthesize binaryRequestLogFilePath=_binaryRequestLogFilePath;
@property (strong, nonatomic) NSFileHandle *binaryResponseFileHandle; // @synthesize binaryResponseFileHandle=_binaryResponseFileHandle;
@property (strong, nonatomic) NSString *binaryResponseLogFilePath; // @synthesize binaryResponseLogFilePath=_binaryResponseLogFilePath;
@property (nonatomic) long long cachedPartitionType; // @synthesize cachedPartitionType=_cachedPartitionType;
@property (nonatomic) long long cachedServerType; // @synthesize cachedServerType=_cachedServerType;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property (getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property (strong, nonatomic) NSDictionary *clientProvidedAdditionalHeaderValues; // @synthesize clientProvidedAdditionalHeaderValues=_clientProvidedAdditionalHeaderValues;
@property (strong, nonatomic) NSString *cloudKitAuthToken; // @synthesize cloudKitAuthToken=_cloudKitAuthToken;
@property (copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property (strong, nonatomic) CKDClientContext *context; // @synthesize context=_context;
@property (nonatomic) long long databaseScope; // @synthesize databaseScope=_databaseScope;
@property (strong) NSDate *dateRequestWentOut; // @synthesize dateRequestWentOut=_dateRequestWentOut;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) NSOperationQueue *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property (strong) NSError *error; // @synthesize error=_error;
@property (strong, nonatomic) NSDictionary *fakeResponseOperationResultByItemID; // @synthesize fakeResponseOperationResultByItemID=_fakeResponseOperationResultByItemID;
@property (strong, nonatomic) NSString *flowControlKey; // @synthesize flowControlKey=_flowControlKey;
@property (strong, nonatomic) NSString *hardwareIDOverride; // @synthesize hardwareIDOverride=_hardwareIDOverride;
@property (readonly, nonatomic) BOOL hasRequestBody;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL haveCachedPartitionType; // @synthesize haveCachedPartitionType=_haveCachedPartitionType;
@property (nonatomic) BOOL haveCachedServerType; // @synthesize haveCachedServerType=_haveCachedServerType;
@property (readonly, nonatomic) NSString *httpMethod;
@property (readonly) BOOL isFinished;
@property BOOL isHandlingAuthRetry; // @synthesize isHandlingAuthRetry=_isHandlingAuthRetry;
@property BOOL isWaitingOnAuthRenew; // @synthesize isWaitingOnAuthRenew=_isWaitingOnAuthRenew;
@property (readonly, nonatomic) int isolationLevel;
@property (readonly, nonatomic) NSURL *lastRedirectURL;
@property (strong, nonatomic) CKDOperationMetrics *metrics; // @synthesize metrics=_metrics;
@property (weak, nonatomic) id<CKDURLRequestMetricsDelegate> metricsDelegate; // @synthesize metricsDelegate=_metricsDelegate;
@property BOOL needsAuthRetry; // @synthesize needsAuthRetry=_needsAuthRetry;
@property (nonatomic) unsigned long long numDownloadedElements; // @synthesize numDownloadedElements=_numDownloadedElements;
@property (readonly, nonatomic) int operationType;
@property (readonly, nonatomic) long long partitionType;
@property (readonly, nonatomic) NSString *path;
@property (nonatomic) BOOL preferAnonymousRequests; // @synthesize preferAnonymousRequests=_preferAnonymousRequests;
@property (readonly, nonatomic) NSString *protobufOperationName;
@property (nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property (strong) NSURLRequest *request; // @synthesize request=_request;
@property (readonly, nonatomic) NSInputStream *requestBodyStream;
@property (readonly, nonatomic) NSString *requestContentType;
@property (strong, nonatomic) NSFileHandle *requestFileHandle; // @synthesize requestFileHandle=_requestFileHandle;
@property (strong, nonatomic) NSString *requestLogFilePath; // @synthesize requestLogFilePath=_requestLogFilePath;
@property (readonly, nonatomic) NSArray *requestOperationClasses;
@property (readonly, nonatomic) NSArray *requestOperations; // @synthesize requestOperations=_requestOperations;
@property (copy, nonatomic) CDUnknownBlockType requestProgressBlock; // @synthesize requestProgressBlock=_requestProgressBlock;
@property (strong, nonatomic) NSDictionary *requestProperties; // @synthesize requestProperties=_requestProperties;
@property (readonly, nonatomic) NSString *requestUUID; // @synthesize requestUUID=_requestUUID;
@property (strong) NSHTTPURLResponse *response; // @synthesize response=_response;
@property (strong, nonatomic) CKDResponseBodyParser *responseBodyParser; // @synthesize responseBodyParser=_responseBodyParser;
@property (strong, nonatomic) NSFileHandle *responseFileHandle; // @synthesize responseFileHandle=_responseFileHandle;
@property (readonly, nonatomic) NSDictionary *responseHeaders;
@property (strong, nonatomic) NSString *responseLogFilePath; // @synthesize responseLogFilePath=_responseLogFilePath;
@property (copy, nonatomic) CDUnknownBlockType responseProgressBlock; // @synthesize responseProgressBlock=_responseProgressBlock;
@property (readonly, nonatomic) long long responseStatusCode; // @synthesize responseStatusCode=_responseStatusCode;
@property (readonly, nonatomic) NSString *sectionID;
@property (readonly, nonatomic) long long serverType;
@property (strong) NSURLSessionConfiguration *sessionConfiguration; // @synthesize sessionConfiguration=_sessionConfiguration;
@property (strong) NSString *sessionConfigurationName; // @synthesize sessionConfigurationName=_sessionConfigurationName;
@property (readonly, nonatomic) BOOL shouldCompressBody;
@property (strong, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property (strong, nonatomic) NSString *sourceApplicationSecondaryIdentifier; // @synthesize sourceApplicationSecondaryIdentifier=_sourceApplicationSecondaryIdentifier;
@property (readonly, nonatomic) CKDProtobufStreamWriter *streamWriter; // @synthesize streamWriter=_streamWriter;
@property (readonly) Class superclass;
@property (strong, nonatomic) CKTimeLogger *timeLogger; // @synthesize timeLogger=_timeLogger;
@property (nonatomic) double timeoutIntervalForRequest; // @synthesize timeoutIntervalForRequest=_timeoutIntervalForRequest;
@property (nonatomic) double timeoutIntervalForResource; // @synthesize timeoutIntervalForResource=_timeoutIntervalForResource;
@property (strong, nonatomic) NSDictionary *timingData; // @synthesize timingData=_timingData;
@property (strong, nonatomic) CKBlockingAsyncQueue *trafficQueue; // @synthesize trafficQueue=_trafficQueue;
@property (strong, nonatomic) CKDProtocolTranslator *translator; // @synthesize translator=_translator;
@property (readonly, nonatomic) NSURL *url;
@property (strong) NSURLSessionDataTask *urlSessionTask; // @synthesize urlSessionTask=_urlSessionTask;
@property (readonly, nonatomic) BOOL usesBackgroundSession;
@property (strong, nonatomic) NSObject<OS_voucher> *voucher; // @synthesize voucher=_voucher;

+ (id)_sharedCookieStorage;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)URLSessionDataTask:(id)arg1 didReceiveData:(id)arg2;
- (void)URLSessionDataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSessionTask:(id)arg1 conditionalRequirementsChanged:(BOOL)arg2;
- (void)URLSessionTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)URLSessionTask:(id)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (void)URLSessionTask:(id)arg1 needNewBodyStream:(CDUnknownBlockType)arg2;
- (id)URLSessionTask:(id)arg1 requestForEstablishedConnection:(id)arg2;
- (void)URLSessionTask:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSessionTaskIsWaitingForConnection:(id)arg1;
- (void)_acquireZoneGates;
- (void)_addRequestHeadersToTransmittedSignature:(id)arg1;
- (void)_addResponseHeadersToReceivedSignature:(id)arg1;
- (id)_binaryRequestFileHandle;
- (id)_binaryResponseFileHandle;
- (id)_errorFromHTTPResponse:(id)arg1;
- (void)_fetchContainerScopedUserID;
- (void)_fetchDeviceID;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_flushRequestResponseLogs;
- (void)_handleAuthFailure;
- (void)_handleBadPasswordResponse;
- (void)_handleMescalSignatureResponse:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (long long)_handlePlistResult:(id)arg1;
- (long long)_handleServerJSONResult:(id)arg1;
- (long long)_handleServerProtobufResult:(id)arg1 rawData:(id)arg2;
- (CDUnknownBlockType)_jsonObjectParsedBlock;
- (void)_loadRequest:(id)arg1;
- (void)_logHTTPResponse:(id)arg1;
- (void)_logParsedObject:(id)arg1;
- (id)_logQueue;
- (void)_logRequest:(id)arg1;
- (void)_logRequestObject:(id)arg1;
- (void)_makeTrafficFileHandleWithPrefix:(id)arg1 outPath:(id *)arg2 outHandle:(id *)arg3;
- (void)_performRequest;
- (void)_populateURLSessionConfiguration;
- (void)_prepareAuthTokens;
- (void)_prepareCloudKitAuthToken;
- (CDUnknownBlockType)_protobufObjectParsedBlock;
- (void)_registerPushTokens;
- (id)_requestFileHandle;
- (id)_responseFileHandle;
- (void)_setupConfiguration;
- (void)_setupMescal;
- (void)_setupPrivateDatabaseURL;
- (void)_setupPublicDatabaseURL;
- (BOOL)_shouldLogTraffic;
- (void)_tearDownStreamWriter;
- (id)_versionHeader;
- (CDUnknownBlockType)_xmlObjectParsedBlock;
- (BOOL)allowsAnonymousAccount;
- (BOOL)allowsAuthedAccount;
- (unsigned long long)cachePolicy;
- (void)cancel;
- (id)ckShortDescription;
- (void)dealloc;
- (id)defaultParserForContentType:(id)arg1;
- (Class)expectedResponseClass;
- (BOOL)expectsSingleObject;
- (void)finishWithError:(id)arg1;
- (void)generateSignature:(CDUnknownBlockType)arg1;
- (BOOL)includeContainerInfo;
- (id)init;
- (BOOL)markAsFinished;
- (id)operationRequestWithType:(int)arg1;
- (void)overrideRequestHeader:(id)arg1 withValue:(id)arg2;
- (void)performOnCallbackQueueIfNotFinished:(CDUnknownBlockType)arg1;
- (void)performRequest;
- (void)prepareRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)reportStatusWithError:(id)arg1;
- (void)requestDidParse509CertObject:(id)arg1;
- (void)requestDidParseJSONObject:(id)arg1;
- (void)requestDidParseNodeFailure:(id)arg1;
- (void)requestDidParsePlaintextObject:(id)arg1;
- (void)requestDidParsePlistObject:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (BOOL)requiresAppPartitionURL;
- (BOOL)requiresConfiguration;
- (BOOL)requiresDeviceID;
- (BOOL)requiresSignature;
- (BOOL)requiresTokenRegistration;
- (BOOL)requiresUserPartitionURL;
- (BOOL)sendRequestAnonymously;
- (BOOL)shouldLogResponseBody;
- (id)statusReportWithIndent:(unsigned long long)arg1;
- (void)tearDownResources;
- (void)tearDownResourcesAndReleaseTheZoneLocks;
- (void)updateSignatureWithReceivedBytes:(id)arg1;
- (void)updateSignatureWithTransmittedBytes:(id)arg1;
- (BOOL)validate:(id *)arg1;
- (id)zoneIDsToLock;

@end
