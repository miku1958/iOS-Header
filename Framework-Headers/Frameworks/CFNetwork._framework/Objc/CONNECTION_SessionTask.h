//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableURLRequest, NSURLRequest, __NSCFURLSession;

__attribute__((visibility("hidden")))
@interface CONNECTION_SessionTask : NSObject
{
    struct _CFURLRequest *_originalRequest;
    struct _CFURLRequest *_currentRequest;
    struct __CFDictionary *_connectionProperties;
    struct __CFDictionary *_socketProperties;
    NSMutableURLRequest *_nsCurrentRequest;
    NSURLRequest *_nsOriginalRequest;
    __NSCFURLSession *_session;
    BOOL _is_cellular;
    Class _my_protocolForTask;
    struct __PerformanceTiming *__performanceTiming;
    BOOL __shouldSkipPreferredClientCertificateLookup;
    struct __CFDictionary *__atsContext;
}

- (unsigned long long)_allowedProtocolTypes;
- (id)_allowsCellular;
- (id)_backgroundTaskTimingData;
- (id)_boundInterfaceIdentifier;
- (long long)_bytesPerSecondLimit;
- (BOOL)_cacheOnly;
- (int)_cachePolicy;
- (id)_cfCache;
- (id)_cfCookies;
- (id)_cfCreds;
- (id)_cfHSTS;
- (id)_connectionPropertyDuet;
- (id)_contentDispositionFallbackArray;
- (id)_cookieAcceptPolicy;
- (struct __CFDictionary *)_copyATSState;
- (struct _CFURLRequest *)_copyCurrentCFURLRequest;
- (struct _CFHSTSPolicy *)_copyHSTSPolicy;
- (struct _CFURLRequest *)_copyOriginalCFURLRequest;
- (struct __CFDictionary *)_copySocketStreamProperties;
- (const struct XCookieStorage *)_createXCookieStorage;
- (const struct XCredentialStorage *)_createXCredentialStorage;
- (const struct XURLCache *)_createXURLCache;
- (struct _CFURLRequest *)_currentCFURLRequest;
- (id)_disallowCellular;
- (id)_expectedWorkload;
- (void)_getAuthenticationHeadersForResponse:(struct _CFURLResponse *)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (struct __CFSet *)_getAuthenticatorStatusCodes;
- (void)_initializeTimingDataWithSessionConfiguration:(id)arg1;
- (id)_networkServiceType;
- (struct __PerformanceTiming *)_performanceTiming;
- (unsigned char)_preventsIdleSystemSleep;
- (id)_priorityValue;
- (void)_processConnectionProperties;
- (id)_prohibitAuthUI;
- (id)_protocolForTask;
- (struct __CFDictionary *)_proxySettings;
- (void)_releasePreventIdleSleepAssertionIfAppropriate;
- (long long)_requestPriority;
- (void)_setConnectionIsCellular:(BOOL)arg1;
- (void)_setSocketProperties:(struct __CFDictionary *)arg1 connectionProperties:(struct __CFDictionary *)arg2;
- (id)_shouldHandleCookies;
- (unsigned char)_shouldPipelineHTTP;
- (unsigned char)_shouldSkipPipelineProbe;
- (BOOL)_shouldSkipPreferredClientCertificateLookup;
- (unsigned char)_shouldUsePipelineHeuristics;
- (struct __CFDictionary *)_sslSettings;
- (unsigned char)_strictContentLength;
- (long long)_suspensionThreshhold;
- (void)_takePreventIdleSleepAssertionIfAppropriate;
- (id)_timeWindowDelay;
- (id)_timeWindowDuration;
- (double)_timeoutInterval;
- (id)countOfBytesExpectedToReceive;
- (id)countOfBytesExpectedToSend;
- (id)countOfBytesReceived;
- (id)countOfBytesSent;
- (id)currentRequest;
- (struct __CFURL *)currentRequest_URL;
- (struct __CFURL *)currentRequest_mainDocumentURL;
- (void)dealloc;
- (id)error;
- (id)initWithRequest:(struct _CFURLRequest *)arg1 mutableCurrent:(struct _CFURLRequest *)arg2 connProps:(struct __CFDictionary *)arg3 sockProps:(struct __CFDictionary *)arg4 session:(id)arg5;
- (id)originalRequest;
- (float)priority;
- (id)session;
- (void)set_protocolForTask:(id)arg1;
- (BOOL)shouldHandleCookiesAndSchemeIsAppropriate;
- (id)startTime;
- (id)state;
- (id)taskIdentifier;
- (void)updateCurrentRequest:(id)arg1;
- (id)workQueue;

@end

