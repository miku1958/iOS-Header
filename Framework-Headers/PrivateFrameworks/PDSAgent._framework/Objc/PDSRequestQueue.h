//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FTMessageDelivery, NSDate, PDSRequest, PDSUserTracker;
@protocol OS_dispatch_queue, PDSRequestQueueDelegate;

@interface PDSRequestQueue : NSObject
{
    id<PDSRequestQueueDelegate> _delegate;
    PDSRequest *_inflightRequest;
    PDSRequest *_queuedRequest;
    NSObject<OS_dispatch_queue> *_queue;
    FTMessageDelivery *_messageDelivery;
    PDSUserTracker *_userTracker;
    CDUnknownBlockType _pushTokenBlock;
    CDUnknownBlockType _entryStoreBlock;
    long long _authRetries;
    NSDate *_lastReauthAttempt;
}

@property (nonatomic) long long authRetries; // @synthesize authRetries=_authRetries;
@property (weak, nonatomic) id<PDSRequestQueueDelegate> delegate; // @synthesize delegate=_delegate;
@property (copy, nonatomic) CDUnknownBlockType entryStoreBlock; // @synthesize entryStoreBlock=_entryStoreBlock;
@property (strong, nonatomic) PDSRequest *inflightRequest; // @synthesize inflightRequest=_inflightRequest;
@property (strong, nonatomic) NSDate *lastReauthAttempt; // @synthesize lastReauthAttempt=_lastReauthAttempt;
@property (strong, nonatomic) FTMessageDelivery *messageDelivery; // @synthesize messageDelivery=_messageDelivery;
@property (copy, nonatomic) CDUnknownBlockType pushTokenBlock; // @synthesize pushTokenBlock=_pushTokenBlock;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) PDSRequest *queuedRequest; // @synthesize queuedRequest=_queuedRequest;
@property (strong, nonatomic) PDSUserTracker *userTracker; // @synthesize userTracker=_userTracker;

- (void).cxx_destruct;
- (void)_dequeueIfNeeded;
- (id)_deviceInfo;
- (void)_flightRequest:(id)arg1;
- (id)_hwVersion;
- (BOOL)_isAuthIssue:(long long)arg1;
- (void)_logEntries:(id)arg1;
- (void)_logProtoUserPushToken:(id)arg1;
- (id)_machineID;
- (id)_osVersion;
- (void)_reAuthAndContinueWithRequest:(id)arg1 forUser:(id)arg2;
- (void)_removeDeadEntriesForUser:(id)arg1 withError:(id *)arg2;
- (BOOL)enqueueRequest:(id)arg1;
- (id)initWithMessageDelivery:(id)arg1 userTracker:(id)arg2 queue:(id)arg3 pushTokenBlock:(CDUnknownBlockType)arg4 entryStoreBlock:(CDUnknownBlockType)arg5;

@end

