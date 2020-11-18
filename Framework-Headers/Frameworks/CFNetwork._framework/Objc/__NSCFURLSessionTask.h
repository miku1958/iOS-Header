//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSURLSessionTask.h>

@class NSArray, NSData, NSDate, NSDictionary, NSError, NSMutableArray, NSObject, NSProgress, NSString, NSURL, NSURLRequest, NSURLResponse, NSURLSession, NSURLSessionConfiguration, NSURLSessionTaskDependency, NSURLSessionTaskDependencyTree, NSURLSessionTaskHTTPAuthenticator, NSURLSessionTaskMetrics, __NSCFTaskPerformanceTiming;
@protocol NSURLSessionAppleIDContext, OS_dispatch_queue, OS_nw_activity, SZExtractor;

__attribute__((visibility("hidden")))
@interface __NSCFURLSessionTask : NSURLSessionTask
{
    unsigned long long _taskIdentifier;
    NSString *_taskDescription;
    NSString *_loggableDescription;
    NSURLRequest *_originalRequest;
    NSURLRequest *_currentRequest;
    NSURLResponse *_response;
    NSDate *_earliestBeginDate;
    long long _countOfBytesClientExpectsToSend;
    long long _countOfBytesClientExpectsToReceive;
    long long _countOfBytesReceived;
    long long __countOfPendingBytesReceivedEncoded;
    long long __countOfBytesReceivedEncoded;
    long long _countOfBytesSent;
    long long _countOfBytesExpectedToSend;
    long long _countOfBytesExpectedToReceive;
    long long _state;
    NSError *_error;
    struct _CFURLRequest *_currentCFURLRequest;
    double _startTime;
    NSURLSession *_session;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSString *_ledBellyServiceIdentifier;
    NSURL *_ledBellyFallbackURL;
    NSData *__TCPConnectionMetadata;
    unsigned short _TLSNegotiatedCipherSuite;
    float _priorityHint;
    long long _priorityValue;
    double _loadingPriorityValue;
    long long _bytesPerSecondLimitValue;
    struct __PerformanceTiming *_performanceTiming;
    NSDictionary *_backgroundTaskTimingData;
    NSDictionary *_legacySocketStreamProperties;
    struct _CFHSTSPolicy *_cfHSTS;
    struct _CFURLCache *_cfCache;
    struct _CFURLCredentialStorage *_cfCreds;
    struct OpaqueCFHTTPCookieStorage *_cfCookies;
    int _cachePolicy;
    double _timeoutInterval;
    double _timeoutIntervalForResource;
    NSDictionary *_proxySettings;
    NSDictionary *_sslSettings;
    int _cookieAcceptPolicy;
    NSArray *_contentDispositionFallbackArray;
    int _networkServiceType;
    unsigned int _qos;
    long long _suspensionThreshhold;
    NSString *_boundInterfaceIdentifier;
    unsigned long long _allowedProtocolTypes;
    long long _requestPriority;
    long long _expectedWorkload;
    double _timeWindowDelay;
    double _timeWindowDuration;
    NSString *_uniqueIdentifier;
    unsigned int _powerAssertion;
    unsigned int _darkWakePowerAssertion;
    struct __CFDictionary *_cachedSocketStreamProperties;
    NSURLSessionConfiguration *_configuration;
    id _protocolForTask;
    NSURLSessionTaskHTTPAuthenticator *_authenticator;
    NSString *_storagePartitionIdentifier;
    NSURL *_parentDocumentURL;
    NSURL *_siteForCookies;
    NSDictionary *_dependencyInfo;
    NSDictionary *_DuetActivityProperties;
    NSURLSessionTaskDependencyTree *_dependencyTree;
    NSURLSessionTaskDependency *_taskDependency;
    NSString *_pathToDownloadTaskFile;
    NSMutableArray *_transactionMetrics;
    NSURLSessionTaskMetrics *_incompleteTaskMetrics;
    NSObject<OS_nw_activity> *_nw_activity;
    __NSCFTaskPerformanceTiming *_taskPerformanceTiming;
    NSDictionary *_trailers;
    long long _discretionaryOverride;
    id<NSURLSessionAppleIDContext> _appleIDContext;
    NSProgress *_progress;
    NSProgress *_uploadProgress;
    NSProgress *_downloadProgress;
    NSURL *_publishingURL;
    NSURL *_backgroundPublishingURL;
    struct os_unfair_lock_s _unfair_lock;
    NSString *_APSRelayTopic;
    id<SZExtractor> _extractor;
    BOOL _extractorFinishedDecoding;
    BOOL _hasSZExtractor;
    BOOL _doesSZExtractorConsumeExtractedData;
    BOOL _shouldSkipPreferredClientCertificateLookup;
    BOOL _cacheOnly;
    BOOL _preventsSystemHTTPProxyAuthentication;
    BOOL _requiresSecureHTTPSProxyConnection;
    BOOL _shouldPipelineHTTP;
    BOOL _shouldUsePipelineHeuristics;
    BOOL _shouldSkipPipelineProbe;
    BOOL _shouldHandleCookies;
    BOOL _isTopLevelNavigation;
    BOOL _prohibitAuthUI;
    BOOL _strictContentLength;
    BOOL _connectionIsCellular;
    BOOL _disallowCellular;
    BOOL _allowsCellular;
    BOOL _isInUpload;
    BOOL _undeterminedUploadProgressState;
    BOOL _undeterminedDownloadProgressState;
    BOOL _progressReportingFinished;
    BOOL _allowsQUIC;
    BOOL _preventsIdleSystemSleep;
    BOOL _shouldReportTimingDataToAWD;
    BOOL _preconnect;
    BOOL _authenticatorConfiguredViaTaskProperty;
    BOOL _extractorPreparedForExtraction;
}

+ (BOOL)supportsSecureCoding;
- (id)_APSRelayTopic;
- (id)_DuetActivityProperties;
- (id)_TCPConnectionMetadata;
- (unsigned short)_TLSNegotiatedCipherSuite;
- (unsigned long long)_allowedProtocolTypes;
- (BOOL)_allowsCellular;
- (BOOL)_allowsQUIC;
- (void)_appendCountOfPendingBytesReceivedEncoded:(long long)arg1;
- (id)_appleIDContext;
- (BOOL)_authenticatorConfiguredViaTaskProperty;
- (id)_backgroundPublishingURL;
- (id)_backgroundTaskTimingData;
- (id)_boundInterfaceIdentifier;
- (long long)_bytesPerSecondLimit;
- (BOOL)_cacheOnly;
- (int)_cachePolicy;
- (struct _CFURLCache *)_cfCache;
- (struct OpaqueCFHTTPCookieStorage *)_cfCookies;
- (struct _CFURLCredentialStorage *)_cfCreds;
- (struct _CFHSTSPolicy *)_cfHSTS;
- (void)_completeUploadProgress;
- (BOOL)_connectionIsCellular;
- (void)_consumePendingBytesReceivedEncoded;
- (id)_contentDispositionFallbackArray;
- (int)_cookieAcceptPolicy;
- (struct __CFDictionary *)_copyATSState;
- (struct _CFURLRequest *)_copyCurrentCFURLRequest;
- (struct _CFHSTSPolicy *)_copyHSTSPolicy;
- (struct _CFURLRequest *)_copyOriginalCFURLRequest;
- (struct __CFDictionary *)_copySocketStreamProperties;
- (long long)_countOfBytesReceivedEncoded;
- (long long)_countOfPendingBytesReceivedEncoded;
- (int)_createAssertionWithType:(struct __CFString *)arg1 name:(struct __CFString *)arg2 assertion:(unsigned int *)arg3;
- (const struct XCookieStorage *)_createXCookieStorage;
- (const struct XCredentialStorage *)_createXCredentialStorage;
- (struct _CFURLRequest *)_currentCFURLRequest;
- (unsigned int)_darkWakePowerAssertion;
- (id)_dependencyInfo;
- (BOOL)_disallowCellular;
- (long long)_discretionaryOverride;
- (BOOL)_doesSZExtractorConsumeExtractedData;
- (long long)_expectedWorkload;
- (id)_extractor;
- (BOOL)_extractorFinishedDecoding;
- (BOOL)_extractorPreparedForExtraction;
- (void)_finishProgressReporting;
- (void)_getAuthenticationHeadersForResponse:(struct _CFURLResponse *)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (struct __CFSet *)_getAuthenticatorStatusCodes;
- (BOOL)_hasSZExtractor;
- (id)_incompleteTaskMetrics;
- (void)_initializeTimingDataWithSessionConfiguration:(id)arg1;
- (BOOL)_isTopLevelNavigation;
- (id)_ledBellyFallbackURL;
- (id)_ledBellyServiceIdentifier;
- (id)_legacySocketStreamProperties;
- (double)_loadingPriority;
- (double)_loadingPriorityValue;
- (id)_loggableDescription;
- (int)_networkServiceType;
- (id)_nw_activity;
- (void)_onSessionQueue_cleanupAndBreakCycles;
- (void)_onqueue_adjustPriorityHint:(float)arg1;
- (void)_onqueue_releasePowerAsssertion;
- (id)_pathToDownloadTaskFile;
- (struct __PerformanceTiming *)_performanceTiming;
- (unsigned int)_powerAssertion;
- (BOOL)_preconnect;
- (void)_prepareNewTimingDataContainer;
- (BOOL)_preventsIdleSystemSleep;
- (BOOL)_preventsSystemHTTPProxyAuthentication;
- (long long)_priority;
- (long long)_priorityValue;
- (BOOL)_prohibitAuthUI;
- (id)_protocolForTask;
- (id)_proxySettings;
- (id)_publishingURL;
- (unsigned int)_qos;
- (void)_releasePreventIdleSleepAssertionIfAppropriate;
- (void)_reportTimingDataToAWD:(id)arg1;
- (long long)_requestPriority;
- (BOOL)_requiresSecureHTTPSProxyConnection;
- (void)_setAppleIDContext:(id)arg1;
- (void)_setConnectionIsCellular:(BOOL)arg1;
- (void)_setExplicitCookieStorage:(struct OpaqueCFHTTPCookieStorage *)arg1;
- (void)_setExplicitStorageSession:(struct __CFURLStorageSession *)arg1;
- (void)_setSocketProperties:(struct __CFDictionary *)arg1 connectionProperties:(struct __CFDictionary *)arg2;
- (BOOL)_shouldHandleCookies;
- (BOOL)_shouldPipelineHTTP;
- (BOOL)_shouldReportTimingDataToAWD;
- (BOOL)_shouldSkipPipelineProbe;
- (BOOL)_shouldSkipPreferredClientCertificateLookup;
- (BOOL)_shouldUsePipelineHeuristics;
- (id)_siteForCookies;
- (id)_sslSettings;
- (id)_storagePartitionIdentifier;
- (BOOL)_strictContentLength;
- (long long)_suspensionThreshhold;
- (void)_takePreventIdleSleepAssertionIfAppropriate;
- (id)_taskPerformanceTiming;
- (double)_timeWindowDelay;
- (double)_timeWindowDuration;
- (double)_timeoutInterval;
- (double)_timeoutIntervalForResource;
- (id)_timingData;
- (id)_trailers;
- (id)_transactionMetrics;
- (id)_uniqueIdentifier;
- (void)_withXURLCache:(CDUnknownBlockType)arg1;
- (void)addAdditionalHeadersToRequest:(struct _CFURLRequest *)arg1;
- (void)adjustConditionalConnectionProperties:(struct __CFDictionary *)arg1;
- (id)authenticator;
- (void)cancel;
- (long long)computeAdjustedPoolPriority;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)countOfBytesClientExpectsToReceive;
- (long long)countOfBytesClientExpectsToSend;
- (long long)countOfBytesExpectedToReceive;
- (long long)countOfBytesExpectedToSend;
- (long long)countOfBytesReceived;
- (long long)countOfBytesSent;
- (id)currentRequest;
- (id)currentRequest_URL;
- (id)currentRequest_mainDocumentURL;
- (void)dealloc;
- (id)dependencyTree;
- (id)description;
- (id)earliestBeginDate;
- (id)error;
- (id)initWithOriginalRequest:(id)arg1 updatedRequest:(id)arg2 ident:(unsigned long long)arg3 session:(id)arg4;
- (id)initWithTask:(id)arg1;
- (void)initializeHTTPAuthenticatorWithAppleIDContext:(id)arg1 statusCodes:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)originalRequest;
- (float)priority;
- (id)progress;
- (id)response;
- (void)resume;
- (id)session;
- (void)setAuthenticator:(id)arg1;
- (void)setCountOfBytesClientExpectsToReceive:(long long)arg1;
- (void)setCountOfBytesClientExpectsToSend:(long long)arg1;
- (void)setCountOfBytesExpectedToReceive:(long long)arg1;
- (void)setCountOfBytesExpectedToSend:(long long)arg1;
- (void)setCountOfBytesReceived:(long long)arg1;
- (void)setCountOfBytesSent:(long long)arg1;
- (void)setCurrentRequest:(id)arg1;
- (void)setDependencyTree:(id)arg1;
- (void)setEarliestBeginDate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setOriginalRequest:(id)arg1;
- (void)setPriority:(float)arg1;
- (void)setResponse:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setState:(long long)arg1;
- (void)setTaskDependency:(id)arg1;
- (void)setTaskDescription:(id)arg1;
- (void)setTaskIdentifier:(unsigned long long)arg1;
- (void)set_APSRelayTopic:(id)arg1;
- (void)set_DuetActivityProperties:(id)arg1;
- (void)set_TCPConnectionMetadata:(id)arg1;
- (void)set_TLSNegotiatedCipherSuite:(unsigned short)arg1;
- (void)set_allowedProtocolTypes:(unsigned long long)arg1;
- (void)set_allowsCellular:(BOOL)arg1;
- (void)set_allowsQUIC:(BOOL)arg1;
- (void)set_authenticatorConfiguredViaTaskProperty:(BOOL)arg1;
- (void)set_backgroundPublishingURL:(id)arg1;
- (void)set_backgroundTaskTimingData:(id)arg1;
- (void)set_boundInterfaceIdentifier:(id)arg1;
- (void)set_bytesPerSecondLimit:(long long)arg1;
- (void)set_cacheOnly:(BOOL)arg1;
- (void)set_cachePolicy:(int)arg1;
- (void)set_cfCache:(struct _CFURLCache *)arg1;
- (void)set_cfCookies:(struct OpaqueCFHTTPCookieStorage *)arg1;
- (void)set_cfCreds:(struct _CFURLCredentialStorage *)arg1;
- (void)set_cfHSTS:(struct _CFHSTSPolicy *)arg1;
- (void)set_contentDispositionFallbackArray:(id)arg1;
- (void)set_cookieAcceptPolicy:(int)arg1;
- (void)set_countOfBytesReceivedEncoded:(long long)arg1;
- (void)set_countOfPendingBytesReceivedEncoded:(long long)arg1;
- (void)set_currentCFURLRequest:(struct _CFURLRequest *)arg1;
- (void)set_darkWakePowerAssertion:(unsigned int)arg1;
- (void)set_dependencyInfo:(id)arg1;
- (void)set_disallowCellular:(BOOL)arg1;
- (void)set_discretionaryOverride:(long long)arg1;
- (void)set_doesSZExtractorConsumeExtractedData:(BOOL)arg1;
- (void)set_expectedWorkload:(long long)arg1;
- (void)set_extractor:(id)arg1;
- (void)set_extractorFinishedDecoding:(BOOL)arg1;
- (void)set_extractorPreparedForExtraction:(BOOL)arg1;
- (void)set_hasSZExtractor:(BOOL)arg1;
- (void)set_incompleteTaskMetrics:(id)arg1;
- (void)set_isTopLevelNavigation:(BOOL)arg1;
- (void)set_ledBellyFallbackURL:(id)arg1;
- (void)set_ledBellyServiceIdentifier:(id)arg1;
- (void)set_legacySocketStreamProperties:(id)arg1;
- (void)set_loadingPriority:(double)arg1;
- (void)set_loadingPriorityValue:(double)arg1;
- (void)set_networkServiceType:(int)arg1;
- (void)set_nw_activity:(id)arg1;
- (void)set_pathToDownloadTaskFile:(id)arg1;
- (void)set_performanceTiming:(struct __PerformanceTiming *)arg1;
- (void)set_powerAssertion:(unsigned int)arg1;
- (void)set_preconnect:(BOOL)arg1;
- (void)set_preventsIdleSystemSleep:(BOOL)arg1;
- (void)set_preventsSystemHTTPProxyAuthentication:(BOOL)arg1;
- (void)set_priority:(long long)arg1;
- (void)set_priorityValue:(long long)arg1;
- (void)set_prohibitAuthUI:(BOOL)arg1;
- (void)set_protocolForTask:(id)arg1;
- (void)set_proxySettings:(id)arg1;
- (void)set_publishingURL:(id)arg1;
- (void)set_qos:(unsigned int)arg1;
- (void)set_requestPriority:(long long)arg1;
- (void)set_requiresSecureHTTPSProxyConnection:(BOOL)arg1;
- (void)set_shouldHandleCookies:(BOOL)arg1;
- (void)set_shouldPipelineHTTP:(BOOL)arg1;
- (void)set_shouldReportTimingDataToAWD:(BOOL)arg1;
- (void)set_shouldSkipPipelineProbe:(BOOL)arg1;
- (void)set_shouldSkipPreferredClientCertificateLookup:(BOOL)arg1;
- (void)set_shouldUsePipelineHeuristics:(BOOL)arg1;
- (void)set_siteForCookies:(id)arg1;
- (void)set_sslSettings:(id)arg1;
- (void)set_storagePartitionIdentifier:(id)arg1;
- (void)set_strictContentLength:(BOOL)arg1;
- (void)set_suspensionThreshhold:(long long)arg1;
- (void)set_taskPerformanceTiming:(id)arg1;
- (void)set_timeWindowDelay:(double)arg1;
- (void)set_timeWindowDuration:(double)arg1;
- (void)set_timeoutInterval:(double)arg1;
- (void)set_timeoutIntervalForResource:(double)arg1;
- (void)set_trailers:(id)arg1;
- (void)set_uniqueIdentifier:(id)arg1;
- (BOOL)shouldHandleCookiesAndSchemeIsAppropriate;
- (double)startTime;
- (long long)state;
- (void)suspend;
- (id)taskDependency;
- (id)taskDescription;
- (unsigned long long)taskIdentifier;
- (void)updateCurrentRequest:(id)arg1;
- (id)workQueue;

@end

