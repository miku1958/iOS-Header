//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCloudKitMirroringRequest, NSDate, NSMutableArray, NSUUID, RTPersistenceMirroringPolicy, RTPowerAssertion;
@protocol OS_dispatch_queue, OS_os_transaction, RTPersistenceMirroringRequestDelegate;

@interface RTPersistenceMirroringRequest : NSObject
{
    unsigned long long _sid;
    NSObject<OS_dispatch_queue> *_queue;
    NSCloudKitMirroringRequest *_request;
    id<RTPersistenceMirroringRequestDelegate> _delegate;
    NSMutableArray *_completionHandlers;
    NSUUID *_identifier;
    NSDate *_startDate;
    NSDate *_enqueueDate;
    double _duration;
    unsigned long long _attemptCount;
    unsigned long long _maxRetryCount;
    RTPersistenceMirroringPolicy *_mirroringPolicy;
    NSObject<OS_os_transaction> *_mirroringTransaction;
    RTPowerAssertion *_mirroringAssertion;
    long long _requestType;
}

@property (nonatomic) unsigned long long attemptCount; // @synthesize attemptCount=_attemptCount;
@property (readonly, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property (weak, nonatomic) id<RTPersistenceMirroringRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (strong, nonatomic) NSDate *enqueueDate; // @synthesize enqueueDate=_enqueueDate;
@property (readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) unsigned long long maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
@property (strong, nonatomic) RTPowerAssertion *mirroringAssertion; // @synthesize mirroringAssertion=_mirroringAssertion;
@property (strong, nonatomic) RTPersistenceMirroringPolicy *mirroringPolicy; // @synthesize mirroringPolicy=_mirroringPolicy;
@property (strong, nonatomic) NSObject<OS_os_transaction> *mirroringTransaction; // @synthesize mirroringTransaction=_mirroringTransaction;
@property (readonly, nonatomic, getter=isReady) BOOL ready;
@property (readonly, nonatomic) NSCloudKitMirroringRequest *request; // @synthesize request=_request;
@property (nonatomic) long long requestType; // @synthesize requestType=_requestType;
@property (strong, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;

- (void).cxx_destruct;
- (void)_completeRequestWithError:(id)arg1;
- (void)_createMirroringRequestWithRequestType:(long long)arg1 affectedStores:(id)arg2 options:(id)arg3;
- (void)_dispatchAllHandlersWithError:(id)arg1;
- (void)_handleMirroringRequestResult:(id)arg1;
- (void)_prepareMirroringRequestForRetry:(id)arg1;
- (void)completeRequestWithError:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)executeMirroringRequestWithContext:(id)arg1;
- (void)handleMirroringRequestResult:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithQueue:(id)arg1 requestType:(long long)arg2 mirroringPolicy:(id)arg3 affectedStores:(id)arg4 options:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToMirroringRequest:(id)arg1;
- (void)mergeRequest:(id)arg1;
- (id)requestTypeToString:(long long)arg1;

@end

