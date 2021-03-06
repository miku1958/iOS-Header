//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEODataSessionTaskDelegate-Protocol.h>

@class GEOApplicationAuditToken, GEOClientMetrics, GEODataRequestThrottlerToken, GEOProtobufSession, NSError, NSString, PBCodable;
@protocol GEODataSessionTask, GEOProtobufSessionTaskDelegate, OS_dispatch_queue;

@interface GEOProtobufSessionTask : NSObject <GEODataSessionTaskDelegate>
{
    Class _responseClass;
    id<GEODataSessionTask> _dataTask;
    GEOProtobufSession *_session;
    id<GEOProtobufSessionTaskDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSError *_error;
    PBCodable *_response;
    unsigned int _requestTypeCode;
    CDStruct_d1a7ebee _requestKind;
    GEOApplicationAuditToken *_auditToken;
    BOOL _completedAsCancelled;
    GEODataRequestThrottlerToken *_throttleToken;
}

@property (readonly, nonatomic) GEOClientMetrics *clientMetrics;
@property (readonly, nonatomic) BOOL completedAsCancelled;
@property (nonatomic) BOOL completedAsCancelled; // @synthesize completedAsCancelled=_completedAsCancelled;
@property (strong, nonatomic) id<GEODataSessionTask> dataTask; // @synthesize dataTask=_dataTask;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<GEOProtobufSessionTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long incomingPayloadSize;
@property (readonly, nonatomic) BOOL mptcpNegotiated;
@property (readonly, nonatomic) unsigned long long outgoingPayloadSize;
@property (readonly, nonatomic) BOOL receivedRNFNotification;
@property (readonly, nonatomic) NSString *remoteAddressAndPort;
@property (readonly, nonatomic) CDStruct_d1a7ebee requestKind;
@property (readonly, nonatomic) unsigned int requestTypeCode; // @synthesize requestTypeCode=_requestTypeCode;
@property (readonly, nonatomic) unsigned long long requestedMultipathServiceType;
@property (readonly, nonatomic) PBCodable *response;
@property (strong, nonatomic) PBCodable *response; // @synthesize response=_response;
@property (readonly, nonatomic) Class responseClass; // @synthesize responseClass=_responseClass;
@property (weak, nonatomic) GEOProtobufSession *session; // @synthesize session=_session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_decodeResponseFromTask:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancel;
- (void)completeWithCancelled:(BOOL)arg1 error:(id)arg2 response:(id)arg3;
- (void)completeWithErrorCode:(long long)arg1;
- (void)dataSession:(id)arg1 didCompleteSubtask:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dataSession:(id)arg1 didCompleteTask:(id)arg2;
- (void)dataSession:(id)arg1 willSendRequest:(id)arg2 forTask:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)init;
- (id)initWithSession:(id)arg1 requestTypeCode:(unsigned int)arg2 responseClass:(Class)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 requestKind:(CDStruct_d1a7ebee)arg6 auditToken:(id)arg7 throttleToken:(id)arg8;
- (id)parseInnerProtobufFromData:(id)arg1;
- (BOOL)parsePreambleWithReader:(id)arg1;
- (BOOL)parseProtocolVersionWithReader:(id)arg1;
- (id)parseResponseFromResponseData:(id)arg1;
- (BOOL)parseResponseTypeWithReader:(id)arg1;
- (void)start;
- (void)updateDataRequest:(id)arg1 withNewProtobufRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

