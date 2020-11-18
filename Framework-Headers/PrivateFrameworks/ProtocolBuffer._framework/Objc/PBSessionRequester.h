//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProtocolBuffer/NSURLSessionDataDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableData, NSMutableDictionary, NSOperationQueue, NSString, NSURL, NSURLSession, NSURLSessionTask, PBDataReader;
@protocol PBSessionRequesterDelegate;

@interface PBSessionRequester : NSObject <NSURLSessionDataDelegate>
{
    NSURL *_URL;
    id<PBSessionRequesterDelegate> _delegate;
    NSOperationQueue *_delegateQueue;
    NSURLSession *_session;
    NSURLSessionTask *_currentTask;
    NSOperationQueue *_sessionDelegateQ;
    NSMutableData *_data;
    PBDataReader *_dataReader;
    unsigned long long _lastGoodDataOffset;
    unsigned long long _uploadPayloadSize;
    unsigned long long _downloadPayloadSize;
    unsigned long long _timeRequestSent;
    unsigned long long _timeResponseReceived;
    long long _responseStatusCode;
    NSMutableArray *_requests;
    NSMutableArray *_responses;
    NSMutableArray *_internalRequests;
    NSMutableArray *_internalResponses;
    NSDictionary *_httpResponseHeaders;
    NSMutableDictionary *_httpRequestHeaders;
    double _timeoutSeconds;
    NSString *_logRequestToFile;
    NSString *_logResponseToFile;
    BOOL _didNotifyRequestCompleted;
    NSArray *_clientCertificates;
    NSDictionary *_connectionProperties;
    BOOL _shouldHandleCookies;
    CDStruct_dca542ad _flags;
}

@property (strong, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (strong, nonatomic) NSArray *clientCertificates; // @synthesize clientCertificates=_clientCertificates;
@property (strong, nonatomic) NSURLSessionTask *currentTask; // @synthesize currentTask=_currentTask;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) id<PBSessionRequesterDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long downloadPayloadSize; // @synthesize downloadPayloadSize=_downloadPayloadSize;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSDictionary *httpRequestHeaders;
@property (strong, nonatomic) NSDictionary *httpResponseHeaders; // @synthesize httpResponseHeaders=_httpResponseHeaders;
@property (nonatomic) BOOL ignoresResponse;
@property (strong, nonatomic) NSString *logRequestToFile; // @synthesize logRequestToFile=_logRequestToFile;
@property (strong, nonatomic) NSString *logResponseToFile; // @synthesize logResponseToFile=_logResponseToFile;
@property BOOL needsCancel;
@property (readonly, nonatomic) unsigned long long requestResponseTime;
@property (readonly, nonatomic) NSArray *requests;
@property (strong, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property (nonatomic) BOOL shouldHandleCookies; // @synthesize shouldHandleCookies=_shouldHandleCookies;
@property (readonly) Class superclass;
@property (nonatomic) double timeoutSeconds; // @synthesize timeoutSeconds=_timeoutSeconds;
@property (readonly, nonatomic) unsigned long long uploadPayloadSize; // @synthesize uploadPayloadSize=_uploadPayloadSize;

+ (BOOL)usesEncodedMessages;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)_applicationID;
- (void)_cancelNoNotify;
- (void)_cancelWithErrorDomain:(id)arg1 errorCode:(long long)arg2 userInfo:(id)arg3;
- (void)_cleanup;
- (void)_didSetDelegate:(id)arg1;
- (void)_failWithError:(id)arg1;
- (void)_failWithErrorDomain:(id)arg1 errorCode:(long long)arg2 userInfo:(id)arg3;
- (id)_languageLocale;
- (void)_logErrorIfNecessary:(id)arg1;
- (void)_logRequestsIfNecessary:(id)arg1;
- (void)_logResponsesIfNecessary:(id)arg1;
- (id)_newSessionWithDelegate:(id)arg1 delegateQueue:(id)arg2 connectionProperties:(id)arg3;
- (id)_osVersion;
- (void)_performOnDelegateQueue:(CDUnknownBlockType)arg1;
- (BOOL)_sendPayload:(id)arg1 error:(id *)arg2;
- (void)_serializePayload:(CDUnknownBlockType)arg1;
- (void)_start;
- (BOOL)_tryParseData;
- (void)addInternalRequest:(id)arg1;
- (void)addRequest:(id)arg1;
- (void)cancel;
- (void)cancelWithErrorCode:(long long)arg1;
- (void)cancelWithErrorCode:(long long)arg1 description:(id)arg2;
- (void)clearRequests;
- (void)dealloc;
- (id)decodeResponseData:(id)arg1;
- (void)encodeRequestData:(id)arg1 startRequestCallback:(CDUnknownBlockType)arg2;
- (void)handleResponse:(id)arg1 forInternalRequest:(id)arg2;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 queue:(id)arg3;
- (id)internalRequests;
- (BOOL)isPaused;
- (id)newMutableURLRequestWithURL:(id)arg1;
- (id)newSessionTaskOnSession:(id)arg1 withURLRequest:(id)arg2;
- (id)newSessionWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)newSessionWithDelegate:(id)arg1 delegateQueue:(id)arg2 connectionProperties:(id)arg3;
- (void)pause;
- (BOOL)readResponsePreamble:(id)arg1;
- (id)requestPreamble;
- (id)responseForInternalRequest:(id)arg1;
- (id)responseForRequest:(id)arg1;
- (void)resume;
- (void)setDelegate:(id)arg1;
- (void)setHttpRequestHeader:(id)arg1 forKey:(id)arg2;
- (void)setNeedsCancel;
- (void)start;
- (void)startWithConnectionProperties:(id)arg1;
- (id)tryReadResponseData:(id)arg1 forRequest:(id)arg2 forResponseClass:(Class)arg3;
- (void)writeRequest:(id)arg1 into:(id)arg2;

@end

