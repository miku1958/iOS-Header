//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSURLSessionTask.h>

@class NSArray, NSDictionary, NSError, NSMutableArray, NSObject, NSString, NSURL, NSURLRequest, NSURLResponse, NSURLSession, NSURLSessionConfiguration, NSURLSessionTaskDependency, NSURLSessionTaskDependencyTree, NSURLSessionTaskHTTPAuthenticator;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __NSCFURLSessionTask : NSURLSessionTask
{
    unsigned long long _taskIdentifier;
    NSString *_taskDescription;
    NSURLRequest *_originalRequest;
    NSURLRequest *_currentRequest;
    NSURLResponse *_response;
    long long _countOfBytesReceived;
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
    float _priorityHint;
    long long _priorityValue;
    double _loadingPriorityValue;
    long long _bytesPerSecondLimitValue;
    struct __PerformanceTiming *_performanceTiming;
    NSDictionary *_backgroundTaskTimingData;
    BOOL _shouldSkipPreferredClientCertificateLookup;
    BOOL _cacheOnly;
    NSDictionary *_legacySocketStreamProperties;
    struct _CFHSTSPolicy *_cfHSTS;
    struct _CFURLCache *_cfCache;
    struct _CFURLCredentialStorage *_cfCreds;
    struct OpaqueCFHTTPCookieStorage *_cfCookies;
    int _cachePolicy;
    double _timeoutInterval;
    NSDictionary *_proxySettings;
    NSDictionary *_sslSettings;
    BOOL _shouldPipelineHTTP;
    BOOL _shouldUsePipelineHeuristics;
    BOOL _shouldSkipPipelineProbe;
    BOOL _shouldHandleCookies;
    int _cookieAcceptPolicy;
    BOOL _preventsIdleSystemSleep;
    NSArray *_contentDispositionFallbackArray;
    BOOL _allowsCellular;
    int _networkServiceType;
    BOOL _prohibitAuthUI;
    BOOL _strictContentLength;
    long long _suspensionThreshhold;
    NSString *_boundInterfaceIdentifier;
    BOOL _disallowCellular;
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
    BOOL _connectionIsCellular;
    id _protocolForTask;
    NSURLSessionTaskHTTPAuthenticator *_authenticator;
    BOOL _shouldReportTimingDataToAWD;
    NSString *_storagePartitionIdentifier;
    NSDictionary *_dependencyInfo;
    NSDictionary *_DuetActivityProperties;
    NSURLSessionTaskDependencyTree *_dependencyTree;
    NSURLSessionTaskDependency *_taskDependency;
    NSString *_pathToDownloadTaskFile;
    NSMutableArray *_transactionMetrics;
    NSDictionary *_trailers;
}

+ (BOOL)supportsSecureCoding;
- (id)_DuetActivityProperties;
- (unsigned long long)_allowedProtocolTypes;
- (BOOL)_allowsCellular;
- (id)_backgroundTaskTimingData;
- (id)_boundInterfaceIdentifier;
- (long long)_bytesPerSecondLimit;
- (BOOL)_cacheOnly;
- (int)_cachePolicy;
- (struct _CFURLCache *)_cfCache;
- (struct OpaqueCFHTTPCookieStorage *)_cfCookies;
- (struct _CFURLCredentialStorage *)_cfCreds;
- (struct _CFHSTSPolicy *)_cfHSTS;
- (BOOL)_connectionIsCellular;
- (id)_contentDispositionFallbackArray;
- (int)_cookieAcceptPolicy;
- (struct __CFDictionary *)_copyATSState;
- (struct _CFURLRequest *)_copyCurrentCFURLRequest;
- (struct _CFHSTSPolicy *)_copyHSTSPolicy;
- (struct _CFURLRequest *)_copyOriginalCFURLRequest;
- (struct __CFDictionary *)_copySocketStreamProperties;
- (int)_createAssertionWithType:(struct __CFString *)arg1 name:(struct __CFString *)arg2 assertion:(unsigned int *)arg3;
- (const struct XCookieStorage *)_createXCookieStorage;
- (const struct XCredentialStorage *)_createXCredentialStorage;
- (const struct XURLCache *)_createXURLCache;
- (struct _CFURLRequest *)_currentCFURLRequest;
- (unsigned int)_darkWakePowerAssertion;
- (id)_dependencyInfo;
- (BOOL)_disallowCellular;
- (long long)_expectedWorkload;
- (void)_getAuthenticationHeadersForResponse:(struct _CFURLResponse *)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (struct __CFSet *)_getAuthenticatorStatusCodes;
- (void)_initializeTimingDataWithSessionConfiguration:(id)arg1;
- (id)_ledBellyFallbackURL;
- (id)_ledBellyServiceIdentifier;
- (id)_legacySocketStreamProperties;
- (double)_loadingPriority;
- (double)_loadingPriorityValue;
- (int)_networkServiceType;
- (void)_onSessionQueue_cleanupAndBreakCycles;
- (void)_onqueue_adjustPriorityHint:(float)arg1;
- (void)_onqueue_releasePowerAsssertion;
- (id)_pathToDownloadTaskFile;
- (struct __PerformanceTiming *)_performanceTiming;
- (unsigned int)_powerAssertion;
- (void)_prepareNewTimingDataContainer;
- (BOOL)_preventsIdleSystemSleep;
- (long long)_priority;
- (long long)_priorityValue;
- (BOOL)_prohibitAuthUI;
- (id)_protocolForTask;
- (id)_proxySettings;
- (void)_releasePreventIdleSleepAssertionIfAppropriate;
- (void)_reportTimingDataToAWD;
- (long long)_requestPriority;
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
- (id)_sslSettings;
- (id)_storagePartitionIdentifier;
- (BOOL)_strictContentLength;
- (long long)_suspensionThreshhold;
- (void)_takePreventIdleSleepAssertionIfAppropriate;
- (double)_timeWindowDelay;
- (double)_timeWindowDuration;
- (double)_timeoutInterval;
- (id)_timingData;
- (id)_trailers;
- (id)_transactionMetrics;
- (id)_uniqueIdentifier;
- (void)addAdditionalHeadersToRequest:(struct _CFURLRequest *)arg1;
- (void)adjustConditionalConnectionProperties:(struct __CFDictionary *)arg1;
- (id)authenticator;
- (void)cancel;
- (long long)computeAdjustedPoolPriority;
- (id)copyWithZone:(struct _NSZone *)arg1;
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
- (id)error;
- (id)initWithOriginalRequest:(id)arg1 updatedRequest:(id)arg2 ident:(unsigned long long)arg3 session:(id)arg4;
- (id)initWithTask:(id)arg1;
- (void)initializeHTTPAuthenticatorWithSessionConfiguration:(id)arg1;
- (id)originalRequest;
- (float)priority;
- (id)response;
- (void)resume;
- (id)session;
- (void)setAuthenticator:(id)arg1;
- (void)setCountOfBytesExpectedToReceive:(long long)arg1;
- (void)setCountOfBytesExpectedToSend:(long long)arg1;
- (void)setCountOfBytesReceived:(long long)arg1;
- (void)setCountOfBytesSent:(long long)arg1;
- (void)setCurrentRequest:(id)arg1;
- (void)setDependencyTree:(id)arg1;
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
- (void)set_DuetActivityProperties:(id)arg1;
- (void)set_allowedProtocolTypes:(unsigned long long)arg1;
- (void)set_allowsCellular:(BOOL)arg1;
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
- (void)set_currentCFURLRequest:(struct _CFURLRequest *)arg1;
- (void)set_darkWakePowerAssertion:(unsigned int)arg1;
- (void)set_dependencyInfo:(id)arg1;
- (void)set_disallowCellular:(BOOL)arg1;
- (void)set_expectedWorkload:(long long)arg1;
- (void)set_ledBellyFallbackURL:(id)arg1;
- (void)set_ledBellyServiceIdentifier:(id)arg1;
- (void)set_legacySocketStreamProperties:(id)arg1;
- (void)set_loadingPriority:(double)arg1;
- (void)set_loadingPriorityValue:(double)arg1;
- (void)set_networkServiceType:(int)arg1;
- (void)set_pathToDownloadTaskFile:(id)arg1;
- (void)set_performanceTiming:(struct __PerformanceTiming *)arg1;
- (void)set_powerAssertion:(unsigned int)arg1;
- (void)set_preventsIdleSystemSleep:(BOOL)arg1;
- (void)set_priority:(long long)arg1;
- (void)set_priorityValue:(long long)arg1;
- (void)set_prohibitAuthUI:(BOOL)arg1;
- (void)set_protocolForTask:(id)arg1;
- (void)set_proxySettings:(id)arg1;
- (void)set_requestPriority:(long long)arg1;
- (void)set_shouldHandleCookies:(BOOL)arg1;
- (void)set_shouldPipelineHTTP:(BOOL)arg1;
- (void)set_shouldReportTimingDataToAWD:(BOOL)arg1;
- (void)set_shouldSkipPipelineProbe:(BOOL)arg1;
- (void)set_shouldSkipPreferredClientCertificateLookup:(BOOL)arg1;
- (void)set_shouldUsePipelineHeuristics:(BOOL)arg1;
- (void)set_sslSettings:(id)arg1;
- (void)set_storagePartitionIdentifier:(id)arg1;
- (void)set_strictContentLength:(BOOL)arg1;
- (void)set_suspensionThreshhold:(long long)arg1;
- (void)set_timeWindowDelay:(double)arg1;
- (void)set_timeWindowDuration:(double)arg1;
- (void)set_timeoutInterval:(double)arg1;
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

