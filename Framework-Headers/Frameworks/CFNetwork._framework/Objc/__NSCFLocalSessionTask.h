//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/__NSCFURLSessionTask.h>

#import <CFNetwork/NSURLSessionDataTaskSubclass-Protocol.h>
#import <CFNetwork/NSURLSessionTaskSubclass-Protocol.h>
#import <CFNetwork/NSURLSessionUploadTaskSubclass-Protocol.h>
#import <CFNetwork/SessionConnectionDelegate-Protocol.h>

@class NSInputStream, NSNumber, NSObject, NSOperationQueue, NSOutputStream, NSString, NSURL, __NSCFURLSessionConnection, __NSURLSessionLocal;
@protocol OS_dispatch_data, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface __NSCFLocalSessionTask : __NSCFURLSessionTask <NSURLSessionTaskSubclass, NSURLSessionDataTaskSubclass, NSURLSessionUploadTaskSubclass, SessionConnectionDelegate>
{
    __NSCFURLSessionConnection *_cfConn;
    NSURL *_uploadFile;
    NSObject<OS_dispatch_data> *_dataTaskData;
    CDUnknownBlockType _dataTaskCompletion;
    BOOL _pendingResponseDisposition;
    BOOL _pendingResponseDisposition_didFinish;
    NSObject<OS_dispatch_data> *_pendingResponseBytes;
    __NSURLSessionLocal *_localSession;
    unsigned long long _suspendCount;
    CDUnknownBlockType _async_initialization;
    NSObject<OS_dispatch_source> *_resourceTimeout;
    BOOL _didIssueWaitingForConnectivity;
    BOOL _didIssueDidFinish;
    BOOL _suspendedForDisposition;
    NSNumber *_connectedSocket;
    struct HTTPConnectionCacheKey *_connKey;
    double _startTimeoutTime;
    NSObject<OS_dispatch_source> *_startTimeoutTimer;
    NSObject<OS_dispatch_source> *_payloadTransmissionTimer;
    NSObject<OS_dispatch_source> *_willSendRequestTimer;
    NSInputStream *_socketReadStreamForUpgrade;
    NSOutputStream *_socketWriteStreamForUpgrade;
    shared_ptr_f0c1381f _connectionForUpgrade;
    NSOperationQueue *_connectionWorkQueue;
    int _connectionWorkQueueSuspensionCount;
    BOOL _didCheckMixedReplace;
    BOOL _isMixedReplace;
}

@property (copy) CDUnknownBlockType async_initialization; // @synthesize async_initialization=_async_initialization;
@property (strong) __NSCFURLSessionConnection *cfConn; // @synthesize cfConn=_cfConn;
@property (copy) CDUnknownBlockType dataTaskCompletion; // @synthesize dataTaskCompletion=_dataTaskCompletion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL didIssueDidFinish; // @synthesize didIssueDidFinish=_didIssueDidFinish;
@property BOOL didIssueWaitingForConnectivity; // @synthesize didIssueWaitingForConnectivity=_didIssueWaitingForConnectivity;
@property (readonly) unsigned long long hash;
@property (strong) __NSURLSessionLocal *localSession; // @synthesize localSession=_localSession;
@property BOOL pendingResponseDisposition; // @synthesize pendingResponseDisposition=_pendingResponseDisposition;
@property BOOL pendingResponseDisposition_didFinish; // @synthesize pendingResponseDisposition_didFinish=_pendingResponseDisposition_didFinish;
@property (readonly) Class superclass;
@property unsigned long long suspendCount; // @synthesize suspendCount=_suspendCount;
@property (strong) NSURL *uploadFile; // @synthesize uploadFile=_uploadFile;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_askForConnectedSocketLater;
- (void)_finishAllow;
- (void)_finishBecomeDownload:(id)arg1;
- (void)_finishBecomeStream:(id)arg1 forConnection:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_onSessionQueue_disavow;
- (void)_onqueue_adjustBytesPerSecondLimit:(long long)arg1;
- (void)_onqueue_adjustLoadingPoolPriority;
- (void)_onqueue_adjustPoolPriority;
- (void)_onqueue_adjustPriorityHint:(float)arg1;
- (void)_onqueue_cancel;
- (void)_onqueue_cancel_with_error:(id)arg1;
- (void)_onqueue_completeInitialization;
- (void)_onqueue_conditionalRequirementsChanged:(BOOL)arg1;
- (void)_onqueue_connectionWaitingWithReason:(long long)arg1;
- (void)_onqueue_didFinishCollectingMetrics:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_onqueue_didFinishWithError:(id)arg1;
- (void)_onqueue_didReceiveChallenge:(id)arg1 request:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_onqueue_didReceiveDispatchData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_onqueue_didReceiveResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_onqueue_didReceiveResponse:(id)arg1 redirectRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_onqueue_didSendBodyBytes:(long long)arg1 totalBytesSent:(long long)arg2 totalBytesExpectedToSend:(long long)arg3;
- (void)_onqueue_needConnectedSocketToHost:(id)arg1 port:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_onqueue_needNewBodyStream:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_onqueue_resume;
- (void)_onqueue_resumeWorkQueue;
- (void)_onqueue_startPayloadTransmissionTimer;
- (void)_onqueue_startResourceTimer;
- (void)_onqueue_startStartTimer;
- (void)_onqueue_startTimer:(id)arg1 withTimeoutInNanos:(long long)arg2 streamErrorCode:(int)arg3;
- (id)_onqueue_strippedMutableRequest;
- (void)_onqueue_submitConnectionWork:(CDUnknownBlockType)arg1;
- (void)_onqueue_suspend;
- (void)_onqueue_suspendWorkQueue;
- (void)_onqueue_willCacheResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_onqueue_willSendRequestForEstablishedConnection:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_private_onqueue_becomeStreamTaskWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_private_onqueue_didReceiveResponse:(id)arg1;
- (void)_private_onqueue_didReceiveResponseDisposition:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_task_onqueue_didFinish;
- (void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancel_with_error:(id)arg1;
- (id)canceledError;
- (void)connection:(id)arg1 _conditionalRequirementsChanged:(BOOL)arg2;
- (void)connection:(id)arg1 _willSendRequestForEstablishedConnection:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 challenged:(id)arg2 authCallback:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 didFinishCollectingMetrics:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 didFinishLoadingWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveConnectionCacheKey:(struct HTTPConnectionCacheKey *)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 didReceiveSocketInputStream:(id)arg2 outputStream:(id)arg3;
- (void)connection:(id)arg1 didReceiveTCPConnection:(shared_ptr_f0c1381f)arg2;
- (void)connection:(id)arg1 needConnectedSocketToHost:(id)arg2 port:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)connection:(id)arg1 request:(id)arg2 needsNewBodyStreamCallback:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 sentBodyBytes:(id)arg2 totalBytes:(id)arg3 expectedBytes:(id)arg4;
- (void)connection:(id)arg1 waitingWithReason:(long long)arg2;
- (void)connection:(id)arg1 wasRedirected:(id)arg2 newRequest:(id)arg3 responseCallback:(CDUnknownBlockType)arg4;
- (void)connection:(id)arg1 willCacheResponse:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)connectionWillFinishLoading:(id)arg1;
- (void)dealloc;
- (id)error:(id)arg1 code:(long long)arg2;
- (id)initWithOriginalRequest:(id)arg1 updatedRequest:(id)arg2 ident:(unsigned long long)arg3 session:(id)arg4;
- (id)initWithTask:(id)arg1;
- (id)nsurlError:(int)arg1;
- (id)posixError:(int)arg1;
- (id)resourceTimeoutError;
- (void)setConnection:(id)arg1;
- (void)startResourceTimer;
- (id)startTimeoutError;
- (id)timeoutErrorWithStreamErrorCode:(int)arg1;

@end
