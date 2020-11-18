//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSURLSessionTask.h>

@class NSData, NSDictionary, NSError, NSMutableArray, NSObject, NSString, NSURLRequest, NSURLResponse, __NSURLSessionLocal;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface __NSCFURLLocalStreamTask : NSURLSessionTask
{
    NSObject<OS_dispatch_queue> *_workQueue;
    struct BaseSocketStreamClient *_socketStreamClient;
    struct __CFReadStream *_readStream;
    struct __CFWriteStream *_writeStream;
    NSMutableArray *_pendingWork;
    NSMutableArray *_extraWork;
    BOOL _doingWorkOnThisQueue;
    NSData *_readBuffer;
    BOOL _readSignaled;
    BOOL _readEOF;
    CDStruct_59046461 _readError;
    NSData *_writeBuffer;
    BOOL _writeSignaled;
    BOOL _writeEOF;
    CDStruct_59046461 _writeError;
    long long _writeBufferAlreadyWrittenForNextWrite;
    NSMutableArray *_finalizationQueue;
    int _connectionState;
    NSMutableArray *_afterConnectQueue;
    __NSURLSessionLocal *_session;
    unsigned long long _taskIdentifier;
    long long _state;
    NSString *_taskDescription;
    NSError *_error;
    long long _countOfBytesReceived;
    long long _countOfBytesSent;
    BOOL _goneSecure;
    NSObject<OS_dispatch_source> *_tickerTimeoutTimer;
    CDUnknownBlockType _disavow;
    NSURLRequest *_originalRequest;
    NSURLRequest *_currentRequest;
    NSURLResponse *_response;
    long long _countOfBytesExpectedToSend;
    long long _countOfBytesExpectedToReceive;
    long long _expectedWorkload;
    double _timeWindowDelay;
    double _timeWindowDuration;
    double startTime;
    NSString *_ledBellyServiceIdentifier;
    long long _priorityValue;
    double _loadingPriorityValue;
    NSString *_boundInterfaceIdentifier;
    BOOL _disallowCellular;
    int _networkServiceType;
    NSDictionary *_legacySocketStreamProperties;
    BOOL _betterRouteDiscovered;
}

@property (readonly) BOOL _goneSecure; // @synthesize _goneSecure;
@property long long countOfBytesExpectedToReceive; // @synthesize countOfBytesExpectedToReceive=_countOfBytesExpectedToReceive;
@property long long countOfBytesExpectedToSend; // @synthesize countOfBytesExpectedToSend=_countOfBytesExpectedToSend;
@property long long countOfBytesReceived; // @synthesize countOfBytesReceived=_countOfBytesReceived;
@property long long countOfBytesSent; // @synthesize countOfBytesSent=_countOfBytesSent;
@property (copy) NSURLRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property (copy) NSError *error; // @synthesize error=_error;
@property (copy) NSURLRequest *originalRequest; // @synthesize originalRequest=_originalRequest;
@property (copy) NSURLResponse *response; // @synthesize response=_response;
@property long long state; // @synthesize state=_state;
@property (copy) NSString *taskDescription; // @synthesize taskDescription=_taskDescription;
@property unsigned long long taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;

- (id)_boundInterfaceIdentifier;
- (struct __CFDictionary *)_copySocketStreamProperties;
- (BOOL)_disallowCellular;
- (long long)_expectedWorkload;
- (id)_initCommonWithSession:(id)arg1 disavow:(CDUnknownBlockType)arg2;
- (id)_initWithExistingTask:(id)arg1 disavow:(CDUnknownBlockType)arg2;
- (id)_initWithSession:(id)arg1 disavow:(CDUnknownBlockType)arg2;
- (void)_init_setupTimeoutTimer;
- (id)_ledBellyServiceIdentifier;
- (id)_legacySocketStreamProperties;
- (int)_networkServiceType;
- (void)_onSessionQueue_cleanupAndBreakCycles;
- (void)_onSessionQueue_disavow;
- (void)_onqueue_addBlockOp:(CDUnknownBlockType)arg1 description:(const char *)arg2;
- (void)_onqueue_addBlockOpAtHead:(CDUnknownBlockType)arg1 description:(const char *)arg2;
- (void)_onqueue_cancel;
- (void)_onqueue_captureStreams;
- (void)_onqueue_checkForCompletion;
- (void)_onqueue_closeReadOp;
- (void)_onqueue_closeWriteOp;
- (void)_onqueue_dealWithSessionClientCertAuth:(long long)arg1 credential:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_onqueue_dealWithSessionTrustAuth:(long long)arg1 credential:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_onqueue_errorOrCancelError;
- (void)_onqueue_ioTick;
- (void)_onqueue_needClientCert:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_onqueue_needServerTrust:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_onqueue_postConnectConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_onqueue_preConnectionConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_onqueue_processReadWork:(id)arg1;
- (BOOL)_onqueue_processWriteWork:(id)arg1;
- (void)_onqueue_readDataOfMinLength:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 timeout:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_onqueue_readStream:(struct __CFReadStream *)arg1 writeStreamAvailable:(struct __CFWriteStream *)arg2;
- (void)_onqueue_readStreamEvent:(unsigned long long)arg1;
- (void)_onqueue_resume;
- (void)_onqueue_scheduleStreams;
- (BOOL)_onqueue_sendSessionChallenge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_onqueue_shufflePendingFor:(Class)arg1;
- (void)_onqueue_startSecureConnection;
- (void)_onqueue_stopSecureConnection;
- (void)_onqueue_unscheduleStreams;
- (void)_onqueue_writeData:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_onqueue_writeStreamEvent:(unsigned long long)arg1;
- (void)_reportTimingDataToAWD;
- (void)_task_onqueue_didFinish;
- (void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (double)_timeWindowDelay;
- (double)_timeWindowDuration;
- (void)adjustConditionalConnectionProperties:(struct __CFDictionary *)arg1;
- (void)cancel;
- (void)captureStreams;
- (void)closeRead;
- (void)closeWrite;
- (long long)computeAdjustedPoolPriority;
- (void)dealloc;
- (id)describePending:(id)arg1;
- (id)description;
- (id)initWithHost:(id)arg1 port:(long long)arg2 session:(id)arg3 disavow:(CDUnknownBlockType)arg4;
- (id)initWithNetService:(id)arg1 session:(id)arg2 disavow:(CDUnknownBlockType)arg3;
- (void)readDataOfMinLength:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 timeout:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)resume;
- (void)set_boundInterfaceIdentifier:(id)arg1;
- (void)set_disallowCellular:(BOOL)arg1;
- (void)set_expectedWorkload:(long long)arg1;
- (void)set_ledBellyServiceIdentifier:(id)arg1;
- (void)set_legacySocketStreamProperties:(id)arg1;
- (void)set_networkServiceType:(int)arg1;
- (void)set_timeWindowDelay:(double)arg1;
- (void)set_timeWindowDuration:(double)arg1;
- (void)startSecureConnection;
- (void)stopSecureConnection;
- (void)suspend;
- (void)writeData:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

