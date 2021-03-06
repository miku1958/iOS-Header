//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEODataSessionTask-Protocol.h>
#import <GeoServices/GEODataSessionUpdatableTask-Protocol.h>

@class GEOClientMetrics, GEODataRequest, NSData, NSDate, NSError, NSHTTPURLResponse, NSMutableData, NSString, NSURL, NSURLRequest, NSURLSessionTask, NSURLSessionTaskMetrics;
@protocol GEODataSessionTaskDelegate, GEORequestCounterTicket, NSObject, OS_dispatch_queue, OS_os_activity, OS_voucher;

@interface GEODataURLSessionTask : NSObject <GEODataSessionTask, GEODataSessionUpdatableTask>
{
    id<GEODataSessionTaskDelegate> _delegate;
    GEODataRequest *_request;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_sessionIsolation;
    NSURLSessionTask *_backingTask;
    NSError *_nonBackingTaskError;
    NSData *_cachedData;
    NSMutableData *_receivedData;
    NSURLSessionTaskMetrics *_urlTaskMetrics;
    double _startTime;
    double _endTime;
    CDStruct_d1a7ebee _requestKind;
    BOOL _mptcpNegotiated;
    BOOL _receivedRNFNotification;
    float _priority;
    unsigned int _sessionIdentifier;
    BOOL _backingTaskNeedsResume;
    BOOL _finished;
    unsigned int _qos;
    NSObject<OS_os_activity> *_activity;
    id<NSObject> _parsedResponse;
    NSDate *_originalStartDate;
    NSObject<OS_voucher> *_voucher;
}

@property (readonly, nonatomic) long long HTTPStatusCode;
@property (readonly, nonatomic) NSObject<OS_os_activity> *activity; // @synthesize activity=_activity;
@property (readonly, nonatomic) NSURLSessionTask *backingTask; // @synthesize backingTask=_backingTask;
@property (copy, nonatomic) NSData *cachedData; // @synthesize cachedData=_cachedData;
@property (readonly, nonatomic) GEOClientMetrics *clientMetrics;
@property (readonly, nonatomic) unsigned long long contentLength;
@property (readonly, nonatomic) NSString *contentLengthString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<GEODataSessionTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSURL *downloadedFileURL;
@property (readonly, nonatomic) double elapsedTime;
@property (readonly, nonatomic) NSString *entityTag;
@property (strong, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL failedDueToCancel;
@property (readonly, nonatomic) BOOL failedDueToCancel;
@property (readonly, nonatomic) BOOL finished; // @synthesize finished=_finished;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long incomingPayloadSize;
@property (readonly, nonatomic) double loadTime;
@property (readonly, nonatomic) BOOL mptcpNegotiated; // @synthesize mptcpNegotiated=_mptcpNegotiated;
@property (readonly, nonatomic) NSURL *originalRequestURL;
@property (readonly, nonatomic) NSURLRequest *originalURLRequest;
@property (readonly, nonatomic) unsigned long long outgoingPayloadSize;
@property (readonly, nonatomic) id<NSObject> parsedResponse;
@property float priority;
@property (readonly, nonatomic) BOOL protocolBufferHasPreamble;
@property (readonly, nonatomic) NSData *receivedData;
@property (nonatomic) BOOL receivedRNFNotification; // @synthesize receivedRNFNotification=_receivedRNFNotification;
@property (readonly, nonatomic) NSString *remoteAddressAndPort;
@property (readonly, nonatomic) GEODataRequest *request; // @synthesize request=_request;
@property (readonly, nonatomic) id<GEORequestCounterTicket> requestCounterTicket;
@property (readonly, nonatomic) CDStruct_d1a7ebee requestKind; // @synthesize requestKind=_requestKind;
@property (readonly, nonatomic) unsigned long long requestedMultipathServiceType;
@property (readonly, nonatomic) NSHTTPURLResponse *response;
@property (nonatomic) unsigned int sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property (readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURLSessionTaskMetrics *urlTaskMetrics; // @synthesize urlTaskMetrics=_urlTaskMetrics;

- (void).cxx_destruct;
- (id)_createBackingTaskWithRequest:(id)arg1 session:(id)arg2;
- (void)_prepareForRestart;
- (void)_start;
- (void)cancel;
- (id)createURLRequest;
- (id)createURLSessionTaskWithSession:(id)arg1 request:(id)arg2;
- (void)dataSession:(id)arg1 taskDidCompleteWithError:(id)arg2;
- (void)dataSession:(id)arg1 willSendRequestForEstablishedConnection:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)delegateAsync:(CDUnknownBlockType)arg1;
- (void)didCollectMetrics:(id)arg1;
- (void)didReceiveData:(id)arg1;
- (void)didReceiveResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)didValidateEntityTagForData:(id *)arg1 entityTag:(id *)arg2;
- (id)init;
- (id)initWithSession:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 requestKind:(CDStruct_d1a7ebee)arg4 priority:(float)arg5;
- (double)loadTimeIncludingTask:(id)arg1;
- (void)notifyDelegateWithSession:(id)arg1;
- (void)setParsedResponse:(id)arg1;
- (void)start;
- (void)updateRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)validateContentLengthWithError:(id *)arg1;
- (BOOL)validateNonEmptyResponseWithError:(id *)arg1;
- (BOOL)validateTileResponse:(BOOL)arg1 error:(id *)arg2;

@end

