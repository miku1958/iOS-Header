//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ProtocolBuffer/NSURLConnectionDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableData, NSMutableDictionary, NSRunLoop, NSString, NSThread, NSURL, NSURLConnection, PBDataReader;
@protocol PBRequesterDelegate;

@interface PBRequester : NSObject <NSURLConnectionDelegate>
{
    NSURL *_URL;
    id<PBRequesterDelegate> _delegate;
    NSURLConnection *_connection;
    NSRunLoop *_connectionRunLoop;
    NSThread *_startThread;
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
    struct __CFRunLoopTimer *_timeoutTimer;
    NSString *_logRequestToFile;
    NSString *_logResponseToFile;
    BOOL _didNotifyRequestCompleted;
    NSArray *_clientCertificates;
    NSDictionary *_connectionProperties;
    BOOL _shouldHandleCookies;
    struct {
        unsigned int ignoresResponse:1;
        unsigned int loading:1;
        unsigned int needsCancel:1;
        unsigned int responseStatusSet:1;
        unsigned int parsedResponseHeader:1;
        unsigned int delegateDidReceiveResponse:1;
        unsigned int delegateDidFinish:1;
        unsigned int delegateDidCancel:1;
        unsigned int delegateDidFailWithError:1;
        unsigned int paused:1;
        unsigned int resuming:1;
    } _flags;
}

@property (strong, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (strong, nonatomic) NSArray *clientCertificates; // @synthesize clientCertificates=_clientCertificates;
@property (strong, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property (strong, nonatomic) NSRunLoop *connectionRunLoop; // @synthesize connectionRunLoop=_connectionRunLoop;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<PBRequesterDelegate> delegate; // @synthesize delegate=_delegate;
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
@property (nonatomic) BOOL shouldHandleCookies; // @synthesize shouldHandleCookies=_shouldHandleCookies;
@property (readonly) Class superclass;
@property (nonatomic) double timeoutSeconds; // @synthesize timeoutSeconds=_timeoutSeconds;
@property (readonly, nonatomic) unsigned long long uploadPayloadSize; // @synthesize uploadPayloadSize=_uploadPayloadSize;

+ (BOOL)usesEncodedMessages;
- (id)_applicationID;
- (void)_cancelNoNotify;
- (void)_cancelWithErrorDomain:(id)arg1 errorCode:(long long)arg2 userInfo:(id)arg3;
- (void)_cleanup;
- (id)_connectionRunLoop;
- (void)_failWithError:(id)arg1;
- (void)_failWithErrorDomain:(id)arg1 errorCode:(long long)arg2 userInfo:(id)arg3;
- (id)_languageLocale;
- (void)_logErrorIfNecessary:(id)arg1;
- (void)_logRequestsIfNecessary:(id)arg1;
- (void)_logResponsesIfNecessary:(id)arg1;
- (id)_osVersion;
- (void)_removeTimeoutTimer;
- (void)_resetTimeoutTimer;
- (BOOL)_sendPayload:(id)arg1 error:(id *)arg2;
- (void)_serializePayload:(CDUnknownBlockType)arg1;
- (void)_start;
- (void)_startTimeoutTimer;
- (void)_timeoutTimerFired;
- (BOOL)_tryParseData;
- (void)addInternalRequest:(id)arg1;
- (void)addRequest:(id)arg1;
- (void)cancel;
- (void)cancelWithErrorCode:(long long)arg1;
- (void)cancelWithErrorCode:(long long)arg1 description:(id)arg2;
- (void)clearRequests;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequestForEstablishedConnection:(id)arg2 properties:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (id)decodeResponseData:(id)arg1;
- (void)encodeRequestData:(id)arg1 startRequestCallback:(CDUnknownBlockType)arg2;
- (void)handleResponse:(id)arg1 forInternalRequest:(id)arg2;
- (id)initWithURL:(id)arg1 andDelegate:(id)arg2;
- (id)internalRequests;
- (BOOL)isPaused;
- (struct _CFURLRequest *)newCFMutableURLRequestWithURL:(id)arg1;
- (id)newConnectionWithCFURLRequest:(struct _CFURLRequest *)arg1 delegate:(id)arg2;
- (id)newConnectionWithCFURLRequest:(struct _CFURLRequest *)arg1 delegate:(id)arg2 connectionProperties:(id)arg3;
- (void)pause;
- (BOOL)readResponsePreamble:(id)arg1;
- (id)requestPreamble;
- (id)responseForInternalRequest:(id)arg1;
- (id)responseForRequest:(id)arg1;
- (void)resume;
- (void)setHttpRequestHeader:(id)arg1 forKey:(id)arg2;
- (void)setNeedsCancel;
- (void)start;
- (void)startWithConnectionProperties:(id)arg1;
- (id)tryReadResponseData:(id)arg1 forRequest:(id)arg2 forResponseClass:(Class)arg3;
- (void)writeRequest:(id)arg1 into:(id)arg2;

@end

