//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSProgressReporting-Protocol.h>

@class ICRequestContext, ICURLResponseHandler, NSData, NSDictionary, NSError, NSMutableArray, NSMutableData, NSMutableDictionary, NSProgress, NSString, NSURL, NSURLRequest, NSURLResponse, NSURLSessionTask, NSURLSessionTaskTransactionMetrics;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ICURLRequest : NSObject <NSProgressReporting>
{
    NSMutableArray *_observers;
    NSMutableDictionary *_maxRetryCounts;
    NSMutableDictionary *_retryCounts;
    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_observerQueue;
    BOOL _prioritize;
    BOOL _cancelOnHTTPErrors;
    NSProgress *_progress;
    ICRequestContext *_requestContext;
    unsigned long long _redirectCount;
    double _retryDelay;
    long long _requestState;
    NSData *_resumeData;
    ICURLResponseHandler *_responseHandler;
    NSURLRequest *_urlRequest;
    NSURLSessionTask *_task;
    long long _type;
    NSObject<OS_dispatch_semaphore> *_waitSemaphore;
    NSURLRequest *_currentURLRequest;
    NSURLResponse *_urlResponse;
    NSMutableData *_responseData;
    NSURL *_responseDataURL;
    NSError *_error;
    NSDictionary *_avDownloadOptions;
    long long _handlingType;
    NSString *_retryReason;
    double _startTime;
    double _lastUpdateTime;
    double _lastProgressUpdateTime;
    NSURLSessionTaskTransactionMetrics *_transactionMetrics;
    CDUnknownBlockType _completionHandler;
}

@property (strong, nonatomic, setter=setAVDownloadOptions:) NSDictionary *avDownloadOptions; // @synthesize avDownloadOptions=_avDownloadOptions;
@property (nonatomic) BOOL cancelOnHTTPErrors; // @synthesize cancelOnHTTPErrors=_cancelOnHTTPErrors;
@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (strong, nonatomic) NSURLRequest *currentURLRequest; // @synthesize currentURLRequest=_currentURLRequest;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (nonatomic) long long handlingType; // @synthesize handlingType=_handlingType;
@property (readonly) unsigned long long hash;
@property (nonatomic) double lastProgressUpdateTime; // @synthesize lastProgressUpdateTime=_lastProgressUpdateTime;
@property (nonatomic) double lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property (nonatomic) unsigned long long maxRetryCount;
@property (nonatomic) BOOL prioritize; // @synthesize prioritize=_prioritize;
@property (strong, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property (nonatomic) unsigned long long redirectCount; // @synthesize redirectCount=_redirectCount;
@property (readonly, copy, nonatomic) ICRequestContext *requestContext; // @synthesize requestContext=_requestContext;
@property (nonatomic) long long requestState; // @synthesize requestState=_requestState;
@property (strong, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property (strong, nonatomic) NSURL *responseDataURL; // @synthesize responseDataURL=_responseDataURL;
@property (strong, nonatomic) ICURLResponseHandler *responseHandler; // @synthesize responseHandler=_responseHandler;
@property (readonly, copy, nonatomic) NSData *resumeData; // @synthesize resumeData=_resumeData;
@property (readonly, nonatomic) unsigned long long retryCount;
@property (nonatomic) double retryDelay; // @synthesize retryDelay=_retryDelay;
@property (strong, nonatomic) NSString *retryReason; // @synthesize retryReason=_retryReason;
@property (nonatomic) double startTime; // @synthesize startTime=_startTime;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;
@property (strong, nonatomic) NSURLSessionTaskTransactionMetrics *transactionMetrics; // @synthesize transactionMetrics=_transactionMetrics;
@property (nonatomic) long long type; // @synthesize type=_type;
@property (readonly, nonatomic) NSURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
@property (strong, nonatomic) NSURLResponse *urlResponse; // @synthesize urlResponse=_urlResponse;
@property (strong, nonatomic) NSObject<OS_dispatch_semaphore> *waitSemaphore; // @synthesize waitSemaphore=_waitSemaphore;

+ (unsigned long long)_defaultMaxRetryCountForReason:(id)arg1;
+ (Class)_responseClass;
+ (Class)_responseHandlerClass;
- (void).cxx_destruct;
- (void)_ensureValidRetryReason:(id)arg1;
- (void)_incrementRetryCountForReason:(id)arg1;
- (unsigned long long)_maxRetryCountForReason:(id)arg1;
- (unsigned long long)_retryCountForReason:(id)arg1;
- (void)_setMaxRetryCount:(unsigned long long)arg1 forReason:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)buildURLRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 requestContext:(id)arg2;
- (id)initWithURL:(id)arg1 requestContext:(id)arg2 resumeData:(id)arg3;
- (id)initWithURLRequest:(id)arg1 requestContext:(id)arg2;
- (id)initWithURLRequest:(id)arg1 requestContext:(id)arg2 resumeData:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)updateState:(long long)arg1;

@end
