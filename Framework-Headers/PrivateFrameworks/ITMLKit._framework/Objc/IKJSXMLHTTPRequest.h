//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSEventListenerObject.h>

#import <ITMLKit/IKJSXMLHTTPRequest-Protocol.h>
#import <ITMLKit/ISStoreURLOperationDelegate-Protocol.h>

@class IKDOMDocument, ISURLOperation, JSManagedValue, NSData, NSDictionary, NSError, NSHTTPURLResponse, NSMutableArray, NSMutableURLRequest, NSString, NSURLConnection;

@interface IKJSXMLHTTPRequest : IKJSEventListenerObject <ISStoreURLOperationDelegate, IKJSXMLHTTPRequest>
{
    BOOL _shouldSquashOnReadyStateEvents;
    struct os_unfair_lock_s _onReadyStateChangeMessageQueueLock;
    BOOL _async;
    BOOL _inProgress;
    BOOL _jingleRequest;
    BOOL _primeEnabled;
    unsigned int _requestStatusCode;
    unsigned int _readyState;
    unsigned int _status;
    unsigned long long timeout;
    NSString *_dataToSend;
    ISURLOperation *_jingleOperation;
    NSMutableArray *_onReadyStateChangeMessageQueue;
    NSMutableURLRequest *_urlRequest;
    NSURLConnection *_urlConnection;
    NSString *_user;
    NSString *_password;
    long long _primeRetryCount;
    NSHTTPURLResponse *_urlResponse;
    NSData *_receivedData;
    long long _reprimingResponseStatus;
    long long _requestReadyState;
    NSString *_requestStatusText;
    long long _requestResponseType;
    NSError *_requestError;
    NSString *_statusText;
    NSDictionary *_performanceMetrics;
    JSManagedValue *_managedSelf;
}

@property (copy, nonatomic) NSString *dataToSend; // @synthesize dataToSend=_dataToSend;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) ISURLOperation *jingleOperation; // @synthesize jingleOperation=_jingleOperation;
@property (nonatomic) BOOL jingleRequest; // @synthesize jingleRequest=_jingleRequest;
@property (strong, nonatomic) JSManagedValue *managedSelf; // @synthesize managedSelf=_managedSelf;
@property (readonly) NSDictionary *metrics;
@property (strong, nonatomic) NSMutableArray *onReadyStateChangeMessageQueue; // @synthesize onReadyStateChangeMessageQueue=_onReadyStateChangeMessageQueue;
@property (strong, nonatomic) NSString *password; // @synthesize password=_password;
@property (strong) NSDictionary *performanceMetrics; // @synthesize performanceMetrics=_performanceMetrics;
@property (readonly, nonatomic) BOOL primeEnabled; // @synthesize primeEnabled=_primeEnabled;
@property (nonatomic) long long primeRetryCount; // @synthesize primeRetryCount=_primeRetryCount;
@property unsigned int readyState; // @synthesize readyState=_readyState;
@property (strong) NSData *receivedData; // @synthesize receivedData=_receivedData;
@property (readonly, nonatomic) long long reprimingResponseStatus; // @synthesize reprimingResponseStatus=_reprimingResponseStatus;
@property (strong, nonatomic) NSError *requestError; // @synthesize requestError=_requestError;
@property (nonatomic) long long requestReadyState; // @synthesize requestReadyState=_requestReadyState;
@property (nonatomic) long long requestResponseType; // @synthesize requestResponseType=_requestResponseType;
@property (nonatomic) unsigned int requestStatusCode; // @synthesize requestStatusCode=_requestStatusCode;
@property (strong, nonatomic) NSString *requestStatusText; // @synthesize requestStatusText=_requestStatusText;
@property (readonly) id response;
@property (readonly) NSString *responseText;
@property (strong) NSString *responseType;
@property (readonly) IKDOMDocument *responseXML;
@property unsigned int status; // @synthesize status=_status;
@property (strong) NSString *statusText; // @synthesize statusText=_statusText;
@property (readonly) Class superclass;
@property unsigned long long timeout; // @synthesize timeout;
@property (strong, nonatomic) NSURLConnection *urlConnection; // @synthesize urlConnection=_urlConnection;
@property (strong, nonatomic) NSMutableURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
@property (strong, nonatomic) NSHTTPURLResponse *urlResponse; // @synthesize urlResponse=_urlResponse;
@property (strong, nonatomic) NSString *user; // @synthesize user=_user;

+ (id)xhrOperationQueue;
- (void).cxx_destruct;
- (void)_abort;
- (void)_clearAllReadyStateChangeMessagesAndSquashFutureOnes;
- (id)_constructProgressEventData;
- (id)_createStoreOperation:(id)arg1;
- (id)_dequeueReadyStateChangeMessage;
- (BOOL)_isPrimeError:(long long)arg1 output:(id)arg2;
- (void)_openWithMethod:(id)arg1 url:(id)arg2 async:(BOOL)arg3 user:(id)arg4 password:(id)arg5;
- (void)_operationFinished:(id)arg1;
- (void)_prime:(id)arg1;
- (void)_reprime:(id)arg1;
- (void)_sendWithData:(id)arg1;
- (void)_setException:(id)arg1;
- (id)_timeIntervalSince1970;
- (void)abort;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)getAllResponseHeaders;
- (id)getResponseHeader:(id)arg1;
- (id)init;
- (id)initWithAppContext:(id)arg1 jingleRequest:(BOOL)arg2;
- (void)open:(id)arg1:(id)arg2:(id)arg3:(id)arg4:(id)arg5;
- (void)operation:(id)arg1 didDiscoverContentLength:(id)arg2;
- (void)operation:(id)arg1 didReceiveResponse:(id)arg2;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operation:(id)arg1 willSendRequest:(id)arg2;
- (id)responseArrayBuffer;
- (id)responseBlob;
- (void)send:(id)arg1;
- (void)setRequestHeader:(id)arg1:(id)arg2;

@end

