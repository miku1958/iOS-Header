//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSURLSessionStreamTask.h>

@class NSData, NSDictionary, NSError, NSMutableArray, NSObject, NSString, NSURLRequest, NSURLResponse, NSUUID;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface __NSCFURLLocalStreamTask : NSURLSessionStreamTask
{
    struct BaseSocketStreamClient *_socketStreamClient;
    NSMutableArray *_extraWork;
    int _connectionState;
    NSObject<OS_dispatch_queue> *_workQueueForStreamTask;
    struct __CFReadStream *_readStream;
    struct __CFWriteStream *_writeStream;
    NSMutableArray *_pendingWork;
    BOOL _doingWorkOnThisQueue;
    NSData *_readBuffer;
    BOOL _readSignaled;
    BOOL _readEOF;
    CDStruct_59046461 _readError;
    NSData *_writeBuffer;
    BOOL _writeSignaled;
    BOOL _writeEOF;
    BOOL _deliveredConnectionEstablished;
    CDStruct_59046461 _writeError;
    long long _writeBufferAlreadyWrittenForNextWrite;
    NSMutableArray *_finalizationQueue;
    NSMutableArray *_afterConnectQueue;
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
    long long _countOfBytesClientExpectsToSend;
    long long _countOfBytesClientExpectsToReceive;
    long long _countOfBytesExpectedToSend;
    long long _countOfBytesExpectedToReceive;
    long long _expectedWorkload;
    double _timeWindowDelay;
    double _timeWindowDuration;
    double startTime;
    long long _priorityValue;
    double _loadingPriorityValue;
    NSString *_boundInterfaceIdentifier;
    BOOL _disallowCellular;
    int _allowsExpensiveOverride;
    int _allowsConstrainedOverride;
    int _allowsCellularOverride;
    int _networkServiceType;
    NSDictionary *_legacySocketStreamProperties;
    BOOL _betterRouteDiscovered;
    NSData *__TCPConnectionMetadata;
    NSData *__initialDataPayload;
    BOOL _didIssueCancel;
    NSUUID *_uniqueIdentifier;
    float priority;
}

@property (copy) NSData *_TCPConnectionMetadata; // @synthesize _TCPConnectionMetadata=__TCPConnectionMetadata;
@property (readonly) BOOL _goneSecure; // @synthesize _goneSecure;
@property (copy) NSData *_initialDataPayload; // @synthesize _initialDataPayload=__initialDataPayload;
@property double _timeoutIntervalForResource; // @dynamic _timeoutIntervalForResource;
@property (readonly, copy) NSUUID *_uniqueIdentifier; // @synthesize _uniqueIdentifier;
@property long long countOfBytesClientExpectsToReceive; // @synthesize countOfBytesClientExpectsToReceive=_countOfBytesClientExpectsToReceive;
@property long long countOfBytesClientExpectsToSend; // @synthesize countOfBytesClientExpectsToSend=_countOfBytesClientExpectsToSend;
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

- (void)_adoptEffectiveConfiguration:(id)arg1;
- (int)_allowsCellularOverride;
- (int)_allowsConstrainedOverride;
- (int)_allowsExpensiveOverride;
- (id)_boundInterfaceIdentifier;
- (BOOL)_cacheOnly;
- (struct __CFDictionary *)_copySocketStreamProperties;
- (BOOL)_disallowCellular;
- (id)_effectiveConfiguration;
- (long long)_expectedWorkload;
- (id)_initWithExistingTask:(id)arg1 disavow:(CDUnknownBlockType)arg2;
- (id)_legacySocketStreamProperties;
- (int)_networkServiceType;
- (void)_onSessionQueue_cleanupAndBreakCycles;
- (void)_onSessionQueue_disavow;
- (void)_onqueue_resume;
- (void)_task_onqueue_didFinish;
- (void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (double)_timeWindowDelay;
- (double)_timeWindowDuration;
- (void)cancel;
- (void)captureStreams;
- (void)closeRead;
- (void)closeWrite;
- (long long)computeAdjustedPoolPriority;
- (void)copyStreamProperty:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithHost:(id)arg1 port:(long long)arg2 taskGroup:(id)arg3 disavow:(CDUnknownBlockType)arg4;
- (id)initWithNetService:(id)arg1 taskGroup:(id)arg2 disavow:(CDUnknownBlockType)arg3;
- (float)priority;
- (void)readDataOfMinLength:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 timeout:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)resume;
- (void)setPriority:(float)arg1;
- (void)set_allowsCellularOverride:(int)arg1;
- (void)set_allowsConstrainedOverride:(int)arg1;
- (void)set_allowsExpensiveOverride:(int)arg1;
- (void)set_boundInterfaceIdentifier:(id)arg1;
- (void)set_disallowCellular:(BOOL)arg1;
- (void)set_expectedWorkload:(long long)arg1;
- (void)set_legacySocketStreamProperties:(id)arg1;
- (void)set_networkServiceType:(int)arg1;
- (void)set_timeWindowDelay:(double)arg1;
- (void)set_timeWindowDuration:(double)arg1;
- (void)startSecureConnection;
- (void)stopSecureConnection;
- (void)suspend;
- (id)workQueue;
- (void)writeData:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

