//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DAEAS/DATask-Protocol.h>
#import <DAEAS/NSURLSessionDataDelegate-Protocol.h>
#import <DAEAS/NSURLSessionDelegate-Protocol.h>
#import <DAEAS/NSURLSessionTaskDelegate-Protocol.h>

@class ASItem, ASParseContext, ASTaskManager, DATaskManager, NSDate, NSError, NSHTTPURLResponse, NSString, NSThread, NSTimer, NSURLRequest, NSURLSession, NSURLSessionDataTask;

@interface ASTask : NSObject <DATask, NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    BOOL _haveSwitchedCodePage;
    BOOL _haveParsedCommand;
    ASItem *_currentlyParsingItem;
    id _delegate;
    NSHTTPURLResponse *_response;
    ASParseContext *_parseContext;
    NSURLSession *_session;
    NSURLSessionDataTask *_dataTask;
    NSURLRequest *_request;
    BOOL _isFakingIt;
    BOOL _didSendRequest;
    BOOL _didFailWithError;
    BOOL _didCancel;
    BOOL _didReceiveResponse;
    BOOL _didReceiveData;
    BOOL _didFinishLoading;
    BOOL _didReset;
    BOOL _finished;
    BOOL _finishedByTimeoutEnforcer;
    int _interfaceBinding;
    id _context;
    BOOL _isExclusive;
    int _numBadPasswordResponses;
    BOOL _askedToCancelWhileModal;
    BOOL _haveCheckedForTopLevelError;
    BOOL _handledTopLevelError;
    int _taskID;
    ASTaskManager *_taskManager;
    int _modalReason;
    int _modalPushCount;
    NSString *_lastKnownPolicyKey;
    NSError *_passwordNotificationError;
    NSString *_lastKnownPassword;
    NSDate *_dateConnectionWentOut;
    NSTimer *_timeoutEnforcer;
    BOOL _retry;
    int _serverRequestedRetryCount;
    BOOL _isLoadedOnMainThread;
    long long _sentBytesCount;
    long long _receivedBytesCount;
    NSString *_sourceApplicationBundleIdentifier;
    DATaskManager *_strongTaskManagerDuringDelegateCallout;
    NSThread *_thread;
}

@property (nonatomic) BOOL askedToCancelWhileModal; // @synthesize askedToCancelWhileModal=_askedToCancelWhileModal;
@property (strong, nonatomic) id context; // @synthesize context=_context;
@property (strong, nonatomic) ASItem *currentlyParsingItem; // @synthesize currentlyParsingItem=_currentlyParsingItem;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int interfaceBinding; // @synthesize interfaceBinding=_interfaceBinding;
@property (nonatomic) BOOL isExclusive; // @synthesize isExclusive=_isExclusive;
@property (nonatomic) BOOL isLoadedOnMainThread; // @synthesize isLoadedOnMainThread=_isLoadedOnMainThread;
@property (strong, nonatomic) NSString *lastKnownPassword; // @synthesize lastKnownPassword=_lastKnownPassword;
@property (readonly, nonatomic) ASParseContext *parseContext; // @synthesize parseContext=_parseContext;
@property (nonatomic) long long receivedBytesCount; // @synthesize receivedBytesCount=_receivedBytesCount;
@property (nonatomic) long long sentBytesCount; // @synthesize sentBytesCount=_sentBytesCount;
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property (strong, nonatomic) DATaskManager *strongTaskManagerDuringDelegateCallout; // @synthesize strongTaskManagerDuringDelegateCallout=_strongTaskManagerDuringDelegateCallout;
@property (readonly) Class superclass;
@property (weak, nonatomic) DATaskManager *taskManager; // @synthesize taskManager=_taskManager;
@property (strong, nonatomic) NSThread *thread; // @synthesize thread=_thread;
@property (strong, nonatomic) NSTimer *timeoutEnforcer; // @synthesize timeoutEnforcer=_timeoutEnforcer;

+ (void)_restoreDefaultTaskTimeout;
+ (void)_setDefaultTaskTimeout:(double)arg1 failureFallbackTimeout:(double)arg2;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_HTTPMethodForRequest:(id)arg1;
- (void)_URLSessionDataTaskDidReceiveData:(id)arg1;
- (void)_URLSessionDidBecomeInvalidWithError:(id)arg1;
- (void)_URLSessionTaskDidCompleteWithError:(id)arg1;
- (void)_addAuthToRequest:(id)arg1;
- (id)_applyAuthenticationChain:(id)arg1 toRequest:(id)arg2;
- (void)_assignConnectionProperties:(id)arg1 toSessionConfiguration:(id)arg2;
- (BOOL)_canAuthenticateAgainstProtectionSpace:(id)arg1;
- (void)_continuePerformTask;
- (id)_easVersion;
- (void)_failImmediately;
- (void)_handleAuthenticationChallenge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleBadPasswordResponse;
- (BOOL)_handleCertificateError:(id)arg1;
- (void)_handleCompletion;
- (void)_handleCompletionError:(id)arg1;
- (BOOL)_handleRedirect:(id)arg1;
- (void)_initFakeParseContext;
- (BOOL)_isWBXML;
- (id)_policyKey;
- (void)_popModal;
- (void)_pushModalForReason:(int)arg1;
- (id)_requestForLogging;
- (id)_sessionForLogging;
- (void)_setHTTPParametersOnRequest:(id)arg1 outBodyStream:(id *)arg2 outBodyData:(id *)arg3;
- (BOOL)_shouldRedirectToHTTPForRequest:(id)arg1;
- (BOOL)_shouldSendAuthForRequest:(id)arg1;
- (void)_tearDownResourcesHelper;
- (void)_timeoutEnforcerFired:(id)arg1;
- (id)_url;
- (BOOL)attemptRetryWithStatus:(long long)arg1 error:(id)arg2;
- (void)cancelTaskWithReason:(int)arg1 underlyingError:(id)arg2;
- (BOOL)checkForErrorInContext:(id)arg1;
- (id)command;
- (int)commandCode;
- (id)contentType;
- (void)dealloc;
- (void)didCallOutToDelegate;
- (void)didProcessContext:(id)arg1;
- (void)finishWithError:(id)arg1;
- (void)finishWithError:(id)arg1 afterDelegateCallout:(CDUnknownBlockType)arg2;
- (BOOL)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (void)handleTopLevelErrorStatus:(id)arg1;
- (id)httpMethod;
- (id)init;
- (BOOL)isInCallOutToDelegate;
- (void)loadRequest:(id)arg1;
- (int)numDownloadedElements;
- (id)onBehalfOfBundleIdentifier;
- (id)parameterData;
- (double)percentComplete;
- (void)performTask;
- (BOOL)processContext:(id)arg1;
- (void)reportStatusWithError:(id)arg1;
- (id)requestBody;
- (id)requestBodyStreamOutKnownSize:(int *)arg1;
- (BOOL)requiresEASVersionInformaton;
- (BOOL)requiresEASVersionUpdate;
- (void)reset;
- (id)responseContentType;
- (BOOL)shouldHandlePasswordErrors;
- (BOOL)shouldHandleServerErrorRetryLater;
- (BOOL)shouldHoldPowerAssertion;
- (BOOL)shouldLogIncomingData;
- (BOOL)shouldReportTimeInNetwork;
- (BOOL)shouldStallAfterConnectionLost;
- (void)startModal;
- (int)taskID;
- (void)taskManagerDidFailToUpdatePolicyKey;
- (void)taskManagerDidFindEASVersion;
- (void)taskManagerDidUpdatePolicyKey;
- (long long)taskStatusForError:(id)arg1;
- (long long)taskStatusForExchangeStatus:(int)arg1;
- (void)tearDownResources;
- (void)tearDownResourcesAndCancelTask;
- (void)tearDownResourcesButLeaveSessionAlone;
- (double)timeoutInterval;
- (void)willCallOutToDelegate;
- (void)willProcessContext;

@end
